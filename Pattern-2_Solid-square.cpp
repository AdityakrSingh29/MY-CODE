//SOLID SQUARE
#include<iostream>
using namespace std;
int main()
{
    int n = 8;  
    // This is for custom pattern
    for(int row = 0;row<n;row+=1)
    { 
        // Outer for loop is for rows
        for(int col = 0;col<n;col=col+1)
        { 
            // Inner for loop is for columns
            cout<<"* "; 
        }
        cout<<endl; // After printing for first row, we need to go to next row and hence endl is used
    }
}