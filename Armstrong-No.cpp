#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,last_digit=0;
    cout<<"enter the number:";
    cin>>n;
    int num=n;
    int digit_count=int(log10(n)+1);
    while (n!=0)
    {
        last_digit=n%10;
        sum+=pow(last_digit,digit_count);
        n=n/10;
    }
    if(sum==num)cout<< true;
    else cout<< false;
}