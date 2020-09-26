#include <iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
       int n = nums.size();
      for( int i=0; i<n; i++){
          if( abs(nums[i]) >=1 && abs(nums[i]) <= n){
              if(nums[abs(nums[i])-1] > 0)
                  nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
              else
                  return abs(nums[i]) ;
          }
         
      }
      int res = 0;
      for( int i =0; i<n; ++i){
          if (nums[i] > 0){
              res = nums[i];
              break;
          }
      }
      return res;
   }

int main(int argc, const char * argv[]) {
    vector<int> v = {3,1,3,4,2};
    cout<<findDuplicate(v)<<endl;
    return 0;
}
