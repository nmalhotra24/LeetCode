// Given an integer, write a function to determine if it is a power of three

bool isPowerOfThree(int n) {
  if (n <= 0) return false;
  while ((n%3 == 0) && (n > 0)) {
    n = n/3;
  }
  if (n == 1) {
    return true;
  } else {
    return false; 
  }
}
