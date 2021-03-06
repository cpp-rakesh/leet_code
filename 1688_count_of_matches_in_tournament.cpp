/*
  Leetcode.com
  Problem No: 1688
  Problem: Count of Matches in Tournament
  Author: cpp.rakesh@gmail.com
  Date: 18/04/2021
*/

#include <bits/stdc++.h>

/*
  one winner after n - 1 defeats
 */

class Solution {
public:
    int numberOfMatches(int n) {
        return n - 1;
    }
};

int main() {
    Solution s;
    printf("%d\n", s.numberOfMatches(7));
    printf("%d\n", s.numberOfMatches(14));

    return 0;
}
