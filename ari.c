# include<ctype.h>
# include<cs50.h>
# include<string.h>
string ari(string s){
int sentence=0;
int word=0;
int character=0;
float ari;
int score;
string level;
for(int i=0;s[i]!='\0';i++){
  if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
        sentence++;
  }
  if(s[i] == ' '){
        word++;
  }
  if(isalnum(s[i])){
        character++;
  }
 }
ari=4.71*((float)character/(float)word)+0.5*((float)word/(float)sentence)-(21.43);
score=(int)ari +1;

if(score==1){
  level="Kindergarten";
 }
if(score==2){
  level="First/Second Grade";
 }  
if(score==3){
  level="Third Grade";
 }   
if(score==4){
  level="Fourth Grade";
 }   
if(score==5){
  level="Fifth Grade";
 }   
if(score==6){
  level="Sixth Grade";
 }
if(score==7){
 level="Seventh Grade";
 }      
if(score==8){
  level="Eighth Grade";
 }   
if(score==9){
 level="Ninth Grade";
 }   
if(score==10){
  level="Tenth Grade";
 }   
if(score==11){
  level="Eleventh Grade";
 }   
if(score==12){
  level="Twelfth Grade";
 }   
if(score==13){
  level="College student";
 }   
if(score==14){
  level="Professor";
 } 
return level;   
}
