#ifndef COMMON_H
#define COMMON_H

const double Epsilon = 1e-6;

enum NumOfRoots{
    NoRoots = 0, 
    OneRoot = 1,
    TwoRoots = 2,
    Infinity = 3,
};

enum NumOfRootsTest{
    NoRootsTest = 0,
    OneRootTest = 1,
    TwoRootsTest = 2,
    InfinityTest = 3,
};

struct coeficcents{
    double a;
    double b;
    double c;
};
struct solutions{
    NumOfRoots root_count = NoRoots;
    double x1;
    double x2;
};

#endif // COMMON_H