// Last updated: 10/03/2026, 10:03:42
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    let left = 0;
    let right = s.length - 1;

    while (left < right) {

        if (!isAlphaNumeric(s[left])) {
            left++;
            continue;
        }

        if (!isAlphaNumeric(s[right])) {
            right--;
            continue;
        }

        if (s[left].toLowerCase() !== s[right].toLowerCase()) {
            return false;
        }

        left++;
        right--;
    }

    return true;
};

function isAlphaNumeric(ch) {
    return (
        (ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9')
    );
}
