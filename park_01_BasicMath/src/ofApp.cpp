#include "ofApp.h"

int color_mode = 0;
int numLine;
int add_y = 0;
int add_y_rate = 2;

//--------------------------------------------------------------
void ofApp::setup(){
    numLine = ofGetWidth()/10;
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0 ; i < numLine ; i++)
        lineColor[i] = 4*i;

    if(ofGetElapsedTimeMillis()%2 == 0){
        add_y += add_y_rate;
        if(add_y >= 100 || add_y < 0){
            add_y_rate = -add_y_rate;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundHex(0xffffff);
    ofSetHexColor(0x000000);
    

    
    for(int i = 0 ; i < ofGetWidth()/5 ; i++){
        if(color_mode == 0){
            ofSetColor(ofColor::fromHsb(lineColor[i], 255, 255));
        }else if(color_mode == 1){
            ofSetColor(0, 255, 0);
        }else{
            ofSetColor(0, 0, 255);
        }
        
        ofDrawLine(0,50+(i*add_y),ofGetWidth(),50+(i*add_y));
        
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
