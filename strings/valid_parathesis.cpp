/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true
Example 2:
Input: s = "()[]{}"
Output: true
Example 3:
Input: s = "(]"
Output: false
Example 4:
Input: s = "([])"
Output: true
Example 5:
Input: s = "([)]"
Output: false */
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    vector<char> s;
    int size;
    
    cout << "Enter size: ";
    cin >> size;
    
    cout << "Enter input: ";
    char ele; // Fixed: Changed from int to char
    for(int i = 0; i < size; i++) {
        cin >> ele;
        s.push_back(ele);
    }
    
    stack<char> st;
    bool isValid = true; // Added a flag to track validity
    
    for(int i = 0; i < size; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } 
        else {
            if(st.empty()) {
                isValid = false;
                break; // Stop checking, it's invalid
            }
            
            if((s[i] == ')' && st.top() == '(') || 
               (s[i] == '}' && st.top() == '{') || 
               (s[i] == ']' && st.top() == '[')) {
                st.pop();
            } 
            else {
                isValid = false;
                break; // Mismatched brackets
            }
        }
    }
    
    // Check if stack is empty at the end
    if (!st.empty()) {
        isValid = false;
    }

    // Fixed: Print the result instead of returning it to the OS
    if (isValid) {
        cout << "Valid parentheses" << endl;
    } else {
        cout << "Invalid parentheses" << endl;
    }

    return 0; // Standard successful exit code
}