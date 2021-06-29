/*                                                                                              |
 * University of Minnesota - Twin Cities                                                        |
 * AEM 4490 - Introduction to Aerospace Topics                                                  |
 * GLEAM Project - Central Unit Receiver: Resetting Functions                                    |
 * Author: Joe Poeppel - poepp027@umn.edu                                                       |
 * Date: 2/25/2021                                                                              |                                          
 ----------------------------------------------------------------------------------------------*/

void resetUnitStrings() {

// UNIT VARIABLES
// UNIT VARIABLES
UnitA1String = "UnitA1 Not Detected,,,,,,,,,, ";        // Karalus, Calvin;       SI1145
UnitA2String = "UnitA2 Not Detected,,,,,,,,,, ";        // Meyer, Shawn;          VEML7700
UnitA3String = "UnitA3 Not Detected,,,,,,,,,,,,,,,, ";        // Nihart, Joe;           AS7262
UnitA4String = "UnitA4 Not Detected,,,,,,,,,, ";  // Toriseva, Ben;         VEML6070
UnitA5String = "UnitA5 Not Detected,,,,,,,,, ";         // Professor Flaten;      VEML7700     

UnitB1String = "UnitB1 Not Detected,,,,,,,,,,,,,, ";     // Bauers, Macy;     SI1145
UnitB2String = "UnitB2 Not Detected,,,,,,,,,,,,,, ";     // Elliot, Greta;    VEML7700
UnitB3String = "UnitB3 Not Detected,,,,,,,,,,,,,, ";     // Saner, Garvin;    VEML7700
UnitB4String = "UnitB4 Not Detected,,,,,,,,,,,,,,,,,, "; // Stevens, Ben;     AS7262
UnitB5String = "UnitB5 Not Detected,,,,,,,,,,,,,,,,,, ";      // Joe Poeppel;      AS7262

UnitC1String = "UnitC1 Not Detected,,,,,,,,,,,,,,,,,,, "; // Grau-Firkus, Cooper;   AS7262 
UnitC2String = "UnitC2 Not Detected,,,,,,,,,,,,,,, ";     // Hartford, Peter;       VEML7700
UnitC3String = "UnitC3 Not Detected,,,,,,,,,,,,, ";       // Lanauze-Baez, Alfonso; VEML6070
UnitC4String = "UnitC4 Not Detected,,,,,,,,,,,,,,, ";     // Mattson, Tyler;        SI1145
UnitC5String = "UnitC5 Not Detected,,,,,,,,,,,,,,, ";     // Sorge, Ben;            SI1145
 
UnitD1String = "UnitD1 Not Detected,,,,,,,,, ";     // Anderson, Logan;        SI1145
UnitD2String = "UnitD2 Not Detected,,,,,,,,, ";     // Das, Roudh;             VEML7700
UnitD3String = "UnitD3 Not Detected,,,,,,,,,,,,, "; // Habegger Mc Cabe, Erne; AS7262
UnitD4String = "UnitD4 Not Detected,,,,,,,,, ";     // Ray, Ben;               VEML7700
UnitD5String = "UnitD5 Not Detected,,,,,,, ";       // Vanhatten, Isabelle;    VEML6070
    
}

void resetUnitBools() {
  
  UnitA1Bool = false;
  UnitA2Bool = false;
  UnitA3Bool = false;
  UnitA4Bool = false;
  UnitA5Bool = false;
  
  UnitB1Bool = false;
  UnitB2Bool = false;
  UnitB3Bool = false;
  UnitB4Bool = false;
  UnitB5Bool = false;
  
  UnitC1Bool = false;
  UnitC2Bool = false;
  UnitC3Bool = false;
  UnitC4Bool = false;
  UnitC5Bool = false;
  
  UnitD1Bool = false;
  UnitD2Bool = false;
  UnitD3Bool = false;
  UnitD4Bool = false;
  UnitD5Bool = false;

  ReceiverBool = false;
}
