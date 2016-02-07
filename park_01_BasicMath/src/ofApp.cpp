#include "ofApp.h"

int color_mode = 0;
int numLine;

//--------------------------------------------------------------
void ofApp::setup(){
    numLine = ofGetWidth()/10;
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0 ; i < numLine ; i++)
        lineColor[i] = 4*i;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundHex(0xffffff);
    ofSetHexColor(0x000000);
    
    int x = 20;
    for(int i = 0 ; i < ofGetWidth()/5 ; i++){
        if(color_mode == 0){
            ofSetColor(ofColor::fromHsb(lineColor[i], 255, 255));
        }else if(color_mode == 1){
            ofSetColor(0, 255, 0);
        }else{
            ofSetColor(0, 0, 255);
        }
        ofLine(x,0,x,ofGetHeight());
        x = x + 10;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'c'){
        color_mode = (color_mode + 1) % 3;
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
