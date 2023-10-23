class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0;i<operations.size();i++){
            string str = operations[i];

            if(str == "++X"){
                ++x;
            }
            if(str == "X++"){
                x++;
            }
            if(str == "--X"){
                --x;
            }
            if(str == "X--"){
                x--;
            }
        }

        return x;
    }
};