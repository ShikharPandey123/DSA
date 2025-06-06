#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price; // Update the minimum price
        } else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice; // Update the maximum profit
        }
    }
    
    return maxProfit;
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}