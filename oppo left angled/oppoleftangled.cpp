#include <iostream>
using namespace std;
int main(){
 
 for (int r=1;r<=5;++r)
 {
    for (int i = 1; i <=5; i++)
    {
        if(i>=r)
     cout<<"*";
     else{
        cout<<" ";
     }
    }
      cout<<endl;
 }
 

}