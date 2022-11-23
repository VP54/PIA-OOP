#include <string>
#include <fstream>
using namespace std;

class Kruh
{

public:
    double r;
    double x;
    double y;
    
    Kruh(double rr, double xx, double yy);


    void vypisInfo();

    double obvod();

    double obsah();

    bool leziUvnitr(double x2, double y2);
};