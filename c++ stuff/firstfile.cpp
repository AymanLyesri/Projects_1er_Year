#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>

using namespace std;

int main()
{
start:

    float x; //sales amount variable

    while (1)
    {
        cout << "Enter sales (-1 to end): $";
        cin >> x;
        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Invalid Value Entered\n"
                 << endl;
            cout << "__________________________________________________\n"
                 << endl;
            goto start;
        }
        else
        {
            if (x == -1) //Sales CAN normally BE NEGATIVE but not -1
            {
                return -1;
            }
            cout << fixed << showpoint << setprecision(2);     // added : show exactly the amount displayed.. exemple:"304.48"
            cout << "Salary: $" << ((x * 0.09) + 200) << endl; // modify "0.09" = thats the persentage // and 200 = amout per week
            cout << "__________________________________________________\n"
                 << endl;
        }
    }
}
