#include <iostream>
using namespace std;

int main() {
     int t,x,y,a;
     // t = test case, x = age limit
     // y = strictly less than, a = current age
     cin >> t;
     while(t--) {
         cin >> x >> y >> a;
         if (a<y and a=>x) {
             cout << "YES" << endl;
         }
         else {
             cout << "NO" << endl;
       }
     }
       return 0;
}


