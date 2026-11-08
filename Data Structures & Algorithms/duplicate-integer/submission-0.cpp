class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>uni;
        for(int i=0;i<nums.size();i++)
         {   
            int num = nums[i];
            if(uni.count(num))
            {
                return true;
            }  
            uni.insert(num);
         }
         return false;
    }
};