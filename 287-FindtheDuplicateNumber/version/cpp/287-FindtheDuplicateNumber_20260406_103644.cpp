// Last updated: 06/04/2026, 10:36:44
1#include <unordered_map>
2using namespace std;
3
4class Solution {
5public:
6    int findDuplicate(vector<int>& nums) {
7
8        unordered_map<int, int> freq;
9
10        for(int num : nums){
11            if(freq[num] == 1){
12                return num;  
13            }
14            freq[num]++;
15        }
16
17        return -1;
18    }
19};