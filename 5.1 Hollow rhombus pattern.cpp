#include<iostream>
using namespace std;
int main()
{
   int n, i , j;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Your Hollow Rhombus is printed below."<<endl<<endl;

    for(i = 1; i<=n; i++){
        for(j = 1; j<=(n-i); j++){
            cout<<" ";
        }
            for(j=1; j<=n; j++){
                    if(i==1 || i==n){
                        cout<<" * ";
                    }
                    else if(j==1 || j==n){
                        cout<<" * ";
                    }
                    else{
                        cout<<"   ";
                    }
            }
       cout<<endl;
    }
    return 0;

}
