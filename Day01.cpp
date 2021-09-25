// 53. Maximum Subarray
//https://leetcode.com/problems/maximum-subarray/
// Brute Force O(n^2)
int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = -(int)1e9;
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += nums[j] ;
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum ;
    }
};

// Kadane's Algorithm O(n)

 int maxSubArray(vector<int>& nums) {
        int curr = 0 ;
        int maxNow = -(int)1e9 ;
        for(int ele : nums){
            curr += ele ;
            maxNow = max(maxNow,curr);
            if(curr < 0) curr = 0 ;
            
        }
        
        return maxNow ;
    }

// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/

     bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(); // size of array 
        unordered_map<int,int> mp;  // map 
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++; // make a frequency map 
        }
         for(int i = 0 ; i < mp.size() ; i++){
            if(mp[nums[i]] > 1) return true ; // check if any element occurs twice , 
			// if it does , then return true 
        }
        for(int i = 0 ; i < mp.size() ; i++){
           cout << nums[i] <<" "<<  mp[nums[i]]<< endl ;
        }
        return false ; // otherwise return false 
    }
