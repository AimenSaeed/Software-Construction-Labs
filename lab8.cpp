#include <iostream>
using namespace std;

struct Student{
        string name;
        int rollno;
        float gpa;
    };

int main (){
    Student std1;
    Student std2;
    cout<<"Enter 1st Student's name, rollno and gpa: "<<endl;
    cin>>std1.name>>std1.rollno>>std1.gpa;
    cout<<"Enter 2nd Student's name, rollno and gpa: "<<endl;
    cin>>std2.name>>std2.rollno>>std2.gpa;
    if (std1.gpa>std2.gpa)
      cout<<std1.name<< "has greater gpa than"<<" "<<std2.name;
    else if (std2.gpa>std1.gpa)
            cout<<std2.name<< "has greater gpa than"<<" "<<std1.name;
    else
      cout<<"Both students have same gpa!";
    return 0;
}