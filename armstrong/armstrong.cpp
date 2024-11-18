#include <iostream>
using namespace std;
int main(){

int i,sum=0 ,orig;
  cout<<"enter number to find armstrong number"<<endl;
   cin>>i;
   orig=i;
   for (; i>0; i=i/10)
   {
    sum=sum+(i%10)*(i%10)*(i%10);
   }
   if (sum==orig)
   {
    cout<<"armstrong";
   }
   else
   {
    cout<<"not armstrong";
   }
   


}