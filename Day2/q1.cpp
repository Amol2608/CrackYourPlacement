class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , k = 0 , n = nums.size() ;
        while(i < n){
            if(nums[i] != nums[k]){
                swap(nums[++k],nums[i++]) ;
            }
            else{
                i++ ;
            }
        }
        return ++k ; 
    }
};