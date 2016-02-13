#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // draw grid
    ofSetColor(30);
    ofSetLineWidth(1);
    int gridXNum = ceil(ofGetWidth()  / gridSize) + 1;
    int gridYNum = ceil(ofGetHeight() / gridSize) + 1;
    for (int i = 0; i < gridXNum; i++){
        ofLine(gridSize*i, 0, gridSize*i, ofGetHeight());
    }
    for (int i = 0; i < gridYNum; i++){
        ofLine(0, gridSize*i, ofGetWidth(), gridSize*i);
    }

    //
    ofSetColor(0);
    ofSetLineWidth(1);
    ofLine(cursor.x, 0, cursor.x, ofGetHeight());
    ofLine(0, cursor.y, ofGetWidth(), cursor.y);
    
    //
    ofPoint center;
    center.set(
               ofGetWidth()/2  - (ofGetWidth()/2)%gridSize,
               ofGetHeight()/2 - (ofGetHeight()/2)%gridSize
    );
    ofPoint delta = center - cursor;
    double d = sqrt(delta.x * delta.x + delta.y * delta.y);
    
    ofNoFill();
    
    double deg = atan(delta.y/delta.x) * 180 / PI;
    if(delta.x > 0){
        deg += 180;
    }
    if(delta.x < 0 && delta.y > 0){
        deg += 360;
    }
    ofColor hue;
    hue.setHsb(ofMap(deg, 0, 360, 0, 255), 255, 255);
    ofSetColor(hue);
    ofSetLineWidth(4);
    
    ofLine(center, cursor);
    ofCircle(center, d);
    
    ofFill();
    ofCircle(center, d*0.2);
    
    
    
//    ofDrawBitmapString(ofToString(deg), 20, 20);
//    ofDrawBitmapString(ofToString(0), 40, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    cursor.x = mouseX;
    cursor.y = mouseY;
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
