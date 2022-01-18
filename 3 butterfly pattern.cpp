/*


*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/

#include<iostream>
using namespace std;
int main()
{
    int n, i , j;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Your Butterfly pattern is printed below."<<endl<<endl;
    for(i=1; i<=n; i++){
        int blank = (2*n - 2*i);
        for(j=1; j<=i; j++){
            cout<<"*";
        }
            for(j=1; j<=blank; j++){
                cout<<" ";
                }

                for(j=1; j<=i; j++){
                    cout<<"*";
                }
        cout<<endl;
    }
        for(i=n; i>=1; i--){
            int blank = (2*n - 2*i);
            for(j=1; j<=i; j++){
            cout<<"*";
        }
            for(j=1; j<=blank; j++){
                cout<<" ";
                }

                for(j=1; j<=i; j++){
                    cout<<"*";
                }
        cout<<endl;
    }


 return 0;
}
