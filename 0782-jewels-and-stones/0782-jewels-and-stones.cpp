class Solution {
public:
    /*
    T.C -> O(n^2)
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(int i = 0;i<jewels.size();i++){
            for(int j = 0;j<stones.size();j++){
                if(jewels[i] == stones[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    */

    // using map
    int numJewelsInStones(string jewels, string stones){
        unordered_map<char,int> m;
        for(int i=0;i<stones.size();i++){
            m[stones[i]]++;
        }
        int cnt = 0;
        for(int i=0;i<jewels.size();i++){
            char ch = jewels[i];
            if(m.find(ch) != m.end()){
                cnt += m[ch];
            }
        }

        return cnt;
    }

};