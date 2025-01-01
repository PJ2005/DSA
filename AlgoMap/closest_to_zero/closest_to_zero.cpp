#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(abs(nums[i]) < abs(closest)){
                closest = nums[i];
            }
            else if(abs(nums[i]) == abs(closest)) {
                if(nums[i] > 0){
                    closest = nums[i];
                }
            }
        }
        return closest;
    }
};

int main() {
    Solution solution;
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    
    if (!infile.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    if (!outfile.is_open()) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {
        vector<int> nums;
        line = line.substr(1, line.size() - 2);
        stringstream ss(line);
        string temp;
        
        while (getline(ss, temp, ',')) {
            nums.push_back(stoi(temp));
        }
        
        int result = solution.findClosestNumber(nums);
        outfile << result << endl;
    }
    
    infile.close();
    outfile.close();
    
    return 0;
}