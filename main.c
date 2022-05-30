#include <stdio.h>
#include <math.h>       /* sin */

#define PI 3.14159265

int dodawanie(double a,double b,double s){
  printf("podaj dwie liczby\n");
  scanf("%lf", &a);
  scanf("%lf", &b);
  s=a+b;
  printf("%lf\n",s);
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"%lf\n",s);
    fclose(f);
    }
  }

int odejmowanie( double a,double b,double s){
  printf("podaj dwie liczby\n");
  scanf("%lf", &a);
  scanf("%lf", &b);
  s=a-b;
  printf("%lf\n",s);
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"%lf",s);
    fclose(f);
    }
  }


int mnozenie(double a,double b,double s){
  printf("podaj dwie liczby\n");
  scanf("%lf", &a);
  scanf("%lf", &b);
  s=a*b;
  printf("%lf\n",s);
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"%lf",s);
    fclose(f);
    }
  }

int dzielenie(double a,double b,double s){
  printf("podaj dwie liczby\n");
  scanf("%lf", &a);
  scanf("%lf", &b);
  if(b==0){
    printf("Błąd - nie dziel przez 0\n");
    }
  else{
  s=a/b;
  printf("%lf\n",s);
    }
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
      }
   else{
    fprintf(f,"%lf",s);
    fclose(f);
     }
  }
int sinus(kat){
  double s;
  printf("Podaj kąt\n");
  scanf("%d" ,&kat);
  s = sin (kat*PI/180);
  printf ("Sinus %d stopni to %lf.\n", kat, s );
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"Sinus %d stopni to %lf.\n", kat, s);
    fclose(f);
    return 0;
    }
  }

int cosinus(kat){
  double s;
  printf("Podaj kąt");
  scanf("%d" ,&kat);
  s = cos (kat*PI/180);
  printf ("Cosinus %d stopni to %lf.\n", kat, s );
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"Cosinus %d stopni to %lf.\n", kat, s);
    fclose(f);
    }
  }
int tangens(kat){
  double s;
  printf("Podaj kąt");
  scanf("%d" ,&kat);
  s = tan (kat*PI/180);
  printf ("Tangens %d stopni to %lf.\n", kat, s );
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"Tangens %d stopni to %lf.\n", kat, s);
    fclose(f);
    return 0;
    }
  }

int cotangens(kat){
  double s;
  printf("Podaj kąt\n");
  scanf("%d" ,&kat);
  s = tan (kat*PI/180);
  printf ("Cotangens %d stopni to %lf.\n", kat, s );
  FILE *f;
  f = fopen("c.dat", "w");
  if (f == NULL) {
    perror("Nie udalo sie otworzyc pliku 'c.dat' do zapisu");
    return 1;
    }
  else{
    fprintf(f,"%lf.\n",s);
    fclose(f);
    return 0;
    }
  }

int main(void) {
  int x;
  printf("Wybierz: działania na liczbach - wpisz 1, funkcje trygonometryczne - wpisz 2\n");
  scanf("%d",&x);
  do{
  if(x==1){
    int z;
    double a,b,s;
    printf("Wybierz 1 - dodawanie, 2 - odejmowanie, 3 mnożenia, 4 - dzielenie\n ");
    scanf("%d", &z);
    if(z==1){
      dodawanie(a,b,s);
      
      }
    if(z==2){
      odejmowanie(a,b,s);
      }
    if(z==3){
      mnozenie(a,b,s);
      }
    if(z==4){
      dzielenie(a,b,s);
      }
  }
  if(x==2){
    int w;
    printf("Wybierz 1 - sin, 2 - cos, 3 - tg, 4 - ctg\n ");
    scanf("%d",&w);
    int a;
    if(w==1){
      sinus(a);
    }
    if(w==2){
      cosinus(a);
    }
    if(w==3){
      tangens(a);
    }  
    if(w==4){
      cotangens(a);
    } 
    }
    printf("Wybierz: działania na liczbach - wpisz 1, funkcje trygonometryczne - wpisz 2\n");
    scanf("%d",&x);
    }
    while(x<3);
    }
