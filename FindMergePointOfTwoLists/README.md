The problem:
===

Given pointers to the head nodes of  linked lists that merge together at some point, find the node where the two lists merge. The merge point is where both lists point to the same node, i.e. they reference the same memory location. It is guaranteed that the two head nodes will be different, and neither will be NULL. If the lists share a common node, return that node's  value.

Note: After the merge point, both lists will share the same node pointers.

**Example**

In the diagram below, the two lists converge at Node `x`:

```
[List #1] a--->b--->c
                     \
                      x--->y--->z--->NULL
                     /
     [List #2] p--->q
```


**Function Description**

Complete the `findMergeNode` function:

findMergeNode has the following parameters:

SinglyLinkedListNode pointer `head1`: a reference to the head of the first list
SinglyLinkedListNode pointer `head2`: a reference to the head of the second list

Returns

int: the  value of the node where the lists merge

**Constraints**

The lists will merge.
`head1`, `head2` != `NULL`
`head1` != `head2`

The solution:
===

Naive one: Interate through the first list while checking each node of the second list if both of the nodes have the same address (`O(n^2)` solution):

Great `O(n)` one: Create two iterator, each of the iterate through each list, if they reach the end of the lists then continue iterate them with the remain list, eventually the two iterator will have the same address, i.e. reaching the merge point
A visualization:

```
First list: a->b->c->x->y->z
Second list: p->q->x->y->z

The two lists merge at node x
First iterator:  a->b->c->x->y->z->p->q->x
Second iterator: p->q->x->y->z->a->b->c->x

Notice that both of the paths will have the same length
```

Both of the solution can be found at `solution.cpp` 
