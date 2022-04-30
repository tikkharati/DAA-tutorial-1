#include <iostream>
using namespace std;
void swap(int *a,int* b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

 void select(int arr[],int n)
{
 int smallest;
 
 for(int i=0;i<n-1;i++)
 {
     smallest=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[smallest])
        {
         smallest=j;
          swap(&arr[smallest],&arr[i]);
 
        }

    }
 }
} 


int main()
  {
     int n;
     int testcase;
     cout<<"enter the number test cases"<<endl;
     cin>>testcase;
     while(testcase>0)
     {
     cout<<"enter the number of elements "<<endl;
     cin>>n;
     int arr[n];
     cout<<"enter the elements in the array"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     select(arr,n);
     cout<<"array after sorting"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<arr[i];
     }
     testcase--;
     }
 }
