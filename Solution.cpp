class Solution {
    bool is_vowel(char letter) {
        string v = "aeiou";
        return v.find(letter) != string::npos;
    }
    
public:
    bool halvesAreAlike(string s) {
        for (char& c : s)
            c = tolower(c);        
        int n = s.size();
        int first_half = 0, second_half = 0;
        for (int i = 0; i < n / 2; i++)
            first_half += is_vowel(s[i]);
        for (int i = n / 2; i < n; i++)
            second_half += is_vowel(s[i]);
        return first_half == second_half;
    }
};
