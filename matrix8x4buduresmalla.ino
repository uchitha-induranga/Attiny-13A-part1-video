/*HRTE PROJECTS -- MATRIX BUDURESMALA ATTINY13A CODING 8x4
 */
int t = 200;
#define lineone   3// To ic pin no2
#define linetwo   4// To ic pin no3
#define linethree 1// To ic pin no6
#define linefour  2// To ic pin no7

void setup() {
 pinMode(lineone,OUTPUT);
 pinMode(linetwo,OUTPUT); 
 pinMode(linethree,OUTPUT);
 pinMode(linefour,OUTPUT);
}

void loop() {
 for(int i=0; i<=5; i++) {
   pattern1();
   } 
 for(int i=0; i<=5; i++) {
   pattern2();
   } 
 for(int i=0; i<=5; i++) {
   pattern3();
   }   
}
void pattern1(){
digitalWrite(lineone,HIGH);
delay(t);
digitalWrite(linetwo,HIGH);
digitalWrite(lineone,LOW);
delay(t);
digitalWrite(linethree,HIGH);
digitalWrite(linetwo,LOW);
delay(t);  
digitalWrite(linefour,HIGH);
digitalWrite(linethree,LOW);
delay(t);
digitalWrite(linefour,LOW);

}
void pattern2(){
digitalWrite(linefour,HIGH);
delay(t);
digitalWrite(linethree,HIGH);
digitalWrite(linefour,LOW);
delay(t);
digitalWrite(linetwo,HIGH);
digitalWrite(linethree,LOW);
delay(t);  
digitalWrite(lineone,HIGH);
digitalWrite(linetwo,LOW);
delay(t);
digitalWrite(lineone,LOW);
}
void pattern3()
{digitalWrite(lineone,HIGH);
delay(t);
digitalWrite(linetwo,HIGH);
digitalWrite(lineone,LOW);
delay(t);
digitalWrite(linethree,HIGH);
digitalWrite(linetwo,LOW);
delay(t);  
digitalWrite(linefour,HIGH);
digitalWrite(linethree,LOW);
delay(t);
digitalWrite(linethree,HIGH);
digitalWrite(linefour,LOW);
delay(t);
digitalWrite(linetwo,HIGH);
digitalWrite(linethree,LOW);
delay(t);  
digitalWrite(lineone,HIGH);
digitalWrite(linetwo,LOW);
delay(t);
digitalWrite(lineone,LOW);
}
