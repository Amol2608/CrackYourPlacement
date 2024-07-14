// # Day1 question 1 - (287. Find the Duplicate Number)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         unordered_map<int,int> mp ;
         for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++ ;
            if(mp[nums[i]]>1) return nums[i] ;
         }
         return -1 ;
    }
};