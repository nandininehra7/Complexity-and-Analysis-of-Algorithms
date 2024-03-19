# Practical -01: Selection Sort Analysis
This practical implements the selection sort algorithm. It iterates through the array, finds the minimum element in the unsorted part, 
and swaps it with the first element of the unsorted part.
This process is repeated until the entire array is sorted

<img width="429" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/7140ad5e-576b-43af-81b2-8cc170204185">

# Practical -02: Sum of n numbers
The algorithm used here is a straightforward summing of the elements in an array. 
The sum_numbers function iterates through each element of the array and accumulates the sum.

<img width="406" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/a825b9d9-46ce-4fe9-a09d-18d6bcab62c8">

# Practical -03: Towers of Hanoi
The Tower of Hanoi algorithm is a classical recursive problem. It follows the principles of divide and conquer. 
The idea is to move 'n' disks from the source peg to the target peg using an auxiliary peg.

<img width="453" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/e7b5895f-a6b2-4e8c-9088-fe466c5daeba">

# Practical -04: Permutation Generator
This PRACTICAL generates all permutations of the given array using recursive backtracking. 
It swaps indices at different positions of the array to generate all possible arrangements. 
The base case is reached when the current position (k) reaches the end of the array(n).

<img width="420" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/ca418eeb-e910-4206-9076-0f0e575feba1">

# Practical -05: Power Function
1.Brute approach

ALGORITHM : This practical implements a simple recursive algorithm to calculate the power of 'm' raised to the 'n'-th exponent. It uses the recursive property of exponentiation: m^n = m * m^(n-1).

TIME COMPLEXITY : The time complexity of this code is exponential, specifically O(2^n), where 'n' is the exponent. This is because, at each step of the recursion, the problem is divided into two subproblems.

2.Optimal approach

ALGORITHM : The algorithm uses a recursive approach to calculate the power of 'm' raised to the 'n'-th exponent. It takes advantage of the fact that if 'n' is even, the exponentiation can be expressed as the square of the power of 'm' raised to half of 'n'.

TIME COMPLEXITY: The time complexity of this code is logarithmic, specifically O(log n), where 'n' is the exponent. The optimization for even exponents significantly reduces the number of recursive calls, making the algorithm more efficient compared to the naive recursive approach.


# Practical -06: Merge Sort
This practical implements the merge sort algorithm recursively. It divides the array into two halves, 
sorts each half independently, and then merges the sorted halves.

<img width="417" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/f481521a-fbd6-48a6-b5cd-74f4a341471f">

# Practical -07: Quick Sort
This function implements the partition operation of the QuickSort algorithm.
It selects a pivot element (here, the first element), rearranges the array elements such that elements smaller than the pivot come before it,
and elements greater than the pivot come after it. The function returns the index of the pivot after partitioning.

<img width="450" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/1b47b02c-1939-436a-97fa-38fa12f5fa62">


# Practical -08: Merging of Two Sorted Lists
This function merges the two sorted lists into a single sorted list, by comparing each element of the two lists and storing the smaller one in the list.

<img width="408" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/caae64a0-2a0b-4be5-93a7-37aa6edc604f">


# Practical -09: Binary Search
Practical-09 is the implementation of binary search in which we go on checking for the element in the half portion of the array, because of which the time complexity 
is equal to O(logn).

<img width="426" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/26ad95e2-e88c-4c19-8c09-39e67712d3fb">

# Practical -10: Iterative Quick Sort
The QuickSort algorithm sorts an array by selecting a pivot element, partitioning the other elements into two subarrays, 
and then recursively sorting the subarrays. The iterative version uses a stack to manage the partitioning process without using recursion.

# Practical -11: Correct Position
This algorithm helps in finding out the correct position of an element in the array such that all the elements preceding the given element are smaller than it
and all the elements suceeding it are greater than it.
Time Complexity : O(n)
<img width="412" alt="image" src="https://github.com/Abhibhav2003/AlgorithmsAndTheirComplexityAnalysis/assets/139039304/479d0765-af5d-4c64-b744-fd76cdebd9bf">


# Practical -12: Cycle Detection
The algorithm uses the Union-Find algorithm for detecting cycles in an undirected graph. 
It employs the concept of connected components and checks whether adding an edge forms a cycle by examining the roots of the vertices involved


# Practical -13: Djikstra's
Dijkstra's algorithm is a greedy algorithm used for finding the single-source shortest paths in a weighted graph with non-negative weights. It starts with an empty set of vertices and repeatedly selects the vertex with the minimum distance from the source, adding it to the set. The algorithm then updates the distance values of the neighboring vertices based on the newly added vertex. This process continues until all vertices are included in the set, and the algorithm finds the shortest paths from the source to all other vertices.


# Practical -14: Prim's
Prim's algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a connected, undirected graph.
It starts with an arbitrary node and grows the MST one vertex at a time by adding the shortest edge that connects a vertex in the MST to a vertex outside the MST. The process continues until all vertices are included in the MST

# Practical -15: Multistage Graph
In this practical, the algorithm written produces the minimum distance between source and sink in a multistage graph.

# Practical -16: Kruskal's
Kruskal's algorithm is a greedy algorithm that finds a minimum spanning tree for a connected, undirected graph. It works by sorting the edges in non-decreasing order of weight and adding each edge to the MST as long as it does not form a cycle. The Disjoint-Set data structure is used to efficiently check whether adding an edge creates a cycle

