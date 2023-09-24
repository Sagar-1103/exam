#include <stdio.h>

void findSubarraysWithTargetSum(int arr[], int n, int target) {
    int start = 0;
    int end = 0;
    int currentSum = arr[0];

    while (end < n) {
        if (currentSum == target) {
            // Print the subarray from start to end
            for (int i = start; i <= end; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");

            // Move the start pointer to the right and update currentSum
            currentSum -= arr[start];
            start++;
        } else if (currentSum < target) {
            // Expand the window to the right
            end++;
            if (end < n) {
                currentSum += arr[end];
            }
        } else {
            // Shrink the window from the left
            currentSum -= arr[start];
            start++;
        }
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 7};
    int target = 12;
    int size = sizeof(array) / sizeof(array[0]);

    findSubarraysWithTargetSum(array, size, target);

    return 0;
}
