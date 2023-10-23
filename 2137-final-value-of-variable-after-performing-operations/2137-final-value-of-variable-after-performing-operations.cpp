class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0;i<operations.size();i++){
            string str = operations[i];

            if(str == "++X"){
                ++x;
                continue;
            }
            if(str == "X++"){
                x++;
                continue;
            }
            if(str == "--X"){
                --x;
                continue;
            }
            if(str == "X--"){
                x--;
                continue;
            }
        }

        return x;
    }
};