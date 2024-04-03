// All pre-processing directives begin with the symbol "#" like "#define ...",
// "#include ...", etc.

#include <stdio.h> //scanf() and printf() are in the header file stdio.h.
//#include <my_own_header.h> //custom header files can be also invoked.
#include <math.h>

#define PI 3.1415 //This is a MACRO called PI.
#define c 299792458 // This is a MACRO called c (speed of light).
#define Circle_Area(r) (PI*(r)*(r))


int main() {
	float radius;
	float area_0;
	float area_1;
	
	printf("Enter the radius in [mm]: ");
	scanf("%f", &radius);
	
	//Now PI will be used:
	area_0 = PI*radius*radius;
	area_1 = PI*pow(radius, 2);
	
	printf("The Area of the circumference is: %.2f [mm^2]\n", area_0);
	printf("The Area of the circumference (with pow function) is: %.2f [mm^2]\n", area_1);
	printf("The Area of the circumference (with function-macro) is: %.2f [mm^2]\n", Circle_Area(26));
	return 0;
}