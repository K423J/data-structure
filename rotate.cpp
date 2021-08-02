/*solution1: 
time: O(n); space: O(n);*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rotArr(n);
        for(int i=0; i<n; ++i){
            rotArr[(i+k)%n] = nums[i];
        }
    nums.assign(rotArr.begin(),rotArr.end());
    }
};

/*solution2: 
time: O(n); space: O(1);*/
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start], nums[end]);
            start += 1;
            end -= 1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
    }
};
