
/* A simple program to sequentially turn on and turn off 3 LEDs 
reference source: https://www.youtube.com/watch?v=e1FVSpkw6q4

Lab assignment:
- Connect three lights on breadboard to run in a sequence
-remember: short end should connect to power via resistors, long end should connect to digital wires
-color-coding will help see where which wires belong where
- After compile, set up a fourth light in the sequence: add pin and code


- after, move onto second part (homework assignment)

*/ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(200);                  // wait for 200ms
  digitalWrite(LED1, LOW);
  
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(200);                  // wait for 200ms    
  digitalWrite(LED2, LOW);
   
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(200);                  // wait for 200ms
  digitalWrite(LED3, LOW);
  
  digitalWrite(LED4, HIGH);
  delay(200);
  digitalWrite(LED4, LOW);
  
  digitalWrite(LED5, HIGH);
  delay(200);
  digitalWrite(LED5, LOW);     // turn off LED1
                  // wait for 300ms
  digitalWrite(LED5, HIGH);
  delay(200);
  digitalWrite(LED5, LOW);
  
  digitalWrite(LED4, HIGH);
  delay(200);
  digitalWrite(LED4, LOW);
  
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED3, LOW);
  
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(200);
  delay(200);
}

  //digitalWrite(LED4, LOW);     // turn off LED2
  //delay(300);                  // wait for 300ms
  //digitalWrite(LED3, LOW);     // turn off LED3
  //delay(300);
  //digitalWrite(LED2, LOW);
  //delay(300);
  //digitalWrite(LED1, LOW);
  //delay(300);
  //delay(300);                  // wait for 300ms before running program all over again
//}
