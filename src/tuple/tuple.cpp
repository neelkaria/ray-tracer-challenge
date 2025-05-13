#include "tuple.h"

Tuple::Tuple(float x, float y, float z, float w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

Tuple Tuple::Point(float x, float y, float z)
{
    return Tuple(x, y, z, 1.0);
}

Tuple Tuple::Vector(float x, float y, float z)
{
    return Tuple(x, y, z, 0.0);
}

Tuple addTup(Tuple a, Tuple b)
{
    return Tuple(a.getX() + b.getX(), a.getY() + b.getY(),
                a.getZ() + b.getZ(), a.getW() + b.getW());
}

Tuple subTup(Tuple a, Tuple b)
{
    return Tuple(a.getX() - b.getX(), a.getY() - b.getY(),
                a.getZ() - b.getZ(), a.getW() - b.getW());
}

