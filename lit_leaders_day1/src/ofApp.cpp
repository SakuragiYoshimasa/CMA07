#include "ofApp.h"

//--------------------------------------------------------------



void ofApp::setup(){
    ofSetCircleResolution(100);
    
    cx = 100;
    cy = 100;
    px = 5;
    py = 5;
    cSize = 100;
    drawflag = true;
}

//--------------------------------------------------------------
void ofApp::update(){
    cx = cx + px;
    cy = cy + py;
    if (cx < 100 || ofGetWidth()-100 < cx) px *= -1;
    if (cy < 100 || ofGetHeight()-100 < cy) py *= -1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    easycam.begin();
    ofBackground(255, 255, 255);
    
    int tam = 128;
    
    if(drawflag){
        ofFill();
        //draw line1
        ofSetLineWidth(20);
        ofSetColor(255, 0, 0);
        for(int i = 1 ; i < 8 ; i++) ofLine(tam*i, 0, tam*i, 768);
    
        //draw line2
        for(int i = 1 ; i < 6 ; i++) ofLine(0, tam*i, 1024, tam*i);

        ofSetColor(0, 0, 255);
        ofCircle(cx, cy, cSize);
        
        ofNoFill();
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(45);
        ofSetColor(255, 0, 0);
        ofRect(-150, -150, 300, 300);
        ofPopMatrix();
        ofSetColor(0, 0, 255);
        ofRect(0, 0, 500, 628);
    }
    



    //draw 3d objects
    easycam.end();
    
//    ofBeginShape();
//    ofVertex(100, 200);
//    ofVertex(300, 100);
//    ofVertex(400, 300);
//    ofEndShape();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 'z':
            px *= 2;
            py *= 2;
            break;
        case 'x':
            px *= 0.5;
            py *= 0.5;
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
    if ((cx-cSize/2 < x && cSize/2+cx > x) && (cy-cSize/2 < y && cSize/2+cy > y)){
        px = px * (-1);
        py = py * (-1);
        drawflag = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    drawflag = true;

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
