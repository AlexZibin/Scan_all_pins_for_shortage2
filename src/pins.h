//Pins of ESP32:

#define SD_DETECT_PIN   (5)

#define BUTTON_LED_GND_PIN  (12)
#define BUTTON_LED_PIN  (14)

#define RESET_A6_PIN (15)

#define RXD2            (16)

// One board had IOs 16+17 shorted in some magic way (( 
// As we don't need RX, we change it from shorted 17 to unused 4.
#define TXD2            (4)
//#define TXD2            (17)

#define LDR_PIN         (25)
#define LED_PIN         (27)
//#define LED_PIN         (32)
#define BUZZER_PIN      (26)

#define RX2_PIN         (32)
// pin to mosfet#1:
#define S_PIN           (33)
#define TX2_PIN         (34)

// Analog pin to measure resistance of controlled "S" line:
#define BROKEN_CIRCUIT_PIN (35)

// pin to mosfet#2:
//#define RESET_A6_PIN (36)
//#define BUTTON_LED_PIN  (RESET_A6_PIN)
//

#define ledChannel (0)
