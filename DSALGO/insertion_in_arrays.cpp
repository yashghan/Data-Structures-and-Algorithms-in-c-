#include <iostream>
using namespace std;

int main(){
     int arr[100];
	 int len=0;
	 cout << "Enter length of your array" << endl;
	 cin >> len;
     for(i = 0; i < len; i++){
          cin >> A[i];
		  cout << "Your array is: " << A[i] << " , " << endl;
     }
     cout << "Enter the position of insertion" << endl;
     cin >> pos;

     cout << "Enter the number you want to insert" << endl;
     cin >> num;

     for(i = pos-1; i < len+1; i++){
        //pos=4, (hence i=3), i < 7
        A[i+1] = A[i];

	 }
	 A[pos-1] = A[num];

	      for(i = 0; i < len; i++){
          cin >> A[i];
		  cout << "Your current array is: " << A[i] << " , " << endl;
     }

	 len = len+1;
	 cout << "The current length of the array is: " << len << endl;
	 return 0;
}
