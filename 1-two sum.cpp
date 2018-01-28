class Solution {
public:	
	vector<int> twoSum(vector<int>& nums, int target) {		
		vector<int> result;
		for (int i = 0; i < nums.size() - 1; i++) {
			for (int j = i+1; j < nums.size(); j++) {
				int temp = 0;
				temp = nums[i] + nums[j];
				if (temp == target) {
					result.push_back(i);
					result.push_back(j);
				}
				
			}
			
		}
	
	for (vector<int>::iterator iter = result.begin(); iter != result.end(); ) {
			cout << "[" << *iter << "," << *(iter+1) << "]" << endl;
			iter = iter + 2;
		}
		return result;
	}
};
