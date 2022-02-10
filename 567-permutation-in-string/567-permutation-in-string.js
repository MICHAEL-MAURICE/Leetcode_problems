const aCharCode = 'a'.charCodeAt(0);

/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
const checkInclusion = function (s1, s2) {
  const n1 = s1.length;
  const n2 = s2.length;

  if (n1 > n2) {
    return false;
  }

  const chars = Array(26).fill(0);
  for (let i = 0; i < n1; ++i) {
    --chars[s1.charCodeAt(i) - aCharCode];
    ++chars[s2.charCodeAt(i) - aCharCode];
  }

  let error = chars.reduce((acc, count) => acc + Math.abs(count), 0);
  if (error === 0) {
    return true;
  }

  for (let i = n1; i < n2; ++i) {
    error += ++chars[s2.charCodeAt(i) - aCharCode] > 0 ? 1 : -1;
    error += --chars[s2.charCodeAt(i - n1) - aCharCode] < 0 ? 1 : -1;

    if (error === 0) {
      return true;
    }

    // Checks if it's still possible to find a permutation of s1 in s2
    if (i + error > n2) { // The correct expression is i + error / 2 >= n2, d'oh!
      return false;
    }
  }

  return false;
};