/*
119. Pascal's Triangle II
Solved
Easy
Topics
Companies
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]
 

Constraints:

0 <= rowIndex <= 33
 

Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> newrow;
        int n=rowIndex;
        long int c=1;
        if(rowIndex==0){
            newrow.push_back(1);
        }
        else{
            newrow.push_back(1);
            for(int j=1;j<=n;j++){
                c=c*(n-j+1)/j;
                newrow.push_back(c);
            }
        }
        return newrow;
    }
};


