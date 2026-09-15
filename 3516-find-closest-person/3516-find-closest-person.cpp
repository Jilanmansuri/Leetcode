class Solution {
public:
    int findClosest(int x, int y, int z) {
        int personx = abs(x - z);
        int persony = abs(y - z);

        if (personx < persony) {
            return 1;
        } 
        else if(personx==persony){
               return 0;
        }
        else {
            return 2;
        }
    }
};