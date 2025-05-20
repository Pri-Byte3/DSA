//Leet code [121. Best Time to Buy and Sell Stock] {Easy}
/*
Write a program in C++ to find the maximum profit that can be achieved 
by buying and selling a stock given its daily prices.

The function should:
1. Buy the stock on one day and sell it on another day in the future.
2. Return the maximum possible profit.
3. If no profit can be made, return 0.

If the input is:
Prices: [7,1,5,3,6,4]

The output should be:
5

(Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
        int min = INT_MAX, max_profit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }else{
            int profit = prices[i] - min;
            max_profit = max(max_profit, profit);
            }
        }
        return max_profit;
    }
int main () {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
return 0;
}