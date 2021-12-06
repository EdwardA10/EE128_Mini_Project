int analogPin = A0; // our analog pin
int LDR_Value; // value read from our photocell

int unit_count; // Counts the unit length of each character
int empty_space; // Counts the empty space after character transmission

//int testpin = 13; // Pin used for misc. testing purposes (checking if other pins didn't work)
//int testValue; // Value that reads test pin

void setup() {
Serial.begin(9600);
pinMode(13, INPUT);
pinMode(12, OUTPUT);
}

void loop() {

LDR_Value = analogRead(analogPin);

//Below is a test if-statement to see if serial port can communicate with Arduino pins and output values
/*int state = digitalRead(testpin);

if(state == HIGH) {
Serial.println("1");
}
else {
Serial.println("0");  
}*/

if(LDR_Value > 700) {
	for(int i=0; i <= 14; i++) {
		//int arr[13];
		LDR_Value = analogRead(analogPin);
		if(LDR_Value > 700) {
			unit_count++;
			//arr[i] = 0;
			delay(200);
		}
		else {
			empty_space++;
			//arr[i] = 1;
			delay(200);
		}
	}
}

if(unit_count == 4 && empty_space == 11) { Serial.print("a"); }
if(unit_count == 6 && empty_space == 9) { Serial.print("b"); }
if(unit_count == 8 && empty_space == 7) { Serial.print("c"); }
if(unit_count == 5 && empty_space == 10) { Serial.print("d"); }
if(unit_count == 13 && empty_space == 2) { Serial.print("1"); }
if(unit_count == 11 && empty_space == 4) { Serial.print("2"); }
if(unit_count == 9 && empty_space == 6) { Serial.print("3"); }
if(unit_count == 7 && empty_space == 8) { Serial.print("4"); }

unit_count = 0;
empty_space = 0;
delay(200);

}
