/*
Author = mohamed boukerche
Date = 2 jul 2025
Status = !happy
*/
class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string str = std::to_string(x);
        if(x < 0)
        {
            return false;
        }
        string str_reverse = str;
        std::reverse(str_reverse.begin(),str_reverse.end());

        if(str_reverse == str )
        {
            return true;
        } 


        return false;
    }
    
};
