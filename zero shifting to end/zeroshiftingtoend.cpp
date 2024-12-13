#include <iostream>
using namespace std;
int main(){

int arr[]={10,0,30,0,50};
int j=0;

for (int i = 0; i < 5; i++)
{
   if (arr[i]!=0)
   {
    arr[j]=arr[i];
    j++;
   }
   }
for (int i = j; i <5; i++)
{
    arr[j]=0;
    j++;
}
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<" ";
}

}