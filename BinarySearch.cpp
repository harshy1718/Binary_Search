#include<iostream>
using namespace std;

int binarysearch(int array[] , int size, int target) {
    int start = 0;
    int end = size-1;
    while (start <= end) {
        int mid = (start + end)/2;
        if (array[mid] == target) {
            return mid;
        }
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
    int array[7] = {1,3,4,5,7,8,9};
    int x;
    cout << "Enter the element to be searched : ";
    cin >> x;
    int ans = binarysearch(array,7,x);
    if (ans == -1) {
        cout << "Not found";
    }
    else cout << "Found at : " << ans;
}