class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> reverseIndexMap;
        vector<int> result(2,0);
        int i = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            unordered_map<int,int>::iterator mapIt = reverseIndexMap.find(target-(*it));
            if(mapIt != reverseIndexMap.end() && mapIt->second!=i)
            {
                result = {mapIt->second, i};
                return result;
            }
            reverseIndexMap[*it] = i;
            i++;
        }
        result = {-1,-1};
        return result;
    }
};
