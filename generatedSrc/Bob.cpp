#include "../generatedHeader/Bob.h"
static void dataHandlerBobreceive(u_char* param, const struct pcap_pkthdr* header, const u_char* packetData){
	ether_header* eh;
	eh = (ether_header*)packetData;
	/*Configure your own protocol number of ethernet frame*/
	if(ntohs(eh->type) == 0x888f){
		/*Add your own packet handling logic, tempData is used to store the packet after breaking the listening loop*/
		tempDataBob = NULL;
		int breakingLoopCondition = 0;
		if(breakingLoopCondition){
			pcap_breakloop(devBob);
		}
	}
}
int Bob::receive(IntMsg num){
	/*Configure your own implementation of length_*/
	int length_ = 0;
	u_char* data_ = (u_char*)malloc(length_*sizeof(u_char));
	u_char* dst_;	/*Add MAC Address here*/
	ushort mac[6];
	EtherReceiver er;
	pcap_if_t* dev = er.getDevice();
	char errbuf[500];
	pcap_t* selectedAdp = pcap_open_live(dev->name, 65536, 1, 1000, errbuf);
	devBob = selectedAdp;
	/*Add self defined dataHandler to handle data received*/
	/*parameters: u_char* param, const struct pcap_pkthdr* header, const u_char* packetData*/
	er.listenWithHandler(dev, dataHandlerBobreceive, data_);
	/*Add your own data processing logic here*/
	free(data_);
	int result;
	return result;

}
int Bob::send(IntMsg num){
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
int Bob::exp(int num[]){
int result;
	return result;

}
int Bob::mod(int num[]){
int result;
	return result;

}
void Bob::SMLMainBob(){
	while(__currentState != -100) {
		switch(__currentState){
			case STATE___init:{
				std::cout << "--------------------STATE___init" << std::endl;
				
					IntMsg g1;
					IntMsg p1;
					receive(g1);
					g = g1.getData();
					receive(p1);
					p = p1.getData();
				__currentState = STATE__S3;
				
				break;}
			case STATE___final:{
				std::cout << "--------------------STATE___final" << std::endl;
				break;}
			case STATE__S3:{
				std::cout << "--------------------STATE__S3" << std::endl;
				if(1<=freshB<=p-1){
					int y[] = {g,freshB};
					int expy;
					expy = exp(y);
					int m[]  = {expy,g};
					int yb;
					yb = mod(m);
					IntMsg m1;
					m1.setData(yb);
					send(m1);
				__currentState = STATE__S5;
				}
				break;}
			case STATE__S5:{
				std::cout << "--------------------STATE__S5" << std::endl;
				
					IntMsg n;
					receive(n);
					int ns[] = {n.getData(),freshB};
					int kb1;
					kb1 = exp(ns);
					int ms[] = {kb1,p};
					int kb;
					kb = mod(ms);
				__currentState = STATE___final;
				
				break;}
			default: break;
		}
	}
}

