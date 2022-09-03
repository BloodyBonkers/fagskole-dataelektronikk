// C++ code
//
const int greenPed = 5, redPed = 6, greenCar = 9, yellowCar = 10, redCar = 11;

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
    delay(7000);

    //yellowCar on for the duration of the greenPed blinker
    analogWrite(yellowCar, 70);

    // greenPed blinker start
    for (int i = 0; i <= 6; i++)
    {
        analogWrite(greenPed, 70);
        delay(250);   
        analogWrite(greenPed, 0); 
       	delay(250);
    }

    // greenPed blinker end

    // Turn OFF redCar, yellowCar & greenPed lights
    analogWrite(redCar, 0);
    analogWrite(yellowCar, 0);
    analogWrite(greenPed, 0);
    delay(250); //wait for 250ms

    // Turn ON greenCar & redPed lights
    analogWrite(greenCar, 70);
    analogWrite(redPed, 70);
    delay(10000); // Wait for 10000 millisecond(s)

    // Turn OFF greenCar light
    analogWrite(greenCar, 0);
    delay(250); // Wait for 250ms

    // Turn ON yellowCar light
    analogWrite(yellowCar, 70);
    delay(2000);

    // Turn OFF Yellowcar light & redPed lights
    analogWrite(yellowCar, 0);
    analogWrite(redPed, 0);
    delay(250); // Wait for 250ms
}
