//Function to reverse the order of a string

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Reverve the characters between the pointers pBegin and pEnd
void ReverseWord (char* pBegin, char* pEnd) {
  char temp;
  if (pBegin == NULL || pEnd == NULL) return;

  while (pBegin < pEnd) {
    temp = *pBegin;
    *pBegin = *pEnd;
    *pEnd = temp;

    pBegin++;
    pEnd--;
  }
}

//Reverse all the words in the sentence
void ReverseSentence (char* data) {
  char* begin = data; //points to the start position of the word
  char* end = data; //points to the end position of the word

  if (data == NULL) return;
  while (*end != '\0') { //while the string does not end
    if (*end == ' ') { //have a word
      ReverseWord(begin,end-1);
      end++; //move to the next word
      begin = end;
    } else {
      end++;
    }
  }
  ReverseWord(begin,end-1); //reverse the last word
}

//main 
int main() {
  char str[] = "Hello";
  printf("%s\n",str);
  ReverseSentence(str);
  printf("%s\n",str);
  return 0;
}
