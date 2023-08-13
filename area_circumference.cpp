//circumference and area
#include<iostream>
#include<string.h>

using namespace std;

#define NEWLINE '\n'
#define PI 3.14

void calc(int r, float *area, float *circumference){
    *area = PI * r* r;
    *circumference = 2*PI*r;
}
int main(){
    float radius, area, circumference;
    cout<<"Enter the radius."<<endl;
    cin>>radius;
    calc(radius, &area, &circumference);
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<circumference<<endl;
    return 0;
}