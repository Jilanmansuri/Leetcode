// Last updated: 10/03/2026, 10:03:56
/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(x) {
    let rev = 0;
    let num = Math.abs(x);

    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num = Math.floor(num / 10);
    }

    rev = x < 0 ? -rev : rev;

    if (rev < -(2 ** 31) || rev > (2 ** 31 - 1)) {
        return 0;
    }

    return rev;
};