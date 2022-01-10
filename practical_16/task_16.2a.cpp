#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw runtime_error("Divide By 0\n");
        }
        else
        {
            cout << "Result is: " << a / b << endl;
        }
    }
    catch (runtime_error &e)
    {
        cout << e.what() << "\n";
    }
    return 0;
}


