
//-------------------varialesgloba loop---------------
int RELE,onrele,silen,silen2,newwifi,aut,sy1,minu,dentro,fuera,apagate,prendete,limin,limite; // Pin digital para el rele de control de encendido
int mo,offpresencia1,tem1,Pintem1,Pinrele1,pmtto,horometro,horometroA,alarmahrs,dia,mes,ano,hora,minutos,segundos,pday,pmonth,pyear,T,H,M,S,D,E,A ,ONhoro1,h ;   // SENSORES NECESITAN UNA VARIABLE AUXILIAR PARA COMPARAR CAMBIOS
String  mo1,t,ssi,ubi,TEM,EST,rel,MOV,enne;

//-----------CODIGO HTML PAGINA DE CONFIGURACION---------------
String pagina = "<!DOCTYPE html>"
"<html lang='en'>"
"<head>"
    "<meta charset='UTF-8'>"
    "<meta name='viewport' content='width=device-width, initial-scale=1.0'>"
    "<meta http-equiv='X-UA-Compatible' content='ie=edge'>"
    "<title>φ atsurabzaid Ω Y-KAN</title>"
    "<link href='https://fonts.googleapis.com/css?family=Roboto' rel='stylesheet'>"
    "<link rel='shortcut icon' href='data:image/ico;base64,AAABAAEAEBAAAAEAIABoBAAAFgAAACgAAAAQAAAAIAAAAAEAIAAAAAAAAAQAABILAAASCwAAAAAAAAAAAADe2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9jTA//Y0wP/2NMD/9jTBP/Y0wT/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMD/9jTA//Y0wP/2NIA/9jSAP/Y0wH/19IA/9fSAv/Y0wP/2NMC/9jTAv/Y0wL/2NMC/9jTA//Y0wL/2NMB/9jSAP/Y0gD/2NIA/9vXLP/b1if/29kx/+jolf/o5of/2tcn/9nWGv/Z1xz/2dYZ/9rWJP/a1hr/2Ncg/9nVFP/a1iP/29ct/9vXK//Z1Av/2NQJ/9nUDv/m5Xv/391D/9bSAP/Y1Ab/19MD/9nUA//Y1AX/2NQD/9nVBP/Y0wX/2NQJ/9jUC//Y1Ar/2NMA/9jTAP/Y1AD/08gD/9TBAv/ZxgP/2MUE/9nGBP/TwQb/zbwH/829Bv/SwQX/2tAB/9jTAP/Y0wD/2NMA/9jTAv/Y0gL/2tYC/9HDBf/Wvgb/4McC/93FAv/hyAH/0LoI/7unDf/XwwT/zrcH/9fLAv/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9nVAv/WyAT/0boH/+DIAf/dxQL/38cB/9W/Bv/Fsgr/2MME/825B//VygP/2dUC/9jTAv/Y0wL/2NMC/9jTAv/Y1AL/2soD/9W+Bf/WwAX/4MgB/+DIAf/bxAT/484B/+LOAP/OuQf/2MwC/9jUAv/Y0wL/2NMC/9jTAv/Y0wL/2NUC/9fIBP/dxgL/1sIF/9K7B//awQP/2L8G/9nEBP/Svgb/1L0F/9rNAf/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9jUAv/YzQL/1sgE/9jLAv/TxgT/zsAG/87ABv/NwAb/08QG/9fIA//Y0AL/2NQC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NQC/9jUAv/Y1AL/2dUC/9rWAf/Z1QH/2tYC/9nVAv/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0gL/2NIC/9jSAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA==' type='image/x-icon'>"
    "<link rel='icon' href='data:image/ico;base64,AAABAAEAEBAAAAEAIABoBAAAFgAAACgAAAAQAAAAIAAAAAEAIAAAAAAAAAQAABILAAASCwAAAAAAAAAAAADe2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/3top/97aKf/e2in/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9fSAP/X0gD/19IA/9jTA//Y0wP/2NMD/9jTBP/Y0wT/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTA//Y0wP/2NMD/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMD/9jTA//Y0wP/2NIA/9jSAP/Y0wH/19IA/9fSAv/Y0wP/2NMC/9jTAv/Y0wL/2NMC/9jTA//Y0wL/2NMB/9jSAP/Y0gD/2NIA/9vXLP/b1if/29kx/+jolf/o5of/2tcn/9nWGv/Z1xz/2dYZ/9rWJP/a1hr/2Ncg/9nVFP/a1iP/29ct/9vXK//Z1Av/2NQJ/9nUDv/m5Xv/391D/9bSAP/Y1Ab/19MD/9nUA//Y1AX/2NQD/9nVBP/Y0wX/2NQJ/9jUC//Y1Ar/2NMA/9jTAP/Y1AD/08gD/9TBAv/ZxgP/2MUE/9nGBP/TwQb/zbwH/829Bv/SwQX/2tAB/9jTAP/Y0wD/2NMA/9jTAv/Y0gL/2tYC/9HDBf/Wvgb/4McC/93FAv/hyAH/0LoI/7unDf/XwwT/zrcH/9fLAv/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9nVAv/WyAT/0boH/+DIAf/dxQL/38cB/9W/Bv/Fsgr/2MME/825B//VygP/2dUC/9jTAv/Y0wL/2NMC/9jTAv/Y1AL/2soD/9W+Bf/WwAX/4MgB/+DIAf/bxAT/484B/+LOAP/OuQf/2MwC/9jUAv/Y0wL/2NMC/9jTAv/Y0wL/2NUC/9fIBP/dxgL/1sIF/9K7B//awQP/2L8G/9nEBP/Svgb/1L0F/9rNAf/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9jUAv/YzQL/1sgE/9jLAv/TxgT/zsAG/87ABv/NwAb/08QG/9fIA//Y0AL/2NQC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NQC/9jUAv/Y1AL/2dUC/9rWAf/Z1QH/2tYC/9nVAv/Y1AL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0gL/2NIC/9jSAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/2NMC/9jTAv/Y0wL/AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA==' type='image/x-icon'>"
    
    "<style>"
       " img{"
            "max-width: 120px;"
           " height: auto;"
        "}"
        "*{"
            "font-family: 'Roboto', sans-serif;"
       " }"
       " input{"
           " border-radius: 1em;"
            "text-decoration: none;"
            "outline: none;"
     "}"
    " a{"
    "text-decoration: none;"
    "}"
   ".btn {"
   "width: 130px;"
  "position: relative;"
  "display: block;"
  "padding: 1em;"
  "overflow: hidden;"
  "border-width: 0;"
  "outline: none;"
  "border-radius: 2px;"
  "box-shadow: 0 1px 4px rgba(0, 0, 0, .6);"  
