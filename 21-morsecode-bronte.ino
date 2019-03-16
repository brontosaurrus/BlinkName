
int led1 = D6; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2


void setup() {

	// We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
	// (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

	// It's important you do this here, inside the setup() function rather than outside it or in the loop function.

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.
void mlong() {
    
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(1000);

	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(500);
}

void mshort() {
    
    digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);

	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(500);
}

void mbreak() {
    
    digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(500);
    
}




void loop() {

	mlong();
	mshort();
	mshort();
	mshort();
	mbreak();
	mshort();
	mlong();
	mshort();
	mbreak();
	mlong();
	mlong();
	mlong();
	mbreak();
	mlong();
	mshort;
	mbreak();
	mlong();
	mbreak();
	mshort();
	mbreak();
	

}
