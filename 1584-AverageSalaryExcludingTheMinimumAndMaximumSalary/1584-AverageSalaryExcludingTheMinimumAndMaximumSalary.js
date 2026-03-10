// Last updated: 10/03/2026, 10:03:06
/**
 * @param {number[]} salary
 * @return {number}
 */
var average = function(salary) {
    let max = Math.max(...salary);
    let min = Math.min(...salary);

    let sum = 0;

    for (let i = 0; i < salary.length; i++) {
        sum += salary[i];
    }

    let avg = (sum - max - min) / (salary.length - 2);

    return avg;
};