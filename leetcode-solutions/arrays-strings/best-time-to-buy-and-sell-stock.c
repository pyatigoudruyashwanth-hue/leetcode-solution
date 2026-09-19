#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice)
            minPrice = prices[i];

        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
            maxProfit = profit;
    }

    return maxProfit;
}

int main() {
    // Test Case 1: Typical
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test Case 1: Maximum Profit = %d\n",
           maxProfit(prices1, 6));

    // Test Case 2: Edge case - only one price
    int prices2[] = {5};
    printf("Test Case 2: Maximum Profit = %d\n",
           maxProfit(prices2, 1));

    return 0;
}