/*
****
*  *
*  *
*  *
****
*/

#include<iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    cout<<"Enter the number of rows: "<<endl;
    cin>>r;
    cout<<"Enter the number of columns: "<<endl;
    cin>>c;
    cout<<endl;
    cout<<"Your Hollow rectangle is printed below."<<endl<<endl;

    for(i = 1; i<=r; i++){
        for(j =1; j<=c; j++){
            if(i==1 || i==r){
                cout<<"*";
            }
            else if(j==1 || j==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
    return 0;
}
