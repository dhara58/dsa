#include<iostream>
using namespace std;
int temp=0;

void search(int array[],int n,int element)
{
   for(int i=0;i<n;i++)
   {
    array[i]=(rand()%50+1);
   }
     for(int i=0;i<n;i++)
   {
    cout<<array[i]<<"\t";
   }  
    cout<<"\nenter the element :";
    cin>>element;

for(int i=0;i<n;i++)
 {
   if(array[i]==element)
   {
      temp=1;
      cout<<"the element position is "<<i;
      break;
   }
 }
 if(temp==0)
 {
   cout<<"element not found ...";
 }
}
int main()
{
   int n; 
   int temp;
   int element;

   cout<<"enter the array size";
   cin>>n;
   int array[n];

   search(array,n,element);
   return 0;
}