"color: #ecf0f1;"  
"transition: background-color .3s;"
"}"
".green{"
"background-color: #2ecc71;"
"}"
".blue{"
"background-color: #1e88e5;"
"}"
".btn:hover, .btn:focus {"  
"opacity: 0.7;"
"}"
".btn > * {"
"position: relative;"
"}"
".btn span {"
  "display: block;"
"}"
".btn:before {"
  "content: '';"
  "position: absolute;"
  "top: 50%;"
  "left: 50%;"
  "display: block;"
  "width: 0;"
  "padding-top: 0;"
  "border-radius: 100%;"
 "background-color: rgba(236, 240, 241, .3);"
  "-webkit-transform: translate(-50%, -50%);"
  "-moz-transform: translate(-50%, -50%);"
  "-ms-transform: translate(-50%, -50%);"
  "-o-transform: translate(-50%, -50%);"
  "transform: translate(-50%, -50%);"
"}"
".btn:active:before {"
  "width: 120%;"
  "padding-top: 120%;"
  "transition: width .2s ease-out, padding-top .2s ease-out;"
"}"
/* Styles, not important */
"*, *:before, *:after {"
 " box-sizing: border-box;"
"}"
 "</style>"
"</head>"

"<body>"
    //"<img src='data:image/jpeg;base64,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IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIL//EAAL/2gAMAwEAAgADAAAAEAggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggghjAQRDDDDDDDDDDDCRSQRQQTQggggggggggggggggggbDTDDDDDDCXLNeWXADTTQXaQggggggggggggggggggfVP/8A/wD65w9189o/Mx4h/CUAKCCCCCCCCCCCCCCCCCB9Qy//APPQfffffaP/AP8ArgQCUAqCCCCCCCCCCCCCCCCCB/c9Wwc8999999o//wD/AOqkEACoIIIIIIIIIIIIIIIIIH1TFx133333332j/wD/AP8A+rUQioIIIIIIIIIIIIIIIIIGCij3333333332j//AP8A/wD5xSmoIIIIIIIIIIIIIIIIIH0T1X733333332j/wD/AP8A/wC/8pCCCCCCCCCCCCCCCCCCB/Bk9999999999pZkNAEV7ApqCCCCCCCCCCCCCCCCCB/Qd99999999999MNg999xApqCCCCCCCCCCCCCCCCCC8Ax1999999999t9s1v+65woqCCCCCCCCCCCCCCCCCB9Re1999999999tVNtmOel1oqCCCCCCCCCCCCCCCCCC3M9d999999999s99gW699UpqCCCCCCCCCCCCCCCCCAMA8d999999989cZ1kt898soiCCCCCCCCCCCCCCCCCCg9wwwwwwwwwwwhxhxRxxxghCCCCCCCCCCCCCCCCCCJsJCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCJJB1oCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCEBBBgKJCCACCCCC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' alt=''>"
    "<form action='guardar_conf' method='get'>"
        "SSID:<br><br>"
        "<input class='input1' name='ssid' type='text'><br><br> PASSWORD:<br><br>"
        "<input class='input1' name='pass' type='password'><br><br>"
        "<input class='boton btn green' type='submit' value='GUARDAR' /><br><br>"
    "</form>"
    "<a href='escanear'><button class='boton btn blue'>ESCANEAR</button></a><br><br>";

