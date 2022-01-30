#include <iostream>
using namespace std;
class student
{
private:
  int rollno;
  char name[50];
  float marks[3];
  int add = 0;

public:
  void setData()
  {
    cout << "Enter your Name, Rollno. , Marks " << endl;
    cin >> name >> rollno;
    for (int i = 1; i <= 3; i++)
    {
      cin >> marks[i];
    }
  }
  void getData()
  {
    cout << "Name: " << name << endl;
    cout << "Rollno: " << rollno << endl;
    for (int i = 1; i <= 3; i++)
    {
      cout << "subject " << i << " marks is: " << marks[i] << endl;
      add += marks[i];
    }
  }
  void avg()
  {
    float average;
    average = (float)add / 3;                                                             //this is type casting if value come in point then show it
    cout << "Average is : " << average;
  }
};
int main()
{
  student s1, s2, s3;
  s1.setData();
  s1.getData();
  s1.avg();

  cout << endl;
  s2.setData();
  s2.getData();
  s2.avg();
  cout << endl;

  s3.setData();
  s3.getData();
  s3.avg();

  return 0;
}
