//REVERSE A GIVEN STRING USING RECURSION
#include<iostream>
using namespace std;

void reverseGivenString(string& str,int start,int end)
{
    //BASE CASE
    if(start>=end)
    {
        return;
    }
    //1 CASE
    swap(str[start],str[end]);

    //BAKKI RECURSION
    reverseGivenString(str,start+1,end-1);
}
int main()
{
    string str;
    cin>>str;

    reverseGivenString(str,0,str.size()-1);
    cout<<str<<endl;
    return 0;
}