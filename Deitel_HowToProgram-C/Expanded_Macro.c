/* AkrilaMayNotBeAvailable
	This file shows examples of expanded macros and how to use them in C Language.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

// Math Macro Expansions:
//========================================================================
#define CIRCLE_AREA(r) ((PI) * (r) * (r)) // PI * raio²
#define RECTANGLE_AREA(b, h) ((b) * (h)) // base * altura
#define TRIANGLE_AREA(b, h) ((b) * (h) / (2)) // base * altura / 2

// (a) não pode ser zero na bhaskara
#define DELTA(a, b, c) (((b) * (b)) - (4) * (a) * (c)) // B² - 4 * A * C
#define QUADRATIC_FORMULA_POS(a, b, delta) (( (-b) + (sqrt(delta)) ) / (2 * (a))) // -B + sqrt(delta) / 2 * a
#define QUADRATIC_FORMULA_NEG(a, b, delta) (( (-b) - (sqrt(delta)) ) / (2 * (a))) // -B - sqrt(delta) / 2 * a
//========================================================================
int main(){
	float circle_radius = 0.0f;
	float triangle_area = 0.0f;
	int rect_area = 0;
	int delta = 0;
	double quadratic = 0;
	
	// Calcula uma área de círculo por Macro expandida:
	circle_radius = CIRCLE_AREA(5);
	printf("Circle Area: %.2f\n", circle_radius);
	
	// Calcula uma área de retângulo por Macro expandida:
	rect_area = RECTANGLE_AREA(2, 10);
	printf("Rectangle Area: %d\n", rect_area);
	
	// Calcula uma área de triângulo por Macro expandida:
	triangle_area = TRIANGLE_AREA(4, 5);
	printf("Triangle Area: %.2f\n", triangle_area);
	
	// Calculo de delta por Macro expandida:
	delta = DELTA(4, 2, -6);
	printf("Delta Value: %d\n", delta);
	
	// Calculo de Bhaskara por Macro expandida:
	if(delta > 0){ // Existem duas raizes
		quadratic = QUADRATIC_FORMULA_POS(4, 2, delta);
		printf("Quadratic (positive) Value: %.2lf\n", quadratic);
		
		quadratic = QUADRATIC_FORMULA_NEG(4, 2, delta);
		printf("Quadratic (negative) Value: %.2lf\n", quadratic);
	}
	else if(delta < 0){ // Existe uma raiz
		quadratic = QUADRATIC_FORMULA_POS(4, 2, delta);
		printf("Quadratic (positive) Value: %.2lf\n", quadratic);
	}
	else{ // Não tem raiz
		printf("Formula sem raizes reais.\n");
	}

	return 0;
}
