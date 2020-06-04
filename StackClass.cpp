#include<iostream>
using namespace std;

struct City
{
    long Pin;
    char Name[100];
    
    City *Next ;
};

class Stack
{
    City *Top;
    
    public:
    
    Stack() 
    { 
        Top = NULL; 
    }
    
    void Push();
    void Pop();
    void Display();
};