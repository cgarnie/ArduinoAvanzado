#define PAUSA 100

void setup() {  DDRB=B00111111; // 63
  DDRD=B11110000;
  }
void pinta(int valor) {
   int parteAltaValor=valor/256;    // El cociente
   int parteBajaValor=valor%256;    // El resto
   PORTB=parteBajaValor;
   PORTB=parteAltaValor;
  }
void loop() {
  int valor=B10000;           // los enteros tienen 2 bytes ó 16 bits
  for(int i=0;i<10;i++)

  { pinta(valor); delay(PAUSA);  valor=valor<<1;
  }
  for(int i=0;i<10;i++)
  
   { pinta(valor); delay(PAUSA); valor=valor>>1;
  }
{
 
  delay(PAUSA);
  valor=valor<<1;
  }
}



