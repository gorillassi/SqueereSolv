#ifndef SOLVER_H
#define SOLVER_H

int isZero(double num);

int discriminant(const double a, const double b, const double c, double *x1, double *x2, int *num_of_roots);

int lenearsorver(const double b,const double c, double *x1, double *x2, int *num_of_roots);

int solver(const double a,const double b,const double c, double *x1, double *x2, int *num_of_roots);

#endif // SOLVER_H
