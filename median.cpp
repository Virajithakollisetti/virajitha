#include<iostream>
using namespace std;
int main()
{
  int a[100][100],i,j,r,c,k=0,p,b[100],l;
  cin>>r>>c;
  p=r*c;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
      b[k]=a[i][j];
      k=k+1;
    }
  }
  for(i=0;i<p;i++)
  {
   for(j=i+1;j<p;j++)
   {
    if(b[i]>b[j])
    {
      l=b[i];
      b[i]=b[j];
      b[j]=l;
    }

   }
  }
  cout<<b[(p-1)/2];
}