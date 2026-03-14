#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class solution{
public:
      
     int Unique(vector<int> & nums){
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:nums){
            if( it%2==0 && mp[it]==1){
                return it;
            }
        }
        return -1;
     }

};
int main(){
    solution S;
    vector<int> nums={4,4};
    cout<<S.Unique(nums)<<endl;
    return 0;

}