/*383. Ransom Note
Solved
Easy
Topics
Companies
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
Accepted
886.9K
Submissions
1.5M
Acceptance Rate
59.4%
*/

/* Answer */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      int count=0;
      for(int i =0;i<ransomNote.length();i++){
        for(int j=0;j<magazine.length();j++){
          if(ransomNote[i]==magazine[j]){
            magazine.erase(magazine.begin() + j);
            count++;
            break;
          }
        }
      }
      if(count==ransomNote.length()){
        return true;
      }
      else{
        return false;
      }
    }
};
