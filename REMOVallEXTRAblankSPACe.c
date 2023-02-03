#include <stdio.h>
#include<conio.h>
int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;
 
   printf("Enter some text\n");
   gets(text);
 
   while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }
 
   blank[d] = '\0';
 
   printf("Text after removing blanks\n%s\n", blank);
 
   return 0;
}
