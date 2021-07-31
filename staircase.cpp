#include<iostream>
using namespace std;
int fstep(int n)
{
 if(n==1)return 1;
 if(n==2)return 2;
 if(n>=3)return fstep(n-2)+fstep(n-1);
 return 0;
}
int main()
{
 int n,step;
 cout<<"input the steps of the stair:"<<endl;
    cin>>n;
 step=fstep(n);
 cout<<"The methods to finish the stair are: "<<step<<endl;
 return 0;
}
