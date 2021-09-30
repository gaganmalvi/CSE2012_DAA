#include <iostream>
using namespace std;
void MinMaxIterative(int arr[],int n){
	int min=arr[0];
	int max=arr[0];
	int i;
	int counter = 0;
	for(i=1;i<n;i++){
		if(arr[i]>max) {
		    counter++;
		    max=arr[i];
		}
		if(arr[i]<min) {
		    counter++;
		    min=arr[i];
		}
	}
	cout << "[!] Maximum element in the given array is: " << max << endl;
	cout << "[!] Minimum element in the given array is: " << min << endl;
	cout << "[!] Number of comparisons in iterative approach: " << counter << endl;
}

int main(){
	int n,i,j;
	cout << "[*] Enter the number of elements in the array: ";
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++){
		cout << "[*] Enter the element no. " << i + 1 << " of the array: ";
		cin>>arr[i];
	}
	MinMaxIterative(arr,n);
	cout << "[*] Counter value: " << counter;
	return 0;
}
