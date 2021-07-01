// Kadane's algorithm
#include <iostream>
#include <vector>
#include <algorithm>

int maxSequence(const std::vector<int>& arr){
	int curSum = 0;
	int maxSum = 0;
	
	if(arr.size() == 0){ return 0; }
	std::vector<int>::iterator it;
	for(auto &it : arr){
		curSum = std::max(it, curSum+it);
		maxSum = std::max(maxSum, curSum);
	}
	return maxSum;
}

int main(){

	std::vector<int> n = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int ans = maxSequence(n);
	
	std::cout << ans << std::endl;
}
