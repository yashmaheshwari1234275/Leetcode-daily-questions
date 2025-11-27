class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> values;   

    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
          
            int b = values.top(); values.pop();
            int a = values.top(); values.pop();
            
            int result = 0;
            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") result = a / b; 

            values.push(result);
        } else {
            values.push(stoi(token));
        }
    }
    
    return values.top();
}
};