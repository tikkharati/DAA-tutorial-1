#include <iostream>
using namespace std;

int bubble( int arr[],int n)
{
  int i,j,temp;
  int comparison=0,swap=0;
  for(i=0;i<n;i++) //number of passess
  {
      for(j=0;j<(n-i-1);j++)  //in every iteration
      {
          comparison++;
          if(arr[j]>arr[j+1])
          {
              swap++;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
      }
  }
  cout<<"number of swaps"<<swap<<endl;
  cout<<"number of comparison"<<comparison<<endl;
}

 int main()
  {
     int n;
     int testcase;
     cout<<"number of the testacase"<<endl;
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

     bubble(arr,n);
     cout<<"array after sorting"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<< arr[i]<<endl;;
     }
     
      
      testcase --;
     }
 }
