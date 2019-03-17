#include "search.h"

int linearSearchIterative(long int arr[], int l, int r, long int value){
	while(l <= r){
		if(arr[l] == value)
			return l;
		else
			l++;
	}

	return -1;
}

int binarySearchIterative(long int arr[], int l, int r, long int value){
	int middle;
	while(l<=r){
		middle = l + ((r - l) / 2);

		if(arr[middle] == value)
			return middle;
		else if(arr[middle] < value)
			l = middle + 1;
		else
			r = middle - 1;
	}

	return -1;
}