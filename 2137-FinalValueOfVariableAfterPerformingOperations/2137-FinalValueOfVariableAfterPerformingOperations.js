// Last updated: 10/03/2026, 10:02:56
/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let X=0;
    for(let i=0;i<operations.length;i++){
        if(operations[i].includes("+")){
            X++
        }
        else{
            X--;
        }
    }
    return X;
};