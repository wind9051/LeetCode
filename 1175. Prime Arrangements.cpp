/*
    Math
*/

class Solution {
public:
    const int Mod = 1e9+7;
    vector<bool> Prime;
    vector<int> P;
    //sieve of Eratosthenes
    int Eratosthenes(int n){
        Prime.resize(n+1, 0);
        for (int i = 2; i <= n; i++) {
            if (!Prime[i]) {
                P.push_back(i);
                for (int j = i+i; j <= n; j+=i) {
                    Prime[j] = 1;
                }
            }
        }
        return P.size();
    }

    //Full_Permutation
    //F(n) = n!
    long long Full_Permutation(int n) {
        long long sum = 1;
        for (int i = 1; i <= n;i++) {
            sum = (sum*i) % Mod;
        }
        return sum;
    }

    int numPrimeArrangements(int n) {
        int L = Eratosthenes(n);
        return (Full_Permutation(n-L)*Full_Permutation(L))%Mod;
    }
};
