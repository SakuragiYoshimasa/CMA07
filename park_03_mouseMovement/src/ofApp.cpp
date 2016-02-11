#include "ofApp.h"

//void ofApp::audioIn(float * input, int bufferSize, int nChannels){
//    curVol = 0.0;
//    for (int i = 0 ; i < bufferSize; i++)
//        curVol += input[i] + input[i];
//    curVol /= bufferSize;
//}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    video.initGrabber(ofGetWidth(), ofGetHeight());
    
    soundplayer.loadSound("Perfume_globalsite_sound.wav");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0 ; i < num_bar ; i++){
        volume = ofSoundGetSpectrum(i+1);
        size_bar[i] = volume[0] * 1300;
    }
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(0, 0);
    for(int i = 0 ; i < num_bar ; i++){
        ofSetColor(255,255,255);
        ofDrawRectangle(ofGetWidth()-(i*40), ofGetHeight(), 15, -(size_bar[i]%(ofGetHeight()/2)));
        ofSetColor(ofGetElapsedTimeMillis()%255,100,size_bar[i]%255);
    }
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
