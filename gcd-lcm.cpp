#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=15,b=20;
    int lcm,gcd=1;
    for(int i=min(a,b);i>0;i--){
        if((a%i==0)&&(b%i==0)){
            gcd=i;
            break;
        }
    }
    lcm=(a*b)/gcd;
    cout<<gcd<<" "<<lcm;
    return 0;
}