# include<ctype.h>

string ari(string s){
int sentence=0;
int word=0;
int character=0;
float ari;
int score;
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
  return "Kindergarten";
 }
if(score==2){
  return "First/Second Grade";
 }  
if(score==3){
  return "Third Grade";
 }   
if(score==4){
  return "Fourth Grade";
 }   
if(score==5){
  return "Fifth Grade";
 }   
if(score==6){
  return "Sixth Grade";
 }
if(score==7){
  return "Seventh Grade";
 }      
if(score==8){
  return "Eighth Grade";
 }   
if(score==9){
  return "Ninth Grade";
 }   
if(score==10){
  return "Tenth Grade";
 }   
if(score==11){
  return "Eleventh Grade";
 }   
if(score==12){
  return "Twelfth Grade";
 }   
if(score==13){
  return "College student";
 }   
if(score==14){
  return "Professor";
 }   
}