//"</body>"

//"</html>;"

String paginafin = "</body>"
"</html>";

//------------------------SETUP WIFI-----------------------------
void setup_wifi() {
// Conexión WIFI
  WiFi.mode(WIFI_STA); //para que no inicie el SoftAP en el modo normal
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED and contconexion <50) { //Cuenta hasta 50 si no se puede conectar lo cancela
    ++contconexion;
    delay(250);
    Serial.print(".");
    digitalWrite(13, HIGH);//////cambiar pin no puede ser el 13
    delay(250);
    digitalWrite(13, LOW);
  }
  if (contconexion <50) {   
      Serial.println("");
      Serial.println("WiFi conectado φatsurabzaidφ  Ω Y-KAN ");
      Serial.println(WiFi.localIP());
      digitalWrite(13, HIGH);  
  }
  else { 
      Serial.println("");
      Serial.println("Error de conexion");
      digitalWrite(13, LOW);

     /* ////////////////////////
     delay(250);
      modoconf();
      ///////////////////////*/
  }
}

//--------------------------------------------------------------
WiFiClient espClient;
ESP8266WebServer server(80);
//--------------------------------------------------------------

//-------------------PAGINA DE CONFIGURACION--------------------
void paginaconf() {
  server.send(200, "text/html", pagina + mensaje + paginafin); 

////////////////////////////////////////////////
 while (WiFi.status() == WL_CONNECTED and contdesconexion <10) { //Cuenta hasta 10 si no se puede conectar lo cancela
    ++contdesconexion;
    delay(250);
    Serial.print(".");
    digitalWrite(13, HIGH);//////cambiar pin no puede ser el 13
    delay(250);
    digitalWrite(13, LOW);
  }
  if (contdesconexion <50) {   
      Serial.println("");
      Serial.println("WiFi conectado φatsurabzaidφ  Ω Y-KAN y reiniciando ");
      Serial.println(WiFi.localIP());
      digitalWrite(12,0);  
  }
  
////////////////////////////////////////////////
  
}

//--------------------MODO_CONFIGURACION------------------------
void modoconf() {
   
  delay(100);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);

  WiFi.softAP(ssidConf, passConf);
  IPAddress myIP = WiFi.softAPIP(); 
  Serial.print("IP del acces point: ");
  Serial.println(myIP);
  Serial.println("WebServer atsurabzaid φ iniciado...");

  server.on("/", paginaconf); //esta es la pagina de configuracion

  server.on("/guardar_conf", guardar_conf); //Graba en la eeprom la configuracion

  server.on("/escanear", escanear); //Escanean las redes wifi disponibles
  
  server.begin();

  while (true) {
      server.handleClient();
  }
}

//---------------------GUARDAR CONFIGURACION-------------------------
void guardar_conf() {
  
  Serial.println(server.arg("ssid"));//Recibimos los valores que envia por GET el formulario web
  grabar(0,server.arg("ssid"));
  Serial.println(server.arg("pass"));
  grabar(50,server.arg("pass"));

  mensaje = "Configuracion Guardada...";
  paginaconf();
}

//----------------Función para grabar en la EEPROM-------------------
void grabar(int addr, String a) {
  int tamano = a.length(); 
  char inchar[50]; 
  a.toCharArray(inchar, tamano+1);
  for (int i = 0; i < tamano; i++) {
    EEPROM.write(addr+i, inchar[i]);
  }
  for (int i = tamano; i < 50; i++) {
    EEPROM.write(addr+i, 255);
  }
  EEPROM.commit();
}

//-----------------Función para leer la EEPROM------------------------
String leer(int addr) {
   byte lectura;
   String strlectura;
   for (int i = addr; i < addr+50; i++) {
      lectura = EEPROM.read(i);
      if (lectura != 255) {
        strlectura += (char)lectura;
      }
   }
   return strlectura;
}

