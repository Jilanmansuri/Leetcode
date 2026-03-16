// Last updated: 16/03/2026, 22:53:24
1/**
2 * @param {number} x
3 * @return {number}
4 */
5 var reverse = function(x) {
6    let rev = 0;
7    let num = Math.abs(x);
8
9    while (num > 0) {
10        rev = rev * 10 + (num % 10);
11        num = Math.floor(num / 10);
12    }
13
14    rev = x < 0 ? -rev : rev;
15
16    if (rev < -(2 ** 31) || rev > (2 ** 31 - 1)) {
17        return 0;
18    }
19
20    return rev;
21};
22