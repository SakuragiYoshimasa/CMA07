#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    angle += 0.1;
    
//    x = 100 * cos(angle);
//    y = 100 * sin(angle);
    
    x += a * vx;
    y += a * vy;
    if(x >= ofGetWidth() || x <= 0) vx *= -1;
    if(y >= ofGetHeight() || y <= 0) vy *= -1;
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
    
    
    easycam.begin();
    
    int gridXNum = 8;
    int gridYNum = 6;
    
    int gridX = ofGetWidth() / gridXNum;
    int gridY = ofGetHeight() / gridYNum;
    
    ofSetColor(100, 100, 100);
    for (int i = 0; i < gridXNum; i++) {
        ofLine(i * gridX, 0, i * gridX, ofGetHeight());
    }
    for (int i = 0; i < gridYNum; i++) {
        ofLine(0, i * gridY, ofGetWidth(), i * gridY);
    }
    ofSetColor(255, 0, 0);
    // draw
//    ofEllipse(gridX * 1, gridY * 3, gridX * 1.5, gridY * 5);
    ofCircle(x, y, gridX * 0.6);
//    ofRect(gridX * 4, gridY * 2, gridX * 2, gridY * 2);
//    ofColor color = ofColor(255, 0, 0);
//    ofSetColor(color);
//    ofTriangle(gridX * 2.3, gridY * 4.3, gridX * 2.3, gridY * 5.6, gridX * 3.6, gridY * 5.6);
    
    ofPushMatrix();
    
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofRotate(45);
    ofRect(-100, -100, 200, 200);
    
    ofPopMatrix();
    ofRect(200, 200, 200, 200);
    
    easycam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case 'a':
            a += 1;
            break;
        case 'b':
            a -= 1;
            break;
        default:
            break;
    }
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
