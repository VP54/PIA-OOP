#include <cmath>
#include "Kruh.h"
#include <iostream>
using namespace std;

Kruh::Kruh(double rr, double xx, double yy){
	r=rr;
	x=xx;
	y=yy;
}

double Kruh::obsah() const {
    double rand_x, rand_y, obsah;
    int in, out, range;

    range = int(r) * 2 * 100;
    in = 0;
    out = 0;


    for (int i = 0; i <1000000; i++){
        rand_x = (rand() % range + (-r*100));
        rand_x = rand_x / 100;
        rand_y = (rand() % range + (-r*100));
        rand_y = rand_y / 100;
       if(leziUvnitr(rand_x, rand_y)){
        in +=1;
       }
       else{
        out += 1;
       }
    }
    obsah = 2*r*2*r * in / (in + out);

	return obsah;
}

bool Kruh::leziUvnitr(double rand_x, double rand_y)const {
	return (rand_x * rand_x + rand_y * rand_y <= r*r);
}