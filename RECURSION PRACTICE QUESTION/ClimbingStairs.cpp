#include<iostream>
using namespace std;

int climbingStairs(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return climbingStairs(n-1)+climbingStairs(n-2);
    }
}

int main()
{
    int n;
    cout<<"ENTER THE VALUE OF N:-"<<endl;
    cin>>n;
    int ans=climbingStairs(n);
    cout<<ans<<endl;

}