#define SerialMon Serial
#define SerialAT  Serial1
#define resetPIN  22

volatile char input;
volatile char output;

void setup() {
  pinMode(resetPIN, OUTPUT);
  digitalWrite(resetPIN, HIGH);
  
  SerialMon.begin(9600);
  SerialAT.begin(9600);
  
  SerialMon.println("SIM800 proba");

}

void loop() {
  if(SerialMon.available()){
    input = SerialMon.read();
    SerialAT.print(input);
    }

  if(SerialAT.available()){
    output = SerialAT.read();
    SerialMon.print(output);
    }
}
