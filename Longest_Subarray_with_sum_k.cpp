#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,3,5,1,9};
    int max_len=0,k=15  ;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i;j<5;j++){
            sum+=arr[j];
            if(sum==k)max_len=max(max_len,j-i+1);
        }
    }
    cout<<max_len;
    return 0;
}