#include<iostream>
using namespace std;
void swap(int *a,int* b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int  partion(int a[],int beg,int end)
{
   int pivot=a[end];  //setting last element for pivot element
   int  i=beg-1;
   for(int j=beg;j<end;j++)
   {
       if(a[j]<=pivot)
       {
         i++;
         swap(&a[i],&a[j]);
       }
   }

   swap(&a[i+1],&a[end]);
   return i+1;
}
void quicksort(int a[],int beg,int end)
{
    if(beg<end)
    {
     int j=partion(a,beg,end);
     quicksort(a,beg,j);
     quicksort(a,j+1,end);
    }
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

     quicksort(a,0,n);
     cout<<"array after sorting"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i];
     }
 }

