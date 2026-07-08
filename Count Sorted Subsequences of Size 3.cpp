#include <vector>

using namespace std;

class Solution {
  public:
    int countTriplets(vector<int> &arr) {
        // code here
        int n=arr.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 
                if(arr[i] < arr[j]){
                    for(int k = j + 1; k < n; k++){
                        if(arr[j] < arr[k]){
                            c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};
