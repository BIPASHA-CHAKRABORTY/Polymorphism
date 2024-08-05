#include<iostream>
using namespace std;

class Distance
{
    private:
       int feet;
       int inches;
    public:
      
      Distance()
      {
          feet = 0;
          inches = 0;
      }
      
      Distance(int f, int i)
      {
          feet = f;
          inches = i;
      }
      
      Distance operator -()
      {
          return Distance(-feet, -inches);
      }
      
      void display()
      {
          cout << "Feet: " << feet << endl;
          cout << "Inches: " << inches << endl;
      }
};

int main()
{
    Distance D1(11, 5), D2(-9, 7);
    D1 = -D1;
    D1.display();
    D2 = -D2;
    D2.display();
    
    return 0;
}
