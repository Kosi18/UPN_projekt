int senzorO= 1;
int senzorZ= 2;
int senzorP= 3;
int odpiranje= 4;
int zapiranje= 5;
int polovica= 6;
int LED= 7;
int LED2= 8;
int LED3= 9;

void setup() {
  pinMode(senzorO, INPUT);
  pinMode(senzorZ, INPUT);
  pinMode(senzorP, INPUT);
  pinMode(odpiranje, INPUT);
  pinMode(zapiranje, INPUT);
  pinMode(polovica, INPUT);
  pinMode(LED, OUTPUT );
  pinMode(LED2, OUTPUT );
  pinMode(LED3, OUTPUT );
  Serial.begin(9600);
}
void loop() {
   
  //če je pritisnjena odpiranje sveti LED-rdeča, če pritisnemo senzor odprt se led ugasne
      digitalWrite(LED,1);
      
  if(digitalRead(odpiranje)==1){
      digitalWrite(LED,0);
      }
      
  //če je pritisnjen zapiranje sveti LED2-modra, če pritisnemo senzor zaprt se led ugasne
  if(digitalRead(zapiranje)==1){
      digitalWrite(LED2,1); 
      }
  if(digitalRead(senzorZ)==1){
      digitalWrite(LED2,0);
      }

  //če je pritisnjen polovica sveti LED3-zelena, če pritisnemo senzor polovica se led ugasne
  if(digitalRead(polovica)==1){
      digitalWrite(LED3,1);
      }
  if(digitalRead(senzorP)==1){
      digitalWrite(LED3,0);
      }
}
     
