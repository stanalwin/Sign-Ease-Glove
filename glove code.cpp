#define THUMB_SENSOR   A0
#define INDEX_SENSOR   A1
#define MIDDLE_SENSOR  A2
#define RING_SENSOR    A3
#define LITTLE_SENSOR  A4

/* ================= VOICE MODULE PINS ================= */

#define HELLO_VOICE      2
#define HELP_VOICE       3
#define THANKYOU_VOICE   4
#define WATER_VOICE      5
#define FOOD_VOICE       6
#define YES_VOICE        7
#define NO_VOICE         8
#define EMERGENCY_VOICE  9

/* ================= SENSOR VALUES ================= */

int thumbValue;
int indexValue;
int middleValue;
int ringValue;
int littleValue;

/* ================= THRESHOLD ================= */

const int threshold = 700;

/* ================================================= */
/*                     SETUP                         */
/* ================================================= */

void setup()
{
  Serial.begin(9600);

  pinMode(HELLO_VOICE, OUTPUT);
  pinMode(HELP_VOICE, OUTPUT);
  pinMode(THANKYOU_VOICE, OUTPUT);
  pinMode(WATER_VOICE, OUTPUT);
  pinMode(FOOD_VOICE, OUTPUT);
  pinMode(YES_VOICE, OUTPUT);
  pinMode(NO_VOICE, OUTPUT);
  pinMode(EMERGENCY_VOICE, OUTPUT);

  resetVoicePins();

  Serial.println("SIGN EASE GLOVE READY");
}

/* ================================================= */
/*                      LOOP                         */
/* ================================================= */

void loop()
{
  readSensors();

  printSensorValues();

  detectGesture();

  delay(100);
}

/* ================================================= */
/*                READ SENSOR VALUES                 */
/* ================================================= */

void readSensors()
{
  thumbValue  = analogRead(THUMB_SENSOR);
  indexValue  = analogRead(INDEX_SENSOR);
  middleValue = analogRead(MIDDLE_SENSOR);
  ringValue   = analogRead(RING_SENSOR);
  littleValue = analogRead(LITTLE_SENSOR);
}

/* ================================================= */
/*              PRINT SENSOR VALUES                  */
/* ================================================= */

void printSensorValues()
{
  Serial.print("Thumb: ");
  Serial.print(thumbValue);

  Serial.print(" | Index: ");
  Serial.print(indexValue);

  Serial.print(" | Middle: ");
  Serial.print(middleValue);

  Serial.print(" | Ring: ");
  Serial.print(ringValue);

  Serial.print(" | Little: ");
  Serial.println(littleValue);
}

/* ================================================= */
/*                GESTURE DETECTION                  */
/* ================================================= */

void detectGesture()
{
  /* ---------- HELLO ---------- */

  if(indexValue > threshold &&
     middleValue > threshold)
  {
    Serial.println("Gesture: HELLO");

    playVoice(HELLO_VOICE);
  }

  /* ---------- HELP ---------- */

  else if(thumbValue > threshold &&
          littleValue > threshold)
  {
    Serial.println("Gesture: HELP");

    playVoice(HELP_VOICE);
  }

  /* ---------- THANK YOU ---------- */

  else if(thumbValue > threshold &&
          indexValue > threshold &&
          middleValue > threshold)
  {
    Serial.println("Gesture: THANK YOU");

    playVoice(THANKYOU_VOICE);
  }

  /* ---------- WATER ---------- */

  else if(thumbValue > threshold &&
          ringValue > threshold)
  {
    Serial.println("Gesture: WATER");

    playVoice(WATER_VOICE);
  }

  /* ---------- FOOD ---------- */

  else if(indexValue > threshold &&
          ringValue > threshold)
  {
    Serial.println("Gesture: FOOD");

    playVoice(FOOD_VOICE);
  }

  /* ---------- YES ---------- */

  else if(middleValue > threshold &&
          littleValue > threshold)
  {
    Serial.println("Gesture: YES");

    playVoice(YES_VOICE);
  }

  /* ---------- NO ---------- */

  else if(thumbValue > threshold &&
          indexValue > threshold &&
          littleValue > threshold)
  {
    Serial.println("Gesture: NO");

    playVoice(NO_VOICE);
  }

  /* ---------- EMERGENCY ---------- */

  else if(thumbValue > threshold &&
          indexValue > threshold &&
          middleValue > threshold &&
          ringValue > threshold &&
          littleValue > threshold)
  {
    Serial.println("Gesture: EMERGENCY");

    playVoice(EMERGENCY_VOICE);
  }
}

/* ================================================= */
/*                 PLAY VOICE OUTPUT                 */
/* ================================================= */

void playVoice(int voicePin)
{
  digitalWrite(voicePin, HIGH);

  delay(200);

  digitalWrite(voicePin, LOW);

  delay(3000);
}

/* ================================================= */
/*                RESET ALL VOICE PINS               */
/* ================================================= */

void resetVoicePins()
{
  digitalWrite(HELLO_VOICE, LOW);
  digitalWrite(HELP_VOICE, LOW);
  digitalWrite(THANKYOU_VOICE, LOW);
  digitalWrite(WATER_VOICE, LOW);
  digitalWrite(FOOD_VOICE, LOW);
  digitalWrite(YES_VOICE, LOW);
  digitalWrite(NO_VOICE, LOW);
  digitalWrite(EMERGENCY_VOICE, LOW);
}