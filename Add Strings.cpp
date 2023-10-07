/*
415. Add Strings
Solved
Easy
Topics
Companies
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.
*/

class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        char value;
        int sum = 0;
        int carry = 0;
        string answer = "";
        int i = num1.size()-1;
        int j = num2.size()-1;

        while(i>=0 or j>=0)
        {
            sum = carry;
            if(i>=0) sum = sum + num1[i] - 48;
            if(j>=0) sum = sum + num2[j] - 48;
            value = (sum%10) + 48;
            answer = answer + value;
            carry = sum / 10;
            i--;
            j--;
        }    
        value = carry + 48;
        if(carry) answer = answer + value;

        reverse(answer.begin(), answer.end());
        return answer;
    }
};
