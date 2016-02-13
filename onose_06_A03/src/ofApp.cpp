#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor background;
    ofColor brush;
    background.set(30, 40, 30);
    brush.set(200, 200, 10);
    ofBackground(background);
    int circleSize = 400;
    ofNoFill();
    ofSetColor(brush);
//    ofCircle(ofGetWidth()/2, ofGetHeight()/2, circleSize);
    float a = 1.5;
    for (int i = 0; i < 48; i++) {
        a = ofRandom(1.0);
        ofLine(ofGetWidth()/2, ofGetHeight()/2,
               ofGetWidth()/2  + a * circleSize * cos(PI*(i/24.0)),
               ofGetHeight()/2 + a * circleSize * sin(PI*(i/24.0))
               );
    }
    int k = 50;
    ofTriangle(ofGetWidth()/2  + k * cos(PI*(-0.5+(2.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(2.0/3.0))),
               ofGetWidth()/2  + k * cos(PI*(-0.5+(4.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(4.0/3.0))),
               ofGetWidth()/2  + k * cos(PI*(-0.5+(6.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(6.0/3.0)))
               );
    k = 45;
    ofFill();
    ofTriangle(ofGetWidth()/2  + k * cos(PI*(-0.5+(2.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(2.0/3.0))),
               ofGetWidth()/2  + k * cos(PI*(-0.5+(4.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(4.0/3.0))),
               ofGetWidth()/2  + k * cos(PI*(-0.5+(6.0/3.0))),
               ofGetHeight()/2 + k * sin(PI*(-0.5+(6.0/3.0)))
               );
    ofSetColor(background);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 15);
    ofSetColor(brush);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, 10);
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
