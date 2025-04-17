#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={100,200,3,4,2,1};
    sort(arr,arr+6);
    vector<int>ans;
    bool isNum=false;
    for(int i=0;i<6;i++){
        if(arr[i+1]-arr[i]==1){
            if(isNum==false){
                ans.push_back(arr[i]);
                isNum=true;
            }
            ans.push_back(arr[i+1]);
            // ans.push_back(arr[i]);
        }else{
            isNum=false;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}