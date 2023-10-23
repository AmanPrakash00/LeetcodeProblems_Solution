class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double fahr = 1.80*celsius + 32.00;
        double kelvin = celsius + 273.15;

        vector<double> ans ;
        ans.push_back(kelvin);
        ans.push_back(fahr);
        return ans;
    }
};