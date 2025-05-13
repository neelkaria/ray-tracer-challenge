#include <stdio.h>

class Tuple
{
    
    public:
        Tuple(){};
        Tuple(float x, float y, float z, float w);

        static Tuple Point(float x, float y, float z);
        static Tuple Vector(float x, float y, float z);

        float getX() { return X;};
        float getY() { return Y;};
        float getZ() { return Z;};
        float getW() { return W;};

        void isPoint() ;
        void isVector();

        void setW(float w) { W = w;};

    private:
        float X,Y,Z,W;

};

Tuple addTup(Tuple a, Tuple b);
Tuple subTup(Tuple a, Tuple b);
Tuple mulTup(Tuple a, float b);
Tuple negTup(Tuple a);
Tuple divTup(Tuple a, float b);
Tuple magTup(Tuple a);