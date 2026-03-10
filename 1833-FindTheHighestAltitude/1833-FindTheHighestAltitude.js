// Last updated: 10/03/2026, 10:03:02
/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    let current=0;
    let maxAltitude=0;
    for(let i=0;i<gain.length;i++){
        current += gain[i];             
        maxAltitude = Math.max(maxAltitude, current); 
    }
    return maxAltitude;

};