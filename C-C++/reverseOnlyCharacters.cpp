class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j) {
            if(((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')) && ((s[j] <= 'Z' && s[j] >= 'A') || (s[j] <= 'z' && s[j] >= 'a'))) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i += 1;
                j -= 1;
            } else if(((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')) && !((s[j] <= 'Z' && s[j] >= 'A') || (s[j] <= 'z' && s[j] >= 'a'))) {
                j -= 1;
            } else if(!((s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a')) && ((s[j] <= 'Z' && s[j] >= 'A') || (s[j] <= 'z' && s[j] >= 'a'))) {
                i += 1;
            } else {
                i += 1;
                j -= 1;
            }
        }
        return s;
    }
};
