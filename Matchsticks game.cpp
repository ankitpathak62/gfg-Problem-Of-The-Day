#include <bit/stdc++.h>
using namespace std;
class Solution{
  public:
    int matchGame(long long N) {
        // code here
         int res=N%5;
        if(res==0){
            return -1;
        }
        else{
            return res;
        }
    }
};

int main() {
  int t;
  cin>>t;
  while (t--) {
    long long N;
    cin>>N;
    Solution ob;
    cout<<ob.matchGame(N) << endl:
  }
  return 0;
}
