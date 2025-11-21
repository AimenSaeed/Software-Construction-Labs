#include <iostream>
#include <fstream>
using namespace std;

int main (){
    //creating a file
   ofstream fout("data.txt");
   fout<<"Aimen 3.86\n";
   fout<<"Maryam 3.80\n";
   fout.close();
   
   //reading from the file
   ifstream fin("data.txt");
   string name;
   float gpa;
   while (fin>>name>>gpa){
    cout<<name<<" "<<gpa<<endl;
   }
   fin.close();
}