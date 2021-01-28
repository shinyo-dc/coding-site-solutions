The problem:
===

Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

**Example**

<img src="https://latex.codecogs.com/gif.latex?n%20%3D%2010" />
<img src="https://latex.codecogs.com/gif.latex?queries%20%3D%20%5B%5B1%2C5%2C3%5D%5B4%2C8%2C7%5D%5B6%2C9%2C1%5D%5D" />
Queries are interpreted as follows:

```
    a b k
    1 5 3
    4 8 7
    6 9 1
```

Add the values of  between the indices  and  inclusive:

```
index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
```
The largest value is  after all operations are performed.

**Function Description**

Complete the function `arrayManipulation`

`arrayManipulation` has the following parameters:

`int n` - the number of elements in the array
`int queries[q][3]` - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.

**Returns**
`int` - the maximum value in the resultant array

**Input Format**

The first line contains two space-separated integers `n` and `m`, the size of the array and the number of operations.
Each of the next  lines contains three space-separated integers `a`, `b`  and `k`, the left index, right index and summand.

**Constraints**

*Sample Input*

```
5 3
1 2 100
2 5 100
3 4 100
```

*Sample Output*

```
200
```
**Explanation**

After the first update the list is 
`100 100 0 0 0.`

After the second update list is 
`100 200 100 100 100.`

After the third update list is 
`100 200 200 200 100.`


The maximum value is `200`.

The solution:
===
Based on `amansbhandari`:

Iterate through the queries, adding the value of the queries on the first position, subtracting the value of the queries on the position next to the last position. 
It's like Mario going through a path where he gets his shroom on the first position and grow `k` taller in height, after passing through the path (i.e going through the last position), his height is shorter `k` in height. 
Going through the path Mario has taken, accumulating the height and getting the max height value will result in the max value which satisfies the problem.

The implementation can be found on the file `solution.cpp`
