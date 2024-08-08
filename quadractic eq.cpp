#include <iostream>
#include <cmath>

using namespace std;

class Quadratic 
{
    private:
        int a, b, c,d;

    public:
    	
    	Quadratic() : a(0), b(0), c(0),d(0) {}
        void input() 
		{
            cout << "Enter value of a: ";
            cin >> a;
            cout << "Enter value of b: ";
            cin >> b;
            cout << "Enter value of c: ";
            cin >> c;
        }
    

        void discriminant() 
		{
            d = b * b - 4 * a * c;
            if (d == 0)
                cout << "The quadratic equation doesn't have distinct roots." << endl;
            else if (d > 0)
                cout << "The quadratic equation has real roots." << endl;
            else if(d<0)
                cout << "The quadratic equation has imaginary roots." << endl;
            else
                cout<<"Something went wrong ! TRY AGAIN...";
        }

        void display() 
		{
            cout << "Values of a, b, and c are: " << a << ", " << b << ", " << c << endl;
            cout << "Discriminant value is: " <<d<< endl;
        }
};

int main() 
{
    Quadratic Q;
    Q.input();
    Q.discriminant();
    Q.display();

    return 0;
}
