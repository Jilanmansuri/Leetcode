// Last updated: 13/05/2026, 13:10:02
/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number = function (num) {
    let str = String(num);
    str = str.replace('6', '9');
    return Number(str);
};