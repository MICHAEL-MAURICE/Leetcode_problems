/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s=s.toLowerCase().replace(/[^A-Za-z0-9]/g, "");
    
    let t=s.split("").reverse().join("");

    return s==t;
};