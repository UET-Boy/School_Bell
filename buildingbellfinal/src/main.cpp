#include <DS3231.h>

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);
Time t;

/*
-----------------------------------
General Bells Declaration (Mon-Thu)
-----------------------------------
*/
const int bell0GenHour = 8, bell0GenMin = 0, bell0GenSec = 0; //Bell - 00
const int bell1GenHour = 8, bell1GenMin = 40, bell1GenSec = 0; //Bell - 01
const int bell2GenHour = 9, bell2GenMin = 20, bell2GenSec = 0; //Bell - 02
const int bell3GenHour = 10, bell3GenMin = 0, bell3GenSec = 0; //Bell - 03
const int bell4GenHour = 10, bell4GenMin = 40, bell4GenSec = 0; //Bell - 04 (Girls Break ON) 
const int bell5GenHour = 11, bell5GenMin = 5, bell5GenSec = 0; //Bell - 05 (Girls Break OFF)
const int bell6GenHour = 11, bell6GenMin = 20, bell6GenSec = 0; //Bell - 06 (Boys Break ON)
const int bell7GenHour = 11, bell7GenMin = 45, bell7GenSec = 0; //Bell - 07 (Boys Break OFF)
const int bell8GenHour = 12, bell8GenMin = 25, bell8GenSec = 0; //Bell - 08
const int bell9GenHour = 13, bell9GenMin = 5, bell9GenSec = 0; //Bell - 09
const int bell10GenHour = 13, bell10GenMin = 45, bell10GenSec = 0; //Bell - 10 (Pack-up Time)

/*
------------------------
Friday Bells Declaration
------------------------
*/
const int bell0FriHour = 7, bell0FriMin = 55, bell0FriSec = 0; //Bell - 00 (School Time)
const int bell1FriHour = 8, bell1FriMin = 25, bell1FriSec = 0; //Bell - 01
const int bell2FriHour = 8, bell2FriMin = 55, bell2FriSec = 0; //Bell - 02
const int bell3FriHour = 9, bell3FriMin = 25, bell3FriSec = 0; //Bell - 03
const int bell4FriHour = 9, bell4FriMin = 55, bell4FriSec = 0; //Bell - 04 (Girls Break ON) 
const int bell5FriHour = 10, bell5FriMin = 15, bell5FriSec = 0; //Bell - 05 (Girls Break OFF)
const int bell6FriHour = 10, bell6FriMin = 25, bell6FriSec = 0; //Bell - 06 (Boys Break ON)
const int bell7FriHour = 10, bell7FriMin = 45, bell7FriSec = 0; //Bell - 07 (Boys Break OFF)
const int bell8FriHour = 11, bell8FriMin = 15, bell8FriSec = 0; //Bell - 08
const int bell9FriHour = 11, bell9FriMin = 45, bell9FriSec = 0; //Bell - 09
const int bell10FriHour = 12, bell10FriMin = 15, bell10FriSec = 0; //Bell - 10 (Pack-up Time)

void setup()
{
  // Setup Serial connection
  Serial.begin(115200);

  // Initialize the rtc object
  rtc.begin();

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4, OUTPUT); // Bell connected to Pin 4
  digitalWrite(LED_BUILTIN, LOW);
  
  //The following lines can be uncommented to set the date and time
  //rtc.setDOW(SUNDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(20, 30, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(1, 2, 2022);   // Set the date to (d, m, year)
}

void loop()
{

t = rtc.getTime();
  Serial.print(rtc.getDateStr());
  Serial.print(" "); //SPACE
  Serial.print("Day");
  Serial.print(" "); //SPACE
  Serial.print(t.dow);
  Serial.print(" "); //SPACE
  Serial.print(rtc.getDOWStr(FORMAT_LONG));
  Serial.print(" "); //SPACE
  Serial.print(rtc.getTimeStr(FORMAT_LONG));
  Serial.print(" "); //SPACE
  Serial.print("Temperature(C)");
  Serial.print(" "); //SPACE
  Serial.print(rtc.getTemp());
  Serial.println(" ");
  delay (1000);
  
/*------------------------------------
------------GENERAL BELLS-------------
--------------------------------------*/

if(t.dow <= 4){
    if(t.hour == bell0GenHour && t.min == bell0GenMin && t.sec == bell0GenSec){ //BELL - 00
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell1GenHour && t.min == bell1GenMin && t.sec == bell1GenSec){ //BELL - 01
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell2GenHour && t.min == bell2GenMin && t.sec == bell2GenSec){ // BELL - 02
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }
    
    if(t.hour == bell3GenHour && t.min == bell3GenMin && t.sec == bell3GenSec){ // BELL - 03
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }
    
    if(t.hour == bell4GenHour && t.min == bell4GenMin && t.sec == bell4GenSec){ // BELL - 04
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell5GenHour && t.min == bell5GenMin && t.sec == bell5GenSec){ // BELL - 05
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell6GenHour && t.min == bell6GenMin && t.sec == bell6GenSec){ // BELL - 06
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell7GenHour && t.min == bell7GenMin && t.sec == bell7GenSec){ // BELL - 07
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell8GenHour && t.min == bell8GenMin && t.sec == bell8GenSec){ // BELL - 08
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell9GenHour && t.min == bell9GenMin && t.sec == bell9GenSec){ // BELL - 09
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell10GenHour && t.min == bell10GenMin && t.sec == bell10GenSec){ // BELL - 10
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }
}


else{

/*------------------------------------
------------FRIDAY BELLS-------------
--------------------------------------*/

    if(t.hour == bell0FriHour && t.min == bell0FriMin && t.sec == bell0FriSec){ // BELL - 00
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell1FriHour && t.min == bell1FriMin && t.sec == bell1FriSec){ // BELL - 01
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell2FriHour && t.min == bell2FriMin && t.sec == bell2FriSec){ // BELL - 02
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell3FriHour && t.min == bell3FriMin && t.sec == bell3FriSec){ // BELL - 03
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell4FriHour && t.min == bell4FriMin && t.sec == bell4FriSec){ // BELL - 04
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell5FriHour && t.min == bell5FriMin && t.sec == bell5FriSec){ // BELL - 05
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell6FriHour && t.min == bell6FriMin && t.sec == bell6FriSec){ // BELL - 06
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell7FriHour && t.min == bell7FriMin && t.sec == bell7FriSec){ // BELL - 07
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell8FriHour && t.min == bell8FriMin && t.sec == bell8FriSec){ // BELL - 08
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell9FriHour && t.min == bell9FriMin && t.sec == bell9FriSec){ // BELL - 09
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }

    if(t.hour == bell10FriHour && t.min == bell10FriMin && t.sec == bell10FriSec){ // BELL - 10
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(4, HIGH);
    Serial.println("BELL IS RINGING");
    delay(5000);
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(4, LOW);
    Serial.println("BELL HAS STOPPED RINGING");
    }
}
}