/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
   return t.split('').sort().join('')==s.split('').sort().join('');
};