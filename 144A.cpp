#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxi = *max_element(arr.begin(), arr.end());
    int mini = *min_element(arr.begin(), arr.end());
    
    int last_occurrence_mini = -1;
    int first_occurrence_maxi = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxi) {
            first_occurrence_maxi = i;
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == mini) {
            last_occurrence_mini = i;
            break;
        }
    }
    
    int result = (n - 1) - last_occurrence_mini + first_occurrence_maxi;  // Corrected this line
    
    bool flag = true;
    if (n == 1) {
        cout << 0 << endl;
    } else if (n == 2) {
        if (arr[0] >= arr[1]) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } else if (last_occurrence_mini >= first_occurrence_maxi) {  // Changed '>' to '>='
        cout << result << endl;
    } else {
        cout << result - 1 << endl;  // Corrected this line
    }
  
    return 0;
}
