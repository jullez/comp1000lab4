#include <stdio.h>

int main(void) {
 int code1, code2, code3, code4, code5, code6, code7, code8, code9, code10, code11, code12;
    printf("Enter the first 12 digits of ISBN thing");
   scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d",&code1,&code2,&code3,&code4,&code5,&code6,&code7,&code8,&code9,&code10,&code11,&code12);
  int final=code1+code2*3+code3+code4*3+code5+code6*3+code7+code8*3+code9+code10*3+code11+code12*3;
  printf("Check Digit: %d",final%10);
  return 0;
}