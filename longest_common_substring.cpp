#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the longest common substring and display the DP table
void longestCommonSubstring(string str1, string str2) {
    int m = str1.length();
    int n = str2.length();

    // DP table initialization
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    int maxLength = 0;
    int endIndexStr1 = 0;  // To store the end index of the longest common substring in str1

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;  // extend the substring
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndexStr1 = i - 1;  // Update the end index of longest common substring
                }
            } else {
                dp[i][j] = 0;  // No common substring ends at this position
            }
        }
    }

    // Display the DP table
    cout << "Dynamic Programming Table:" << endl;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Extract and display the longest common substring
    if (maxLength > 0) {
        string longestCommonSubstr = str1.substr(endIndexStr1 - maxLength + 1, maxLength);
        cout << "\nLongest Common Substring: " << longestCommonSubstr << endl;
    } else {
        cout << "\nNo common substring found." << endl;
    }
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    longestCommonSubstring(str1, str2);

    return 0;
}
