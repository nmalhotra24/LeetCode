// Power of Two
// Given an integer, write a function to determine if it is a power of two.

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    while ((n % 2 == 0) && (n >0)) {
        n = n/2;
    }
    
    if (n == 1) {
        return true;
    } else {
        return false;
    }
}
