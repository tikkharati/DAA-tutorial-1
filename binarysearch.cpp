#include <iostream>
using namespace std;

void binarysearch(int arr[],int l,int h,int key)
{
    int count =0,f=0;
    int mid =(l+h)/2;
    if(arr[mid]==key)
         {count++;
         f++;
          cout<<"element found"<<endl;
         }
    else if(arr[mid]>key)
            binarysearch(arr,l,mid-1,key);
    else
            binarysearch(arr,mid+1,h,key);

    if (f!=0)
    {
        cout<<count<<endl;
    }
   
}
int main()
{
    int n;
    cout<<"enter the number of elements in a sorted arrray "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int key;
    cout<<"enter the key element you want to search"<<endl;
    cin>>key;
     binarysearch(arr,0,n,key);

}