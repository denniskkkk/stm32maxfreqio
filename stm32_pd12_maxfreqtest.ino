const uint8_t led1 = PD12;
const uint8_t led2 = PD14;
const uint8_t led3 = PD13;
const uint8_t led4 = PD15;



void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  if (SerialUSB != NULL && SerialUSB.available() ) {
    SerialUSB.end();
    delay (1000);
  }
 
 SerialUSB.begin(115200);
  if (!SerialUSB.available()) {
    delay (100);
  }
  delay (2000);

  SerialUSB.println ("start!!!!!!!!!");
  // put your setup code here, to run once:
  while (1) {
    // toggle about 6MHz
    digitalWrite (led1, HIGH);
    digitalWrite (led1, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
