class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        {
            return false;
        }

        string s;
        s=to_string(x);
        stack<char> st;
        int n;
        n=s.length();

        int i;

        for(i=0;i<n;i++)
        {
            st.push(s[i]);
        }

        for(i=0;i<n;i++)
        {
            
            if(st.top()!=s[i])
            {
                return false;
            }
            
            st.pop();
        }
        
        return true;
    }
};
