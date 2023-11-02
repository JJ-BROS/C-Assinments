#include<iostream>
using namespace std;
int main()
{
int c,d,even_sum=0,odd_sum=0,Id,mod;
cout<<"My Id last two digit:";
cin>>Id;
cout<<"My Id num is:"<<Id<<" "<<endl;
mod=Id%10;
cout<<"My Id mod is:"<<mod<<" "<<endl;
cout<<"Entering my array row:";
cin>>c;
cout<<"Entering my array col:";
cin>>d;
cout<<endl;
int a[c][d],i,j,sum=0;
for(i=0; i<c; i++)
{
for(j=0; j<d; j++)
{
cout<<"Entering my array a"<<"["<<i<<"]"<<"["<<j<<"]"<<":";
cin>>a[i][j];
}
cout<<endl;
}
cout<<endl<<"print the array"<<endl;
for(i=0; i<c; i++)
{
for(j=0; j<d; j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
for(i=0; i<c; i++)
{
for(j=0; j<d; j++)
{
sum=sum+a[i][j];
}}
cout<<endl;
cout<<"The sum of array:"<<sum<<" ";
cout<<endl<<"Array even number"<<endl;
for(i=0; i<c; i++)
{
for(j=0; j<d; j++)
{
if(a[i][j]%2==0)
{
cout<<a[i][j]<<" ";
even_sum=even_sum+a[i][j];
}}}
cout<<endl<<"Array  odd number"<<endl;
for(i=0; i<c; i++)
{
for(j=0; j<d; j++)
{
if(a[i][j]%2!=0)
{
cout<<a[i][j]<<" ";
odd_sum=odd_sum+a[i][j];
}}}
cout<<endl<<"The sum of array even number:"<<even_sum<<" ";
cout<<endl<<"The sum of array  odd number:"<<odd_sum<<" ";
cout<<endl<<"Array sum+Id mod:"<<sum+mod<<" ";
return 0;
}