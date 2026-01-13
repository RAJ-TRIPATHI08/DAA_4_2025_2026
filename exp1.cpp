
#include <bits/stdc++.h>
using namespace std;

int ops = 0;
void complexRec(int n) {

    ops++;
   if (n <= 2) {
       return;
   }


   int p = n;
   while (p > 0) {
        ops++;
       vector<int> temp(n);
       for (int i = 0; i < n; i++) {
            ops++;
           temp[i] = i ^ p;
       }
       p >>= 1;
   }


   vector<int> small(n);
   for (int i = 0; i < n; i++) {
        ops++;
       small[i] = i * i;
   }


   if (n % 3 == 0) {
       reverse(small.begin(), small.end());
       ops++;
   } else {
       reverse(small.begin(), small.end());
       ops++;
   }


   complexRec(n / 2);
   complexRec(n / 2);
   complexRec(n / 2);
}


int main()
{
    complexRec(8);
    cout << ops << endl;
    return 0;
}