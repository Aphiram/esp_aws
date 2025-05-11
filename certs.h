#include <pgmspace.h>
#define SECRET 
#define THINGNAME "esp32_1"                         //change this
 

const char WIFI_SSID[] = "Username";               //change this
const char WIFI_PASSWORD[] = "Password";           //change this
const char AWS_IOT_ENDPOINT[] = "copy the aws endpoint link";       //change this
 
// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";
 
// Device Certificate                                               //change this
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";
 
// Device Private Key                                               //change this
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
)KEY";
