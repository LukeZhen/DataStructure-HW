#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int element) {
    if (st.empty()) {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(topElement);
}

void reverseStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }

    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topElement);
}

int main() {
    stack<int> st;
    st.push(28);
    st.push(29);
    st.push(30);
    st.push(31);
    cout << "Original stack: ";
    stack<int> tempSt1 = st;
    while (!tempSt1.empty()) {
        cout << tempSt1.top() << " ";
        tempSt1.pop();
    }
    cout << endl;
    reverseStack(st);
    cout << "Reversed stack: ";
    stack<int> tempSt2 = st;
    while (!tempSt2.empty()) {
        cout << tempSt2.top() << " ";
        tempSt2.pop();
    }
    cout << endl;
    return 0;
}
