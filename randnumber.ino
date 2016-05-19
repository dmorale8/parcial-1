const int inputpin = 2;
const int ledpin = 12;
long randNumber;
int value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(inputpin, INPUT);
  pinMode(ledpin, OUTPUT);
  randomSeed(analogRead(0));
}
  
  
  void loop(){
  value= digitalRead(inputpin); //lectura digital de pin
    //serial.println(value);
    // mandar mensaje a puerto de serie en funcion del valor leido 
    if(value==1) {
      Serial.println("encendido Numero generado es : ");
      randNumber = random(1,50);
      // digitalwrite(ledpin, HIGH);
    }
    else {
      Serial.println("apagado");
      //digitalwrite(ledpin, LOW);
    }
    delay(1000);
    //digitalwrite(ledpin, LOW);
  }

  
