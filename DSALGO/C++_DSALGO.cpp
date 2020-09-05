==================================================================================

//PROG 1: To display elements in an array:

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include <iostream>

using namespace std;

void displayArray(int arr[],int n){
    cout<<"Your array is: "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        cout << "Test";
    }
}

int main()
{
    int n;
    int arr[n];
    cout<<"enter size of array: "<<endl;
    cin>>n;
    cout<<"enter your elements in array: "<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    displayArray(arr,n);
    return 0;
}
===============================================================================================================































//ALTERNATE WAY TO DISPLAY SIZE OF ARRAY:

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout << "Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter the elements in your array: "<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"Your array is: "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}





































=======================================================================================================================
2) Check whether n is present in an array of size m or not.
   Input -n,m (Input number, size of array)-Take input n elements for the arrayOutput -> true/false
   [ Hint : -Create a dynamic array]
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
METHOD 1:

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#include <iostream>
using namespace std;

int SearchKey(int arr[], int key, int n){

		for(int i=0; i<n; i++){
			if(arr[i]==key){
				cout << "True" << endl;
				break;
			}
			if(i==n-1){
			    cout<< "False" << endl;
			}

		}
	return 0;
}

void displayArray(int arr[],int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int key;
	int n;
	int arr[n];
    cout<<"Enter size of array: "<<endl;
	cin>>n;
	cout<<"Enter numbers in array: "<<endl;
	for(int i=0; i<n; i++){
	    cout<<"Enter number: "<<(i+1)<<endl;
		cin>>arr[i];
	}
	cout<<"Your array is: ";
	displayArray(arr,n);
	cout << endl;
	cout<<"Enter the number you want to search: "<<endl;
	cin>>key;
	SearchKey(arr,key,n);
	return 0;
}


































===========================================================================================================

METHOD:2

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    int search_key;
    for (int i = 0; i < n; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>arr[i];
    }

    cout<<"Enter the key\n";
    cin>>search_key;

    /*  Simple Search with Position */
	for (int i = 0; i < n; i++)
    {
		if(arr[i] == search_key)
		{
			cout<<"Search Element Found . Position Is :"<< (i+1) <<" \n";
			break;
		}
		if(i == n - 1)
		{
			cout<<"Search Element is not in Array.\n";
		}
    }
    return 0;

}
===============================================================================================================
PROBLEM:3
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TO FIND THE MINIMUM AND MAXIMUM ELEMENT IN AN ARRAY:

Sample Input:	5
				1,2,3,4,5
Sample Output:  Max : 5
				Min : 1
 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n], i, max, min;

    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min;
    return 0;
}





















<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Problem:4
REFER TO NOTEBOOK
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<























Problem:5
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
PROGRAM TO SORT ARRAY:

(DO WHEN YOU FINISH SEARCHING AND SORTING ALGORITHMS)
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<








































Program:6
FIND THE Kth LARGEST AND Kth SMALLEST ELEMENT IN THE ARRAY:
HERE K=3 AND 9 IS THE SIZE OF ARRAY
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

i->  0 1 2 3 4 5 6 7 8
arr={1,2,3,4,5,6,7,8,9}

pos->1 2 3 4 5 6 7 8 9

output: 7
        3
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<,,

given: array={1,2,3,4,5,9,6,33,19}
output: 3
		9
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<,,
METHOD:1

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], max, min, temp, pos;
    int k;
    cout << "Enter numbers that you want in your array: "<<endl;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<endl;
    cout << "Enter Kth smallest number that you want to find: "<<endl;
    cin>>k;
    for(int i=0; i<n; i++){
        if(k==i+1){
            cout<<"The "<< i+1 <<" smallest element is: " << arr[i]<<endl;
        }

    }
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Enter nth largest number that you want to find: "<<endl;
    cin>>n;
        for(int i=0; i<n; i++){
        if(n==i+1){
            cout<<"The "<< i+1 <<" greatest element is: " << arr[i]<<endl;
        }

    }

    return 0;
}
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<






































ALTERNATE METHID:



void arrfun(int arr[], int k,int n){
    
    for(int i = 0; i<n; i++){
        if(k == i+1){
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    for(int i = 0; i<n; i++){
         if(n-k+1 == i+1){
            cout << arr[n-k] << " ";
        }
    }
}    
void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}    
    
int main(){
    int arr[] = {2,4,5,3,1,7,6,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n);
    int k = 3;
    printarray(arr,n);
    cout << "\n";
    arrfun(arr,k,n);
    return 0;
}






































Program-7

Given an number n

To find number of occurences of n in the array

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Given: Sample input: n=3             //Here n is the number
					 arraysize = 11
                     array = {1233353453}
       Sample output: 6


*******************************************************************************/

#include <iostream>

using namespace std;

int CountRepetition(int arr[100], int key, int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            count++;
        }
    }
    return count;
}
void displayArray(int arr[100], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int arr[100];
    int count;
    int key;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter numbers in array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    displayArray(arr,n);
    cout<<endl;
    cout<<"Enter number that is to be counted"<<endl;
    cin>>key;

    //displayArray(arr,n);
    cout<<CountRepetition(arr,key,n);

    return 0;
}






















































*********************************************************************************
8)Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.
Here, 9 is the size of array input by the user followed by the elements input
Sample input: size of array=9
              arr={012110022}




*******************************************************************************************************












































9)Find the range of the array. Range means the difference between the maximum and minimum element in the array.
here , 6 is the size of array followed by the input of elements

Sample input:  6
			   arr={-1,-3,3,47,21,91}
Sample output: range=94
***********************************************************************************
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n], i, max, min;
    int range;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min<<endl;
    range=max-min;
    cout<<range<<endl;
    return 0;
}


**********************************************************************************************************************





































































10) Move all the negative elements to one side of the array.

Sample input:  6
               arr = {-1,-3,3,-4,21,91}

Sample output: arr = {-4,-3,-1,3,21,91}


