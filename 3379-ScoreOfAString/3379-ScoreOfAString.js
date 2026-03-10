// Last updated: 10/03/2026, 10:02:33
/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function (str) {
    let score = 0;

    for (let i = 1; i < str.length; i++) {
        score += Math.abs(
            str.charCodeAt(i) - str.charCodeAt(i - 1)
        );
    }

    return score;
};
