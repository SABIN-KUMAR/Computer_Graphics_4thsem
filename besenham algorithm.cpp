#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
//    int gd=DETECT,gm;
//    initgraph(&gd,&gm,"C\\TURBOC3\\BGI");
    initwindow(500,500,"sabin");
	float x1,y1,x2,y2;
	float dx,dy,ly,lx,p,x,y;
	printf("Enter the first starting co-ordinate:");
	scanf("%f %f",&x1,&y1);
	printf("Enter the second co-ordinate:");
	scanf("%f %f",&x2,&y2);
	
	x=x1;
	y=y1;
	
	if(x2>x1)
	{
		lx=1;
		
	}
	else
	{
		lx=-1;
	}
	if(y2>y1)
	{
		ly=1;
	}
	else
	{
		ly=-1;
	}
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>dy)
	{
		p=2*dy-dx;
		//for the every point on x.
		for(x=0;x<=dx;x++)
		{
			if(p<0)
			{
				x=x+lx;
				y=y;
				p=p+2*dy;
			}
			else
			{
				
				x=x+lx;
				y=y+ly;
				p=p+2*dy-2*dx;
				
			}
			putpixel(x,y,WHITE);
		}
	}
	else
	{
		p=2*dx-dy;
		//for every point on y.
		for(y=0;y<=dy;y++)
		{
			if(p<0)
			{
			    x=x;
			    y=y+ly;
			    p=p+2*dx;
			
			}
			else
			{
				x=x-lx;
				y=y+ly;
				p=p+2*dx-2*dy;
				
			}
			putpixel(x,y,YELLOW);
		}
			
	}

	getch();
	closegraph();
	return 0;
}
