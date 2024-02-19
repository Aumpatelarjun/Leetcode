class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int tempsum=0;
        int temp=prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i]<temp){
                temp = prices[i];
            }
            tempsum =  max(tempsum,prices[i]-temp);
        }
        return tempsum ;
        
    }
};