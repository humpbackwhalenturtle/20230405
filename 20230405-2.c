#include <stdio.h>
main(){
  int a=0;
  printf("정수를 입력하세요:");
  scanf("%d",&a);
  if (a%2==0) printf("짝수");
  else printf("홀수");
  return 0;
}