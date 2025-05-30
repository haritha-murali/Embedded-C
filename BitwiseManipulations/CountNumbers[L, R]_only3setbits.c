/*Given an array arr[] of N pairs, where each array element denotes a query of the form {L, R}, the task is to find the count of numbers in the range [L, R], having only 3-set bits for each query {L, R}.
Examples:
Input: arr[] = {{11, 19}, {14, 19}}
Output: 4, 2
Explanation: 
Query(11, 19): Numbers in the range [11, 19] having three set bits are {11, 13, 14, 19}.
Query(14, 19): Numbers in the range [14, 19] having three set bits are {14, 19}.
Input: arr[] = {{1, 10}, {6, 12}}
Output: 1 2
Explanation: 
Query(1, 10): Numbers in the range [1, 10] having three set bits are {7}.
Query(6, 12): Numbers in the range [6, 12] having three set bits are {7, 11}.
*/