#include <iostream>

using namespace std;

int main()
{
    int arr[] = {-1,-3,3,-4,21,91};
    int temp;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}







Optimized solution:

#include <bits/stdc++.h> 
using namespace std; 
  
void rearrange(int arr[], int n) 
{ 
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] < 0) { 
            if (i != j) 
                swap(arr[i], arr[j]); 
            j++; 
        } 
    } 
} 
  
// A utility function to print an array 
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    rearrange(arr, n); 
    printArray(arr, n); 
    return 0; 
} 

********************************************************************************************


































INTERMEDIATE LEVEL QUESTIONS:










1.Find the Union and Intersection of the two sorted arrays.

// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[] , int m, int n){
    int i = 0;
    int j = 0;
    while(i < m && j < n){
        while(i < m-1 && arr1[i] == arr1[i+1]){
            i++;
        }
        while(j < n-1 && arr2[j] == arr2[j+1]){
            j++;
        }
        if(arr1[i] > arr2[j]){
            cout << arr2[j++] << " ";
        }
        else if(arr2[j] > arr1[i]){
            cout << arr1[i++] << " ";
        }
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while(i < m){
        if(i < m-1 && arr1[i] == arr1[i+1]){
            i++;
        }
        else{
            cout << arr1[i++] << " ";
        }
    }
    while(j < n){
        if(j < m-1 && arr2[j] == arr2[j+1]){
            j++;
        }
        else{
            cout << arr2[j++] << " ";
        }
    }
}
int main(){
    int arr1[] = {1, 2, 4, 5, 6};

    int arr2[] = {2,3,5,7};

    int m = sizeof(arr1)/sizeof(arr1[0]);

    int n = sizeof(arr2)/sizeof(arr2[0]);

    printUnion(arr1,arr2,m,n);

    return 0;
}

Handling duplicates in any of the array : Above code does  handle duplicates in any of the array.

Output:  1 2 3 4 5 6 7
Time Complexity : O(m + n)
================================================================================================================



























Alternate solution:

#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 4
int main() {

int A[M]={1,2,3,4,5};
int B[N]={1,2,3,6};
int U[M+N]; //M+N is the maximum size. it'll decrease with a counter.

int i=0, j=0,count=0,flag=0;

while(i<M){           //Array A is copied into Array U.
U[count]=A[i];
count++;        //counter that will determine the size.
i++;
}

i=0,j=0;  

while(i<M){     
    j=0;
    flag=0;
while(flag==1 || j<N){         //check if the flag is on or if the array is ended.
    if(B[j]!=A[i]){               // check if the element of the b array is different from
                                            //the element of array A (cause i already copied the array A)
        count++;                                //i make some space for the element to be copied.
        U[count]=B[j];            
    }
    else flag=1;                            //if the flag is on it means the element was equal, so i just
    j++;                                        //go to the next one
}       
i++;
}































*******************************************************************************************************************
To print intersection of two sets:

int printUnion(int arr1[],int arr2[],int m,int n){
    int i=0;
    int j=0;
    while(i<m && j<n){
        while(i<m-1 && arr1[i]==arr1[i+1]){
            i++;
        }
        while(j<n-1 && arr2[j]==arr2[j+1]){
            j++;
        }
        if(arr1[i]>arr2[j]){
            j++;

        }
        else if(arr2[j]>arr1[i]){
            i++;
        }
        else
        {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
}
int main(){
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2,3,5,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    printUnion(arr1,arr2,m,n);
    return 0;
}
Output: 2 5
Time Complexity : O(m + n)
*****************************************************************************************************************



















































 You are given a list of n-1 integers and these integers are in the range of 1 to n.
 There are no duplicates in the list.
 One of the integers is missing in the list.
 Write an efficient code to find the missing integer.


#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{

    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

// Driver Code
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}
Time Complexity: O(n).
Only one traversal of array is needed.
Space Complexity: O(1).
No extra space is needed
******************************************************************************************************





























method:2
#include <iostream>
using namespace std;
int MissingElement(int arr1[], int n,int key){
    int i = 0;
    //int j = 0;
    while(i<n){
        for(i=0;i<n;i++){
            if(key==arr1[i]){
                cout<<"Element found"<<endl;

            }
            if(i==n-1){
                cout<<key<<" element not in the array";
            }
        }
    }
}
        //cout<<key<<" is the missing element in the array" <<endl;



int main() {
    int arr1[] = {1,2,3,5,6,7,8,10};//our array
    int key;
   
    cin>>key;
       
    int n = sizeof(arr1)/sizeof(arr1[0]);
       
    MissingElement(arr1, n, key);
    cout<<endl;
    
    return 0;
}
************************************************************************************************






































4.Find all pairs on integer array whose sum is equal to given number

#include <iostream>

using namespace std;

int getpairssum(int arr[],int sum,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sum==arr[i]+arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[]={1,5,7,-1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    cout<<"Count of pairs is: "<<getpairssum(arr,sum,n);
    return 0;
}
Time complexity O(n*n)
Space complexity: O(1)
********************************************************************************************************************************






















































METHOD:2 BASED ON DATASTRUCTURE MAPS

A better solution is possible in O(n) time.

Below is the Algorithm.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
# Create a map to store frequency of each number in the array. (Single traversal is required)
# In the next traversal, for every element check if it can be combined with any other element (other than itself!) to give the desired sum.
# Increment the counter accordingly.
# After completion of second traversal, we’d have twice the required value stored in counter because every pair is counted two times.
# Hence divide count by 2 and return.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;

    // Store counts of all elements in map m
    for (int i=0; i<n; i++)
        m[arr[i]]++;

    int twice_count = 0;

    // iterate through each element and increment the
    // count (Notice that every pair is counted twice)
    for (int i=0; i<n; i++)
    {
        twice_count += m[sum-arr[i]];

        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (sum-arr[i] == arr[i])
            twice_count--;
    }

    // return the half of twice_count
    return twice_count/2;
}

// Driver function to test the above function
int main()
{
    int arr[] = {1, 5, 7, -1, 5} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    return 0;
}
**********************************************************************************************************************













































5.Find duplicates in an array.


// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
    int *count = new int[sizeof(int)*(size - 2)];
    int i;

    cout << " Repeating elements are ";
    for(i = 0; i < size; i++)
    {
        if(count[arr[i]] == 1)
            cout << arr[i] << " ";
        else
            count[arr[i]]++;
    }
}

// Driver code
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr, arr_size);
    return 0;
}
Time Complexity: O(n)
Auxiliary Space: O(n)

