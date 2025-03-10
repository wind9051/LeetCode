class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        for (int i = 1; i <= n; i++) {
            if (!(i % 15)) ret.push_back("FizzBuzz");
            else if (!(i % 3)) ret.push_back("Fizz");
            else if (!(i % 5)) ret.push_back("Buzz");
            else ret.push_back(to_string(i));
        }
        return ret;
    }
};
/*
    Math, 數學 3倍 5倍
    // divisible 3, 5
*/
