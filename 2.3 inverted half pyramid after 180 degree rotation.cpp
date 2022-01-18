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
    cout<<"Your Inverted Half pyramid after 180 degree rotation is printed below."<<endl<<endl;

    for(i=n; i>=1; i--){
        for(j=1; j<=n; j++){
            if(j<=(n-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
         cout<<endl;
    }
    return 0;
}

