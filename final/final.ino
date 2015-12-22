int a = 0;
int b = 0;
int c = 0;
int d = 0;

  
int hitavg = 0; // detect potentiometers
int force = 0;
int bnote = 32; // basic note
int add1 = 2;
int jump1 = 14;



void setup() {
  Serial.begin(57600);
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
//  pinMode(A5, INPUT);
//  pinMode(led, OUTPUT);

}

void MIDI_TX(unsigned char MESSAGE, unsigned char PITCH, unsigned char VELOCITY) 
{
  Serial.write(MESSAGE);
  Serial.write(PITCH);
  Serial.write(VELOCITY);
}

void loop() {
  // put your main code here, to run repeatedly:
  force = analogRead(A0);
  // 0 - 100
  Serial.print("force = " );
  Serial.println(force);

  a = analogRead(A1);
  // 100 - 200
//  Serial.print("a = " );
//  Serial.println(a);

  b = analogRead(A2);
//  Serial.print("b = " );
//  Serial.println(b);

  c = analogRead(A3);
//  Serial.print("c = " );
//  Serial.println(c);

  d = analogRead(A4);
//  Serial.print("d = " );
//  Serial.println(d);







//************stage1******************************************************************************************************************
//************stage1******************************************************************************************************************
if(force < 200){
// ************ aaaaaaaaaa ***********
// ************ aaaaaaaaaa ***********
    if(a > 200 && a < 300){
      MIDI_TX(144,bnote,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote,127);                                  // NOTE OFF
      delay(100);
    }     
    if(a > 300 && a < 400){
      MIDI_TX(144,bnote+add1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 400 && a < 500){
      MIDI_TX(144,bnote+add1*2 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 500 && a < 600){
      MIDI_TX(144,bnote+add1*3 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 600 && a < 700){
      MIDI_TX(144,bnote+add1*4 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 700 && a < 800){
      MIDI_TX(144,bnote+add1*5 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5,127);                                  // NOTE OFF
      delay(100);
    }   
    if(a < 200 || a > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }   
// ************ bbbbbbbbb ***********
// ************ bbbbbbbbb ***********
    if(b > 200 && b < 300){
      MIDI_TX(144,bnote,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b > 300 && b < 400){
      MIDI_TX(144,bnote+add1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 400 && b < 500){
      MIDI_TX(144,bnote+add1*2 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 500 && b < 600){
      MIDI_TX(144,bnote+add1*3 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 600 && b < 700){
      MIDI_TX(144,bnote+add1*4 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 700 && b < 800){
      MIDI_TX(144,bnote+add1*5 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b < 200 || b > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ccc ***********
// ************ ccc ***********
    if(c > 200 && c < 300){
      MIDI_TX(144,bnote,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote,127);                                  // NOTE OFF
      delay(100);
    }       
    if(c > 300 && c < 400){
      MIDI_TX(144,bnote+add1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 400 && c < 500){
      MIDI_TX(144,bnote+add1*2 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 500 && c < 600){
      MIDI_TX(144,bnote+add1*3 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 600 && c < 700){
      MIDI_TX(144,bnote+add1*4 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 700 && c < 800){
      MIDI_TX(144,bnote+add1*5 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5,127);                                  // NOTE OFF
      delay(100);
    }    
    if(c < 200 || c > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ddd ***********
// ************ ddd ***********
    if(d > 200 && d < 300){
      MIDI_TX(144,bnote,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote,127);                                  // NOTE OFF
      delay(100);
    }       
    if(d > 300 && d < 400){
      MIDI_TX(144,bnote+add1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 400 && d < 500){
      MIDI_TX(144,bnote+add1*2 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 500 && d < 600){
      MIDI_TX(144,bnote+add1*3 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 600 && d < 700){
      MIDI_TX(144,bnote+add1*4 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 700 && d < 800){
      MIDI_TX(144,bnote+add1*5 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5,127);                                  // NOTE OFF
      delay(100);
    }    
    if(d < 200 || d > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
}


//***********stage2*******************************************************************************************************************
//***********stage2*******************************************************************************************************************
if(force > 200 && force < 500){
// ************ aaaaaaaaaa ***********
// ************ aaaaaaaaaa ***********
    if(a > 200 && a < 300){
      MIDI_TX(144,bnote+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1,127);                                  // NOTE OFF
      delay(100);
    }     
    if(a > 300 && a < 400){
      MIDI_TX(144,bnote+add1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 400 && a < 500){
      MIDI_TX(144,bnote+add1*2+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 500 && a < 600){
      MIDI_TX(144,bnote+add1*3+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 600 && a < 700){
      MIDI_TX(144,bnote+add1*4+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 700 && a < 800){
      MIDI_TX(144,bnote+add1*5+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1,127);                                  // NOTE OFF
      delay(100);
    }   
    if(a < 200 || a > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }   
// ************ bbbbbbbbb ***********
// ************ bbbbbbbbb ***********
    if(b > 200 && b < 300){
      MIDI_TX(144,bnote,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b > 300 && b < 400){
      MIDI_TX(144,bnote+add1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 400 && b < 500){
      MIDI_TX(144,bnote+add1*2+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 500 && b < 600){
      MIDI_TX(144,bnote+add1*3+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 600 && b < 700){
      MIDI_TX(144,bnote+add1*4+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 700 && b < 800){
      MIDI_TX(144,bnote+add1*5+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b < 200 || b > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ccc ***********
// ************ ccc ***********
    if(c > 200 && c < 300){
      MIDI_TX(144,bnote+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1,127);                                  // NOTE OFF
      delay(100);
    }       
    if(c > 300 && c < 400){
      MIDI_TX(144,bnote+add1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 400 && c < 500){
      MIDI_TX(144,bnote+add1*2+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 500 && c < 600){
      MIDI_TX(144,bnote+add1*3+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 600 && c < 700){
      MIDI_TX(144,bnote+add1*4+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 700 && c < 800){
      MIDI_TX(144,bnote+add1*5+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(c < 200 || c > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ddd ***********
// ************ ddd ***********
    if(d > 200 && d < 300){
      MIDI_TX(144,bnote+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1,127);                                  // NOTE OFF
      delay(100);
    }       
    if(d > 300 && d < 400){
      MIDI_TX(144,bnote+add1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 400 && d < 500){
      MIDI_TX(144,bnote+add1*2+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 500 && d < 600){
      MIDI_TX(144,bnote+add1*3+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 600 && d < 700){
      MIDI_TX(144,bnote+add1*4+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 700 && d < 800){
      MIDI_TX(144,bnote+add1*5+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(d < 200 || d > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
}

//***********stage3*******************************************************************************************************************
//***********stage3*******************************************************************************************************************
if(force > 500){
// ************ aaaaaaaaaa ***********
// ************ aaaaaaaaaa ***********
    if(a > 200 && a < 300){
      MIDI_TX(144,bnote+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }     
    if(a > 300 && a < 400){
      MIDI_TX(144,bnote+add1+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 400 && a < 500){
      MIDI_TX(144,bnote+add1*2+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 500 && a < 600){
      MIDI_TX(144,bnote+add1*3+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 600 && a < 700){
      MIDI_TX(144,bnote+add1*4+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(a > 700 && a < 800){
      MIDI_TX(144,bnote+add1*5+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }   
    if(a < 200 || a > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }   
// ************ bbbbbbbbb ***********
// ************ bbbbbbbbb ***********
    if(b > 200 && b < 300){
      MIDI_TX(144,bnote+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b > 300 && b < 400){
      MIDI_TX(144,bnote+add1+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 400 && b < 500){
      MIDI_TX(144,bnote+add1*2+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 500 && b < 600){
      MIDI_TX(144,bnote+add1*3+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 600 && b < 700){
      MIDI_TX(144,bnote+add1*4+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(b > 700 && b < 800){
      MIDI_TX(144,bnote+add1*5+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(b < 200 || b > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ccc ***********
// ************ ccc ***********
    if(c > 200 && c < 300){
      MIDI_TX(144,bnote+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }       
    if(c > 300 && c < 400){
      MIDI_TX(144,bnote+add1+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 400 && c < 500){
      MIDI_TX(144,bnote+add1*2+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 500 && c < 600){
      MIDI_TX(144,bnote+add1*3+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 600 && c < 700){
      MIDI_TX(144,bnote+add1*4+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(c > 700 && c < 800){
      MIDI_TX(144,bnote+add1*5+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(c < 200 || c > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
// ************ ddd ***********
// ************ ddd ***********
    if(d > 200 && d < 300){
      MIDI_TX(144,bnote+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }       
    if(d > 300 && d < 400){
      MIDI_TX(144,bnote+add1+jump1+jump1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 400 && d < 500){
      MIDI_TX(144,bnote+add1*2+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*2+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 500 && d < 600){
      MIDI_TX(144,bnote+add1*3+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*3+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 600 && d < 700){
      MIDI_TX(144,bnote+add1*4+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*4+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }
    if(d > 700 && d < 800){
      MIDI_TX(144,bnote+add1*5+jump1+jump1 ,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,bnote+add1*5+jump1+jump1,127);                                  // NOTE OFF
      delay(100);
    }    
    if(d < 200 || d > 800){
      MIDI_TX(144,-1,127);                                  // NOTE ON
      delay(100);
      MIDI_TX(128,-1,127);                                  // NOTE OFF
      delay(100);
    }
}

}






