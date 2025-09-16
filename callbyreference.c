#include <stdio.h>
void fun(int arr[], int size) {
	int i,j;
    for ( i = 0; i < size; i++) {
        arr[i] += 5; // Add 5 to each element
    }
}
int main() {
	int i;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    fun(arr, n); // Call by reference

    printf("Modified array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

