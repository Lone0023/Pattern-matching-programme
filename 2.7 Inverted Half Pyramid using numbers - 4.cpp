/*
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
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
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}


