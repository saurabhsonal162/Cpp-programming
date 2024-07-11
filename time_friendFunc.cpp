#include<iostream>
using namespace std;

class time {
    int hours;
    int min;
    int sec;

public:
    time() {
        hours = min = sec = 0;
    }

    time(int h, int m, int s) {
        hours = h;
        min = m;
        sec = s;
    }

    void display() {
        cout << hours << ":" << min << ":" << sec << endl;
    }

    friend time operator +(time &t1, time &t2);
};

time operator +(time &t1, time &t2) {
    time temp;
    temp.hours = t1.hours + t2.hours;
    temp.min = t1.min + t2.min;
    temp.sec = t1.sec + t2.sec;
    return temp;
}

int main() {
    time t1(3, 23, 20);
    t1.display();
    time t2(2, 20, 20);
    t2.display();
    time t3;
    t3 = t1 + t2; //call to overloaded function
    t3.display();
    return 0;
}

