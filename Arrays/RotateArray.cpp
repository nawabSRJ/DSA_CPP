// * Practice Problem 2
// ? Rotate an Array: Implement a function to rotate an array to the right by k steps. For example, given [1, 2, 3, 4, 5, 6] and k = 2, the array should become [5, 6, 1, 2, 3, 4].

// * Approach : Rotate one-by-one

// C++ program to rotate an array by d elements
#include<iostream>
using namespace std;

/*Function to left rotate arr[] of size n by d*/
void RotateLeft(int arr[], int d, int n)
{
	int p = 1;
	d = d % n;
	while (p <= d) {
		int last = arr[0];
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = last;
		p++;
	}
}
void rotateRight(int arr[] , int d , int n)
{
	int p = 1;
	d = d % n;
	while(p<=d)
	{
		int first = arr[n-1];	// * last element 
		for(int i = n-1;i >0;i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = first;
		p++;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 8;
	int choose;
	cout <<"\n\nChoose : \n1->Left Rotation\n2->Right Rotation\n\n";
	cin>>choose;
	if(choose == 1)
	{
		RotateLeft(arr, d, N);
	}
	else if(choose == 2)
	{
		rotateRight(arr,d,N);
	}

	// Function calling
	
	printArray(arr, N);	// * mandatory to call

	return 0;
}
