class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> set2;
        vector<int> result;
        for (int num : nums1) {
            st.insert(num);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (st.find(nums2[i]) != st.end()) {
                set2.insert(nums2[i]);
            }
        }
        for (int num : set2) {
            result.push_back(num);
        }
        return result;
    }
};
