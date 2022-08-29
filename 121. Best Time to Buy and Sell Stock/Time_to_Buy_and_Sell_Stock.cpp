#include <iostream>
#include <vector>

using namespace std;

// int maxProfit(vector<int>& prices) {
//    int lowestBuy = INT_MAX;
//    int profit;
//    int maxprofit = 0; 
   
//    for(int i=0; i<prices.size(); i++) {
    
//         if(prices[i] < lowestBuy)
//             lowestBuy = prices[i];
        
//         profit = prices[i] - lowestBuy;
    
//         if(profit > maxprofit)
//             maxprofit = profit;
//    }
//    return maxprofit;
// }
//We can reduce runtime by using else if with some modification
    
int maxProfit(vector<int>& prices) {
   int lowestBuy = INT_MAX;
   int profit;
   int maxprofit = 0; 
   
   for(int i=0; i<prices.size(); i++) {
        profit = prices[i] - lowestBuy;
        if(prices[i] < lowestBuy)
            lowestBuy = prices[i];
        else if (profit > maxprofit)
            maxprofit = profit;
        else continue;
   }
   return maxprofit;
}

int main() {
    vector<int> stock = {7,1,3,0,15};
    int x = maxProfit(stock);
    cout<<x;
    return 0;
}