****************************************************************************************************************

#include<bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
    int i, j;
    printf(" Repeating elements are ");
    for(i = 0; i < size; i++)
        for(j = i + 1; j < size; j++)
        if(arr[i] == arr[j])
            cout << arr[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr, arr_size);
}
Output:   Repeating elements are 4 2
Time Complexity: O(n*n)
Auxiliary Space: O(1)
****************************************************************************************************************




6.Sort an Array using Quicksort algorithm.

**********************************************************************************************************************

































7.Find common elements in three sorted arrays

#include <bits/stdc++.h>
using namespace std;

// This function prints common elements in ar1
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    // Initialize starting indexes for ar1[], ar2[] and ar3[]
    int i = 0, j = 0, k = 0;

    // Iterate through three arrays while all arrays have elements
    while (i < n1 && j < n2 && k < n3)
    {
         // If x = y and y = z, print any of them and move ahead
         // in all arrays
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
         {   cout << ar1[i] << " ";   i++; j++; k++; }

         // x < y                                                 (x,y,z) = (6,4,3)
         else if (ar1[i] < ar2[j])
             i++;

         // y < z
         else if (ar2[j] < ar3[k])
             j++;

         // We reach here when x > y and z < y, i.e., z is smallest
         else
             k++;
    }
}

// Driver program to test above function
int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);

    cout << "Common Elements are ";
    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}

Output:
Common Elements are 20 80
Time complexity of the above solution is O(n1 + n2 + n3)
******************************************************************************************************************







































8.Find the first repeating element in an array of integers.

#include<iostream>
using namespace std;

int SearchRepeatingElement(int arr[],int n){
    int i;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                return 0;
            }
        }
    }
}
int main(){
    int arr[] = {1,2,2,3,4,5,4,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    SearchRepeatingElement(arr,n);
    return 0;
}
Time complexity: O(n*n)
Space complexity: O(1)

Alternate Method:

#include<bits/stdc++.h>
using namespace std;

// This function prints the first repeating element in arr[]
void printFirstRepeating(int arr[], int n)
{
    // Initialize index of first repeating element
    int min = -1;

    // Creates an empty hashset
    set<int> myset;

    // Traverse the input array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // If element is already in hash set, update min
        if (myset.find(arr[i]) != myset.end())
            min = i;

        else   // Else add element to hash set
            myset.insert(arr[i]);
    }

    // Print the result
    if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
}

// Driver method to test above method
int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}

Time complexity: O(n)
Space complexity: O(1)

**************************************************************************************************









































9. C++ program to find the minimum possible difference between maximum and minimum {minimise the maximum diff}
// elements when we have to add/subtract
// every number by k
#include <bits/stdc++.h>
using namespace std;

// Modifies the array by subtracting/adding
// k to every element such that the difference
// between maximum and minimum is minimized
int getMinDiff(int arr[], int n, int k)
{
    if (n == 1)
       return 0;

    // Sort all elements
    sort(arr, arr+n);

    // Initialize result
    int ans = arr[n-1] - arr[0];

    // Handle corner elements
    int small = arr[0] + k;
    int big = arr[n-1] - k;
    if (small > big)
       swap(small, big);

    // Traverse middle elements
    for (int i = 1; i < n-1; i ++)
    {
        int subtract = arr[i] - k;
        int add = arr[i] + k;

        // If both subtraction and addition
        // do not change diff
        if (subtract >= small || add <= big)
            continue;

        // Either subtraction causes a smaller
        // number or addition causes a greater
        // number. Update small or big using
        // greedy approach (If big - subtract
        // causes smaller diff, update small
        // Else update big)
        if (big - subtract <= add - small)
            small = subtract;
        else
            big = add;
    }

    return  min(ans, big - small);
}
int main()
{
    int arr[] = {1, 10, 14, 14, 14, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    cout << "\nMaximum difference is "
        << getMinDiff(arr, n, k);
    return 0;
}

******************************************************************************************************************



































10.Write a program to cyclically rotate an array by one.



11.Find the first non-repeating element in a given array of integers.(find most optimised solution)


12.Given an array with all distinct elements, find the largest three elements.
 Expected time complexity is O(n) and extra space is O(1).


13.Rearrange the array in alternating positive and negative items with O(1) extra space


14.Find if there is any subarray with sum equal to zer0


15.Find Largest sum contiguous Subarray

16.Find longest consecutive subsequence.

17.Find the minimum element in a rotated and sorted array.

18.Given an array of size n and a number k, fin all elements thatappear more than n/k times.

19.GCD ofgiven index ranges in an array.

20.Maximum profit by buying and selling a share at most twice.

21.Minimum number of Jumps to reach end

22.Find the two repetitive elements in a given array.

23.Find a triplet that sum to a given value

24.Create an N*M matrix and take input from the user to populate it and then print the matrix

25.Find the row with maximum number of 1’s.

26.Find the median in a row wise sorted matrix

27.Print the matrix in a Spiral manner.

28.Find whether an array is a subset of another array.

29.Implement two Stacks in an array.





































Strings in C/C++
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Declaring Strings:
Syntax:

char str_name[size];
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Initializing a String: A string can be initialized in different ways.

1. char str[] = "GeeksforGeeks";

2. char str[50] = "GeeksforGeeks";

3. char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

4. char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};



