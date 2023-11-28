class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int visi=0;
        int count=0;
        for(auto it:nums){
            if(visi==0){
                count=it;
            }
            if(count==it){
                visi++;
            }
            else{
                visi--;
            }
        }
        return count;
    }
};
