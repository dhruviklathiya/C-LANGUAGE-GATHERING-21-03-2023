#include <stdio.h>
int sumofarr(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[10],n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Enter element of array:");
        scanf("%d",&arr[i]);
    }
    int sum = sumofarr(arr, n);
    printf("Sum of all elements in the array is %d", sum);
    return 0;
}
