// C++ code
//
int greenPed = 5, redPed = 6, greenCar = 9, yellowCar = 10, redCar = 11;
int greenCarDelay = 10000; // The time the green car light stays on
int yellowCarDelay = 2000; // The time the yellow light stays on after the green car light turns on and before the red car light turns on

// redCarDelay + greenPedBlinkDelay * GreenPedBlinkNumber = Total period the red light stays on 
int redCarDelay = 7000; //the time to wait before blinking the green pedestrian light during red light period
int greenPedBlinkDelay = 250; // The Blink interval delay for the gren pedestrian light
int GreenPedBlinkNumber = 6; // The Number of times to blink the green pedestrian light at the end of its cycle
int lightChangeDelay = 250; // The time from a light turning off until the next light turns on

void setup()
{
  
    for (int i=5; i < 7; i++)
    {
        pinMode(i, OUTPUT);
    }
    for (int i=9; i < 11; i++)
	{
        pinMode(i, OUTPUT);
	}
}
void loop()
{
    //Red Traffic light & Green ped light ON
    analogWrite(redCar, 70);
    analogWrite(greenPed, 70);
    delay(redCarDelay);

    //yellowCar on for the duration of the greenPed blinker
    analogWrite(yellowCar, 70);

    // greenPed blinker start
    for (int i = 0; i <= GreenPedBlinkNumber; i++)
    {
        analogWrite(greenPed, 70);
        delay(greenPedBlinkDelay);   
        analogWrite(greenPed, 0); 
       	delay(greenPedBlinkDelay);
    }

    // greenPed blinker end

    // Turn OFF redCar, yellowCar & greenPed lights
    analogWrite(redCar, 0);
    analogWrite(yellowCar, 0);
    analogWrite(greenPed, 0);
    delay(lightChangeDelay); //wait for 250ms

    // Turn ON greenCar & redPed lights
    analogWrite(greenCar, 70);
    analogWrite(redPed, 70);
    delay(greenCarDelay); // Wait for 10000 millisecond(s)

    // Turn OFF greenCar light
    analogWrite(greenCar, 0);
    delay(lightChangeDelay); // Wait for 250ms

    // Turn ON yellowCar light
    analogWrite(yellowCar, 70);
    delay(yellowCarDelay);

    // Turn OFF Yellowcar light & redPed lights
    analogWrite(yellowCar, 0);
    analogWrite(redPed, 0);
    delay(lightChangeDelay); // Wait for 250ms
}
