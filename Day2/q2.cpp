// # Day2 question 2 - (20. Valid Parentheses)

class Solution {
public:
    bool isValid(string S) {
        stack<char> s ;
        for(int i = 0 ; S[i] != '\0' ; i++)
        {
            if(S[i] == '{' || S[i] == '(' || S[i] == '[')
            {
                s.push(S[i]) ;
            }
            else
            {
                if(s.empty())
                return false ;
                switch(S[i])
                {
                    case ')' :
                    if(s.top() == '(')
                    s.pop() ;
                    else
                    return false ;
                    break ;

                    case ']' :
                    if(s.top() == '[')
                    s.pop() ;
                    else
                    return false ;
                    break ;

                    case '}' :
                    if(s.top() == '{')
                    s.pop() ;
                    else
                    return false ;
                    break ;

                }
            }
        }
        return s.empty() ;
    }
};