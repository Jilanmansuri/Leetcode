// Last updated: 14/03/2026, 23:05:49
1/**
2 * @param {Array} arr
3 * @param {Function} fn
4 * @return {Array}
5 */
6var sortBy = function(arr, fn) {
7    return arr.sort((a,b)=>  fn(a)-fn(b));
8};