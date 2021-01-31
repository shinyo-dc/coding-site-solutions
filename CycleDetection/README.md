The problem:
===

A linked list is said to contain a cycle if any node is visited more than once while traversing the list. Given a pointer to the head of a linked list, determine if it contains a cycle. If it does, return `1`. Otherwise, return `0`.

**Example**

`head` refers to the list of nodes `1->2->3->NULL`

The numbers shown are the node numbers, not their data values. There is no cycle in this list so return `0`.

`head` refers to the list of nodes `1->2->3->1`

There is a cycle where node 3 points back to node 1, so return `1`.

**Function Description**

Complete the `has_cycle` function.

It has the following parameter:

`SinglyLinkedListNode* head`: a reference to the head of the list

**Returns**

int: `1` if there is a cycle or `0` if there is not

Note: If the list is empty,  will be null.

Input Format

The code stub reads from stdin and passes the appropriate argument to your function. The custom test cases format will not be described for this question due to its complexity. Expand the section for the main function and review the code if you would like to figure out how to create a custom case.

**Constraints**

`0 <= listSize <= 1000`

Solution:
===
Based on `clacrone`:

Using two pointer `slow` and `fast`, `fast` moves twice faster than `slow`. If there is no cycle then the `fast` pointer eventually moves to the tail of the list and its `next` will be `nullptr`. Else the `slow` and the `fast` pointer will eventually meet each other at some point if there is a cycle.

A visualization:
```
1: |sf--------|
2: |-s-f------|
3: |--s--f----|
4: |---s---f--|
5: |----s----f|
6: |-f----s---|
7: |---f---s--|
8: |-----f--s-|
9: |-------f-s|
10: s == f
```
The implementation can be found on the file `solution.cpp`

