// Last updated: 10/03/2026, 10:03:13
/**
 * @param {string} word
 * @return {boolean}
 */
/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {

    let upper = 0;

    for (let i = 0; i < word.length; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upper++;
        }
    }

    if (upper === word.length) return true; // all caps

    if (upper === 0) return true; // all small

    if (upper === 1 && word[0] >= 'A' && word[0] <= 'Z') return true; // first cap

    return false;
};