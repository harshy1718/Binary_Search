# Binary_Search
This repository provides an optimized C++ implementation of Binary Search, a powerful search algorithm that efficiently finds the target element in a sorted array by repeatedly dividing the search space in half.

# Algo Visualisation
![image](https://github.com/harshy1718/Binary_Search/assets/129788726/82710e78-eb04-48fe-84f5-ec73cd0f4f57)

# Algo Complexity
## a. Time: 
The time complexity of Binary Search is O(log n), where n is the number of elements in the sorted array. Binary Search achieves this logarithmic time complexity by repeatedly dividing the search space in half until the target element is found or determined to be absent. This makes Binary Search highly efficient for searching in large sorted arrays, as the number of elements to be examined reduces exponentially with each comparison.
## b. Space: 
The space complexity of Binary Search is O(1), which means it requires a constant amount of additional space regardless of the size of the input array. Binary Search operates by iteratively narrowing down the search space by adjusting the lower and upper bounds. It does not require any additional data structures or dynamic memory allocation, hence the space complexity remains constant. Binary Search achieves efficient searching with minimal memory usage.

# Use cases
Binary Search has several use cases in various domains. Here are some common applications of Binary Search:

1. Searching in sorted arrays: Binary Search is widely used to efficiently search for a specific element in a sorted array. It significantly reduces the search space by repeatedly dividing the array into halves.

2. Finding an element's position: Binary Search can determine the position of an element in a sorted array. This information is useful for tasks like inserting an element at the correct position or maintaining a sorted order.

3. Implementing dictionary-like functionality: Binary Search is employed in applications that require fast dictionary-like operations, such as finding the closest match to a given value or performing range queries.

4. Data searching in databases: Binary Search is utilized in database systems to quickly locate data within large sorted datasets, enabling efficient data retrieval and query processing.

5. Finding a specific value in a range: Binary Search can be used to locate the first or last occurrence of a value within a range or perform operations on elements within a specific range.

6. Finding a threshold or breaking point: Binary Search is helpful in scenarios where a function or property changes behavior at a specific threshold or breaking point. It can efficiently find that threshold by repeatedly dividing the search space.

7. Bit manipulation and operations: Binary Search techniques are applied in tasks involving bit manipulation, such as finding the highest or lowest set bit or performing bitwise operations efficiently.

Binary Search's efficiency and simplicity make it a fundamental algorithm with widespread use in computer science, data structures, and algorithms.

# Function Description

This function creates a start integer and an end integer

    int binarysearch(int array[] , int size, int target) {
    int start = 0;
    int end = size-1;
    while (start <= end) {
    
 We run a while loop which has a condition that start is less than or equal to end and we create a mid integer 
    
        int mid = (start + end)/2;
        
 If the element at the index mid is equal to the target then mid is returned
        
        if (array[mid] == target) {
            return mid;
        }
Else if it is less than target element we increase the start to mid+1 and in any ohter condition end is decreased to mid-1
        
        else if (array[mid] < target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
    }

We create a sorted array as binary search is applicable on sorted arrays only and then we take input an integer that is to be found in the array

    int main() {
    int array[7] = {1,3,4,5,7,8,9};
    int x;
    cout << "Enter the element to be searched : ";
    cin >> x;
    
   Now we call a function named binarysearch
   
    int ans = binarysearch(array,7,x);
    if (ans == -1) {
        cout << "Not found";
    }
    else cout << "Found at : " << ans;
    }
