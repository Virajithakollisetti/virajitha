#include<iostream>
using namespace std;
int main()
{
  int arr[100],dep[100],i,j,n=0,x,l,t[100],temp;
  cin>>x;
  for(i=0;i<x;i++)
   {
     cin>>arr[i];
     cout<<arr[i]<<" ";
   }
   cout<<"\n";
   for(i=0;i<x;i++)
   {
     cin>>dep[i];
     cout<<dep[i]<<" ";
   }
   cout<<"\n";
   t[0]=dep[0];
   for(i=1;i<x;i++)
   {
     if(n>0)
     {
      for(l=0;l<n+1;l++)
      {
       for(j=l+1;j<n+1;j++)
       {
         if(t[l]>t[j])
         {
         temp=t[l];
         t[l]=t[j];
         t[j]=temp;
         }
       }
      }
      if(arr[i]>t[0])
      {
       t[0]=dep[i];
      }
      else
      {
      n=n+1;
      t[n]=dep[i];
      }
      
     }
     else
     {
      if(arr[i]>t[0])
      {
       t[0]=dep[i];
      }
      else
      {
      n=n+1;
      t[n]=dep[i];
      }
     }
   }
   cout<<n+1;
}