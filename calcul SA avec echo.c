#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<conio.h>



#define PROGRAM " Calculette SA LCC"
#define VERSION " 2.0"
#define DATE    " 15/04/11"
#define AUTHOR  " Stephane Couderc "

// Auteur : COUDERC Stephane 04/11

//Les programmes suivants sont, selon l'article L121-1 du Code De La Propriété Intellectuelle,
//la propriété de leurs auteurs respectifs, toute reproduction (même partielle) est interdite
// sur tout support sans autorisation écrite préalable de l'auteur.
// Any reproduction  - either whole or partial -
// is strictly prohibited without the written agreement of the author.

long Datation (long j, long m, long a) ; //PROTOTYPE DU S/P
/*------------------------------------------------------------------*/
void main(void)
{
 int continuer = 1;
   while (continuer)

{
   system ("color f") ;
   system (" cls ");
  printf (" Saisir les dates au format JJ MM AAAA \n") ;
long j, m, a, n, n1 ; //5 variables locales pour cette fct exckusivement

  // clrscr() ;
  printf ("\nEntrer date d'echo : ") ; scanf ("%ld%ld%ld", &j, &m, &a) ;

  n = Datation (j, m, a) ;  //APPEL DU S/P

  n1 = n ;

  printf ("\nEntrer date de prelevement: ") ; scanf ("%ld%ld%ld", &j, &m, &a) ;

  n = Datation (j, m, a) ;  //APPEL DU S/P

 // printf ("\nNbr de jours = %ld", n-n1) ;

     double LCC = 0;
  printf (" \nEntrer Valeur LCC :");
  scanf ("%lf", &LCC);


  double joursam = 0;
  joursam = n-n1;
//printf ("\n\n so joursam %lf" , joursam );
//  getch() ;

double formule = 0;
formule = 8.052*sqrt(LCC)+23.73+joursam; // formule F.Hermet
//printf (" %lf ", formule);

  double sam = 0;
sam = formule/7;
//printf ("\n soit %lf", sam);
// getch();

  double entsam = 0;
entsam = floor (sam) ;
//printf ( " \n val entsam %lf " , entsam);
//   getch ();

  double valvirg = 0;
  valvirg = sam-entsam;
//printf ( " \n valvirg %lf" , valvirg );
 //  getch ();

  double base7 = 0;
  base7 = valvirg*7;
//  printf ( "\n base7 %lf", base7);
    getch();

long valsa = 0;
printf ("\n\n -----------------------------------");
printf ( "\n\n Soit Valeur en SA : %.0f,%.0f \n\n\n", entsam , base7) ;
system ("pause");
getch();

}
continuer = 0;

}
/*------------------------------------------------------------------*/
long Datation (long j, long m, long a) //DEFINITION COMPLETE DU S/P
{
long n ;  //variable locale pour cette fct exckusivement

  n = a*365 + (m-1)*31 + j ;
  if (m <= 2) a-- ;
  n = n + a/4 - a/100 + a/400 ;
  if (m > 2) n = n - (int)((m-1)*0.4+2.7) ;


  return n ;


}

