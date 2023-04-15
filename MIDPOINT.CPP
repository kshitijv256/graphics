 #include <graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

int main() {
    /* request auto detection */
    int gdriver = DETECT,gmode, errorcode;
    int midx, midy, i;
    /* initialize graphics and local variables */
    initgraph (&gdriver, &gmode, "//turboc3//bgi");

    // circle definition
    int a=200,b=200,r=100;


    int x=0;
    int y=r;
    int p;
    putpixel (a, b+r, RED);
    putpixel (a, b-r, RED);
    putpixel (a-r, b, RED);
    putpixel (a+r, b, RED);
    p=1-r;
    while (x<=y)
    {
	if (p<0)
	p+= (2*x)+1;
	else
	{
	    y--;
	    p+=(2*(x-y))+1;
	}
	x++;
	putpixel (a+x, b+y, RED);
	putpixel (a+y, b+x, RED);
	putpixel (a-y, b+x, RED);
	putpixel (a-x, b+y, RED);
	putpixel (a-x, b-y, RED);
	putpixel (a-y, b-x, RED);
	putpixel (a+y, b-x, RED);
	putpixel (a+x, b-y, RED);
    }
    getch();
    closegraph();
    return 0;
}