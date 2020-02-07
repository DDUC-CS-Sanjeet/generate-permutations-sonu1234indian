#include<iostream>
using namespace std;
int count=1;
void genpermute(char cap[],int a,int b)
{
    if(a==b)
    {
            cout<<count++<<"\t"<<cap<<"\n";   
    }
    else
    {
        for(int i=a;i<=b;i++)
        {
            swap(cap[a],cap[i]);
            genpermute(cap,a+1,b);
            swap(cap[a],cap[i]);
        }
    }
}
int main()
{
   int r=0;
   int num;
   char store[27];
   char arr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\n'};
   cout<<"Enter the number of words : ";
   cin>>num;
   for(int j=0;j<num;j++)
   {
       store[j]=arr[j];
   }
   genpermute(store,0,num-1);
   return 0;
}
