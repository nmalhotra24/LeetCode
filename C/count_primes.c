// Count the number of prime numbers less than a non-negative number, n.
// Method: Sieve of Eratosthenes

int countPrimes(int n) {
    // Create an array of consecutive integers from 2 to n
    bool prime[n];
   
    // Initialize all the array entries to true
    for (int i = 2; i < n; i++) {
        prime[i] = true;
    }
    int count = 0; // count the number of primes
    for (int i = 2; i < n; i++) {
        // if prime[i] is not changed, then it is prime
        if (prime[i] == true) {
            count++;
            // update all the multiples of i
            for (int j = i+i; j < n; j = j+i) {
                prime[j] = false;
            }
        }
    }
    return count;
}