Printing a string array: Unlike arrays we do not need to print a string, character by character.
                         The C/C++ language does not provide an inbuilt data type for strings
                         but it has an access specifier “%s” which can be used to directly print and read strings
// C/C++ program to illustrate strings

#include<bits/stdc++.h>

int main()
{
    // declare and initialize string
    char str[] = "Geeks";

    // print string
    printf("%s",str);

    return 0;
}

Output:
Geeks


Passing strings to function: As strings are character arrays,
                             so we can pass strings to function in the same way we pass an array to a function.


// C/C++ program to illustrate how to
// pass strings to function

#include<bits/stdc++.h>

void printStr(char str[])
{
    printf("String is : %s",str);
}

int main()
{
    // declare and initialize string
    char str[] = "GeeksforGeeks";

    // print string by passing string
    // to a different function
    printStr(str);

    return 0;
}
Output:
String is : GeeksforGeeks


std::string Class in C++

Declaration Syntax:   string string_name = "Sample String";

Sample Program:

// C++ program to illustrate strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // declare and initialize string
    string str = "Geeks";

    // print string
    cout<<str;

    return 0;
}
Output:
Geeks
*****************************************************************************************************************

Operations on strings

Input Functions

1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.

2. push_back() :- This function is used to input a character at the end of the string.

3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.


// C++ code to demonstrate the working of
// getline(), push_back() and pop_back()


#include<iostream>
#include<string> // for string class
using namespace std;

int main()
{
    // Declaring string
    string str;

    // Taking string input using getline()
    // "geeksforgeek" in givin output
    getline(cin,str);

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;

}
Input:




geeksforgeek
Output:

The initial string is : geeksforgeek
The string after push_back operation is : geeksforgeeks
The string after pop_back operation is : geeksforgeek


Capacity Functions

4. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

5. resize() :- This function changes the size of string, the size can be increased or decreased.

6.length():-This function finds the length of the string

7.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to its size. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.



// C++ code to demonstrate the working of
// capacity(), resize() and shrink_to_fit()

#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
    // Initializing string
    string str = "geeksforgeeks is for geeks";

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    //Displaying length of the string
    cout<<"The length of the string is :"<<str.length()<<endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;

    return 0;

}
Output:

The initial string is : geeksforgeeks is for geeks
The string after resize operation is : geeksforgeeks
The capacity of string is : 26
The length of the string is : 13
The new capacity after shrinking is : 13


Iterator Functions



8. begin() :- This function returns an iterator to beginning of the string.

9. end() :- This function returns an iterator to end of the string.

10. rbegin() :- This function returns a reverse iterator pointing at the end of string.

11. rend() :- This function returns a reverse iterator pointing at beginning of string.




// C++ code to demonstrate the working of
// begin(), end(), rbegin(), rend()
#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
    // Initializing string`
    string str = "geeksforgeeks";

    // Declaring iterator
    std::string::iterator it;

    // Declaring reverse iterator
    std::string::reverse_iterator it1;

    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it=str.begin(); it!=str.end(); it++)
    cout << *it;
    cout << endl;

    // Displaying reverse string
    cout << "The reverse string using reverse iterators is : ";
    for (it1=str.rbegin(); it1!=str.rend(); it1++)
    cout << *it1;
    cout << endl;

    return 0;

}
Output:

The string using forward iterators is : geeksforgeeks
The reverse string using reverse iterators is : skeegrofskeeg


Manipulating Functions

12. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

13. swap() :- This function swaps one string with other.



// C++ code to demonstrate the working of
// copy() and swap()
#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
    // Initializing 1st string
    string str1 = "geeksforgeeks is for geeks";

    // Declaring 2nd string
    string str2 = "geeksforgeeks rocks";

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str1.copy(ch,13,0);

    // Diplaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl << endl;

    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;

    return 0;

}
Output:

The new copied character array is : geeksforgeeks

The 1st string before swapping is : geeksforgeeks is for geeks
The 2nd string before swapping is : geeksforgeeks rocks
The 1st string after swapping is : geeksforgeeks rocks
The 2nd string after swapping is : geeksforgeeks is for geeks
***************************************************************************************************************

PATTERN SEARCHING ALGORITHM

Examples:

Input:  txt[] = "THIS IS A TEST TEXT"
        pat[] = "TEST"
Output: Pattern found at index 10

Input:  txt[] =  "AABAACAADAABAABA"
        pat[] =  "AABA"
Output: Pattern found at index 0
        Pattern found at index 9
        Pattern found at index 12


pattern-searching

// C++ program for Naive Pattern
// Searching algorithm
#include<bits/stdc++.h>
using namespace std;

void search(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout << "Pattern found at index "
                 << i << endl;
    }
}

// Driver Code
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    search(pat, txt);
    return 0;
}
Output:
Pattern found at index 0
Pattern found at index 9
Pattern found at index 13





***********************************************************************************
1. Write a basic program to take input (String) from User and just print it.

#include <iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;
    return 0;
}
***********************************************************************************
2.Write a program to count the number of occurrences of each character in the string and print it.


// C++ program to count occurrences of a given
// character
#include <iostream>
#include <string>
using namespace std;

// Function that return count of the given
// character in the string
int count(string s, char c)
{
    // Count variable
    int res = 0;

    for (int i=0;i<s.length();i++)

        // checking character in string
        if (s[i] == c)
            res++;

    return res;
}

// Driver code
int main()
{
    string str= "geeksforgeeks";
    char c = 'e';
    cout << count(str, c) << endl;
    return 0;
}
**********************************************************************************************

3. Write a program to remove all whitespaces in a given string.

// An efficient C++ program to remove all spaces
// from a string
#include <iostream>
using namespace std;

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;

    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

// Driver program to test above function
int main()
{
    char str[] = "g  eeks   for ge  eeks  ";
    removeSpaces(str);
    cout << str;
    return 0;
}

