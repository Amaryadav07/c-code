#include <iostream>
using namespace std;
int main(){

int arr[]={10,20,30,40,50};
int k;
cout<<"enter your number";
cin>>k;
for (int i = 0; i < k; i++)
{
   for (int j = i+1; j<5; j++)
  
   {
    if (arr[i] < arr[j])
    {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;

    }
    }
   }
   cout<<"kth largest element will be"<<arr[k-1]<<" ";
}