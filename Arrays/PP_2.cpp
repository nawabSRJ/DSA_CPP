// * Practice Problem 2
// ? Rotate an Array: Implement a function to rotate an array to the right by k steps. For example, given [1, 2, 3, 4, 5, 6] and k = 2, the array should become [5, 6, 1, 2, 3, 4].

// ! 1 Shortcoming : this code will not work if the rotation steps are greater than size of the array
// * Approach 1 : Using Temp Array
// #include<iostream>
// using namespace std;
// void printArray(int a[] , int n)
// {
//      for(int i = 0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// void rotateArray(int arr[] , int k, int n)
// {
//     // int size = 6;
//     int lastK[n];
//     int j = 0;
//     for(int i = n-k;i<n;i++)
//     {
//         lastK[j] = arr[i];      // * copying last K elements in other array
//         j++;
//     }
//     // printArray(lastK,2);


//     // * reverse pass 
//     for(int i = 0;i<n-k;i++)
//     {
//         lastK[j] = arr[i];      // * lastK is the answer and hence we'll copy it
//         j++;
//     }
//     printArray(lastK,n);
//     for(int i = 0;i<n;i++)
//     {
//         arr[i] = lastK[i];      // * putting copied elements
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int N = sizeof(arr)/sizeof(arr[0]);
//     int steps;
//     cout << "Enter the number of steps to rotate"<<endl;
//     cin>>steps;
//     rotateArray(arr,steps , N);
//     // cout<<"Array after rotation : \n";

//     cout<<"\nAfter Rotation : \n";
//     for(int i = 0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }   
// }

// * Approach 2 : Rotate one-by-one

// C++ program to rotate an array by
// d elements
#include<iostream>
using namespace std;

/*Function to left rotate arr[] of size n by d*/
void Rotate(int arr[], int d, int n)
{
	int p = 1;
	while (p <= d) {
		int last = arr[0];
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = last;
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
	int arr[] = {1,2,3,4,5};
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	// Function calling
	Rotate(arr, d, N);
	printArray(arr, N);

	return 0;
}
