// Last updated: 10/03/2026, 10:03:49
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let count = 0;

    for (let i = s.length - 1; i >= 0; i--) {

        if (s[i] === " " && count === 0) {
            continue;
        }

        if (s[i] === " ") {
            break;
        }

        count++;
    }

    return count;
};