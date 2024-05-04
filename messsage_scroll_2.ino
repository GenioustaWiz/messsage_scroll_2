/*THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF //MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, //INDIRECT,
  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
  OF SUBSTITUTE GOODS OR SERVICES; //LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  //HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY //WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


// Original code published by Syst3mX with his 24x6 scrolling matrix. This code has been revised to accept a 48x8 scrolling matrix.
//The code was modified by permission.  Enjoy and feel free to modify the code any way you want.


#define A {B00110000,B01111000,B11001100,B11001100,B11111100,B11111100,B11001100,B11001100}
#define B {B11111000,B11111100,B11001100,B11111100,B11111100,B11001100,B11111100,B11111000}
#define C {B01111100,B11111100,B11000000,B11000000,B11000000,B11000000,B11111100,B01111100}
#define D {B11110000,B11111000,B11001100,B11001100,B11001100,B11001100,B11111000,B11110000}
#define E {B11111100,B11111100,B11000000,B11111100,B11111100,B11000000,B11111100,B11111100}
#define F {B11111100,B11111100,B11000000,B11111000,B11111000,B11000000,B11000000,B11000000}
#define G {B01111000,B11111100,B11000100,B11000000,B11011100,B11001100,B11111100,B01111000}
#define H {B11001100,B11001100,B11001100,B11111100,B11111100,B11001100,B11001100,B11001100}
#define I {B11111100,B00110000,B00110000,B00110000,B00110000,B00110000,B00110000,B11111100}
#define J {B00111100,B00011000,B00011000,B00011000,B00011000,B11011000,B11111000,B01110000}
#define K {B11001100,B11011000,B11011000,B11110000,B11110000,B11011000,B11011000,B11001100}
#define L {B11000000,B11000000,B11000000,B11000000,B11000000,B11000000,B11111100,B11111100}
#define M {B11000110,B11101110,B11111110,B11010110,B11010110,B11010110,B11000110,B11000110}
#define N {B11000110,B11100110,B11110110,B11010110,B11010110,B11011110,B11001110,B11000110}
#define O {B00110000,B01111000,B11001100,B11001100,B11001100,B11001100,B01111000,B00110000}
#define P {B11111000,B11111100,B11001100,B11001100,B11111100,B11111000,B11000000,B11000000}
#define Q {B00110000,B01111000,B11001100,B11001100,B11001100,B11111000,B01111110,B00111110}
#define R {B11111000,B11111100,B11001100,B11111100,B11111000,B11110000,B11011000,B11001100}
#define S {B01111000,B11111100,B11000100,B01110000,B00111000,B10001100,B11111100,B01111000}
#define T {B11111100,B11111100,B00110000,B00110000,B00110000,B00110000,B00110000,B00110000}
#define U {B11001100,B11001100,B11001100,B11001100,B11001100,B11001100,B11111100,B01111000}
#define V {B11000110,B11000110,B11000110,B11000110,B11101110,B01111100,B00111000,B00010000}
#define W {B11000110,B11000110,B11000110,B11010110,B11010110,B11111110,B11101110,B11000110}
#define X {B10000100,B11001100,B01111000,B00110000,B00110000,B01111000,B11001100,B10000100}
#define Y {B11001100,B11001100,B11001100,B11111100,B01111000,B00110000,B00110000,B00110000}
#define Z {B11111100,B11111100,B00001100,B00011000,B00110000,B01100000,B11111100,B11111100}
  
#define  la {0x0,0x0,0x0,0x38,0x4,0x7C,0x44,0x38}
#define  lb {0x40,0x40,0x40,0x40,0x7C,0x42,0x42,0x7C}
#define  lc {0x0,0x0,0x0,0x3C,0x40,0x40,0x40,0x3C}
#define  ld {0x2,0x2,0x2,0x2,0x1E,0x22,0x22,0x1E}
#define  le {0x0,0x0,0x0,0x3C,0x42,0x7C,0x40,0x3E}
#define  lf {0x18,0x24,0x24,0x20,0x70,0x20,0x20,0x20}
#define  lg {0x0,0x0,0x0,0x3C,0x42,0x3E,0x2,0x3C}
#define  lh {0x40,0x40,0x40,0x78,0x44,0x44,0x44,0x44}
#define  li {0x0,0x0,0x10,0x0,0x10,0x10,0x10,0x10}
#define  lj {0x0,0x8,0x0,0x8,0x8,0x8,0x48,0x30,}
#define  lk {0x40,0x40,0x48,0x50,0x60,0x50,0x48,0x44}
#define  ll {0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10}
#define  lm {0x0,0x0,0x0,0x80,0xEC,0x92,0x92,0x92}
#define  ln {0x0,0x0,0x0,0x40,0x78,0x44,0x44,0x44}
#define  lo {0x0,0x0,0x0,0x3C,0x42,0x42,0x42,0x3C}
#define  lp {0x0,0x0,0x0,0x78,0x48,0x78,0x40,0x40}
#define  lq {0x0,0x0,0x0,0x78,0x48,0x78,0x8,0xC}
#define  lr {0x0,0x0,0x0,0x40,0x78,0x48,0x40,0x40}
#define  ls {0x0,0x0,0x0,0x3C,0x40,0x3C,0x4,0x3C}
#define  lt {0x10,0x10,0x10,0x7C,0x10,0x10,0x14,0x8}
#define  lu {0x0,0x0,0x0,0x42,0x42,0x42,0x26,0x1A}
#define  lv {0x0,0x0,0x0,0x22,0x22,0x22,0x14,0x8}
#define  lw {0x0,0x0,0x0,0x44,0x44,0x54,0x54,0x38} 
#define  lx {0x0,0x0,0x0,0x4C,0x20,0x10,0x28,0x44}
#define  ly {0x0,0x0,0x0,0x44,0x28,0x10,0x20,0x40}
#define  lz {0x0,0x0,0x0,0x3C,0xC,0x10,0x20,0x3C}
  
#define  n0 {0x18,0x24,0x46,0x4A,0x52,0x62,0x24,0x18}
#define  n1 {0x18,0x28,0x8,0x8,0x8,0x8,0x8,0x3E}
#define  n2 {0x38,0x44,0x4,0x8,0x10,0x20,0x40,0x7C}
#define  n3 {0x78,0x4,0x4,0x38,0x4,0x4,0x4,0x78}
#define  n4 {0x20,0x28,0x28,0x3E,0x8,0x8,0x8,0x8}
#define  n5 {0x3E,0x20,0x20,0x3C,0x2,0x2,0x4,0x38}
#define  n6 {0x8,0x10,0x20,0x20,0x38,0x24,0x24,0x18}
#define  n7 {0x7E,0x42,0x2,0x2,0x2,0x2,0x2,0x2}
#define  n8 {0x3C,0x42,0x42,0x3C,0x42,0x42,0x42,0x3C}
#define  n9 {0x1E,0x22,0x22,0x1E,0x2,0x2,0x2,0x2}
#define  divide {0x1,0x2,0x4,0x8,0x10,0x20,0x40,0x80}
#define  semcol {0x0,0x0,0x0,0x8,0x0,0x8,0x10,0x20}
#define  period {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80}
#define  comma {0x0,0x0,0x0,0x0,0x0,0x40,0x40,0x80}
#define  vertbar {0x0,0x10,0x10,0x10,0x0,0x10,0x10,0x10}
#define  quest {0x38,0x44,0x8,0x10,0x10,0x10,0x0,0x10}
#define  excla {0x10,0x10,0x10,0x10,0x10,0x0,0x0,0x10}
#define  perc {0x0,0x2,0x24,0x8,0x10,0x24,0x40,0x0}
#define  space {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}
#define  lapost {0x80,0x40,0x20,0x0,0x0,0x0,0x0,0x0}
#define  aster {0x10,0x54,0x38,0xFE,0x38,0x54,0x10,0x0}
#define  atsym {0x3C,0x42,0x9D,0xA5,0xA5,0x9D,0x42,0x3C}
#define  colon {0x0,0x10,0x10,0x0,0x0,0x10,0x10,0x0}
#define  rapost {0x4,0x8,0x10,0x0,0x0,0x0,0x0,0x0}
#define fullstop{B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B11000000}




byte latchPin = 10;
byte clockPin = 13;
byte dataPin = 11;

byte latchPinPORTB = latchPin - 8;
byte clockPinPORTB = clockPin - 8;
byte dataPinPORTB = dataPin - 8;
byte clock = 9;
byte Reset = 8;
byte i = 0;

byte scrolling_letter[50][8];
byte ScrollSpeed = 8;  //lower the number faster the scroll5
byte patterns[80][8];
byte NUM_ROWS = 8; /*this determines the number of rows 6, 8, or 10 any more rows than 10 requires additional hardware*/
int tmr = 800;  //sets up the delay which affects the scroll speed, keep tmr above 700

