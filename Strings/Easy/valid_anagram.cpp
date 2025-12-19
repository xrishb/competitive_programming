#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == 0) {
            return true;
        } 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool flag = false;

        if (s == t) {
            flag = true;
        }
        return flag;
    }
};