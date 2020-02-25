#include <iostream>

using namespace std;

// Function prototype (declaration)
int add(int, int);

int main()
{
    int num1, num2, sum1;
    cout<<"Enters two numbers to add: ";
    cin >> num1 >> num2;
    // Function call
    sum1 = add(num1, num2);
    cout << "Sum = " << sum1;
    return 0;
}

// Function definition
int add(int a, int b)
{
    int addAB;
    add = a + b;
    // Return statement
    return addAB;
}
