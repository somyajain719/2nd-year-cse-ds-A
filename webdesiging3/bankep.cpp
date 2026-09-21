#include<iostream>
using namespace std;
class Student
{
    private:
string name;
int marks;
public :
Student* setName(string name)
{
    this->name=name;
    return this;
}
Student* setMarks(int marks)
{
    this->marks=marks;
    return this;
}
void display()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Marks :"<<marks<<endl;
}
};
int main()
{
    Student s;
    s.setName("Rahul")->setMarks(85)->display();
    return 0;
}