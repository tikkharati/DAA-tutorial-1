#include <iostream>
using namespace std;

void insertion(int arr[],int n)
{
     int i,j,key;
     int shifts=0,comparisions=0;
     for(i=1;i<n;i++)
     {
         key=arr[i];
         j=i-1;
         comparisions++;

         while(j>=0 && arr[j]>key)
         {
             shifts++;
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=key;
     }
       cout<<"number of shifts"<<shifts<<endl;
  cout<<"number of comparison"<<comparisions<<endl;
}
int main()
{
    int n,testcase;
    cout<<"enter the number of testcases"<<endl;
    cin>>testcase;
    while(testcase>0)
    {
        cout<<"enter the number of elements in array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter the elements";
        for(int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }

        insertion(arr,n);
        cout<< "the sorted array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
        testcase--;
    }
}