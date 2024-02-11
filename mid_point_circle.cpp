#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	
	float xc,yc,rad;
	float x,y,d;
	initwindow(800,800,"Sabin kumar chaudhary");
	printf("Enter the centre of Circle:");
	scanf("%f %f",&xc,&yc);
	printf("Enter the Radius of Circle:");
	scanf("%f",&rad);
	y=rad;
	d=1-rad;
	
	for(x=0;x<y;x++)
	{
		putpixel(x+xc,y+yc,14); //14 for the yellow colour
		putpixel(x+xc,-y+yc,14);
		putpixel(y+xc,-x+yc,14);
		putpixel(-y+xc,-x+yc,14);
		putpixel(-x+xc,-y+yc,14);
		putpixel(-x+xc,y+yc,14);
		putpixel(-y+xc,x+yc,14);
		putpixel(y+xc,x+yc,14);
		
		if(d<0)
		{
			y=y;
			d=d+2*x+1;	
		}
		else
		{
			y=y-1;
			d=d+2*(x-y)+1;
		}
	}
	getch();
	return 0;
	closegraph();
}
