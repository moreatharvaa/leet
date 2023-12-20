class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minprice = INT_MAX;
        int sec_minprice = INT_MAX;

        for(int price : prices){
            if(price<minprice){
                sec_minprice = minprice;
                minprice = price;
            } else{
                sec_minprice = min(sec_minprice, price);

            }
        }

        if(minprice+sec_minprice>money){
            return money;

        }
        else{
            return money - (minprice+sec_minprice);
        }
    }
};
