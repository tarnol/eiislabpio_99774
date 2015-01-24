#include <stdio.h>
#include <stdlib.h>


int iter(int n){
	int i;
	int w = 1;
	for (i = 1; i<n; i++)
		w = w*(i + 1);
	return w;
}
int rekur(int n){ 
	if (n<2) return 1;
	return n*rekur(n - 1);
}
int main() {
	int a, c, b, r;
	c = scanf("%d", &a);
	if (c != 1) puts("niepoprawne dane");
	if (a<0) puts("liczba musi byc dodatnia");
	fflush(stdin);
	b = iter(a);
	r = rekur(a);
	printf("silnia liczby iteracyjnie %d = %d\n", a, b);
	printf("silnia liczby rekurecyjnie %d = %d\n", a, r);
	return 0;
}