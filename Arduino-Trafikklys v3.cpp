// C++ code
//
int LED_PIN1 = 1
int LED_PIN2 = 2
int LED_PIN3 = 3
int LED_PIN4 = 4
int LED_PIN5 = 5

void setup()
{
    pinMode(LED_PIN2, OUTPUT);
}

void loop()
{
    // Red Traffic light + Green ped light
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    delay(7000);

    //blinker start
    for (int i = 0; i <= 3; i++)
    {
        digitalWrite(LED_PIN4, LOW);
        delay(500);
        digitalWrite(LED_PIN4, HIGH);   
    }
    //blinker end

    //delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    delay(500); // Wait for 1000 millisecond(s)

    //Green LED ON/OFF
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    delay(10000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN5, LOW);
    delay(500); // Wait for 1000 millisecond(s
    //Yellow LED ON/OFF
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    delay(3000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN5, LOW);
    delay(500); // Wait for 1000 millisecond(s)
}
