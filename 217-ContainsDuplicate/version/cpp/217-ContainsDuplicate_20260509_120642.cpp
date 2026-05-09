// Last updated: 09/05/2026, 12:06:42
1#include <vector>
2#include <algorithm>
3using namespace std;
4
5class Solution {
6public:
7    bool containsDuplicate(vector<int>& nums) {
8        
9        sort(nums.begin(), nums.end());
10
11        for(int i = 0; i < nums.size() - 1; i++){
12            if(nums[i] == nums[i+1]){
13                return true;
14            }
15        }
16
17        return false;
18    }
19};