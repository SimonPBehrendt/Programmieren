#define _USE_MATH_DEFINES
#include <stdio.h>
#include<math.h>
#include <stdbool.h>
void test_within_d(double a, double b, double epsilon, int line);
int compare_doubles(double a, double b, double epsilon, int line);
enum Tag { TCylinder, TSphere, TCuboid };
typedef enum Tag Tag;

struct Cylinder {
    double r, h; // V = pi * r^2 * h
};

struct Sphere {
    double r; // V = 4 / 3 * pi * r^3
};

struct Cuboid {
    double a, b, c; // V = a * b *c
};

struct GeomObject {
    // todo: implement
   
};

typedef struct Cylinder Cylinder;
typedef struct Sphere Sphere;
typedef struct Cuboid Cuboid;
typedef struct GeomObject GeomObject;

GeomObject make_cylinder(double r, double h) {
    // todo: implement
    GeomObject o = {};
    
    return o;
}

GeomObject make_sphere(double r) {
    // todo: implement
    GeomObject o = {};
    return o;
}

GeomObject make_cuboid(double a, double b, double c) {
    // todo: implement
    GeomObject o = {};
    return o;
}

double volume(GeomObject o);

void volume_test(void) {
    test_within_d(volume(make_sphere(2)), 4 /3.0 * M_PI* 2 * 2 * 2, 1e-6, __LINE__);
    test_within_d(volume(make_cuboid(2, 3, 4)), 2 * 3 * 4, 1e-6, __LINE__);
    test_within_d(volume(make_cylinder(3, 4)), 4 * M_PI * 3 * 3 , 1e-6, __LINE__);
}
    
// GeomObject -> double
// Computes the volume of the given object.
double volume(GeomObject o) {
    // todo: implement
	return 0.0;
}

int main(void) {
    volume_test();
    return 0;
}

//todo: d)
void test_i(int a, int b, int line){
    if(a == b){
        printf("\nline: %d Test successfull, expected %d got %d", line, b,a);
    } else {
        printf("\nline: %d Test failed, expected %d got %d",line, b,a);
    }
}
void test_bool(bool a, bool b, int line){
    if(a == b){
        printf("\nline: %d Test successfull, expected %s got %s", line, b? "true":"false", a? "true":"false");
    } else {
        printf("\nline: %d Test failed, expected %s got %s", line, b? "true":"false", a? "true":"false");
    }
}
int compare_doubles(double a, double b, double epsilon, int line){
    if((a-b)>epsilon) return 1;
    if(((a-b)<epsilon) && ((b-a)<epsilon)) return 0;
    if((a-b)<epsilon) return -1;
    return -1;
}
void test_within_d(double a, double b, double epsilon, int line){
    if(compare_doubles(a, b, epsilon, line) == 0){
        printf("\nline: %d Test successfull, expected %.10f got %.10f", line, b,a);
    } else {
        printf("\nline: %d Test failed, expected %.10f got %.10f",line, b,a);
    }
}