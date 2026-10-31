#include <iostream>
#include <vector>
using namespace std;

// prices = [7,1,5,1,6,4]
//           b s
//             b s
//             b   s
//
int maxProfit(vector<int> prices) {
    int b = 0;
    int s = 0;
    int profit = 0;

    // prices = [7,1,5,3,6,4]
    while (s < prices.size()) {

        if (prices[s] < prices[b]) {
            b = s;
        } else {
            if (prices[s] - prices[b] > profit) {
                profit = prices[s] - prices[b];
            }
            s++;
        }
    }
    return profit;
}
int main() {

    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << "hello";
    int profit = maxProfit(arr);
    std::cout << profit;
}
