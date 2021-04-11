Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

 

Example 1: (leetcode)

1 -> 2(even) -> 3 -> 4(even) -> 5
  
O/P : 1 -> 3-> 5 -> 2(even) -> 4(even)


Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

Example 2:

2 -> 1(even) -> 3 -> 5(even) -> 6 -> 4(even) -> 7
  
O/P : 2 -> 3 -> 6 -> 7 -> 1(even) -> 5(even) -> 4(even)
 
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