//---------------------------ESCANEAR----------------------------
void escanear() {  
  int n = WiFi.scanNetworks(); //devuelve el número de redes encontradas
  Serial.println("escaneo terminado");
  if (n == 0) { //si no encuentra ninguna red
    Serial.println("no se encontraron redes");
    mensaje = "no se encontraron redes";
  }  
  else
  {
    Serial.print(n);
    Serial.println(" redes encontradas");
    mensaje = "";
    for (int i = 0; i < n; ++i)
    {
      // agrega al STRING "mensaje" la información de las redes encontradas 
      mensaje = (mensaje) + "<p>" + String(i + 1) + ": " + WiFi.SSID(i) + " (" + WiFi.RSSI(i) + ") Ch: " + WiFi.channel(i) + " Enc: " + WiFi.encryptionType(i) + " </p>\r\n";
      //WiFi.encryptionType 5:WEP 2:WPA/PSK 4:WPA2/PSK 7:open network 8:WPA/WPA2/PSK
      delay(10);
    }
    Serial.println(mensaje);
    paginaconf();
  }
}

//------------------------SETUP-----------------------------
void setup() {

  pinMode(1, OUTPUT); //   es el pin de identificacion de funcionamiento conexion wifi

   pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  pinMode(0, INPUT);
  //pinMode(14, INPUT);  //D5  es el pin para configurar la wifi  este se activara o no desde la base de datos
  pinMode(12, OUTPUT);   //D6 es el pin de AVIZO CONEXION OK INTERNET
pinMode(16, INPUT);   //D0 es el pin de sensitivo de voltaje

  digitalWrite(12,1);
  // Inicia Serial
  Serial.begin(115200);
  Serial.println("");

  EEPROM.begin(512);

   // digitalWrite(12,1); // aqui se mandara voltaje a pin 14 para que
 
  /*
  if (digitalRead(14) == 0 ) {
    modoconf();
  }*/
   ////////////////////////
    
  

  leer(0).toCharArray(ssid, 50);
  leer(50).toCharArray(pass, 50);

  setup_wifi();

//-----------------------webtime-----------------------------------------
Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  H= Firebase.getInt("/WEB TIME/clock/hra");
M= Firebase.getInt("/WEB TIME/clock/min");
S= Firebase.getInt("/WEB TIME/clock/seg");
D= Firebase.getInt("/WEB TIME/clock/dia");
E= Firebase.getInt("/WEB TIME/clock/mes");
A= Firebase.getInt("/WEB TIME/clock/ano");

  setTime(H,M,S,D,E,A); 
}

//--------------------------LOOP--------------------------------

