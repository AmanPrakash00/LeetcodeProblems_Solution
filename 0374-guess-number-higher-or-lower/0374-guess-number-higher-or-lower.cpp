/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s = 1;
        int e = n;

        while(s<=e){
            //important point if you use (s + e) -> than may be your int out of range 
            int pick = s + (e - s) / 2;
            int ans = guess(pick);

            if(ans == 0){
                return pick;
            }else if(ans == -1){
                e = pick -1;
            }else{
                s = pick + 1;
            }
        }
        return 0;
    }
};