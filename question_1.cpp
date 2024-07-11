#include<conio.h>
    using namespace std;
    class sample
    {
        private:
        int var;
        public:
        void input()
        {
           cout<< var;
        }
        void output()
        {
           cout << "Variable entered is ";
           cout << var << "\n";
        }
    };
    int main()
    {
        sample object;
        object.input();
        object.output();
        object.var();
        Getch();
    }

Enter an integer 5
Variable entered is 5
b) runtime error
c) Compile Time Error
d) none of the mentioned
