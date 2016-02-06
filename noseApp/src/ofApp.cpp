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
    
//    ofFill();
//    
//    ofCircle(300, 250, 100);
//    ofRect(200, 450, 200, 200);
//    ofTriangle(100, 100, 100, 200, 150, 150);
//    ofEllipse(500, 500, 100, 200);
//    ofLine(0, 0, 300, 400);
//    
//    
//    ofNoFill();
//    ofSetLineWidth(5.0);
//    ofBeginShape();
//    ofVertex(30, 30);
//    ofVertex(40, 35);
//    ofVertex(50, 100);
//    ofVertex(60, 45);
//    ofVertex(70, 50);
//    ofVertex(80, 55);
//    ofVertex(90, 60);
//    ofVertex(190, 95);
//    ofEndShape();
//
    // make grid
    int gridXNum = 8;
    int gridYNum = 6;
    
    int gridX = ofGetWidth() / gridXNum;
    int gridY = ofGetHeight() / gridYNum;
    
    for (int i = 0; i < gridXNum; i++) {
        ofLine(i * gridX, 0, i * gridX, ofGetHeight());
    }
    for (int i = 0; i < gridYNum; i++) {
        ofLine(0, i * gridY, ofGetWidth(), i * gridY);
    }
    
    // draw
    ofEllipse(gridX * 1, gridY * 3, gridX * 1.5, gridY * 5);
    ofCircle(gridX * 3, gridY * 1, gridX * 0.6);
    ofRect(gridX * 4, gridY * 2, gridX * 2, gridY * 2);
    ofTriangle(gridX * 2.3, gridY * 4.3, gridX * 2.3, gridY * 5.6, gridX * 3.6, gridY * 5.6);
    
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
