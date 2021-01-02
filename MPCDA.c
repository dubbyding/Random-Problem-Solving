#include<stdio.h>
#include<stdlib.h>

int display(int counter, int pk, int x, int y, int x1, int y1){
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, x+x1, y+y1);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, y+y1, x+x1);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, x1-x, y+y1);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, y+y1, x1-x);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, x+x1, y1-y);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, y1-y, x+x1);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, x1-x, y1-y);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",counter++, pk, x, y, y1-y, x1-x);
    return counter;
}

void MidPointCircleDrawingAlgorithm(int x1, int y1, int r){
    int x = 0, y = r, counter = 0;
    int pk = 1 - r;
    printf("N\tPk\tx\ty\tx1\ty1\n");
    counter = display(counter, pk, x, y, x1, y1);
    do{
        if(pk < 0){
            x = x + 1;
            y = y;
            pk = pk + 2*x + 1;
        }else{
            x++;
            y--;
            pk = pk + 2*x -2*y +1;
        }
        
        counter = display(counter, pk, x, y, x1, y1);
        
    }while(x < y);
}
int main(){
    int x1, y1, r;
    printf("Enter center of the circle(x1, y1)");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle");
    scanf("%d", &r);
    MidPointCircleDrawingAlgorithm(x1, y1, r);
    return 0;
}