Output: geeksforgeeks
*************************************************************************************************
4.Program to print duplicate characters in a string

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[80];
    cout<<"Enter string: ";
    cin.getline(string,80);
    cout<<"Duplicate characters are following"<<endl;
    for(int i=0;i<strlen(string);i++){                     // nested loop statement
        for(int j=i+1;j<strlen(string);j++){
            if(string[i]==string[j]){                   // logic to detect duplicate character
                cout<<string[i]<<endl;                  // duplicate character
                break;
            }
        }
    }
    return 0;
}

*******************************************************************************************************
5. Write a program to reverse a string in place

Write own reverse function by swapping characters: One simple solution is to write our own reverse function to reverse a string in C++.

// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}
Output :

skeegrofskeeg

***************************************************************************************

Using inbuilt “reverse” function: There is a direct function in “algorithm” header file
for doing reverse that saves our time when programming.
// Reverses elements in [begin, end]
void reverse (BidirectionalIterator begin,BidirectionalIterator end);

// A quickly written program for reversing a string
// using reverse()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geeksforgeeks";

    // Reverse str[begin..end]
    reverse(str.begin(), str.end());

    cout << str;
    return 0;
}
Output :
skeegrofskeeG


***************************************************************************************************

 C++ program to print reverse of a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}

// Driver code
int main(void)
{
    string s = "GeeksforGeeks";
    reverse(s);
    return (0);
}
Output:

skeegrofskeeG
********************************************************************************************************

6. C++ program to check whether two strings are anagrams
   of each other
#include <bits/stdc++.h>
using namespace std;

/* function to check whether two strings are anagram of
each other */
bool areAnagram(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();

    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;

    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

// Driver code
int main()
{
    string str1 = "test";
    string str2 = "ttew";
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";

    return 0;
}
****************************************************************************************************************
7. Write a program to reverse each word in agiven string


#include <bits/stdc++.h>
using namespace std;

// Function to reverse words*/
void reverseWords(string& s)
{
    // Reversing individual words as
    // explained in the first step
    //"i like this program very much";

    int start = 0;
    for (int end = 0; end < s.length(); end++) {

        // If we see a space, we reverse the previous
        // word (word between the indexes start and end-1
        // i.e., s[start..end-1]
        if (s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

    // Reverse the last word
    reverse(s.begin() + start, s.end());

    // Reverse the entire string
    reverse(s.begin(), s.end());
}

// Driver Code
int main()
{
    string s = "i like this program very much";
    reverseWords(s);
    cout << s;
    return 0;
}
************************************************************************************************************************


8. Write a program to check if a given string is palindrome.
#include <stdio.h>
#include <string.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}

// Driver program to test above function
int main()
{
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}
*********************************************************************************************************
>>>>LINKED LIST

>>>INTRODUCTION
**********************************************************************
>>Representation:

class Node {
public:
    int data;
    Node* next;
};
******************************************************************************

>>Creating a linked list in C++


// A simple CPP program to introduce
// a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// Program to create a simple linked
// list with 3 nodes
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    /* Three blocks have been allocated dynamically.
    We have pointers to these three blocks as head,
    second and third
    head         second         third
        |             |             |
        |             |             |
    +---+-----+     +----+----+     +----+----+
    | # | # |     | # | # |     | # | # |
    +---+-----+     +----+----+     +----+----+

# represents any random value.
Data is random because we haven’t assigned
anything yet */

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with
    // the second node

    /* data has been assigned to the data part of first
    block (block pointed by the head). And next
    pointer of the first block points to second.
    So they both are linked.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +----+----+     +-----+----+
    | 1 | o----->| # | # |     | # | # |
    +---+---+     +----+----+     +-----+----+
*/

    // assign data to second node
    second->data = 2;

    // Link second node with the third node
    second->next = third;

    /* data has been assigned to the data part of the second
    block (block pointed by second). And next
    pointer of the second block points to the third
    block. So all three blocks are linked.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1 | o----->| 2 | o-----> | # | # |
    +---+---+     +---+---+     +----+----+     */

    third->data = 3; // assign data to third node
    third->next = NULL;

    /* data has been assigned to the data part of the third
    block (block pointed by third). And next pointer
    of the third block is made NULL to indicate
    that the linked list is terminated here.

    We have the linked list ready.

        head
            |
            |
        +---+---+     +---+---+     +----+------+
        | 1 | o----->| 2 | o-----> | 3 | NULL |
        +---+---+     +---+---+     +----+------+


    Note that only the head is sufficient to represent
    the whole list. We can traverse the complete
    list by following the next pointers. */

    return 0;
}
************************************************************************************************

>>>Linked list traversal


// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

// Driver code
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = NULL;

    printList(head);

    return 0;
}
Output: 1 2 3

************************************************************************************************************
>> Inserting a node in a linked list:


#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
    public:
    int data;
    Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */


void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
	new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(Node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        cout<<"the given previous node cannot be NULL";
        return;
    }

    /* 2. allocate new node */
    Node* new_node = new Node();

    /* 3. put in the data */
    new_node->data = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}

/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */


void append(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();

    Node *last = *head_ref; /* used in step 5*/

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);

    cout<<"Created Linked list is: ";
    printList(head);

    return 0;
}
Output: Created linked list is: 1 7 8 6 4
********************************************************************************
>>> Linked List | Set 3 (Deleting a node)

// A complete working C program to demonstrate deletion in singly
// linked list
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node* temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory
}

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

/* Drier program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    printList(head);
    return 0;
}

Output:
Created Linked List:
 2  3  1  7
Linked List after Deletion of 1:
 2  3  7
******************************************************************************************************

>>>Delete a Linked List node at a given position
   Given a singly linked list and a position, delete a linked list node at the given position.

Example:

Input: position = 1, Linked List = 8->2->3->1->7
Output: Linked List =  8->3->1->7

Input: position = 0, Linked List = 8->2->3->1->7
Output: Linked List = 2->3->1->7

// A complete working C program to delete a node in a linked list
// at a given position

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

/* Given a reference (pointer to pointer) to the head of a list
   and an int inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

/* Given a reference (pointer to pointer) to the head of a list
   and a position, deletes the node at the given position */
