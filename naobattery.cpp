#include <iostream>
#include <alerror/alerror.h>
#include <alproxies/altexttospeechproxy.h>
#include <alvalue/alvalue.h>
#include <alproxies/albatteryproxy.h>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc != 2)
  {
    std::cerr << "Wrong number of arguments!" << std::endl;
    std::cerr << "Usage: say NAO_IP" << std::endl;
    exit(2);
  }

  AL::ALBatteryProxy battery(argv[1], 9559);
  
  bool teste = true;

  battery.enablePowerMonitoring(true);
  int batteryCharge = battery.getBatteryCharge();

  //Conversão int -> string
  std::stringstream stringBattery;
  stringBattery << batteryCharge;

  const std::string phraseToSay = "My battery is currently at ";
  const std::string percent = "percent";
  const std::string phraseToSay2 = stringBattery.str();
  const std::string lowBattery = "Oh! My battery is low, I'm dying.";
  try
  {

    //AL::ALTextToSpeechProxy tts(argv[1], 9559);

      //tts.say(phraseToSay);
      //tts.say(phraseToSay2);
      //tts.say(percent);

      cout << phraseToSay << batteryCharge << " " << percent << endl;

      //if(batteryCharge < 11);
        //tts.say(lowBattery);
  }
  
  catch (const AL::ALError& e)
  {
    std::cerr << "Caught exception: " << e.what() << std::endl;
    exit(1);
  }
  exit(0);
}
