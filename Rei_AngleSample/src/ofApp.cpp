#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(255, 255, 255);
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){


    ofSetLineWidth(1);
    ofSetColor(0, 0, 0);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
//グリッド線を表示
    
    int x = 34;
    int y = 34;
    
    for(int i=0; i<ofGetWidth(); i++){
        
        ofSetColor(170, 170, 170);
        ofLine(x, 0, x, ofGetHeight());
        x += 34;
    }
    
    for(int i=0; i<ofGetHeight(); i++){
        
        ofSetColor(170, 170, 170);
        ofLine(0, y, ofGetWidth(), y);
        y += 34;
    }
    
    ofSetColor(50, 50, 50);
    ofLine(0, mouseY, ofGetWidth(), mouseY);
    ofLine(mouseX, 0, mouseX, ofGetHeight());
    
    
//-------------------------------------------------------------
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    
//色相の変化（出来ていません）
    double angle = atan(y/x) * 180 / PI;
    
    ofColor hue;
    hue.setHsb(ofMap(angle, 0, 360, 0, 255), 255, 255);
    ofSetColor(hue);
    
    /*ofColor hue;
    ofSetColor(hue);
    hue.setHsb(angle,255,255);*/
    
    
    
    ofSetLineWidth(3);
    ofLine(0, 0, mouseX - ofGetWidth()/2, mouseY- ofGetHeight()/2 );
    
    
    ofTranslate(-ofGetWidth()/2,-ofGetHeight()/2);
    float dist = ofDist(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);
    
    ofNoFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, dist);
    ofFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, dist/4);
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    x_circle = x;
    y_circle = y;
    
    
    
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
