#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
    int l,b,h;
    public:
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    Box(const Box &B)
    {
      l=B.l;
      b=B.b;
      h=B.h;  
    }
    int getLength()
    {
        return l;
    }
    int getBreadth ()
    {
        return b;
    }
    int getHeight ()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long volume;
        volume=l*b*h;
        return volume;
    }
    bool operator<(Box& b)
    {
        if(this->l <= b.l || (this->b <= b.b && this->l == b.l) || (this->h <= b.h && this->l == b.l && this->b == b.b))
        {
            return true;
        }
        return false;
    }
    friend ostream& operator<<(ostream& out, const Box& B);
    ~Box(){}
};

ostream& operator<<(ostream& out, const Box& B)
{
    out<< B.l<<" "<< B.b<< " " << B.h;
    return out;
}            

/*

class Box {
 private:
  int length, breadth, height;
 public:
  Box() {
    length = 0;
    breadth = 0;
    height = 0;
  }
  Box(int l, int b, int h) {
    length = l;
    breadth = b;
    height = h;
  }
  Box(const Box &B) {
    length = B.length;
    breadth = B.breadth;
    height = B.height;
  }
  int getLength() {
    return length;
  }
  int getBreadth() {
    return breadth;
  }
  int getHeight() {
    return height;
  }
  long long CalculateVolume() {
    return (long long)(breadth) * length * height;
  }
  bool operator<(Box &B) {
    if (length < B.length) {
      return true;
    } else if (length == B.length) {
      if (breadth < B.breadth) {
        return true;
      } else if (breadth == B.breadth) {
        if (height < B.height) {
          return true;
        }
      }
    }

    return false;
  }
};
ostream &operator<<(ostream &out, Box &B) {
  out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
  return out;
};

*/

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}