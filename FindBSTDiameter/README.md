The problem
===

The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 
<img src="https://media.geeksforgeeks.org/wp-content/uploads/Diameter-of-Binary-Tree.png">

The Solution
===

The diameter of a BST is the maximum of the three values:

1. Diameter of the left subtrees.
2. Diameter of the right subtrees.
3. The sum of the maximum height of the left and the right subtree + 1 (meaning the diameter of a tree with the path going through the root).

The implementation can be found on the file `solution.cpp`


