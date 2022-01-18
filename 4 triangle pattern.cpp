#include<iostream>
using namespace std;
int main()
{
    int n, i , j;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Your Triangle is printed below."<<endl<<endl;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j<=(n-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        for(j=2; j<=i; j++){
            cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}
