// Last updated: 10/03/2026, 10:02:49
/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function(celsius) {
    let arr=[];
     kelvin=celsius+273.15;
    arr.push(kelvin);
     fahrenheit = celsius * 1.80 + 32.00;
    arr.push(fahrenheit);
    return arr;
};