#include <iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter the number to get factorial"<<endl;
 cin>>n;
 int fac=1;
 for ( int i = 1; i <=n; i++)
 {
    fac=fac*i;
   
 }

  cout<<"factorial is:"<<fac;
}
 