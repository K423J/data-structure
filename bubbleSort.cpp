class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<n-1; i++){
            for(int j=n-1; j>i; j--){
                if(nums[j-1]>nums[j]) 
                    swap(nums[j],nums[j-1]);
            }
        }
    return nums;
    }
};
