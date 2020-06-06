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

void Stack::Push()
{
    City *Temp;
    
    Temp = new City;
    
    if(Temp == NULL)
    {
        cout<<"\n Node Not Able To Create !!! \n";
        return;
    }
    
    cout<<"\n Enter City Details :- ";
    
    cout<<"\n Enter the City Pin Code : ";
    cin>>Temp -> Pin;
    
    cout<<"\n Enter the City Name : ";
    cin>>Temp -> Name;
    
    Temp -> Next = NULL;
    
    if(Top == NULL)
    {
		Top = Temp;
    }	
	else
	{
		Temp -> Next = Top;
		
		Top = Temp;
	}
}

void Stack::Pop()
{
    City *Temp;
    
    if(Top == NULL)
    {
        cout<<"\n Underflow !!! ";
        return;
    }
    
    cout<<"\n City Pin Code : "<<Top -> Pin;
    cout<<"\n City Name : "<<Top -> Name;
    
    cout<<"\n City Details Deleted !!! \n";
        
    Temp = Top;
        
    Top = Top -> Next;
        
    delete Temp;
}

void Stack::Display()
{
    City *Temp;
    
    Temp = Top;
    
    if(Top == NULL)
    {
        cout<<"\n Stack Is Empty !!! \n";
        return;
    }
    
    cout<<endl;
    
    while(Temp != NULL)
    {
        cout<<" [ "<<Temp -> Pin<<" , "<<Temp -> Name<<" ] ->";
        Temp = Temp -> Next;
    }
    
    cout<<" !!! \n";
}