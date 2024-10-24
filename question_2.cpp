#include <iostream>
#include <stack>
using namespace std;

void printNGE(int arr[], int n) {
    stack<int> st;
    int nge[n];
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " --> " << nge[i] << endl;
    }
}
int main() {
    int arr[] = {3,6,10,12,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}
