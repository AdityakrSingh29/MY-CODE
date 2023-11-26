#include<iostream>
using namespace std;

void findMax(int arr[],int n,int i,int& maxi)
{
    if(i>=n)
    {
        //PURRA ARRAY TRAVERSE HOGAYA
        return;
    }

    //1st case solve karrna hy
    //current elemt check karo phela
    if(arr[i]>maxi)
    {

        maxi=arr[i];

    }
    findMax(arr,n,i+1,maxi);
}

int main()
{
    int arr[5]={10,50,80,40,30};
    int n=5;
    int maxi=INT_MIN;
    int i=0;
    findMax(arr,n,i,maxi);
    cout<<"maximum number is:- "<<maxi<<endl;
}