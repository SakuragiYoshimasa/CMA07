#include "ofApp.h"
int color_mode = 0;
int numRect;

//--------------------------------------------------------------
void ofApp::setup(){
    numRect = ofGetWidth()/10;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<numRect; i++){
        lineColor[i] = 8*i;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255,255,255);
    ofSetColor(0, 0, 0);
    
    ofRotate(45);
    ofScale(2, 2);
    
    for (int i = 0; i<=ofGetWidth()/10; i++) {
        if ((i%2)==0) {
    //ofSetColor(ofColor::fromHsb(lineColor[i], 255, 255));
            ofRect(10*i, 0, 10, ofGetHeight());
        }
    }
    
    for (int i = 0; i<=ofGetHeight()/10; i++) {
        if ((i%2)==0) {
            ofRect(0, 10*i, ofGetWidth(), 10);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
