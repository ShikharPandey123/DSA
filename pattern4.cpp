#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for (int i = 0; i < n; i++)
    {
       for (char j = 'A'; j <= 'A'+i; j++)
       {
            cout<<j;
       }
       for(int j=0;j<n;j++){
        cout<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}