void deleteNode(struct Node **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct Node *next = temp->next->next;

    // Unlink the node from linked list
    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
}

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

/* Drier program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 4);
    puts("\nLinked List after Deletion at position 4: ");
    printList(head);
    return 0;
}

Output:
Created Linked List:
 8  2  3  1  7
Linked List after Deletion at position 4:
 8  2  3  1
********************************************************************************************************

>>>Write a function to delete a Linked List

// C++ program to delete a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
    public:
    int data;
    Node* next;
};

/* Function to delete the entire linked list */
void deleteList(Node** head_ref)
{

/* deref head_ref to get the real head */
Node* current = *head_ref;
Node* next;

while (current != NULL)
{
    next = current->next;
    free(current);
    current = next;
}

/* deref head_ref to affect the real head back
    in the caller. */
*head_ref = NULL;
}

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Use push() to construct below list
    1->12->1->4->1 */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout << "Deleting linked list";
    deleteList(&head);

    cout << "\nLinked list deleted";
}
***************************************************************************************
>>> Progrm to find the length of a linked list.

Iterative Solution

1) Initialize count as 0
2) Initialize a node pointer, current = head.
3) Do following while current is not NULL
     a) current = current -> next
     b) count++;
4) Return count


// Iterative C++ program to find length
// or count of nodes in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */

class Node
{
    public:
    int data;
    Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node =new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Counts no. of nodes in linked list */
int getCount(Node* head)
{
    int count = 0; // Initialize count
    Node* current = head; // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    cout<<"count of nodes is "<< getCount(head);
    return 0;
}

// This is code is contributed by rathbhupendra

Output:
count of nodes is 5
********************************************************************************************
>>>Recursive Solution

>>> To find the length of a linked list.

int getCount(head)
1) If head is NULL, return 0.
2) Else return 1 + getCount(head->next)

Following are implementations of above algorithm to find count of nodes.

// Recursive C program to find length or count of nodes in a linked list

#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

/* Counts the no. of occurrences of a node
   (search_for) in a linked list (head)*/
int getCount(struct Node* head)
{
    // Base case
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + getCount(head->next);
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    printf("count of nodes is %d", getCount(head));
    return 0;
}
*****************************************************************************************************

>>> Write a function to get Nth node in a Linked List

Write a GetNth() function that takes a linked list and an integer index and returns the data value stored
in the node at that index position.
Example:

Input:  1->10->30->14,  index = 2
Output: 30

The node at index 2 is 30

Algorithm:

1. Initialize count = 0
2. Loop through the link list
     a. if count is equal to the passed index then return current
         node
     b. Increment count
     c. change current to point to next of the current.

Implementation:


// C++ program to find n'th
// node in linked list
#include <bits/stdc++.h>
#include <assert.h>
using namespace std;

// Link list node
class Node
{
    public:
    int data;
    Node* next;
};

/* Given a reference (pointer to
pointer) to the head of a list
and an int, push a new node on
the front of the list. */

void push(Node** head_ref, int new_data)
{

    // allocate node
    Node* new_node = new Node();

    // put in the data
    new_node->data = new_data;

    // link the old list
    // off the new node
    new_node->next = (*head_ref);

    // move the head to point
    // to the new node
    (*head_ref) = new_node;
}

// Takes head pointer of
// the linked list and index
// as arguments and return
// data at index

int GetNth(Node* head, int index)
{

    Node* current = head;

    // the index of the
    // node we're currently
    // looking at
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return(current->data);
        count++;
        current = current->next;
    }

    /* if we get to this line,
    the caller was asking
    for a non-existent element
    so we assert fail */
    assert(0);
}

// Driver Code
int main()
{

    // Start with the
    // empty list
    Node* head = NULL;

    // Use push() to construct
    // below list
    // 1->12->1->4->1
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    // Check the count
    // function
    cout << "Element at index 3 is " << GetNth(head, 3);
    return 0;
}


Output:

Element at index 3 is 4
Time Complexity: O(n)

Method 2- With Recursion

Algorithm:

Algorithm

getnth(node,n)
1. Initialize count = 1
2. if count==n
     return node->data
3. else
    return getnth(node->next,n-1)

Implementation:


// C program to find n'th node in linked list
// using recursion
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node* next;
};

/*  Given a reference (pointer to pointer) to
    the head of a list and an int, push a
    new node on the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Takes head pointer of the linked list and index
    as arguments and return data at index*/
int GetNth(struct Node *head,int n)
{
    int count = 1;

    //if count equal too n return node->data
    if(count == n)
    return head->data;

    //recursively decrease n and increase
    // head to next pointer
    return GetNth(head->next, n-1);
}

/* Drier program to test above function*/
int main()
{
     /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
     1->12->1->4->1  */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    /* Check the count function */
    printf("Element at index 3 is %d", GetNth(head, 3));
    getchar();
}

Output:
Element at index 3 is 1
Time Complexity: O(n)
******************************************************************************************************************
>>>Program for n’th node from the end of a Linked List
Given a Linked List and a number n, write a function that returns the value at the n’th node from the end of the Linked List.
For example, if the input is below list and n = 3, then output is “B”

linkedlist


Method 1 (Use length of linked list)
1) Calculate the length of Linked List. Let the length be len.
2) Print the (len – n + 1)th node from the beginning of the Linked List.

Double pointer concept : First pointer is used to store the address of the variable and second pointer used to store the address of the first pointer. If we wish to change the value of a variable by a function, we pass pointer to it. And if we wish to change value of a pointer (i. e., it should start pointing to something else), we pass pointer to a pointer.

