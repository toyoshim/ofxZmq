#include "ofxZmqRequest.h"

ofxZmqRequest::ofxZmqRequest() : ofxZmqSocket(ZMQ_REQ)
{
}

void ofxZmqRequest::connect(string addr)
{
	ofxZmqSocket::connect(addr);
}

void ofxZmqRequest::send(const void *data, size_t len, bool nonblocking, bool more)
{
	ofxZmqSocket::send(data, len, nonblocking, more);
}

void ofxZmqRequest::send(void *data, size_t len, bool nonblocking, bool more)
{
	ofxZmqSocket::send(data, len, nonblocking, more);
}

void ofxZmqRequest::receive(vector<uint8_t> &data)
{
	ofxZmqSocket::receive(data);
}

bool ofxZmqRequest::hasWaitingMessage(long timeout_millis)
{
	return ofxZmqSocket::hasWaitingMessage(timeout_millis);
}

bool ofxZmqRequest::getNextMessage(vector<uint8_t> &data)
{
	return ofxZmqSocket::getNextMessage(data);
}
