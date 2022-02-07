int lm35 = 4;
int LDR = 2;
int luminosidade;
int adc;
int LED = 21;
float temperatura;
 
void setup() {
 Serial.begin(115200);
 analogReadResolution(12);
 analogSetAttenuation(ADC_0db);
 pinMode(LED, OUTPUT);
}
 
void loop() {
 adc = analogRead(lm35);
 luminosidade = analogRead(LDR);
 temperatura = adc*0.02686203;
 Serial.print("Temperatura:");
 Serial.print(temperatura);
 Serial.println(" C");
 delay(1000);
 Serial.print("Luminosidade: ");
 Serial.println(luminosidade);

 if(luminosidade == 0){
  digitalWrite(LED, HIGH);
 } else{
   digitalWrite(LED, LOW);
 }
 
}
