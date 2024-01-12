#include<stdio.h>



int findMissingElement(int arr[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2; // Calculate the sum of first n+1 natural numbers
    int arrSum = 0;

    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    return totalSum - arrSum;
}

int main() {
    int arr[] = {1, 2, 3, /*...*/100}; // Include all elements except the missing one
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findMissingElement(arr, n);
    
    printf("The missing element is: %d\n", missingElement);

    return 0;

}
