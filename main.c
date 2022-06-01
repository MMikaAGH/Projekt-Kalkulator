#include <stdio.h>
#include <math.h>       /* sin */

#define PI 3.14159265

void saveResultToFile(double result) {
  FILE *f;
  f = fopen("c.dat", "a");
  if (f == NULL)
  {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
  }
  else
  {
    fprintf(f,"%lf\n", result);
    fclose(f);
  }
}

double dodawanie(double a, double b) {
  return a + b;
}

double odejmowanie(double a, double b) {
  return a - b;
}

double mnozenie(double a, double b) {
  return a * b;
}

double dzielenie(double a, double b) {
  if(b == 0) {
    printf("  Błąd - nie dziel przez 0\n");
  }
  else {
    return a / b;
  }
}

double sinus(double angle){
  return sin (angle*PI/180);
    }

double cosinus(double angle){
  return cos (angle*PI/180);
  }
double tangens(double angle){
  return tan (angle*PI/180);
  }

double cotangens(double angle){
  return pow(tan (angle), -1);
  }
  
int main(void) {
  int x,operationChoice2;
  double a,b,result, memory = 0.0;
  do {
    printf("Pamięć: %lf\n", memory);
    printf("  Wybierz:\n  1 - działania na liczbach\n  2 - funkcje trygonometryczne\n");
    scanf("%d",&x);
    
    if(x == 1) {
      printf("  Wybierz\n  1 - dodawanie\n  2 - odejmowanie\n  3 mnożenia\n  4 - dzielenie\n");
      scanf("%d", &operationChoice2);
      printf("podaj dwie liczby\n");
      scanf("%lf", &a);
      scanf("%lf", &b);

      switch (operationChoice2) {
        case  1:
          result = dodawanie(a, b);
        break;

        case 2:
          result = odejmowanie(a, b);
        break;

        case 3:
          result = mnozenie(a, b);          
        break;

        case 4:
          result = dzielenie(a, b);
        break;
      }
  }
  if(x==2){
    double angle;
    printf("  Wybierz:\n  5 - sin\n  6 - cos\n  7 - tg\n  8 - ctg\n ");
    scanf("%d",&operationChoice2);
    printf("Podaj kąt (w stopniach)\n");
    scanf("%lf", &angle);
      switch(operationChoice2){
        case 5:
          result = sinus(angle);
        break;
        
        case 6:
          result = cosinus(angle);
        break;
        
        case 7:
          result = tangens(angle);
        break;
        
        case 8:
          result = cotangens(angle);
        break;
      } 
    }
    if (!(operationChoice2 == 4 && b == 0)) {
        int memoryOperation;
        printf("%lf\n", result);
        saveResultToFile(result);
        printf("1 - dodaj do pamięci\n2 - odejmij od pamięci\n3 - usuń pamięć\n0 - nic nie rób\nWybór: ");
        scanf("%d", &memoryOperation);

        switch (memoryOperation) {
          case 1:
            memory = memory + result;
          break;
          
          case 2:
            memory = memory - result;
          break;

          case 3:
            memory = 0;
          break;

          default:
          break;
        }
      }
  } while(x<3);
}
