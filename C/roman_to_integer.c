// Given a roman numeral, convert it to an integer.

/* Symbols for Roman Numerals
 I - 1
 V - 5
 X - 10
 L - 50
 C - 100
 D - 500
 M - 1000
 */
int romanToInt(char* s) {
    if (s == NULL) return 0;
    int length = strlen(s);
    int result = 0;
    int i = 0;
    while (i < length) {
        switch(s[i]) {
            case 'M':
                result = result + 1000;
                break;
            case 'D':
                result = result + 500;
                break;
            case 'C':
                if (s[i+1] == 'D' || s[i+1] == 'M') {
                    result = result - 100;
                } else {
                    result = result + 100;
                }
                break;
            case 'L':
                result = result + 50;
                break;
            case 'X':
                if (s[i+1] == 'L' || s[i+1] == 'C') {
                    result = result - 10;
                } else {
                    result = result + 10;
                }
                break;
            case 'V':
                result = result + 5;
                break;
            case 'I':
                if (s[i+1] == 'V' || s[i+1] == 'X') {
                    result = result - 1;
                } else {
                    result = result + 1;
                }
                break;
            default:
                break;
        }
        i++;
    }
    return result;
}