#include<studio.h>            //header file for c language
#include<conio.h>             // this file inclues predefined function clrscr & getch

main()
{
int i,j,k,l;
clrscr();

    for(i=0;i<=4;i++)                // primary loop
    {
      for(j=0;j<=4;j++)                    // secondary loop
      {
        printf("*");
      }
    printf("\n");
    }
getch();
}
