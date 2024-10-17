#include <Arduino.h>

// put function declarations here:
int add(int a, int b);
int a = 0;
int b = 0;
void setup() {
  // put your setup code here, to run once:
  int result = add(2, 3);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("The sum is : %d\n",add(a,b));
  a++;
  b++;
  if(a >= 50) a = 0;
  if (b >= 50) b = 0;
  delay(1000);
}

// put function definitions here:
int add(int a, int b) {
  return a + b;
}