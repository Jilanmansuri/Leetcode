// Last updated: 03/08/2026, 10:09:35
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0, right = 0, sum = 0, count = 0;
        while (right < arr.size()) {
            sum += arr[right];
            if (right - left + 1 == k) {
                if (sum / k >= threshold) {
                    count++;
                }
                sum -= arr[left];
                left++;
            }
            right++;
        }
        return count;
    }
};