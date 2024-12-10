#include <iostream>
using namespace std;
int main(){
 
 for (int r=1;r<=5;++r)
 {
    for (int i = 1; i <=9; i++)
    {
        if (i>=6-r && i<=4+r)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
        
        
    }
    cout<<endl;
    
 }
 

}