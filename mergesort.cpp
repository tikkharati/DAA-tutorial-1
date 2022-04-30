#include<iostream>
using namespace std;

void dublicate(int arr[],int n)
{
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            f++;
        }
    }
    if(f!=0)
    {
        cout<<"dublicate element found"<<endl;
    }
}
void merge(int a[],int beg,int mid,int end)
{
    int n1=mid-beg+1;
    int n2=end-mid;
    int l[n1],m[n2];//creating the copy of array
    for(int i=0;i<n1;i++)
    {
        l[i]=a[beg+i];
        
    }
    for(int j=0;j<n2;j++)
    {
        m[j]=a[mid+1+j];
    }
    int i=0,j=0,k=beg;

    while(i<n1 && j<n2)
      {
        if (l[i]<=m[j])
           a[k++]=l[i++];
        else  
          a[k++]=m[j++];        
       }

       while(i<n1)
       {
           a[k++]=l[i++];
       }
       while(j<n2)
       {
           a[k++]=m[j++];
       }

       dublicate(a,end);
}


void mergesort(int a[],int beg,int end)
{
    if(beg<end)
    {
     int  mid=(beg+end)/2;
     mergesort(a,beg,mid);
     mergesort(a,mid+1,end);
     merge(a,beg,mid,end);
      
     }
      dublicate(a,end);
}
    

int main()
  {
     int n;
     cout<<"enter the number of elements "<<endl;
     cin>>n;
     int a[n];
     cout<<"enter the elements in the array"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

     mergesort(a,0,n);
     cout<<"array after sorting"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }
 }

