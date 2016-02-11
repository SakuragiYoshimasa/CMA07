#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receiver.setup(H_PORT);
    sender.setup(HOST, C_PORT);
    
    remoteMouse.x = 0;
    remoteMouse.y = 0;
    
    mouseButtonState = "";
}

//--------------------------------------------------------------
void ofApp::update(){
    while(receiver.hasWaitingMessages()){
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        
        if(m.getAddress() == "/mouse/position"){
            remoteMouse.x = m.getArgAsInt32(0);
            remoteMouse.y = m.getArgAsInt32(1);
        }else if(m.getAddress() == "/mouse/button"){
            mouseButtonState = m.getArgAsString(0);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
//    ofSetColor(0);
    
    if(mouseButtonState == "down"){
        ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    }else{
         ofSetColor(0);
    }
    ofDrawBitmapString("press any key", ofGetWidth()/2, ofGetHeight()/2);
    ofDrawCircle(remoteMouse.x, remoteMouse.y, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    ofxOscMessage m;
    m.setAddress("/keyboard/music");
    m.addStringArg("pause");
    
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    ofxOscMessage m;
    m.setAddress("/keyboard/music");
    m.addStringArg("start");
    
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
