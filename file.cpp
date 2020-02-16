#include <stdio.h>

typedef struct{
  float nota;
  int creditos;
}REGISTRO;

void calcularPAPACero()
{
  int numMaterias;
  do{
    printf("\n\nIngrese el numero de materias vistas\n>");
    scanf("%d", &numMaterias);
    getchar();
    if(numMaterias<=0)
    {
      printf("Ha visto 0 o menos materias, crack? :v\n");
    }
  }while(numMaterias<0);
  
  REGISTRO materias[numMaterias];
  for(int i=0; i<numMaterias;i++)
  {
    do{
      printf("\nNota materia #%d\n>", i+1);
      scanf("%f", &materias[i].nota);
      getchar();
      if(materias[i].nota<0 || materias[i].nota>5)
      {
        printf("Ingrese una nota válida para la materia %d", i+1);
      }
    }while(materias[i].nota<0 || materias[i].nota>5);
    
    do{
      printf("\nCréditos materia %d\n>", i+1);
      scanf("%d", &materias[i].creditos);
      if(materias[i].creditos<0 || materias[i].creditos>4)
      {
        printf("Ingrese un número de créditos válido para la materia %d", i+1);
      }
    }while(materias[i].creditos<0 || materias[i].creditos>5);
    printf("----------------------\n");
  }

  float PAPA=0;
  float asignaturaxcreditos=0;
  float sumacreditos=0;
  for(int i=0;i<numMaterias;i++)
  {
    asignaturaxcreditos=asignaturaxcreditos+(materias[i].nota*materias[i].creditos);
    sumacreditos+=materias[i].creditos;
  }
  PAPA=asignaturaxcreditos/sumacreditos;
  printf("\n\nSu PAPA es de: %.2f\n\n\n\n\n\n", PAPA);
}

void calcularPAPAporAnterior()
{
  float PAPAviejo;
  do{
    printf("Ingrese su PAPA actual\n>");
    scanf("%f", &PAPAviejo);
    getchar();
    if(PAPAviejo<0 || PAPAviejo>5)
    {
      printf("Ingrese un valor válido para su PAPA actual\n");
    }
  }while(PAPAviejo<0 || PAPAviejo>5);
  printf("\n\nAhora deberá ingresar una a una las materias nuevas vistas en el último semestre, es decir, las que no han sido contabilizadas en el PAPA actual\n\n");

  int numMaterias;
  do{
    printf("\n\nIngrese el numero de materias vistas en el ACTUAL SEMESTRE\n>");
    scanf("%d", &numMaterias);
    getchar();
    if(numMaterias<=0)
    {
      printf("Ha visto 0 o menos materias, crack? :v\n");
    }
  }while(numMaterias<0);
  
  REGISTRO materias[numMaterias];


  for(int i=0; i<numMaterias;i++)
  {
    do{
      printf("\nNota materia #%d\n>", i+1);
      scanf("%f", &materias[i].nota);
      getchar();
      if(materias[i].nota<0 || materias[i].nota>5)
      {
        printf("Ingrese una nota válida para la materia %d", i+1);
      }
    }while(materias[i].nota<0 || materias[i].nota>5);
    
    do{
      printf("\nCréditos materia %d\n>", i+1);
      scanf("%d", &materias[i].creditos);
      getchar();
      if(materias[i].creditos<0 || materias[i].creditos>4)
      {
        printf("Ingrese un número de créditos válido para la materia %d", i+1);
      }
    }while(materias[i].creditos<0 || materias[i].creditos>5);
    printf("----------------------\n");
  }

  float PAPA=0;
  float asignaturaxcreditos=0;
  float sumacreditos=0;
  for(int i=0;i<numMaterias;i++)
  {
    asignaturaxcreditos=asignaturaxcreditos+(materias[i].nota*materias[i].creditos);
    sumacreditos+=materias[i].creditos;
  }
  PAPA=(PAPAviejo+(asignaturaxcreditos/sumacreditos))/2;
  printf("\n\nSu nuevo PAPA es de: %.2f\n\n\n\n\n\n", PAPA);
}

int main(void)
{
  int numMaterias;
  printf("---SISTEMA PARA CALCULAR PAPA---\n");
  printf("POR: JULIÁN PACHÓN CASTRILLÓN\n");
  printf("UNAL MANIZALES - ASI\n");
  int ban_menu=0, op1;
	while(ban_menu==0)
	{
		printf("\n\n---MENU PRINCIPAL---\n");
		printf("1.	Calcular papa desde cero\n");
		printf("2.	Calcular PAPA a partir de un PAPA anterior RECOMENDADO!!\n");
		printf(">");
		scanf("%d", &op1);
    getchar();
		printf("\n\n");
		switch(op1)
		{
			case 1:
				ban_menu=1;
				printf("Opcion 1: Calcular papa desde cero\n");
				calcularPAPACero();
				ban_menu=0;
				break;
			case 2:
				ban_menu=1;
				printf("Opcion 2: Calcular PAPA a partir de un PAPA anterior\n");
				calcularPAPAporAnterior();
				ban_menu=0;
				break;
			case 3:
				ban_menu=1;
				printf("Opcion 3:\n");
				
				ban_menu=0;
				break;
		}
	}
}
