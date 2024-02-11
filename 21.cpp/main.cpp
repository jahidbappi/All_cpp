//OOP_Constructor | destructor
//23-50365-1


#include <iostream>
using namespace std;

class ShapeAreaCalc
{
private:
    int length;
    int width;
    int rad;
    
public:
    ShapeAreaCalc()
    {
          length = 0;
          width = 0;
          rad = 0;
    }

    ShapeAreaCalc(int l, int w, int r)
  {
      length = l;
      width = w;
      rad = r;
  }
    
    
    void getparameters()
    {
        int n;
        cout << "Enter 1 for rectangle, enter 2 for circle: ";
        cin>>n;
           if(n==1)
           {
             cout<<"Enter length: ";
             cin>>length;
             cout<<"Enter width: ";
             cin>>width;
           }
        else if(n==2)
        {
             cout<<"Enter radius: ";
             cin>>rad;
        }
        else
        {
            cout <<"Invalid input"<<endl;
        }
    }
        
    int RectArea()
      {
            return length*width;
      }
    
    float CircArea()
      {
            return 3.1416*rad*rad;
      }

    void DisplayRectArea()
      {
        cout<<"Area of the rectangle: "<<RectArea()<<endl;
      }
    
    void DisplayCircArea()
      {
        cout<<"Area of the circle: "<<CircArea()<<endl;
      }
    
    ~ShapeAreaCalc()
    {
        cout << "Object destroyed" << endl;
    }
    
};



int main()
{
    ShapeAreaCalc Obj1, Obj2;

      Obj1.getparameters();
      Obj1.DisplayRectArea();
      Obj1.DisplayCircArea();
    
      Obj2.getparameters();
      Obj2.DisplayRectArea();
      Obj2.DisplayCircArea();

      return 0;
}

