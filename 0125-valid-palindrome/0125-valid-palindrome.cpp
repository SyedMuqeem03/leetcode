class Solution {
public:
    bool isPalindrome(string s) 
    {
        int i,j,m,n;
        string str;
        for(i=0;i<s.length();i++){
        if(isalnum(s[i]))
        {
            str+= tolower(s[i]);
        }
    }
     for( m=0, n=str.length()-1;m<n;m++,n--)
        {
        if(str[m]!=str[n])
        return false;
        }
    return true;
}
};