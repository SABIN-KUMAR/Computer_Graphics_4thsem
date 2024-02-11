#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
//    int gd=DETECT,gm;
//    initgraph(&gd,&gm,"C\\TURBOC3\\BGI");
  
    int x,y,x1,x2,y1,y2,p,i,dy,dx;
    initwindow(750,750,"sabin kumar chaudhary");
    printf("Enter the starting point:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the second point:");
    scanf("%d %d",&x2,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    
    p=2*dy-dx;
    x=x1;
    y=y1;
    i=0;
    while(i<=dx)
    {
    	putpixel(x,y,YELLOW);
    	
    	if(p<0)
    	{
    		x=x+1;
    		p=p+2*dy;
		}
		else
		{
			x=x+1;
			y=y+1;
		}
	}
	getch();
	return 0;
	closegraph();
	
}
