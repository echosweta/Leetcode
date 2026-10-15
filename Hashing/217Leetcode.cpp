class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // map<int,int>m;
        // for(int i =0 ; i<nums.size() ; i++)
        // {
        //      auto it = m.find(nums[i]);
        //      if (it != m.end()) 
        //      {
        //         return true;
        //      }
        //      else
        //      m[nums[i]]=1;
        // }
        // return false;

        unordered_set<int>m;
        for(int i =0 ; i<nums.size() ; i++)
        {
             auto it = m.find(nums[i]);
             if (it != m.end()) 
             {
                return true;
             }
             else
             m.insert(nums[i]);
        }
        return false;

    }
};