#include <iostream>
using namespace std;
int main(){

int i, orignal,rev=0;
cout<<"enter number to check palindrome"<<endl;
cin>>i;
orignal=i;
   
   for (; i>0; )
   {
    rev= (rev*10) + (i%10);
    i=i/10;
   }
    if (rev == orignal)
    {
       cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    
    
 
 
}
