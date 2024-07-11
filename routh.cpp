#include <iostream>
#include <vector>

using namespace std;

string determineStability(const vector<double>& coefficients) {
    int n = coefficients.size();

    // Check if the number of coefficients is odd
    if (n % 2 == 0) {
        return "The number of coefficients should be odd.";
    }

    // Construct the Routh array
    vector<vector<double> > routhArray(n, vector<double>((n + 1) / 2));
    for (int i = 0; i < n; i++) {
        routhArray[i][0] = coefficients[i];
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < (n + 1) / 2; j++) {
            double term1 = routhArray[i - 1][0] * routhArray[i - 2][j - 1];
            double term2 = routhArray[i - 2][0] * routhArray[i - 1][j - 1];
            // Handling division by zero or zero denominators
            if (routhArray[i - 1][0] == 0) {
                term1 = 0;
            }
            if (routhArray[i][0] == 0) {
                routhArray[i][0] = 1e-10; // A small value to avoid zero denominator
            }
            routhArray[i][j] = (term1 - term2) / routhArray[i - 1][0];
        }
    }

    // Determine stability based on the Routh array
    int numSignChanges = 0;
    bool zeroInFirstColumn = false; // Flag to track if zero appears in the first column
    for (int i = 0; i < n - 1; i++) {
        if (routhArray[i][0] * routhArray[i + 1][0] < 0) {
            numSignChanges++;
        }
        if (routhArray[i][0] == 0) {
            zeroInFirstColumn = true;
        }
    }

    // If a zero appears in the first column, consider it marginally stable
    if (zeroInFirstColumn) {
        return "Marginally stable";
    }

    if (numSignChanges == 0) {
        return "Stable";
    } else if (numSignChanges == 1) {
        return "Marginally stable";
    } else {
        return "Unstable";
    }
}

int main() {
    // Coefficients of the characteristic equation
    double coefficients_arr[] = {1, 2, 2, 4, 11,10}; // Odd number of coefficients
    vector<double> coefficients(coefficients_arr, coefficients_arr + sizeof(coefficients_arr) / sizeof(coefficients_arr[0]));

    // Determine stability
    string stability = determineStability(coefficients);

    // Display stability
    cout << "System stability: " << stability << endl;

    return 0;
}

