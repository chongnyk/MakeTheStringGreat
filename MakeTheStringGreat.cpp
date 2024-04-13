class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        while(i < s.size()){
            bool adj = false;
            if(s[i] < 91){ // if uppcase s[i] >= 65 && s[i] <= 90
                if(s[i] == s[i + 1] - 32) adj = true;
            }
            else { // if lowercase s[i] >= 97 && s[i] <= 122
                if(s[i] == s[i + 1] + 32) adj = true;
            }

            if(adj){
                //int temp = i;
                s.erase(i, 2);
                i = (i == 0) ? i : --i;
            }
            else{
                i++;
            }
            //cout << i << ' ' << s << '\n';
        }
        return s;
    }
};
