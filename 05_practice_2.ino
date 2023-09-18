#define PIN_LED 7
unsigned int toggle, count;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED,  OUTPUT);
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  count = 0;
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
    toggle = 1;
    digitalWrite(PIN_LED, toggle);
    delay(100);
    toggle = 0;
    digitalWrite(PIN_LED, toggle);
    delay(100);
    count ++;
    if (count ==5){
        digitalWrite(PIN_LED, 1);
          while(1) {
      }
    }
}
