#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution{
public: 
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    long long maxgcd(vector<int> & nums){
        int n=nums.size();
        vector<int> prefixgcd(n);
        int count=0;
        for(int i=0;i<n;i++){
            count=max(nums[i],count);
            prefixgcd[i]=gcd(nums[i],count);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        long long total=0;
        int left=0;
        int right=n-1;
        while(left<right){
            total=gcd(prefixgcd[left],prefixgcd[right]);
            left++;
            right--;
        }
        return total;
    }
};

int main(){
    solution S;
    vector<int> nums={2,4,6,8};
    cout<<S.maxgcd(nums)<<endl;
    return 0;

}