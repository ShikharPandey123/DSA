#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,last_digit=0,rev=0;
    cin>>n;
    while (n!=0)
    {
        last_digit=n%10;
        rev=rev*10+last_digit;
        n=n/10; 
    }
    
    return 0;
}