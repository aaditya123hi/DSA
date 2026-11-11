class Solution {
public:
    string truncateSentence(string s, int k) {
        string arr ="";
            for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                k--;
                if(k==0){
                    break;
                }
            
            }
            
                arr.push_back(s[i]);
            
        }
        
        return arr;
    }
};