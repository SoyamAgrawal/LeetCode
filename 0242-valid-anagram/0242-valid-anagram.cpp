class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int arr[26] = {0};
        
        for(int i =0;i<s.size();i++){
            arr[int(s[i]-97)] ++;
        }
        for(int i =0;i<t.size();i++){
            arr[int(t[i]-97)] --;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};