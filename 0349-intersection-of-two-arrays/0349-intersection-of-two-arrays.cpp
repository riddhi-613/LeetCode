class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for(int num : nums2) {
            if(set1.find(num) != set1.end()) {
                result.insert(num);
                set1.erase(num); // ensures uniqueness
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};
