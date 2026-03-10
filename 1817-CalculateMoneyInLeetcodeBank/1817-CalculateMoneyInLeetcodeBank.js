// Last updated: 10/03/2026, 10:03:03
/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    let total = 0;
    let week = 0;

    for (let i = 1; i <= n; i++) {
        total += week + (i - 1) % 7 + 1;

        if (i % 7 === 0) {
            week++;
        }
    }

    return total;
};
