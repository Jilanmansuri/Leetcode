// Last updated: 15/03/2026, 22:31:54
1/**
2 * @param {number} num
3 * @return {number}
4 */
5var maximum69Number = function (num) {
6    let str = String(num);
7    str = str.replace('6', '9');
8    return Number(str);
9};