#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	/*


    PROJECT TITLE:COLOUR FILLING PROJECT IN THE GIVEN DIAGRAM
	NAME:SABIN KUMAR CHAUDHARY
	PHONE NO:9861999186
	STUDENT ID:ACE078BEI039
	FACULTY:ELECTRONIC,COMMUNICATION AND INFORMATION[BEI]
	DATE OF SUBMISSION:2079-05-12
	PROJECT:COMPUTER GRAPHICS PROJECT FOR FOURTH SEMEMSTER(BATCH-2078)
    LAB INSTRUCTOR:Er.SAMEEP DHAKAL	
    
    colour code numerical value:
    0.black
    1.blue
    2.green
    3.cyan
    4.red
    5.magneta
    6.brown
    7.light gray
    8.dark gray
    9.light blue
    10.light green
    11.light cyan
    12.light red
    13.light magneta
    14.yellow
    15.white
    
	
*/

	
	// ---------Color Filling Programm------
	
	
	int width=GetSystemMetrics(SM_CXSCREEN);
	int height=GetSystemMetrics(SM_CYSCREEN);
	initwindow(width,height,"Color Fill",-3);
   
	int Control_Box_Color=10;   // Light Green
	int Drawing_Color=15;       // white 
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	
	// drawing 1st 
	DRAWING:
	FIRST_DRAWING:
		
	setcolor(YELLOW);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
    outtextxy(10,10,"....SABIN KUMAR CHAUDHARY....");
		
	 setcolor(LIGHTGRAY);
     circle(350+110,300-50,150);
     circle(500+110,300-50,150);
     circle(415+110,450-50,150);
     circle(350+110,300-50,149);
     circle(500+110,300-50,149);
     circle(415+110,450-50,149);
     circle(350+110,300-50,148);
     circle(500+110,300-50,148);
     circle(415+110,450-50,148);
     setcolor(15);
     
    // drawing 2nd
    SECOND_DRAWIGN:
    if(a==1)
    {
	setcolor(YELLOW);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
    outtextxy(10,10,"....SABIN KUMAR CHAUDHARY....");	
     
    setcolor(LIGHTGRAY);
     
     circle(550,340,100);
     circle(550,340,150);
     circle(550,340,200);
     circle(550,340,250);
     circle(550,340,100-1);
     circle(550,340,150-1);
     circle(550,340,200-1);
     circle(550,340,250-1);
     circle(550,340,100-2);
     circle(550,340,150-2);
     circle(550,340,200-2);
     circle(550,340,250-2);
     line(550,242,550,438);
     line(550-1,242,550-1,438);
     line(550+1,242,550+1,438);
     line(550-98,340,550+98,340);
     line(550-98,340+1,550+98,340+1);
     line(550-98,340-1,550+98,340-1);
     a--;
    }
    
    
	
	// drawing 3th
	THIRD_DRAWING:
		if(d==1)
		{
		setcolor(YELLOW);
        settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
        outtextxy(10,10,"....SABIN KUMAR CHAUDHARY....");	
	    setcolor(LIGHTGRAY);
		int	points_R[8]={350,340,550,140,750,340,350,340};
		drawpoly(4,points_R);
		int	points_R1[8]={350+2,340-1,550+1,140+2,750-2,340-1,350+2,340-1};
		drawpoly(4,points_R1);
		int	points_R2[8]={350+3,340-2,550+2,140+3,750-3,340-2,350+3,340-2};
		drawpoly(4,points_R2);

		int points_F[10]={380,340,380,540,720,540,720,340,380,340};
		drawpoly(5,points_F);
		int points_F1[10]={380+1,340+1,380+1,540-1,720-1,540-1,720-1,340+1,380+1,340+1};
		drawpoly(5,points_F1);
		int points_F2[10]={380+2,340+2,380+2,540-2,720-2,540-2,720-2,340+2,380+2,340+2};
		drawpoly(5,points_F2);
	

		line(520,540,520,340);
		line(520-1,540,520-1,340);
		line(520+1,540,520+1,340);
		
		line(530,540,530,340);
		line(530-1,540,530-1,340);
		line(530+1,540,530+1,340);
		
		
		line(580,540,580,340);
		line(580-1,540,580-1,340);
		line(580+1,540,580+1,340);
		
		line(570,540,570,340);
		line(570+1,540,570+1,340);
		line(570-1,540,570-1,340);
		
		
		rectangle(410,420,490,460);
		rectangle(410+1,420+1,490-1,460-1);
		rectangle(410+2,420+2,490-2,460-2);
		
		rectangle(610,420,690,460);
		rectangle(610+1,420+1,690-1,460-1);
		rectangle(610+2,420+2,690-2,460-2);
		d--;
		}
	
	
     
     
	setcolor(Control_Box_Color);
	rectangle(1100,20,1350,735);
	rectangle(1100+1,20+1,1350-1,735-1);
	rectangle(1100+2,20+2,1350-2,735-2);
	
	int Box_Dis=16;

	int Box_Width=101;
	int top_1=40;
	int left_1=1100+Box_Dis;
	int right_1=left_1+Box_Width;
	int bottom_1=90;
	int top_2=top_1;
	int bottom_2=bottom_1;
	int left_2=left_1+117;
	int right_2=right_1+117;
	int box_L_left=1100+Box_Dis;
	int box_L_top=40;
	int box_L_bottom=90;
	int box_L_right=left_1+Box_Width;
	int box_R_left=left_1+117;
	int box_R_top=top_1;
	int box_R_bottom=bottom_1;
	int box_R_right=right_1+117;
	
	setcolor(Drawing_Color);
	
	for(int i=0;i<5;i++,top_1+=80,bottom_1+=80)
	{
		rectangle(left_1,top_1,right_1,bottom_1);
	}

	
	for(int i=0;i<5;i++,top_2+=80,bottom_2+=80)
	{
		rectangle(left_2,top_2,right_2,bottom_2);
	}
	
	
     
     // box colors
       
        //  left boxes
     
         setfillstyle(SOLID_FILL,BLUE);
         floodfill(box_L_left+20,box_L_top+20,15);
         
         setfillstyle(SOLID_FILL,GREEN);
         floodfill(box_L_left+20,box_L_top+20+80,15);    
         
         setfillstyle(SOLID_FILL,CYAN);
         floodfill(box_L_left+20,box_L_top+20+160,15);   
         
         setfillstyle(SOLID_FILL,RED);
         floodfill(box_L_left+20,box_L_top+20+240,15);   
         
         setfillstyle(SOLID_FILL,MAGENTA);
         floodfill(box_L_left+20,box_L_top+20+320,15);   
         
         // right boxes
         
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        floodfill(box_R_left+20,box_R_top+20,15);   
        
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(box_R_left+20,box_R_top+20+80,15);   
        
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(box_R_left+20,box_R_top+20+160,15);   
        
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(box_R_left+20,box_R_top+20+240,15);   
          
         
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(box_R_left+20,box_R_top+20+320,15);   
        
    // instruction
      setcolor(WHITE);
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+80,"---INSTRUTIONS---");
       setcolor(YELLOW);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+105,"ColorPick-'Rclick'");
       outtextxy(box_L_left,box_L_top+320+130,"ToPasteIn-'Lclick'");
       outtextxy(box_L_left+20,box_L_top+320+155,"Relaunch-'F1'");
       outtextxy(box_L_left+30,box_L_top+320+180,"Save-'Enter'");
       settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
       setcolor(WHITE);
       outtextxy(box_L_left+10,box_L_top+320+205,"----PATTERNS----");
       setcolor(YELLOW);
       settextstyle(4,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+230,"   f1   ,   f2   ,   f3  ");
       setcolor(WHITE);
       settextstyle(8,HORIZ_DIR,1);
       outtextxy(box_L_left,box_L_top+320+255,"  COMPUTER GRAPHICS");
       outtextxy(box_L_left,box_L_top+320+280,"       PROJECT     ");
       outtextxy(box_L_left,box_L_top+320+305,"        ACEM       ");
       outtextxy(box_L_left,box_L_top+320+330,"    ACE078BEI039   ");
       
       
       
       
  
    
   int Pick_Color=15;
    while(1)
    {
    	POINT cursor;
    	Start:
    	
        	GetCursorPos(&cursor);
    //  left boxes
    
         // Blue box
       
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=1;
		}
		// Green box 
		
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+80))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+80)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=2;
		}	
		
		// cyan
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+160))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=3;
		}
		
		// RED
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+240))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+240)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=4;
		}
		
		// Magenta
		if(((cursor.x>=box_L_left) && (cursor.y>=box_L_top+320))&&((cursor.x<=box_L_right)&(cursor.y<=box_L_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=5;
		}
		
    
	
	
	// Right boxes
	
	    // light cyan
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=11;
		}
		
		// dark gray
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+80))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+80)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=8;
		}
		//yellow
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+160))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+160)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=14;
		}
		// white
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+240))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+240)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=15;
		}
		
		// BLack
		
			if(((cursor.x>=box_R_left) && (cursor.y>=box_R_top+320))&&((cursor.x<=box_R_right)&&(cursor.y<=box_R_bottom+320)))
		{
			if(GetAsyncKeyState(VK_RBUTTON))
			Pick_Color=0;
		}
		
		
		
		if(GetAsyncKeyState(VK_RETURN))
		{
			writeimagefile("img.jpg",0,0,1000,700);
		}
	
		
		if(GetAsyncKeyState(VK_F1))
		{
			cleardevice();
			delay(400);
			goto DRAWING;
		}
		if(GetAsyncKeyState(VK_F2))
		{
			cleardevice();
			delay(400);
			a++;
			goto  SECOND_DRAWIGN;
		}
		
		if(GetAsyncKeyState(VK_F3))
		{
			cleardevice();
			delay(400);
			d++;
			goto THIRD_DRAWING;
		}
    	if(GetAsyncKeyState(VK_LBUTTON))
    	{
		    if(cursor.x >= 1000)
		    {
		    	goto Start;
			}
	        else
	    	{
    		setfillstyle(SOLID_FILL,Pick_Color);
    		floodfill(cursor.x,cursor.y,LIGHTGRAY);
        	}
		}
	}
	getch();
	closegraph();
	return 0;
}
