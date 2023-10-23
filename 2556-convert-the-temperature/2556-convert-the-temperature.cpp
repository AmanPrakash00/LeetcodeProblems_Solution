class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double fahr = 1.80*celsius + 32.00;
        double kelvin = celsius + 273.15;

        vector<double> ans(2) ;
        ans[0] = kelvin;
        ans[1] = fahr;
        return ans;
    }
};