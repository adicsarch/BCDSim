#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int maxx=800,maxy=650;
     
void menu()
{
    setcolor(WHITE);
     rectangle(maxx/2-370,maxy/2+150,maxx/2-120,maxy/2+300);
     outtextxy(maxx/2-365,maxy/2+155,"Arithmetic Operations Menu:");
     outtextxy(maxx/2-365,maxy/2+150+textheight("A"),"");
     setcolor(YELLOW);
     outtextxy(maxx/2-365,maxy/2+150+2*textheight("A"),"Add");
     setcolor(RED);
     outtextxy(maxx/2-365,maxy/2+150+3*textheight("A"),"Subtract");
     setcolor(GREEN);
     outtextxy(maxx/2-365,maxy/2+150+4*textheight("A"),"Multiply");
     setcolor(BLUE);
     outtextxy(maxx/2-365,maxy/2+150+5*textheight("A"),"Division");
     setcolor(WHITE);
}

void mouse_move_handler(int x,int y)
{
      if(x>maxx/4-50 && y>maxy/4 && x<maxx/4+50 && y<maxy/4+100)
      {
               setcolor(RED);
               rectangle(maxx/4-55,maxy/4-5,maxx/4+55,maxy/4+105);
      }
      else
               setcolor(BLACK);
               rectangle(maxx/4-55,maxy/4-5,maxx/4+55,maxy/4+105);
      if(x>maxx/4+100 && y>maxy/4 && x<maxx/4+200 && y<maxy/4+100)
      {
               setcolor(RED);
               rectangle(maxx/4+95,maxy/4-5,maxx/4+205,maxy/4+105);
      }
      else
               setcolor(BLACK);
               rectangle(maxx/4+95,maxy/4-5,maxx/4+205,maxy/4+105);
      if(x>maxx/4+250 && y>maxy/4 && x<maxx/4+300 && y<maxy/4+100)
      {
               setcolor(RED);
               rectangle(maxx/4+245,maxy/4-5,maxx/4+305,maxy/4+105);
      }
      else
               setcolor(BLACK);
               rectangle(maxx/4+245,maxy/4-5,maxx/4+305,maxy/4+105);
      if(x>maxx/4+350 && y>maxy/4 && x<maxx/4+450 && y<maxy/4+100)
      {
               setcolor(RED);
               rectangle(maxx/4+345,maxy/4-5,maxx/4+455,maxy/4+105);
      }
      else
               setcolor(BLACK);
               rectangle(maxx/4+345,maxy/4-5,maxx/4+455,maxy/4+105);
                   
}

void click_handler(int x, int y)

{

    if (x>800/2-365 && x<800/2-115 && y>650/2+150+2*textheight("A") && y<650/2+150+3*textheight("A"))
     {
                            cleardevice();
                            outtextxy(10,10,"This is addition windows");
                            menu();
                            }
     else if (x>800/2-365 && x<800/2-115 && y>650/2+150+3*textheight("A") && y<650/2+150+4*textheight("A"))
     {
                            cleardevice();
                            outtextxy(10,10,"This is subtraction windows");
                            menu();
                            }
     else if (x>800/2-365 && x<800/2-115 && y>650/2+150+4*textheight("A") && y<650/2+150+5*textheight("A"))
     {
                            cleardevice();
                            outtextxy(10,10,"This is multiply windows");
                            menu();
                            }
     else if (x>800/2-365 && x<800/2-115 && y>650/2+150+5*textheight("A") && y<650/2+150+6*textheight("A"))
     {
                            cleardevice();
                            outtextxy(10,10,"This is division windows");
                            menu();
                            }
        

}

int main()
{
     initwindow(800,650,"Project");
     
     int maxx = getmaxx();
     int maxy = getmaxy();
     
     rectangle(0,0,maxx,maxy);
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
     setcolor(YELLOW);
     outtextxy(10,10," Arithmetic Operation Simluator");
     
     setcolor(YELLOW);
     setlinestyle(SOLID_LINE,1,3);
     line(maxx/4,maxy/4,maxx/4,maxy/4+100);
     line(maxx/4-50,maxy/4+50,maxx/4+50,maxy/4+50);
     setcolor(RED);
     line(maxx/4+100,maxy/4+50,maxx/4+200,maxy/4+50);
     setcolor(GREEN);
     line(maxx/4+300,maxy/4,maxx/4+250,maxy/4+100);
     setcolor(BLUE);
     line(maxx/4+400,maxy/4,maxx/4+400,maxy/4+100);
     line(maxx/4+450,maxy/4+20,maxx/4+350,maxy/4+80);
     line(maxx/4+350,maxy/4+20,maxx/4+450,maxy/4+80);
     
     settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
     
     rectangle(maxx/2+100,maxy/2+150,maxx/2+370,maxy/2+300);
     setcolor(WHITE);
     outtextxy(maxx/2+105,maxy/2+155,"By :");
     outtextxy(maxx/2+105,maxy/2+155+textheight("A"),"");
     outtextxy(maxx/2+105,maxy/2+155+2*textheight("A"),"Aditya K G 12BCE1061");
     outtextxy(maxx/2+105,maxy/2+155+3*textheight("A"),"Deepak Pal 12BCE1083");
     outtextxy(maxx/2+105,maxy/2+155+4*textheight("A"),"Jeet Banerjee 12BCE1014");
     outtextxy(maxx/2+105,maxy/2+155+5*textheight("A"),"Pushpak Bhattacharya 12BCE1141");
     outtextxy(maxx/2+105,maxy/2+155+6*textheight("A"),"Virat Sardana 12BCE1111");
     //help option
     setcolor(WHITE);
     rectangle(maxx/2-370,maxy/2+150,maxx/2-120,maxy/2+300);
     outtextxy(maxx/2-365,maxy/2+155,"Arithmetic Operations Menu:");
     outtextxy(maxx/2-365,maxy/2+150+textheight("A"),"");
     setcolor(YELLOW);
     outtextxy(maxx/2-365,maxy/2+150+2*textheight("A"),"Add");
     setcolor(RED);
     outtextxy(maxx/2-365,maxy/2+150+3*textheight("A"),"Subtract");
     setcolor(GREEN);
     outtextxy(maxx/2-365,maxy/2+150+4*textheight("A"),"Multiply");
     setcolor(BLUE);
     outtextxy(maxx/2-365,maxy/2+150+5*textheight("A"),"Division");
     setcolor(WHITE);
     
     
     
     registermousehandler(WM_LBUTTONDOWN, click_handler);
     registermousehandler(WM_MOUSEMOVE, mouse_move_handler);

     getch();
     restorecrtmode();
     return 0;
     }
