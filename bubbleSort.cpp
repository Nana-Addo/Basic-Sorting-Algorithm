// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// Prototype to swap function
void swap(int *xp, int *yp);

// Prototpye to a function to implement bubble sort
void bubbleSort(int arr[], int n);

/*Prototype to a function to print an array */
void printArray(int arr[], int size);


// Driver code
int main()
{
	int arr[] = {55, 22, 25, 16, 32, 5, 111};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
