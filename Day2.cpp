
//1. Two Sum
//https://leetcode.com/problems/two-sum/
//brute force solution 
 vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size() , a = 0 ,b = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
            if(nums[i] + nums[j] == target ){
                a = i ;
                b = j ;
            }    
            }
        }
        return {a,b};
    }

// using map 
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp ;
        vector<int> ans ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
           if(mp.find(target - nums[i])!= mp.end()){
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
           }
            mp[nums[i]] = i ;
        }
     return ans; 
    }

//88. Merge Sorted Array
//https://leetcode.com/problems/merge-sorted-array/
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans ; // ans 
        int i = 0 ;
        int j = 0 ;
        
        while( i < m and j < n){
            if(nums1[i] <= nums2[j]){
               ans.push_back(nums1[i]);
                 i++;
            }else{
                  ans.push_back(nums2[j]);
                 j++;
            }
        }
        
        while( i < m ){
             ans.push_back(nums1[i]);
                i++;
        }
        while(j  < n){
            ans.push_back(nums2[j]);
                j++;
        }
        for(int i = 0 ; i < ans.size() ; i++){
            nums1[i] = ans[i]; 
        }
        
    }