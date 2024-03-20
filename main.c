#include <stdio.h>
#include <stdlib.h>

int main()
{
  int menu;
  printf("Bienvenue au royaume eternel \n \nContexte : Dans un vaste monde inspiré par les riches cultures et traditions des tribus bantoles joueurs explorent les Royaumes de Bantoua, un territoire mystique où la magie ancienne etles mystères ancestraux coexistent. Les tribus se disputent le contrôle des terres fertiles et desressources précieuses, tandis que des forces sombres menacent l'équilibre fragile de la région.");
  printf("\n\n Entrez votre choix \n \n 1- Joueur \n 2- Charger une sauvegarde \n 3- Creer un personnage \n 4- Creer une zone de vie \n 5- Quitter \n ");
  scanf("%d", &menu);

  while(menu==2){
    printf(" aucune sauvegarde n’est présente dans la base de données \n");
      scanf("%d", &menu);


  }

  while(menu>5 || menu<1){
    printf("Refaire votre choix \n");
    scanf("%d", &menu);
  }
  switch(menu){
  case 1:{
      printf("+++++ nouveau menu +++++");
      break;
  }
  case 2:{
    printf("+++++ aucune sauvegarde disponible +++++");
    break;
  }
  case 3: {
printf("+++++ veuiller reessayer +++++");
break;
}
case 4: {
int a = 0;
a=47;

printf("telechargement a 74%% \n");
printf("saisir 47:");
scanf("%d", &a);
if(a==47){
    printf("telechargement 100%%");
    printf("\n
           veuillez entrer le nom de la zone de vie:");

    }
    if(a!= 47){
    printf("+++ erreur de telechargement +++ fin +++");
}




break;
}
case 5:{
printf("+++++ fin de la simulation +++++");
break;
}
  }
  int energie = 0;
  int force = 0;
  int agilité =0;











    return 0;
}
