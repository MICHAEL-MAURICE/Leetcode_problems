class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    if (str1==str2) return str1;
        int len1 = str1.length();
        int len2 = str2.length();
        if (len1 < len2){
        	string tmp = str1;
        	str1 = str2;
        	str2 = tmp;
        	int tmpLen = len1;
        	len1 = len2;
        	len2 = tmpLen;
        }
        
        if (str1.substr(0, len2)!=str2){
        	return "";
        }
        return gcdOfStrings(str1.substr(len2), str2);
    }
};