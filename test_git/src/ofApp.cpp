#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0,0,0);
    ofSetColor(255, 255, 255, 255);
    ofCircle(300, 550, 100);
    ofRect(200,450,100,100);
    ofTriangle(100,100,100,200,200,200);
    ofEllipse(500, 200, 200, 100);
    ofLine(10, 500, 10,100 );
    
    ofNoFill();
    ofBeginShape();
    ofVertex(10, 10);
    ofVertex(100, 100);
    ofEndShape();
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
