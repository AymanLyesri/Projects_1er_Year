#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = 0, result = 0;

    while (x != -1)
    {
        cout << "Enter your total sales in dollars : ";
        cin >> x;
        if (x == -1)
        {
            return -1;
        }

        // modify "0.09" = thats the persentage // and 200 = amout per week

        result = (x * 0.09) + 200;
        cout << fixed << showpoint << setprecision(2);
        cout << "Salary is : $" << result << endl;
        cout << "__________________________________________________\n"
             << endl;
    }
}