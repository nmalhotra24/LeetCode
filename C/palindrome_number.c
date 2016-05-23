// Determine whether an integer is a palindrome.

bool isPalindrome(int x) {
    int reverse = 0, digit = x;
    if (x < 0) return false;
    while (x) {
        reverse = (reverse*10) + (x%10);
        x = x/10;
    }
    if (reverse == digit) {
        return true;
    } else {
        return false;
    }
}