#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofSetColor(255, 255, 255);
    
    ofFill();
    
    ofCircle(300, 250, 100);
    ofRect(200, 450, 200, 200);
    ofTriangle(100, 100, 100, 200, 150, 150);
    ofEllipse(500, 500, 100, 200);
    ofLine(0, 0, 300, 400);
    
    
    ofNoFill();
    ofSetLineWidth(5.0);
    ofBeginShape();
    ofVertex(30, 30);
    ofVertex(40, 35);
    ofVertex(50, 100);
    ofVertex(60, 45);
    ofVertex(70, 50);
    ofVertex(80, 55);
    ofVertex(90, 60);
    ofVertex(190, 95);
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
