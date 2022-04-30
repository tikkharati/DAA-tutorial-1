#include <iostream>
using namespace std;
int main()
{
    int n ,i,key,count=0,c;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    
     for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key element "<<endl;
    cin>>key;

      for (i=0;i<n;i++)
         {
             if(arr[i]==key)
            {
             c= count+1;
             }
         }
        
        if (c>0)
            cout<<"present"<<c;
      cout<<"the elements of array:";
    
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
}      