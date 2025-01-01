#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(std::string s) {
        int pos = 1;
        int size = s.length();
        string left, right;
        int c_left, c_right;
        int max = 0;

        while (pos < size) {
            left = s.substr(0, pos);
            right = s.substr(pos, size - pos);

            c_left = count(left.begin(), left.end(), '0');
            c_right = count(right.begin(), right.end(), '1');

            if (c_left + c_right > max) {
                max = c_left + c_right;
            }

            pos++;
        }

        return max;
    }
};
