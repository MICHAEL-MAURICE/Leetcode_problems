class Solution {
public:
int countCharacters(vector<string>& words, string chars) {
       /* vector<int> freq(26,0);
        for(auto ch : chars){
            int index = ch - 'a';
            freq[index]++;
        }
      
        int count = 0;
        for(auto str : words){
            vector<int> temp = freq;
            int i;
            for(i = 0; str[i] != '\0'; i++){
                int index = str[i] - 'a';
                if(temp[index] == 0)break;
                temp[index]--;
            }
            if(str[i] == '\0')
                count += i;
        }
        
        return count;*/
    
    map<char,int>mm;
    for(auto a:chars){
       if( mm[a])
           mm[a]++;
        else
            mm[a]=1;
    }
    int c=0;
    int i=0;
    for(auto s:words){
        map<char,int>m=mm;
        i=0;
        for (auto c:s){
            if(m[c]){
                i++;
                m[c]--;
            }
            else{
                 i=0;
                break;
               
            }
        }
        if(i==s.length())
        c+=s.length();
    }
    return c;
    }
};