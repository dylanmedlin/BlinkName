int led1 = D6; // LED

// morse code blink lengths
#define SHORT 500
#define LONG SHORT * 3

void setup() {
	pinMode(led1, OUTPUT);
}

void loop() {
    // dylan = d= -.. y= -.-- l= .-.. a= .- n= -.
    
    // d
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT);// .
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(LONG); // end letter
	
	// y
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(LONG); // end letter
	
	// l
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(LONG); // end letter
	
	// a
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(LONG);
	
	// n
    digitalWrite(led1, HIGH);
	delay(LONG); // -
	digitalWrite(led1, LOW);
	delay(SHORT);
	
	digitalWrite(led1, HIGH);
	delay(SHORT); // .
	digitalWrite(led1, LOW);
	delay(LONG); // end letter

	delay(SHORT * 7);
}
