#include <iostream>
#include <conio.h>
#include <ios>
#include <limits>
using namespace std;
int main()
{
    short int p;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    int q;
    while (1)
    {
    start:
        cout << "\nEnter product number(1-5) (-1 to end): ";
        cin >> p;
        if (p == -1)
        {
        }
        if (!cin)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Invalid Value Entered\n"
                 << endl;
            system("pause");
            system("cls");
            goto start;
        }
        switch (p)
        {
        case 1:
            cout << "Enter Quantity of Product " << p << " sold: ";
            cin >> q;
            p1 = p1 + (3.98 * q);
            break;

        case 2:
            cout << "Enter Quantity of Product " << p << " sold: ";
            cin >> q;
            p2 = p2 + (5.50 * q);
            break;

        case 3:
            cout << "Enter Quantity of Product " << p << " sold: ";
            cin >> q;
            p3 = p3 + (19.90 * q);
            break;

        case 4:
            cout << "Enter Quantity of Product " << p << " sold: ";
            cin >> q;
            p4 = p4 + (4.29 * q);
            break;

        case 5:
            cout << "Enter Quantity of Product " << p << " sold: ";
            cin >> q;
            p5 = p5 + (6.80 * q);
            break;

        case -1:
            cout << "\nProduct 1: $" << p1 << endl;
            cout << "Product 2: $" << p2 << endl;
            cout << "Product 3: $" << p3 << endl;
            cout << "Product 4: $" << p4 << endl;
            cout << "Product 5: $" << p5 << endl;
            cout << "____________________________________" << endl;
            cout << "Total: $" << (p1 + p2 + p3 + p4 + p5) << endl;

            p1 = 0;
            p2 = 0;
            p3 = 0;
            p4 = 0;
            p5 = 0;
            break;

        default:
            cout << "Error! Invalid Product Entered\n"
                 << endl;
            system("pause");
            system("cls");
            goto start;
        }
    }
}