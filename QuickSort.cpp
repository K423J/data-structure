class Solution {
public:
    void quickSort(vector<int>& nums,int low,int high){
        if(low>high) return;
        int begin=low,end=high;
        int temp=nums[low];
        while(begin<end){
            while(begin<end&&nums[end]>=temp) end--;
            if(begin<end) nums[begin]=nums[end];
            while(begin<end&&nums[begin]<=temp) begin++;
            if(begin<end) nums[end]=nums[begin];
        }
        nums[begin]=temp;
        quickSort(nums,low,begin-1);
        quickSort(nums,begin+1,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};
