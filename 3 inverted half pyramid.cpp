/*
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int n, i , j;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Your Inverted Half Pyramid is printed below."<<endl<<endl;
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
