// good approch
// sieve_of_eratosthenes.cpp
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n , true);

        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i]){
                count++;
                for(int j = i * 2; j < n; j += i){
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};




//better approch

class Solution {
public:
    int countPrimes(int n) {

        vector<int> prime(n + 1, true);
        int count = 0;

        if (n <= 2)
            return 0;

        for (int p = 2; p * p < n; p++) {
            if (prime[p]) {
                for (int i = p * p; i < n; i+=p) {
                    prime[i] = false;
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                count++;
            }
        }
        return count;
    }
};
