#include <iostream>
#include <fstream>

using namespace std;

void euler(float dx, string name);
void implicita(float dx,string name);
int main()
{
    euler(0.1/0.1, "euler1.dat");
    euler(0.01/0.1, "euler2.dat");
    euler(1.0/0.1, "euler3.dat");
    implicita(0.1/0.1, "impli1.dat");
    implicita(0.01/0.1, "impli2.dat");
    implicita(1.0/0.1, "impli3.dat");
    return 0;
}
void euler(float dx, string name)
{
    float w = 0.1;
    float xf = 4.0/0.1;
    float xi =0.0;
    float y = 1.0;
    float x = xi;
    ofstream outfile;
    outfile.open(name);
    while(x < xf)
    {    
        y = y - dx*w*y;
        outfile<< x << " "<<y<<endl;
        x = x + dx;
    }
    outfile.close();
}

void implicita(float dx, string name)
{
    float w = 0.1;
    float xf = 4.0/0.1;
    float xi =0.0;
    float y = 1.0;
    float x = xi;
    ofstream outfile;
    outfile.open(name);
    while(x<xf)
    {
        y = y/(1+dx*w);
        outfile<< x << " "<<y<<endl;
        x = x + dx;
        
    }
    outfile.close();
}
