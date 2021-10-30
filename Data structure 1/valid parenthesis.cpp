class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '(' or s[i] == '{' or s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (!st.empty())
            {
                if (s[i] == '}' or s[i] == ']' or s[i] == ')')
                {
                    if ((s[i] == '}' and st.top() == '{') or (s[i] == ')' and st.top() == '(') or (s[i] == ']' and st.top() == '['))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else if (st.empty())
            {
                st.push(s[i]);
            }
        }
        if (!st.empty())
        {
            return false;
        }
        return true;
    }
};