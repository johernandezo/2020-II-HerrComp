# include <iostream>
void f1(void);
void f2(void);
void f3(void);
void f4(void);

int main(){
  f1();
  f2();
  f3();
  f4();

  return 0;
}

void f1(void)
{
  char *z = new char [100];//Detectado por -Werror: Se define la variable z pero no se usa en la función. Corregido dandole uso
  z[10]= 'a';
  delete [] z; //Memory leak

}


void f2(void)
{
  char *y = new char [10];
  y[9] = 'a'; //Address sanitizer, overflow
  delete [] y; //Memory leak
}

void f3(void)
{
  int x = 0; //Detectado por -Werror, x no se inicialia  con algun valor
  if(x == 0)  // Detectado por Werror: No se usan 2 signos de = dentro de if
  {
    std::cout << "X is zero: " << x <<"\n";
  }
}


void f4(void)
{
  int x = 0; // Detectado por -Werror, x no se inicializa con algun valor
   std::cout << "x = " << x << "\n";


   int i, j = 0 ; //Runtime error, entero j no inicializado 
   int a[10] = {0}, b[10] = {0}; //Detectado por -Werror, se define b pero no se usa // Runtime error, integer overflow para j al no inicializar a[10], b[10]
   for ( i = 0; i < 10; i++ ) {  //Adress sanitizer, overflow
     j += a[i] + b[i]; 
   }
   if ( j == 77 ) //Detectado por Werror, no doble = dentro de if
   std::cout << "hello there\n";
}
