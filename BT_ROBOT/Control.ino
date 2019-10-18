//Funcao que controla os motores
void control(char dir){
    switch(dir){
       //Anda para frente   
       case 'w':
           analogWrite(m1A_pin, 0);
           analogWrite(m1B_pin, potF);
           analogWrite(m2A_pin, 0);
           analogWrite(m2B_pin, potH);
           break;
              
       //Anda para tras   
       case 'x':
           analogWrite(m1A_pin, potF);
           analogWrite(m1B_pin, 0);
           analogWrite(m2A_pin, potF);
           analogWrite(m2B_pin, 0);
           break;
              
       //Anda para direita   
       case 'd':
           analogWrite(m1A_pin, potS);
           analogWrite(m1B_pin, 0);
           analogWrite(m2A_pin, 0);
           analogWrite(m2B_pin, potH);
           break;
              
       //Anda para esquerda
       case 'a':
           analogWrite(m1A_pin, 0);
           analogWrite(m1B_pin, potF);
           analogWrite(m2A_pin, potS);
           analogWrite(m2B_pin, 0);
           break; 
            
       // Parar
       case 'p':
           analogWrite(m1A_pin, 0);
           analogWrite(m1B_pin, 0);
           analogWrite(m2A_pin, 0);
           analogWrite(m2B_pin, 0);
           break;
      }       
}
