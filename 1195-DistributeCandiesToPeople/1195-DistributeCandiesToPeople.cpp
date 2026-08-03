// Last updated: 03/08/2026, 10:10:03
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> ans(num_people, 0);

        int give = 1;
        int index = 0;

        while (candies > 0) {

            if (candies >= give) {
                ans[index] += give;
                candies -= give;
            } 
            else {
                ans[index] += candies;
                candies = 0;
            }

            give++;
            index = (index + 1) % num_people;
        }

        return ans;
    }
};