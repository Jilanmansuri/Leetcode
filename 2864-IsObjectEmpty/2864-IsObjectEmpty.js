// Last updated: 10/03/2026, 10:02:37
/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
     for (let key in obj) {
        return false;
    }
    return true;
};