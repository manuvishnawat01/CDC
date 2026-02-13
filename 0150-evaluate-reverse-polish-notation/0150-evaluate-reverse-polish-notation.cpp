class Solution {
public:
    bool isOperator(const string& c) {
        return (c == "+" || c == "-" || c == "*" || c == "/");
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto c:tokens){
            if(isOperator(c)){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(c == "+") st.push(b+a);
                else if(c == "-") st.push(b-a);
                else if(c == "*") st.push(b*a);
                else st.push(b/a);
             }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};