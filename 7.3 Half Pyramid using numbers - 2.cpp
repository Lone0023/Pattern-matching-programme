/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include<iostream>
using namespace std;
int main()
{
    int n, i , j;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Your Inverted Half Pyramid with number till "<<n<<" is printed below."<<endl<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}