/*  !!!!!!!! Warning !!!!!!!!!!!*/

/* do not go over 90 characters */
/*you must change the first variable in brackets [ ] in the line below to match + 1, the number of characters that are being displayed.  ie: 22 characters first variab;e in brackets [23]  */
/*the 2 variable in this line towards the end of the code, "display_message(1,your_text,18,ScrollSpeed)",  must also match the number of characters + 1*/


byte your_text[30][8] = {H,I, space, W,E,L,C,O,M,E, space, T,O, space, K,E,F,U,R,O, space, L,A,B,S, fullstop }; // array needs to be 5 larger than characters in it to force scroll all of the way across. example byte your_text [12][10] = {BG,lo,lo,ld,lb,ly,le}




void setup() {
  Serial.begin(9600);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(Reset, OUTPUT);
  digitalWrite(Reset, HIGH);
  digitalWrite(Reset, LOW);
  setupSPI();

}



void display_message(byte letter_print[][8], byte num_patterns, byte delay_length) { //display_message
  i = 0;
  for (byte first = 0; first < NUM_ROWS; first++)
  { //1
    for (byte second = 0; second < NUM_ROWS; second++)
      scrolling_letter[first][second] = 0x00;
  }   //1

  for (byte x = 0; x < num_patterns; x++)
  { //2

    for (byte scroll = 0; scroll < NUM_ROWS; scroll++) //loop  (counter)
    { //3
      for (byte r = 0; r < NUM_ROWS; r++)
      { //4

       scrolling_letter[r][1] = (scrolling_letter[r][1] << 1) + ((scrolling_letter[r][0] & 0x80) >> 7);
        scrolling_letter[r][0] = (scrolling_letter[r][0] << 1) + (((letter_print[x][r] << scroll) & 0x80) >> 7);


      }  //4

      for (byte t = 0; t < delay_length; t++) // loop
        //while(1)
      { //5
        for (byte y = 0; y < NUM_ROWS; y++)
        { //6
          if (i == NUM_ROWS)
          { //4017
            digitalWrite(Reset, HIGH);
            digitalWrite(Reset, LOW);
            i = 0;
          } //4017




          latchOff();
        
          spi_transfer(scrolling_letter[y][1]);
          spi_transfer(scrolling_letter[y][0]);
          latchOn();
          delayMicroseconds(tmr);

          latchOff();

        
          spi_transfer(0);
          spi_transfer(0);
          latchOn();
          //
          delayMicroseconds(tmr);


          digitalWrite(clock, HIGH);
          digitalWrite(clock, LOW);
          i++;
        }    //6
      }  //5

      //for(byte j = 0; j < 250; ++j)
      //delayMicroseconds(1000ul);  //include for debugging purposes only
    }    //3
  }   //2

}  //display_message


void loop() {

  display_message(your_text, 30, ScrollSpeed); /*  the second variable must maatch the same number as declared array above | example 'byte your_text[11][8]={BH,le,ll,ll,lo};'
                                                  both array declarations are the same  |[8] is for number of rows */

}



void latchOn() {
  bitSet(PORTB, latchPinPORTB);
}

void latchOff() {
  bitClear(PORTB, latchPinPORTB);
}


void setupSPI() {
  byte clr;
  SPCR |= ( (1 << SPE) | (1 << MSTR) ); // enable SPI as master
  //SPCR |= ( (1<<SPR1) | (1<<SPR0) ); // set prescaler bits
  SPCR &= ~( (1 << SPR1) | (1 << SPR0) ); // clear prescaler bits
  clr = SPSR; // clear SPI status reg
  clr = SPDR; // clear SPI data reg
  SPSR |= (1 << SPI2X); // set prescaler bits
  //SPSR &= ~(1<<SPI2X); // clear prescaler bits

  delay(10);
}
byte spi_transfer(byte data)
{
  SPDR = data;        // Start the transmission
  while (!(SPSR & (1 << SPIF)))   // Wait the end of the transmission
  {
  };
  return SPDR;        // return the received byte, we don't need that
}


