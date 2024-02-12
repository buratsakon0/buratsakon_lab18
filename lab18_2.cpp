#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double R1_x = R1->x + R1->w;
    double R1_y = R1->y - R1->h;
    double R2_x = R2->x + R2->w;
    double R2_y = R2->y - R2->h;
    
    double overlap_x = min(R1_x ,R2_x) - max(R1->x ,R2->x);
    double overlap_y = min(R1->y ,R2->y) - max(R1_y ,R2_y);
    
    double area = overlap_x * overlap_y;
    if(area > 0){
        return area;    
    }else{
        return 0;    
    }
}