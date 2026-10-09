class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();

        int ans=0;
        int x=0;

        int i=0;
        while(i<n){
            if(s[i]=='('){
                x++;
            }
            else{
                if (i < n - 1 && s[i + 1] == ')') {
                    ++i;
                } else {
                    ++ans;
                }
                if (x == 0) {
                    ++ans;
                } else {
                    --x;
                }
            }
            i++;
        }
        ans += x<<1;
        return ans;
    }
};