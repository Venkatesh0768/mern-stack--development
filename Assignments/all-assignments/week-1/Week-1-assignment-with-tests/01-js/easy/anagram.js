/*
  Write a function `isAnagram` which takes 2 parameters and returns true/false if those are anagrams or not.
  What's Anagram?
  - A word, phrase, or name formed by rearranging the letters of another, such as spar, formed from rasp.

  Once you've implemented the logic, test your code by running
  - `npm run test-anagram`
*/

function isAnagram(str1, str2) {
  let n1 = str1.length;
  let n2 = str2.length;

  if(n1 != n2) return false;
  let count =1;
  for (let i = 0; i <str1.length; i++) {
      for(let j =0; j<str2.length; i++){
        if(str1[i] == str2[j]){
          count++
        } 
      }
  }
  if(count != str1.length){
    return false;
  }

  return true;
}

module.exports = isAnagram;
