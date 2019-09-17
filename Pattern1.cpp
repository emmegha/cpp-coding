/*Write a program to print this pattern:
          1
        2 3
      4 5 6
    7 8 9 10
    
*/

#include<iostream..h>
#include<conio.h>
void main()
{   
      int i,b=1,j;
      clrscr();
      cout<<"\nPattern Is:\n";
      for(i=0;i<4;i++)
      {   
          for(j=0;j<4;j++)
          {
            if((i+j)>=3)
            { 
                    cout<<b;
                    b++;
             }
             else
             cout<<" ";
       }
       cout<<endl;
       
      }
      getch();
      
  }
