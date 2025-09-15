#include <iostream>
#include <string>
#include <vector>
using namespace std;

int naivePatternMatch(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    
    if (m == 0) {
        return 0; // Empty pattern is found at index 0
    }
    
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i;
        }
    }
    
    return -1; // Pattern not found
}

// Function to display results
void displayTestResult(const string& text, const string& pattern, int result) {
    cout << "Text: \"" << text << "\"" << endl;
    cout << "Pattern: \"" << pattern << "\"" << endl;
    
    if (result == -1) {
        cout << "Result: Pattern not found (-1)" << endl;
    } else {
        cout << "Result: Pattern found at index " << result << endl;
    }
    cout << endl;
}

int main() {
    
    // Case 1: Pattern at the beginning
    string text1 = "Welcome to pattern matching";
    string pattern1 = "Welcome";
    int result1 = naivePatternMatch(text1, pattern1);
    cout << "Case 1 - Pattern at the beginning:" << endl;
    displayTestResult(text1, pattern1, result1);
    
    // Case 2: Pattern at the end
    string text2 = "Data structures and algorithms";
    string pattern2 = "algorithms";
    int result2 = naivePatternMatch(text2, pattern2);
    cout << "Case 2 - Pattern at the end:" << endl;
    displayTestResult(text2, pattern2, result2);
    
    // Case 3: Pattern not present
    string text3 = "This is a sample text for testing";
    string pattern3 = "Missing";
    int result3 = naivePatternMatch(text3, pattern3);
    cout << "Case 3 - Pattern not present:" << endl;
    displayTestResult(text3, pattern3, result3);
    
    // Case 4: Empty pattern
    string text4 = "Non-empty text";
    string pattern4 = "";
    int result4 = naivePatternMatch(text4, pattern4);
    cout << "Case 4 - Empty pattern:" << endl;
    displayTestResult(text4, pattern4, result4);
    
    // Case 5: Pattern in the middle
    string text5 = "I like pattern matching";
    string pattern5 = "pattern";
    int result5 = naivePatternMatch(text5, pattern5);
    cout << "Case 5 - Pattern in the middle:" << endl;
    displayTestResult(text5, pattern5, result5);
    
    
    return 0;
}


