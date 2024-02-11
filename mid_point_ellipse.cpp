#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
	float xc,yc,rx,ry;
	initwindow(800,800,"sabin kumar chaudhary");
	printf("Enter the centre of the ellipse:");
	scanf("%f %f",&xc,&yc);
	printf("Enter the major and minor axis:");
	scanf("%f %f",&rx,&ry);
	
	float p1,p2,x,y;
	x=0;
	y=ry;
	
	p1=pow(ry,2)+(1/4)*pow(rx,2)-pow(rx,2)*ry;
	do
	{
		if(p1<0)
		{
			x=x+1;
			y=y;
			p1=p1+2*pow(ry,2)*x+pow(ry,2);
		}
		else
		{
			x=x+1;
			y=y-1;
			p1=p1+2*pow(ry,2)*2-2*pow(rx,2)*y+pow(ry,2);	
		}
		putpixel(x+xc,y+yc,14); //for 14 the yellow
		putpixel(-x+xc,y+yc,14);
		putpixel(-x+xc,-y+yc,14);
		putpixel(x+xc,-y+yc,14);
	}
	while(2*pow(ry,2)*x<=2*pow(rx,2)*y);
	
	p2=pow(ry,2)*pow(x+(1/2),2)+pow(rx,2)*(y-1)-pow(rx,2)*pow(ry,2);
	do
	{
		if(p2>0)
		{
			x=x;
			y=y-1;
			p2=p2-2*pow(rx,2)*y+pow(rx,2);
		}
		else
		{
			x=x+1;
			y=y-1;
			p2=p2+2*pow(ry,2)*x-2*pow(rx,2)*y+pow(rx,2);
		}
		putpixel(x+xc,y+yc,14); //for 14 the yellow
		putpixel(-x+xc,y+yc,14);
		putpixel(-x+xc,-y+yc,14);
		putpixel(x+xc,-y+yc,14);
	}
	while(y!=0);
	getch();
	return 0;
	closegraph();
}
