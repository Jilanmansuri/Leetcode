// Last updated: 10/03/2026, 10:03:07
/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
    let count = 0;
    while(num>0){
        if(num%2==0){
            num=num/2;
        }
        else{
            num=num-1;
        }
        count++;
    }
    return count;
};