#include <bits/stdc++.h>
class Solution {
public:
      string simplifyPath(string path) {
        vector<string> stack;
        stringstream check(path);
        string current;

        while (getline(check, current, '/')) {
            if (current.empty() || current == ".") continue;  

            if (current == "..") {
                if (!stack.empty()) stack.pop_back();  
            } else {
                stack.push_back(current);  
            }
        }

        string result = "/";
        for (int i = 0; i < stack.size(); i++) {
            if (i > 0) result += "/";
            result += stack[i];
        }

        return result;
    }
};