// Last updated: 10/03/2026, 10:03:54
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(n) {
    let rev = 0;
	let n1 = n;
    if(n<0 ){
		return false;
	}
	n = Math.abs(n);
	while (n > 0) {
		let digit = n % 10;
		rev = rev * 10 + digit;
		n = Math.floor(n / 10);
	}
	return rev === n1;
};