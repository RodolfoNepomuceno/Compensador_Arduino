/*Compensador de factor de potencia
 * Aplicacion que calcula y decide sobre el factor de potencia
 */

int voltaje_pin = 0; // Pin de entrada de voltaje, para el calculo del voltaje.
int corriente_pin = 1; // Pin de entrada de voltaje, para el calculo de la corriente.

int valor_voltaje = 0; //Variable almacena el valor de voltaje obtenido.
int valor_corriente = 0; // Varible almacena el valor de la corriente obtenido.

int resistencia = 10; // Resistencia conocida en la entrada.
float corriente = 0;

void setup()
{
  Serial.begin(9600); //Confirura el puerto serial
}

void loop()
{
  //Obtener voltaje
  valor_voltaje = analogRead(voltaje_pin); //Lectura del pin de entrada de voltaje.
  Serial.print("Voltaje: ");
  Serial.println(valor_voltaje);

  //Obtener corriente
  valor_corriente = analogRead(corriente_pin); //Lectura del pin de entrada de voltaje.
  corriente = valor_corriente / resistencia;
  Serial.print("Corriente: ");
  Serial.println(corriente);
  delay (1000);

}
