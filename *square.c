#include<stdio.h>            //header file for c language
#include<conio.h>             // this file inclues predefined function clrscr & getch

main()
{
int i,j,k,l;                    /// declaration of varible (in global formate)
clrscr();
    

    for(i=0;i<=4;i++)                // primary loop
    {
      for(j=0;j<=4;j++)                    // secondary loop
      {
        printf("*");                     // concept is clear
      }
    printf("\n");                        // it's use for spacing
    }
getch();                        //THIS USE FOR FREEZZ OR IT WAIT FOR SUCH A COMMAND
}
