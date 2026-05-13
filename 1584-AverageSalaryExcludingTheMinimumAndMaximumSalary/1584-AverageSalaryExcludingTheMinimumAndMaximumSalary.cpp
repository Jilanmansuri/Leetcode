// Last updated: 13/05/2026, 13:09:58
class Solution {
public:
    double average(vector<int>& salary) {

        int min = salary[0];
        int max = salary[0];
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] > max) {
                max = salary[i];
            }
            if (salary[i] < min) {
                min = salary[i];
            }
        }
        int sum = 0;
        double avg = 0;
        for (int num : salary) {
            sum += num;
        }

        avg = (double)(sum - min - max) / (salary.size() - 2);
        return avg;
    }
};