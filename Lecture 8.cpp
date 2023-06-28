#include <bits/stdc++.h>
using namespace std;

//generate parenthesis

// void solve(string op, int open, int close, vector<string> &ans) {
//     if (open == 0 && close == 0){
//         ans.push_back(op);
//         return;
//     }

//     if (open == close){
//         string op1 = op;
//         op1.push_back('(');
//         solve(op1, open - 1, close, ans);
//     } else if (open == 0) {

//         string op1 = op;
//         op1.push_back(')');
//         solve(op1, open, close - 1, ans);
//     } else if (close == 0) {

//         string op1 = op;
//         op1.push_back('(');
//         solve(op1, open - 1, close, ans);
//     } else {
//         string op1 = op;
//         string op2 = op;
//         op1.push_back('(');
//         op2.push_back(')');
//         solve(op1, open - 1, close, ans);
//         solve(op2, open, close - 1, ans);
//     }
// }

// vector<string> generateParenthesis(int n) {
//     int open = n;
//     int close = n;
//     vector<string> ans;
//     string op = "";
//     solve(op, open, close, ans);
//     return ans;
// }

// letter combination of a phone

// void solve(string digits,string str,int i,string phone[],vector<string> &ans) {
//     if(i>=digits.size()) {   
//         if(str.length())
//         ans.push_back(str);
//         return;
//     }

//     for(int j=0;j<phone[digits[i]-48].size();j++) {
//         str.push_back(phone[digits[i]-48][j]);
//         solve(digits,str,i+1,phone,ans);
//         str.pop_back();
//     }

// }

// vector<string> letterCombinations(string digits) {
//     vector<string> ans;
//     string phone[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     solve(digits,"",0,phone,ans);
//     return ans;
// }

// permutation

// void solve(vector<int> &nums, int ind, vector<vector<int>> &ans, int max) {
//     if (ind >= max) {
//         ans.push_back(nums);
//         return;
//     }
//     for (int i = ind; i < max; i++) {
//         swap(nums[ind], nums[i]);
//         solve(nums, ind + 1, ans, max);
//         swap(nums[i], nums[ind]);
//     }
// }

// vector<vector<int>> permute(vector<int> &nums) {
//     vector<vector<int>> ans;
//     int max = nums.size();
//     solve(nums, 0, ans, max);
//     return ans;
// }

// subset or power set

void solve(int n, vector<vector<int>> &ans, vector<int> &sans, int i, vector<int> &nums) {
    if (i == n) {
        ans.push_back(sans);
        return;
    }

    sans.push_back(nums[i]);
    solve(n, ans, sans, i + 1, nums);
    sans.pop_back();
    solve(n, ans, sans, i + 1, nums);
}

vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> sans;

    solve(nums.size(), ans, sans, 0, nums);
    return ans;
}

int main() {
    return 0;
}