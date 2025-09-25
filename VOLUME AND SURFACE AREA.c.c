// simple c program
/* 
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: VOLUME AND SURFACE AREA
*/

#include <stdio.h>
int main() {
	float radius, height, volume, surface_area;
	double pi = 3.142;
	
	//prompt the user to enter
	
	printf("Enter the radius of the cylinder: ");
	scanf("%f", &radius);
	printf("radius = %.2fcm\n", radius);
	
	printf("Enter the height of the cylinder: ");
	scanf("%f", &height) ;
	printf("height = %.2fcm\n", height);
	
	//calculate the volume 
	volume = pi * radius * radius * height;
	printf("volume = %.4fcm³\n", volume);
	
	//calculate the surface area
	surface_area = 2 * pi * radius * radius + 2 * pi * radius * radius * height;
	printf("surface_area = %.4fcm²\n", surface_area);
	
	return 0;
	}