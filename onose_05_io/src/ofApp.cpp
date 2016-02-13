#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetColor(0);
    
//    soundplayer.loadSound("6713063__1_feat__Sam_White_Club_Mix.aiff");
//    soundplayer.setLoop(true);
//    soundplayer.setVolume(1.0);
//    soundplayer.play();
    soundStream.setup(this, 0, 1, 44100, 256, 4);
    video.initGrabber(ofGetHeight(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    volume = ofSoundGetSpectrum(1);
//    size_circle = volume[0] * 1300;
    size_circle = curVol * 2000;
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(x_circle, y_circle, size_circle);
    video.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case 'a':
            size_circle = size_circle + 20;
            break;
        case 's':
            size_circle = size_circle - 20;
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch(key){
        case 'q':
            size_circle = size_circle + 20;
            break;
        case 'w':
            size_circle = size_circle - 20;
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    x_circle = x;
    y_circle = y;
    ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    if(button == 0){
        ofSetColor(255, 0, 0);
    }
    if(button == 1){
        ofSetColor(0, 255, 0);
    }
    if(button == 2){
        ofSetColor(0, 0, 255);
    }
    x_circle = x;
    y_circle = y;
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    x_circle = x;
    y_circle = y;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    x_circle = ofGetWidth() / 2;
    y_circle = ofGetHeight() / 2;
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
//--------------------------------------------------------------
void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    curVol = 0.0;
    for (int i = 0; i < bufferSize; i++) {
        curVol += input[i] * input[i];
    }
    curVol /= bufferSize;
}

