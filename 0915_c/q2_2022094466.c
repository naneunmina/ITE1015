#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint (const Point* p){
	Point temp;
	temp.xpos=(p->xpos)*2;
	temp.ypos=(p->ypos)*2;
	return temp;
}

void swapPoints (Point* p1, Point* p2){
	Point temp;
	temp.xpos= p1->xpos;
	temp.ypos= p1->ypos;

	*p1 = *p2;
	*p2 = temp;
}

int main(){
	Point p1, p2;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("Calling getScale2xPoint()\n");
	p2 = getScale2xPoint(&p1);
	printf("P1 : %d %d\nP2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
	printf("Calling swapPoint()\n");
	swapPoints(&p1, &p2);
	printf("P1 : %d %d\nP2 : %d %d\n", p1.xpos, p1.ypos, p2.xpos, p2.ypos);
	return 0;
}