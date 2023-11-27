class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[i-count]=nums[i];
            }
            else{
                count++;
            }
        }
        return nums.size()-count;
    }
};
