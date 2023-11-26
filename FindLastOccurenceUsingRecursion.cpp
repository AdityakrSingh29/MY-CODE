//FIND LAST OCCURENSE OF STRING USING RECURSION

#include<iostream>
using namespace std;

void lastOccurence(string& s,char x,int i,int& ans)
{
    //BASE CASE
    if(i>=s.size()){
        return ;
    }
    //1 CASE
    if(s[i]==x)
    {
        ans=i;
    }
    //REST RECURSION
    lastOccurence(s,x,i+1,ans);

}
int main()
{
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans=-1;
    lastOccurence(s,x,0,ans);
    cout<<"ANSWER :-"<<ans<<endl;
}