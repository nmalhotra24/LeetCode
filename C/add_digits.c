/* Given a non-negative integer num, repeatedly add all its digits until the result has
   only one digit.
   For example:
     Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one 
     digit, return it.
*/

// Longer method
int addDigits(int num) {
    int result = 0;
    while (num > 0) {
        result = result + (num % 10);
        num = num / 10;
        if (result >= 10) {
            result = result / 10 + result % 10;
        }
    }
    return result;
}

// Shorter method
int addDigits(int num) {
  int sum;
  if (num) {
    sum = (num - 1) % 9 + 1;
  }
  return sum;
}
