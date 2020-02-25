// Factorial of n = 1*2*3*...*n

#include <iostream>

using namespace std;

int factorial(int);

int main() 
{
    int n1;
    cout<<"Enter a number to find factorial: ";
    cin >> n1;
    cout << "Factorial of " << n1 <<" = " << factorial(n1);
    return 0;
}

int factorial(int n) 
{
    if (n > 1) 
    {
        return n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}
