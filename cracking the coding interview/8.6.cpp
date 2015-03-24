#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdio>
#include <list>
#include <algorithm>
#include <sstream>

using namespace std;

//example enum
enum Color{
	BLACK, BLUE,GREEN
};

bool fillcolor(Color *screen[], int x, int y, Color oclr, Color nclr, int n){
	if(x<0 || x>*(screen).length || y<0 || y>*screen.length){
		return false;
	}
	else if(*(*screen+x)+y)==ocolr){
		screen[x][y]=nclr;
		fillcolor(screen, x-1, y,oclr, nclr,n);
		fillcolor(screen, x, y-1,oclr, nclr,n);
		fillcolor(screen, x+1, y,oclr, nclr,n);
		fillcolor(screen, x, y+1,oclr, nclr,n);
	}
	return true;
}

int main()
{

}