#include <stdio.h>
int main(int argc, char** argv){
	
float a, b, c, Media;
printf("Digite tr�s  n�meros");
scanf("%f %f %f", &a, &b, &c);
Media = (a + b + c)/3;
printf("A media dos n�meros %f , %f e %f � igual a %f ", a, b, c, Media);

return 0;
}