f
// Simple C++ program to find n'th node from end
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct Node* head, int n)
{
    int len = 0, i;
    struct Node* temp = head;

    // count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }

    // check if value of n is not
    // more than length of the linked list
    if (len < n)
        return;

    temp = head;

    // get the (len-n+1)th node from the beginning
    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;

    cout << temp->data;

    return;
}

void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// Driver Code
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    // create linked 35->15->4->20
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);

    printNthFromLast(head, 4);
    return 0;
}
Output:
35
Following is a recursive C code for the same method.


void printNthFromLast(struct Node* head, int n)
{
    static int i = 0;
    if (head == NULL)
        return;
    printNthFromLast(head->next, n);
    if (++i == n)
        printf("%d", head->data);
}
Time Complexity: O(n) where n is the length of linked list.
Method 2 (Use two pointers)
Maintain two pointers – reference pointer and main pointer. Initialize both reference and main pointers to head.
First, move reference pointer to n nodes from head. Now move both pointers one by one until the reference pointer reaches the end. Now the main pointer will point to nth node from the end. Return the main pointer.


// Simple C++ program to find n'th node from end
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
  int data;
  struct Node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct Node *head, int n)
{
  struct Node *main_ptr = head;
  struct Node *ref_ptr = head;

  int count = 0;
  if(head != NULL)
  {
     while( count < n )
     {
        if(ref_ptr == NULL)
        {
           printf("%d is greater than the no. of "
                    "nodes in list", n);
           return;
        }
        ref_ptr = ref_ptr->next;
        count++;
     } /* End of while*/

     while(ref_ptr != NULL)
     {
        main_ptr = main_ptr->next;
        ref_ptr  = ref_ptr->next;
     }
     printf("Node no. %d from last is %d ",
              n, main_ptr->data);
  }
}

void push(struct Node** head_ref, int new_data)
{
  /* allocate node */
  struct Node* new_node = new Node();

  /* put in the data  */
  new_node->data  = new_data;

  /* link the old list off the new node */
  new_node->next = (*head_ref);

  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}

/* Drier program to test above function*/
int main()
{
  /* Start with the empty list */
  struct Node* head = NULL;
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);

  printNthFromLast(head, 4);
}

Output:
Node no. 4 from last is 35
Time Complexity: O(n) where n is the length of linked list.
======================================================================================================================
Find the middle of a given linked list in C and Java
Given a singly linked list, find middle of the linked list. For example, if given linked list is 1->2->3->4->5 then output should be 3.

If there are even nodes, then there would be two middle nodes, we need to print second middle element.
For example, if given linked list is 1->2->3->4->5->6 then output should be 4.


Method 1:
Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2.
Method 2:
Traverse linked list using two pointers. Move one pointer by one and other pointer by two.
When the fast pointer reaches end slow pointer will reach middle of the linked list.

Below image shows how printMiddle function works in the code :


#include<bits/stdc++.h>
using namespace std;

// Struct
struct Node
{
    int data;
    struct Node* next;
};

/* Function to get the middle of the linked list*/
void printMiddle(struct Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
    }
}

// Function to add a new node
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// A utility function to print a given linked list
void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Driver Code
int main()
{
    // Start with the empty list
    struct Node* head = NULL;

    // Iterate and add element
    for (int i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }

    return 0;
}

Output:
5->NULL
The middle element is [5]

4->5->NULL
The middle element is [5]

3->4->5->NULL
The middle element is [4]

2->3->4->5->NULL
The middle element is [4]

1->2->3->4->5->NULL
The middle element is [3]

Method 3:
Initialize mid element as head and initialize a counter as 0. Traverse the list from head, while traversing increment the counter
and change mid to mid->next whenever the counter is odd. So the mid will move only half of the total length of the list.


#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Function to get the middle of the linked list*/
void printMiddle(struct node *head)
{
    int count = 0;
    struct node *mid = head;

    while (head != NULL)
    {
        /* update mid, when 'count' is odd number */
        if (count & 1)
            mid = mid->next;

        ++count;
        head = head->next;
    }

    /* if empty list is provided */
    if (mid != NULL)
        printf("The middle element is [%d]\n\n", mid->data);
}


void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

// A utility function to print a given linked list
void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    int i;

    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }

    return 0;
}
Output:

5->NULL
The middle element is [5]

4->5->NULL
The middle element is [5]

3->4->5->NULL
The middle element is [4]

2->3->4->5->NULL
The middle element is [4]

1->2->3->4->5->NULL
The middle element is [3]
===============================================================================================
Write a function that counts the number of times a given int occurs in a Linked List
Given a singly linked list and a key, count number of occurrences of given key in linked list. For example, if given linked list is 1->2->1->2->1->3->1 and given key is 1, then output should be 4.

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
Method 1- Without Recursion
Algorithm:

1. Initialize count as zero.
2. Loop through each element of linked list:
     a) If element data is equal to the passed number then
        increment the count.
3. Return count.
Implementation:

// C++ program to count occurrences in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
};

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Counts the no. of occurrences of a node
(search_for) in a linked list (head)*/
int count(Node* head, int search_for)
{
    Node* current = head;
    int count = 0;
    while (current != NULL) {
        if (current->data == search_for)
            count++;
        current = current->next;
    }
    return count;
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    cout << "count of 1 is " << count(head, 1);
    return 0;
}

// This is code is contributed by rathbhupendra

Output:
count of 1 is 3
Time Complexity: O(n)
Auxiliary Space: O(1)



Method 2- With Recursion
This method is contributed by MY_DOOM.
Algorithm:

Algorithm
count(head, key);
if head is NULL
return frequency
if(head->data==key)
increase frequency by 1
count(head->next, key)

Implementation:

// C++ program to count occurrences in
// a linked list using recursion
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};
// global variable for counting frequeancy of
// given element k
int frequency = 0;

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Counts the no. of occurrences of a node
(search_for) in a linked list (head)*/
int count(struct Node* head, int key)
{
    if (head == NULL)
        return frequency;
    if (head->data == key)
        frequency++;
    return count(head->next, key);
}

