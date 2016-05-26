/* Say you have an array for which the ith element is the price of a given stock on day i.
   If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

   Example: Input: prices[] = {100,160,280}
            Output: max profit = 160
*/

int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0, sum = 0;
    for (int i = 1; i < pricesSum; i++) {
        prices[i - 1] = prices[i] - prices[i - 1];
        sum = sum + prices[i - 1];
        if (prices[i - 1] > sum) {
            sum = prices[i - 1];
        }
        if (sum > max_profit) {
            max_profit = sum;
        }
    }
    return max_profit;
}