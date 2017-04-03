vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    // iter->first: key, iter->second: index
    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);
        
        if (it != imap.end()) 
            return vector<int> {i, it->second};
            
        imap[nums[i]] = i;
    }
}


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, pair<int, int> > hash;
        vector<int> result;
        for(size_t i=0; i!=nums.size(); i++){
            int toFind = target - nums[i];
            if(hash.find(toFind) != hash.end()){
                result.push_back(hash[toFind].second);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = pair<int,int>(nums[i],i);
        }
    }
};