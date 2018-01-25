//zad 11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct punkt{
  int x;
  int y;  
};

typedef struct prostokat{
	punkt a;
	punkt b;
	punkt c;
	punkt d;
};

int main(int argc, char const *argv[]) {
	
	punkt _punkt;
	_punkt.x = 5;
	_punkt.y = 5;
	
	prostokat _prostokat;
	
	_prostokat.a.x = -3;
	_prostokat.a.y = -1;
	
	_prostokat.b.x = 3;
	_prostokat.b.y = -1;
	
	_prostokat.c.x = 3;
	_prostokat.c.y = 4;
	
	_prostokat.d.x = -3;
	_prostokat.d.y = 4;
	
	if (_punkt.x >= _kwadrat.a.x && _punkt.x <= _kwadrat.b.x && _punkt.y >= _kwadrat.a.y && _punkt.y <= _kwadrat.d.y) {
		printf("Punkt zawiera siê w kwadracie.");
	} else {
		printf("Punkt nie zawiera siê w kwadracie.");
	}

  
  return EXIT_SUCCESS;
}

//zad 12


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct punkt{
  int x;
  int y;  
}punkt;

typedef struct prostokat{
	punkt a;
	punkt b;
	punkt c;
	punkt d;
}prostokat;

void wyswietlNapisIWyjdz() {
	printf("Prostok¹ty przecinaj¹ siê lub zawieraj¹ siê w sobie.");
	exit(0);
};

int main(int argc, char const *argv[]) {

	prostokat _prostokatA;
	
	prostokat _prostokatB;
	
	_prostokatA.a.x = -3;
	_prostokatA.a.y = -3;
	
	_prostokatA.b.x = -1;
	_prostokatA.b.y = -3;
	
	_prostokatA.c.x = -1;
	_prostokatA.c.y = -1;
	
	_prostokatA.d.x = -3;
	_prostokatA.d.y = -1;
	
	_prostokatB.a.x = 1;
	_prostokatB.a.y = 1;
	
	_prostokatB.b.x = -2;
	_prostokatB.b.y = 1;
	
	_prostokatB.c.x = -2;
	_prostokatB.c.y = -2;
	
	_prostokatB.d.x = 1;
	_prostokatB.d.y = -2;
	
	if (_prostokatA.a.x > _prostokatB.a.x && _prostokatA.a.x < _prostokatB.b.x && _prostokatA.a.y > _prostokatB.a.y && _prostokatA.a.y < _prostokatB.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatA.b.x > _prostokatB.a.x && _prostokatA.b.x < _prostokatB.b.x && _prostokatA.b.y > _prostokatB.a.y && _prostokatA.b.y < _prostokatB.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatA.c.x > _prostokatB.a.x && _prostokatA.c.x < _prostokatB.b.x && _prostokatA.c.y > _prostokatB.a.y && _prostokatA.c.y < _prostokatB.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatA.d.x > _prostokatB.a.x && _prostokatA.d.x < _prostokatB.b.x && _prostokatA.d.y > _prostokatB.a.y && _prostokatA.d.y < _prostokatB.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatB.a.x > _prostokatA.a.x && _prostokatB.a.x < _prostokatA.b.x && _prostokatB.a.y > _prostokatA.a.y && _prostokatB.a.y < _prostokatA.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatB.b.x > _prostokatA.a.x && _prostokatB.b.x < _prostokatA.b.x && _prostokatB.b.y > _prostokatA.a.y && _prostokatB.b.y < _prostokatA.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatB.c.x > _prostokatA.a.x && _prostokatB.c.x < _prostokatA.b.x && _prostokatB.c.y > _prostokatA.a.y && _prostokatB.c.y < _prostokatA.d.y) {
		wyswietlNapisIWyjdz();
	}
	
	if (_prostokatB.d.x > _prostokatA.a.x && _prostokatB.d.x < _prostokatA.b.x && _prostokatB.d.y > _prostokatA.a.y && _prostokatB.d.y < _prostokatA.d.y) {
		wyswietlNapisIWyjdz();		
	}
	
	printf("Prostok¹ty nie przecinaj¹ i nie zawieraj¹ siê w sobie.");
	
  return EXIT_SUCCESS;
}


//zad 13


#include <stdio.h>
#include <stdlib.h>

int ilosc(char const *wyr)
{
  int i = 0;
  while ( *wyr++ )
	++i;
  return i;
}
int main(int argc, char const *argv[]) {
  int count;
 if(argc > 0)
  {
    for(count = 1; count < argc; count++)
    {
	printf("%d\n",ilosc(argv[count]));
    }
 } else{
    printf("b³¹d! \n");
       }
  return EXIT_SUCCESS;
}


//zad 14



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct osobaLepsza{
int wiek;
int pensja;
}osobaLepsza;

int main(int argc, char const *argv[]) {
	
	FILE *dane;
	char buf[200];
	const char delimiter[2] = " ";
	char * fraza;
	
	int ilOsob;
	osobaLepsza *osoby;
	
	int minWiek = 0;	
	int maxZarobki = 0;
	int wiekMaxZarobki = 0;
	char najlepiejZarabiajcaOsoba[100];	
	char najmloszaOsoba[100];
	
    dane = fopen("daneTekstowe.txt", "r");
    
    if (!dane)
        return 1;

	fgets(buf, sizeof(buf), dane);

	ilOsob = atoi(buf);		
	osoby=(int*)malloc(sizeof(int)*ilOsob);
	
	int i;
	for (i = 0; i < ilOsob; i++) {		
		fgets(buf, sizeof(buf), dane);
		if (i >= 0) {			
			osobaLepsza osoba;			
    		char* imie;
			char* nazwisko;		
    		
   			fraza = strtok(buf, delimiter);   		
   			imie = fraza;	
   			
   			fraza = strtok(NULL, delimiter);			
   			nazwisko = fraza;
   			
   			fraza = strtok(NULL, delimiter);
   			osoba.wiek = atoi(fraza);
   			
   			if (osoba.wiek < minWiek || minWiek <= 0) {
   				minWiek = osoba.wiek;	
   				
   				strcpy(najmloszaOsoba, imie);
   				strcat(najmloszaOsoba, " ");
				strcat(najmloszaOsoba, nazwisko);
			}
   			
   			fraza = strtok(NULL, delimiter);
   			osoba.pensja = atoi(fraza);
   			
   			if (osoba.pensja > maxZarobki || maxZarobki <= 0) {
   				maxZarobki = osoba.pensja;
   				wiekMaxZarobki = osoba.wiek;
   				
   				strcpy(najlepiejZarabiajcaOsoba, imie);
   				strcat(najlepiejZarabiajcaOsoba, " ");
				strcat(najlepiejZarabiajcaOsoba, nazwisko);

			}
		}
	}			

	printf("Najlepiej zarabiajaca osoba to:\n");
	printf("%s", najlepiejZarabiajcaOsoba);
	printf(", lat %d\n", wiekMaxZarobki);
	
	printf("Najmlodsza osoba to:\n");
	printf("%s", najmloszaOsoba);	

	fclose(dane);			
	return EXIT_SUCCESS;
}
