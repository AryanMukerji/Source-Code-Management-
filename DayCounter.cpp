#include<iostream> 
using namespace std;

static int DaysInMonth[]; //

class Date
{
    int Day, Month, Year, Days; 

    DayCounter; //
    
    public:
    
    int LeapYear()
    { 
        //
    }
    
    void OldDate(); 
    void NextDay(); 
    void NewDate();
    void DisplayDate();
};

void Date::OldDate()
{ 
    cout<<"\n Enter A Date (Say, Day : 2 , Month : 10 , Year : 2019) :- ";
    cout<<"\n Day : "; cin>>Day;
    cout<<"\n Month : "; cin>>Month;
    cout<<"\n Year : "; cin>>Year;
    
    Month < 1 ? Month = 1 : 0; 
    Month > 12 ? Month = 12 : 0; 
    Day < 1 ? Day = 1 : 0; 
    Day > DaysInMonth[Month] ? Day = DaysInMonth[Month] : 0; 
    
    if (LeapYear())
    { 
       //
    } 
    else 
    { 
       //
    } 
    
    NewDate();
} 

void Date::NextDay()
{ 
    Day += 1;
    
    if (Day > DaysInMonth[Month]) 
    { 
        Day = 1; Month += 1; 
        
        if (Month > 12) 
        { 
            Month = 1; 
            Year += 1; 
            
            if (LeapYear()) 
            { 
                DaysInMonth[1] = 29; 
            } 
            else 
            { 
                DaysInMonth[1] = 28; 
            } 
        } 
    }
} 

void Date::NewDate()
{ 
    cout<<"\n Enter number of days : ";
    cin>>Days;
    
    for (int i=0;i<Days;i++) 
    {
        NextDay(); 
    }    
}

//

int main()
{    
	//
	//
    return 0;
}