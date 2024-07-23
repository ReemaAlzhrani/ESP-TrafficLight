#define RED_LED 19
#define YELLOW_LED 18
#define GREEN_LED 5

void setup() {
pinMode(RED_LED, OUTPUT);
pinMode(YELLOW_LED , OUTPUT);
pinMode(GREEN_LED ,OUTPUT);
}

void loop() {
  //TRUN ON THE GREEN LIGHT FOR 4 SEC
  digitalWrite(GREEN_LED, HIGH);
  delay(4000); 
   digitalWrite(GREEN_LED, LOW);
  //TRUN ON THE YELLOW LIGHT FOR 4 SEC
  digitalWrite(YELLOW_LED,HIGH);
  delay(3000); 
  digitalWrite(YELLOW_LED,LOW);

  //TRUN ON THE RED LIGHT FOR 4 SEC
  digitalWrite(RED_LED, HIGH);
  delay(2000); 
  digitalWrite(RED_LED, LOW);

}
