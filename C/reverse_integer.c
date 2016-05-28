/* Reverse digits of an integer.
 
 Example1: x = 123, return 321
 Example2: x = -123, return -321
*/

int reverse(int num)
{
    int inverse = 0;
    while (num != 0) {
        if (inverse > INT_MAX/10 || inverse < INT_MIN/10) return 0;
        inverse = inverse*10 + num%10;
        num = num/10;
    }
    return inverse;
}