/* Driver program to test count function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    cout << "count of 1 is " << count(head, 1);
    return 0;
}
Output:

count of 1 is 3

Below method can be used to avoid Global variable ‘frequency'(counter in case of Python 3 Code).


// method can be used to avoid
// Global variable 'frequency'

/* Counts the no. of occurrences of a node
(search_for) in a linked list (head)*/
int count(struct Node* head, int key)
{
    if (head == NULL)
        return 0;
    if (head->data == key)
        return 1 + count(head->next, key);
    return count(head->next, key);
}
The above method implements head recursion. Below given is the tail recursive implementation for the same. Thanks to Puneet Jain for suggesting this approach :

int count(struct Node* head, int key)
{
    if(head == NULL)
        return 0;

   int frequency = count(head->next, key);
   if(head->data == key)
     return 1 + frequency;

    // else
    return frequency;
}
Time Complexity: O(n)
===================================================================================================================
Detect loop in a linked list
Given a linked list, check if the linked list has loop or not. Below diagram shows a linked list with a loop.



Following are different ways of doing this:

Solution 1: Hashing
Approach:
Traverse the list one by one and keep putting the node addresses in a Hash Table. At any point, if NULL is reached then return false and if next of current node points to any of the previously stored nodes in Hash then return true.


// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;

    /* put in the data  */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
bool detectLoop(struct Node* h)
{
    unordered_set<Node*> s;
    while (h != NULL) {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (s.find(h) != s.end())
            return true;

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);

        h = h->next;
    }

    return false;
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;

    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;
}

Output:
Loop found

Complexity Analysis:

Time complexity: O(n).
Only one traversal of the loop is needed.
Auxiliary Space: O(n).

n is the space required to store the value in hashmap.

Solution 2: This problem can be solved without hashmap by modifying the linked list data-structure.
Approach: This solution requires modifications to the basic linked list data structure.

Have a visited flag with each node.
Traverse the linked list and keep marking visited nodes.
If you see a visited node again then there is a loop. This solution works in O(n) but requires additional information with each node.
A variation of this solution that doesn’t require modification to basic data structure can be implemented using a hash,
just store the addresses of visited nodes in a hash and if you see an address that already exists in hash then there is a loop.


// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node* next;
    int flag;
};

void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node;

    /* put in the data */
    new_node->data = new_data;

    new_node->flag = 0;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

// Returns true if there is a loop in linked list
// else returns false.
bool detectLoop(struct Node* h)
{
    while (h != NULL) {
        // If this node is already traverse
        // it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (h->flag == 1)
            return true;

        // If we are seeing the node for
        // the first time, mark its flag as 1
        h->flag = 1;

        h = h->next;
    }

    return false;
}

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;

    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;
}

Output:
Loop Found
Complexity Analysis:

Time complexity:O(n).
Only one traversal of the loop is needed.
Auxiliary Space:O(n).
n is the space required to store the value in hashmap.

Solution 3: Floyd’s Cycle-Finding Algorithm
Approach: This is the fastest method and has been described below:

Traverse linked list using two pointers.
Move one pointer(slow_p) by one and another pointer(fast_p) by two.
If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop.
Below image shows how the detectloop function works in the code :



Implementation of Floyd’s Cycle-Finding Algorithm:

// C++ program to detect loop in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

int detectLoop(Node* list)
{
    Node *slow_p = list, *fast_p = list;

    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}


Output:
Found Loop
Complexity Analysis:

Time complexity: O(n).
Only one traversal of the loop is needed.
Auxiliary Space:O(1).
There is no space required.
How does above algorithm work?
Please See : How does Floyd’s slow and fast pointers approach work?



References:
http://en.wikipedia.org/wiki/Cycle_detection
http://ostermiller.org/find_loop_singly_linked_list.html

Solution 4:

 Marking visited nodes without modifying the linked list data structure
 In this method, a temporary node is created.
 The next pointer of each node that is traversed is made to point to this temporary node.
 This way we are using the next pointer of a node as a flag to indicate whether the node has been traversed or not.
 Every node is checked to see if the next is pointing to a temporary node or not.
 In the case of the first node of the loop, the second time we traverse it
 this condition will be true, hence we find that loop exists.
 If we come across a node that points to null then loop doesn’t exist.


// C++ program to return first node of loop
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    struct Node* next;
};

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->next = NULL;
    return temp;
}

// A utility function to print a linked list
void printList(Node* head)
{
    while (head != NULL) {
        cout << head->key << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to detect first node of loop
// in a linked list that may contain loop
bool detectLoop(Node* head)
{

    // Create a temporary node
    Node* temp = new Node;
    while (head != NULL) {

        // This condition is for the case
        // when there is no loop
        if (head->next == NULL) {
            return false;
        }

        // Check if next is already
        // pointing to temp
        if (head->next == temp) {
            return true;
        }

        // Store the pointer to the next node
        // in order to get to it in the next step
        Node* nex = head->next;

        // Make next point to temp
        head->next = temp;

        // Get to the next node in the list
        head = nex;
    }

    return false;
}

/* Driver program to test above function*/
int main()
{
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    /* Create a loop for testing(5 is pointing to 3) */
    head->next->next->next->next->next = head->next->next;

    bool found = detectLoop(head);
    if (found)
        cout << "Loop Found";
    else
        cout << "No Loop";

    return 0;
}
Output:
Loop Found
Complexity Analysis:

Time complexity: O(n).
Only one traversal of the loop is needed.
Auxiliary Space: O(1).
There is no space required.
===========================================================================================================
>>Find length of loop in a linked list.
>>Function to check if a singly linked list is a palindrome>>
>> Remove duplicates from a linked list.
>>Remove duplicates from an unsorted linked list.
>>Swap nodes in a linked list without swapping data.

