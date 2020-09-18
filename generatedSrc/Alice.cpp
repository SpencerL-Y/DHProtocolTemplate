#include "../generatedHeader/Alice.h"
static void dataHandlerAlicereceive(u_char* param, const struct pcap_pkthdr* header, const u_char* packetData){
	ether_header* eh;
	eh = (ether_header*)packetData;
	/*Configure your own protocol number of ethernet frame*/
	if(ntohs(eh->type) == 0x888f){
		/*Add your own packet handling logic, tempData is used to store the packet after breaking the listening loop*/
		tempDataAlice = NULL;
		int breakingLoopCondition = 0;
		if(breakingLoopCondition){
			pcap_breakloop(devAlice);
		}
	}
}
int Alice::receive(IntMsg num){
	/*Configure your own implementation of length_*/
	int length_ = 0;
	u_char* data_ = (u_char*)malloc(length_*sizeof(u_char));
	u_char* dst_;	/*Add MAC Address here*/
	ushort mac[6];
	EtherReceiver er;
	pcap_if_t* dev = er.getDevice();
	char errbuf[500];
	pcap_t* selectedAdp = pcap_open_live(dev->name, 65536, 1, 1000, errbuf);
	devAlice = selectedAdp;
	/*Add self defined dataHandler to handle data received*/
	/*parameters: u_char* param, const struct pcap_pkthdr* header, const u_char* packetData*/
	er.listenWithHandler(dev, dataHandlerAlicereceive, data_);
	/*Add your own data processing logic here*/
	free(data_);
	int result;
	return result;

}
int Alice::send(IntMsg num){
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
int Alice::exp(int num[]){
int result;
	return result;

}
int Alice::mod(int num[]){
int result;
	return result;

}
void Alice::SMLMainAlice(){
	while(__currentState != -100) {
		switch(__currentState){
			case STATE___init:{
				std::cout << "--------------------STATE___init" << std::endl;
				
					IntMsg p1;
					IntMsg g1;
					receive(p1);
					p = p1.getData();
					receive(g1);
					g = g1.getData();
				__currentState = STATE__S2;
				
				break;
			}
			case STATE___final:{
				std::cout << "--------------------STATE___final" << std::endl;
				break;
			}
			case STATE__S2:{
				std::cout << "--------------------STATE__S2" << std::endl;
				if(2<=freshA<=p-1){
					int para[] = {g,freshA};
					int y;
					y = exp(para);
					int m[] = {y,p};
					int ya;
					ya = mod(m);
					IntMsg m1;
					m1.setData(ya);
					send(m1);
				__currentState = STATE__S4;
				}
				break;}
			case STATE__S4:{
				std::cout << "--------------------STATE__S4" << std::endl;
				
					IntMsg mm;
					receive(mm);
					int ms[] = {mm.getData(),freshA};
					int n;
					n = exp(ms);
					int ns[] = {n,p};
					int ka;
					ka = mod(ns);
				__currentState = STATE___final;
				
				break;}
			default: 
				break;
		}
	}
}

