int Solution::braces(string A) {
    stack<char> s;
    for(int i=0;i<A.length();i++){
        if(A[i] == ')'){
            char top = s.top();
            s.pop();
            int flag = 1;
            while(top!='('){
                if(top == '+' || top == '-' || top == '*' || top =='/'){
                    flag = 0;
                }
                top = s.top();
                s.pop();
            }
            if(flag){
                return flag;
            }
        }
        else{
            s.push(A[i]);
        }
    }
    return 0;
}
