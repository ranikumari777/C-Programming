#include <stdio.h>
#include <string.h>
void fun(int *arr[], int *size) {
    int temp[size]; // Create a copy of the array
    for (int i = 0; i < *size; i++) {
        temp[i] = arr[i];
        temp[i] += 10; // Add 10 to each element
    }

    printf("Inside function (modified copy): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

int main() {
    int main() {
	int i;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
    printf("Original array before function: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    fun(&arr, &n); // Call by value (mimicked)

    printf("Original array after function: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

