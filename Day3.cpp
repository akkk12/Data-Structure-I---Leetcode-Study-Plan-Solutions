//121. Best Time to Buy and Sell Stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// it also has a DP Solution  

int maxProfit(vector<int>& prices) {
        int maxPrice = 0 ;
        int minPrice = (int)1e9 ;
        int n = prices.size() ;
        for(int i = 0 ; i < n ;i++){
            minPrice = min(minPrice,prices[i]);
            maxPrice = max(maxPrice,prices[i] - minPrice);
        }
        return maxPrice ;
    }


// 350. Intersection of Two Arrays II
//https://leetcode.com/problems/intersection-of-two-arrays-ii/

   vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map ;
        vector<int> ans ;
        int n = nums1.size() , m = nums2.size();
        for(int i = 0 ; i < n ;i++){
            map[nums1[i]]++ ;
        }
        for(int i = 0 ; i < m ; i++){
            if(map[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                map[nums2[i]]-- ;}
        }
        return ans ;
        
    }    
