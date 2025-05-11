#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fruits[3] = {1,2,1};
    map<int,int> mpp;
    int max_len=0,l=0,r=0;
    while (r<5)
    {
        mpp[fruits[r]]++;
        if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
        }
        if(mpp.size()<=2){
            max_len=max(max_len,r-l+1);
        }
        r++;
    }
    cout<<max_len;
    return 0;
} 