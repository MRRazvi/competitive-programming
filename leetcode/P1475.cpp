// 1475. Final Prices With a Special Discount in a Shop
// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for (int i=0; i<prices.size(); i++) {
            for (int j=i+1; j<prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};