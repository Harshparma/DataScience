#include<iostream>
using namespace std;
 
class Circle
{
    public:
        double radius;
        
        double area()
        {
            return 3.14*radius*radius;
        }
     
}; 

int main()
{
    Circle obj;
     
    obj.radius = 10;
     
    cout << "Radius is: " << obj.radius << endl;
    cout << "Area is: " << obj.area();
    return 0;
}