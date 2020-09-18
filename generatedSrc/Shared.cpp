#include "../generatedHeader/Shared.h"
int Shared::send(IntMsg num){
	/*Configure your own implementation of length_*/
	int length_ = 0;
	u_char* data_ = (u_char*)malloc(length_*sizeof(u_char));
	u_char* dst_;	/*Add MAC Address here*/
	ushort mac[6];
	EtherSender snd(mac);
	snd.getDevice();
	/*add your identifier of the sender*/
	int success =snd.sendEtherBroadcast(data_, length_);
	int result;
	return result;

}
void Shared::SMLMainShared(){
	while(__currentState != -100) {
		switch(__currentState){
			case STATE___init:
				std::cout << "--------------------STATE___init" << std::endl;
				
				__currentState = STATE__S8;
				
				break;
			case STATE___final:
				std::cout << "--------------------STATE___final" << std::endl;
				break;
			case STATE__S8:
				std::cout << "--------------------STATE__S8" << std::endl;
				
					IntMsg sp;
					IntMsg sg;
					sp.setData(p);
					sg.setData(g);
					send(sp);
					send(sg);
				__currentState = STATE___final;
				
				break;
			default: break;
		}
	}
}