void loop() {


/////////////////////////
 newwifi = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/WIFI/configuraciones");
 if(newwifi == 1){
      modoconf(); 
 }
 if(newwifi == 1111){// este es para reiniciar el equipo remotamente
      digitalWrite(12,0);
      delay(250);
       digitalWrite(12,1);
       delay(2000);
 }
 
      ///////////////////////
///////////////////////
 T= Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/alarmas/tem");// se descarga condicion de limite de proteccion de temperatura
/*
FUNCION PARA OBTENER LA FECHA EN MODO TEXTO
Devuelve: DD-MM-AAAA HH:MM:SS
*/
time_t t = now();//Declaramos la variable time_t t

//Imprimimos la fecha y lahora
 
hora=hour(t);
minutos=minute(t);
dia=day(t);
mes=month(t);
ano=year(t);
segundos=second(t);
///////////para regular el cronometro de tiempo////////////////////
ONhoro1=Firebase.getInt("/WEB TIME/clave/ONclock");
////////////visualizar el cronometro en tiempo real/////////////////77
if(ONhoro1>2){

  Firebase.setInt("/WEB TIME/clock/hra",hora);
Firebase.setInt("/WEB TIME/clock/min",minutos);
Firebase.setInt("/WEB TIME/clock/seg",segundos);
Firebase.setInt("/WEB TIME/clock/dia",dia);
Firebase.setInt("/WEB TIME/clock/mes",mes);
Firebase.setInt("/WEB TIME/clock/ano",ano);

  }
////////////para dejar fuera el cronometro para regular desde el servidos///////////////////
////en ONhoro1 == 2 se activa cronometro/////////////////
if(ONhoro1<2){
    H= Firebase.getInt("/WEB TIME/clock/hra");
M= Firebase.getInt("/WEB TIME/clock/min");
S= Firebase.getInt("/WEB TIME/clock/seg");
D= Firebase.getInt("/WEB TIME/clock/dia");
E= Firebase.getInt("/WEB TIME/clock/mes");
A= Firebase.getInt("/WEB TIME/clock/ano");
setTime(H,M,S,D,E,A);
//ssiI=Firebase.getString("/SITIOS/sitio1");
}



//Programamos EL HOROMETRO INTERNO/////////////////


  
///desactivacion de alarma///////////
  offpresencia1= Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/PIR/Pin");// PIN 4 osea D2
  
/////offpresencia1 debera ser igual a 13 para que active el sensor de mo//////
 
  if(digitalRead(offpresencia1) == 1)// hay movimiento EN PIN 4 osea D2
{        mo = 1;
MOV = "!!!HAY MOVIMIENTO EN LA: ";

 

Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/parametros/presencia1",mo);
ssi=Firebase.getString("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/parametros/ubicacion");
Firebase.pushString("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/alarmas/EVENTOS",MOV + ssi + "->" + " {"+ hora +":"+ minutos +":" + segundos + "} " +  dia + "/" + mes + "/" + ano);
delay(100);
Firebase.setString("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/alarmas/NOTICIAS",MOV + ssi + "->" + " {"+ hora +":"+ minutos +":" + segundos + "} " +  dia + "/" + mes + "/" + ano);
if (Firebase.failed()) {
      Serial.print("setting /MO1 failed:");
      Serial.println(Firebase.error());  
      return;
  }

   }
else{
  
  mo = 0 ;
  MOV ="YKAN DE AZ SIEMPRE EN ALERTA:";
  Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/parametros/presencia1",mo);
  delay(100);

  if (Firebase.failed()) {
      Serial.print("setting /MO1 failed:");
      Serial.println(Firebase.error());  
      return;
  }
  
}
//////////////////////////AUTOMATICO////////////////////////////////////////////
aut = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/PIR/aut");// auto

RELE= Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/alarmas/est");// se descarga condicion para encendido de lampara
Pinrele1 = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/RELE/Pin");// se descarga pin de rele de activacion
onrele = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/RELE/ON");// se descarga pin de rele de activacion 1 PARA ENCENDER 0 PARA APAGAR
sy1=onrele;

 if (sy1==1&&mo==1) {
                    Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/min",minutos);
                }
if(sy1==0){
  Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/min",minutos);
}
  minu = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/min");
  limin = (minu +3);
  Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/dia",limin);
  //////////////////////////////////////////////////////////////////

////////////////////////////////////
///////////////////////////////////


 
  //////////////////////////////////////////////////////////////////
                   
if(aut==1){
  ////////////////////////////////////////////
  
  ////////////////////////////////////////////
   if (mo == 1 ) {
                 if (sy1==0) {
                            //digitalWrite(Pinrele1,1); // pin,estado 1 o 0//// es quien encendera la lampar
                           
                            prendete =1;
                            Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/RELE/ON",prendete);
                            
                        }
                      
                    }else{ 
                                ///////////////////////
                                if (mo==0&&sy1==1) {
                                    ////////////////////////////////////////////////////////////////////////////
                                            limite = Firebase.getInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/dia");
                                            ////////////////////////////////////
                                            if (limite>59){
                                                limite=0;
                                                 Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/tiempos/DT/min",limite);
                                            }
                                            ////////////////////////////////////////////////////////////////////////////////
                                            //if (min == 0 && aut == 1 || min == 5 && aut == 1 || min == 10 && aut == 1 || min == 15 && aut == 1 || min == 20 && aut == 1 || min == 25 && aut == 1 || min == 30 && aut == 1 || min == 35 && aut == 1 || min == 40 && aut == 1 || min == 45 && aut == 1 || min == 50 && aut == 1 || min == 55 && aut == 1) {
                                            if (minutos>=limite) {
                                               //digitalWrite(Pinrele1,0); // pin,estado 1 o 0//// es quien encendera la lampara
                                               apagate=0;
                                               Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/RELE/ON",apagate);
                                               fuera = 140;
                                                Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/PIR/Pin",fuera);
                                               
                                               
                                            } else {
                                              dentro = 4;
                                                Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/PIR/Pin",dentro);
                                            }
                                            ///////////////////////////////////////////
                                        }else{
                                          delay(9000);
                                           dentro = 4;
                                                Firebase.setInt("/CASAS/FrVts3PewEdhJUAwDR2ot5Rny2N2/YKAN/Ykan1/activaciones/PIR/Pin",dentro);
                                        }
                                }
                                //////////////////////////////////

  
  
 
 }
