#include<stdio.h>
#include<stdlib.h>

void BreshenhamLineDrawingAlgorithm(int x1, int y1, int x2, int y2){
    int dx, dy, lx, ly, pk, counter = 0;
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    if(x1 < x2){
        lx = 1;
    }else{
        lx = -1;
    }
    if(y1 < y2){
        ly = 1;
    }else{
        ly = -1;
    }
    printf("%d\t%d\t%d\n", counter, x1, y1);
    if(dx > dy){
        pk = 2*dy-dx;
        for(int i = 0; i < dx; i++){
            if(pk < 0){
                x1 = x1 + lx;
                y1 = y1;
                pk = pk + 2 * dy;
            }else{
                x1 = x1 + lx;
                y1 = y1 + ly;
                pk = pk + 2*dy - 2*dx;
            }
            counter++;
            printf("%d\t%d\t%d\n", counter, x1, y1);

        }
    }else{
        pk = 2 * dx - dy;
        for(int i = 0; i < dy; i++){
            if(pk < 0){
                x1 = x1;
                y1 = y1 + ly;
                pk = pk + 2 * dx;
            }else{
                x1 = x1 + lx;
                y1 = y1 + ly;
                pk = pk + 2 * dx - 2 * dy;
            }
            counter++;
            printf("%d\t%d\t%d\n", counter, x1, y1);
        }
    }
}

int main(){
    int x1, x2, y1, y2;
    printf("Enter x1 and y1 co-ordinates:");
    scanf("%d %d",&x1, &y1);
    printf("Enter x2 and y2 co-ordinates:");
    scanf("%d %d",&x2, &y2);
    BreshenhamLineDrawingAlgorithm(x1, y1, x2, y2);
    return 0;
}