class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int l=0;
        int r=0;
        int mx=0;
        while(r<s){
            if(prices[r]-prices[l]>0){
                mx=max(mx,prices[r]-prices[l]);
            }
            else{
                l=r;
            }
            r++;
            
        }
        return mx;
        
    }
};
