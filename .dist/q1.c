// Create a C program to check if a character entered by the user is a vowel or consonant using a switch statement

#include <stdio.h>
int main()
{
   char ch;
   printf("enter an alphabet");
   scanf("%c",&ch);

   switch(ch){
    case'a':case'e':case'i':case'o':case'u':
    case'A':case'E':case'I':case'O':case'U':

    printf("'%c' is a vowel.\n", ch);
    break;
    default:
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("%c is a consonant.\n",ch);
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
    
  return 0;
}
}













