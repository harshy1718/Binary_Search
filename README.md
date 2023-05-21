# Binary_Search

int binarysearch(int array[] , int size, int target) {
     // this function creates a start integer and an end integer

    int start = 0;
    int end = size-1;
    while (start <= end) {
    
    // we run a while loop which has a condition that start is less than or equal to end and we create a mid integer 
    
        int mid = (start + end)/2;
        
        // if the element at the index mid is equal to the target then mid is returned
        
        if (array[mid] == target) {
            return mid;
        }
        // else if it is less than target element we increase the start to mid+1 and in any ohter condition end is decreased to mid-1
        
        else if (array[mid] < target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
  //We create a sorted array as binary search is applicable on sorted arrays only and then we take input an integer that is to be found in the array
    int array[7] = {1,3,4,5,7,8,9};
    int x;
    cout << "Enter the element to be searched : ";
    cin >> x;
    
   // Now we call a function named binarysearch
   
    int ans = binarysearch(array,7,x);
    if (ans == -1) {
        cout << "Not found";
    }
    else cout << "Found at : " << ans;
}
