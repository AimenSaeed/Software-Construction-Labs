#include <iostream>
using namespace std;

//definition
int reset(int *ip){
return *ip=0;
}
//directly changing the parameter
int res(int &i){     //i is the another name for the object/argument passed to res
    return i=0;
}

int main(){
    const int i=10;
    int ci=i;
    int * const p=&ci;
    *p=0;     //changes through p is made to ci

    int m=42;
    cout<<res(m)<<endl;
    int k=43;
    int j=reset(&k);
   cout<<j<<'\n';
    return 0;
}