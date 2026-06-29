#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> arr){

	int start = 0;
	int end = arr.size()-1;

	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	return arr;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {
	
  vector<int> temp;

	int i = n-1;
	int j = m-1;
	int carry = 0;

	while(i>=0 && j>=0){
		int sum = a[i] + b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		temp.push_back(sum);
		i--;
		j--;
	}
	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		temp.push_back(sum);
		i--;
	}
	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		temp.push_back(sum);
		j--;
	}
	while(carry!=0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		temp.push_back(sum);
	}
  
  return reverse(temp);
}

void printArray(vector<int> &arr){
  
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {0,2,4,6};

    cout<<"The first array is: ";
    printArray(nums1);

    cout<<"The second array is: ";
    printArray(nums2);

    vector<int> ans = findArraySum(nums1, 5, nums2, 4);
    cout<<"The sum of both arrays is: ";
    printArray(ans);

    return 0;
}
