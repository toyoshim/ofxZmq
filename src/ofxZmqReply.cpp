#include "ofxZmqReply.h"

ofxZmqReply::ofxZmqReply() : ofxZmqSocket(ZMQ_REP)
{
}

void ofxZmqReply::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqReply::send(const void *data, size_t len, bool nonblocking, bool more)
{
	ofxZmqSocket::send(data, len, nonblocking, more);
}

void ofxZmqReply::send(void *data, size_t len, bool nonblocking, bool more)
{
	ofxZmqSocket::send(data, len, nonblocking, more);
}

void ofxZmqReply::receive(vector<uint8_t> &data)
{
	ofxZmqSocket::receive(data);
}

bool ofxZmqReply::hasWaitingMessage(long timeout)
{
	return ofxZmqSocket::hasWaitingMessage(timeout);
}

bool ofxZmqReply::getNextMessage(vector<uint8_t> &data)
{
	return ofxZmqSocket::getNextMessage(data);
}
