// Last updated: 03/08/2026, 10:08:49
class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int current = 0;
        int maxAltitude = 0;

        for (int i = 0; i < gain.size(); i++) {

            current += gain[i];

            maxAltitude = max(maxAltitude, current);
        }

        return maxAltitude;
    }
};