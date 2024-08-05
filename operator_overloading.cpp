#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int L,B;
    public:
       Rectangle()
       {
           L=0;
           B=0;
       }
       void operator ++()
       {
           L+=2;
           B+=2;
       }
       void display()
       {
        cout<<"Length:"<<L;
        cout<<"Breadth:"<<B;
       }
    };
    int main()
    {
        Rectangle R;
        cout<<"\n Length breadth before increment :\n";
        R.display();
        ++R;
        cout<<"\n Length breadth after increment:\n";
        R.display();
        
        return 0;
    }
