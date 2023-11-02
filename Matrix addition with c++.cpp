#include<iostream>
using namespace std;
int main()
{
float a[4][4],b[4][4],result[4][4];
cout<<"Enter the elements of first matrix:"<<endl;
for(int i=0;i<4;++i)
for(int j=0;j<4;++j)
{
cout<<"Enter element a"<<i+1<<j+1<<":";
cin>>a[i][j];
}
cout<<"Enter the elements of second metrix:"<<endl;
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
{
cout<<"Enter element b"<<i+1<<j+1<<":";
cin>>b[i][j];
}
for(int i=0;i<4;++i)
for(int j=0;j<4;++j)
{
result[i][j]=a[i][j]+b[i][j];
}
cout<<endl<<"sum of Matrix is:"<<endl;
for(int i=0;i<4;++i){
for(int j=0;j<4;++j)
{
cout<<result[i][j]<<" ";
}
cout<<endl;
}
return 0;
}