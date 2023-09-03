#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {11, 5, 10, 16, 11};
	    int count = 0, k = 6;
	    int size = nums.size();
	    nums.erase(unique(nums.begin(), nums.end()), nums.end());
	    if(nums.size() < size && nums.size() == 1) nums.push_back(nums[0]);
	    for(auto e: nums) cout<<e<<endl;
	   // set <pair<int , int>> s;
        for(int i = 0; i<nums.size() - 1; i++){
	        for(int j = i+1; j<nums.size(); j++){
	            if(abs(nums[i] - nums[j]) == k){
	                  count++;
	               //   if(s.count({nums[j], nums[i]})== 0 && s.insert({nums[i], nums[j]}).second){
	               //         count++;
	               //     }
	               }
	        }
	    }
	    cout<<count<<endl;
	    return 0;
}
