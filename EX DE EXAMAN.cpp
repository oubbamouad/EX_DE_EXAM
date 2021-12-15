#include <stdio.h>
#include <stdlib.h>
int main(){
int SB,AS,EN,MA,SAB,NEN,x=0;
float PE,ST;
printf("Bonjour monsieur s'il vous plait donner les informations suivants\n");
 printf("donner votre salaire de base puis donner votre annees de services chez notre entreprise\n");
scanf("%d%d",&SB,&AS);
printf("Combien d'enfants vous avez\n");
scanf("%d",&EN);
printf("saisir votre saisir votre salaire de base et combien d'enfants avez vous (pour valider merci)\n");
 scanf("%d%d",&SAB,&NEN);
while(AS>=4){
if(AS>=4 && AS<7){
PE=(SB*8)/100;
 }else if(AS>=7 && AS<12){
 PE=(SB*13)/100;
 }else if(AS>=12){
 PE=(SB*16)/100;
 }else{
 printf("vous n'avez pas cette prime\n");
 }



 break;
 }

 while(EN>=1){
 switch(EN){
 case 1:
 MA=1*220;
 break;
 case 2:
 MA=2*220;
 break;
 case 3:
 MA=3*220;
 break;
 case 4:
 MA=3*220+40;
 break;
 case 5:
 MA=3*220+80;
 break;
 case 6:
 MA=800;
 break;
 default:
 printf("vous n'avez pas le droit d'obtenir le montant\n");
  break;
 }
 break;
 }
 if(SAB<=6500 && NEN>=4){
 x=700;

 }
 else{

 printf("vous n'avez pas le droit pour attribuer l'aide social\n");
 }

 ST=SAB+PE+MA+x;
 printf("votre aide social est %d\n",x);
 printf("votre prime d'enceinte est %f\n",PE);
 printf("votre montant des allocation familials est %d\n",MA);
 printf("votre salaire total est %f\n",ST);


 return 0;
 }


