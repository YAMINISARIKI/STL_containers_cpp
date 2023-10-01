#include<iostream>
#include<stack>
using namespace std;
void stack_ele(stack<int> &st)
{
    if(st.empty())return;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main() {
    stack<int>st;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
    }
    stack_ele(st);
}
