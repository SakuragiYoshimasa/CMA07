#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    path.setCircleResolution(50);
    path.setFilled(false);
    path.setStrokeColor(ofColor(0, 0, 0));
    path.setStrokeWidth(5);
    ofEnableAlphaBlending();
    
    ofSetCircleResolution(50);
    
    
    soundplayer.loadSound("Perfume_globalsite_sound.wav");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0 ; i < num_bar ; i++){
        volume = ofSoundGetSpectrum(i+1);
        fix_size_bar[i] = size_bar[i] - (volume[0]);
        size_bar[i] = volume[0] * 130;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(-150, 0);
    path.moveTo((ofGetWidth()/2)-150, ofGetHeight()/2);
    path.arc((ofGetWidth()/2)+150, ofGetHeight()/2, 250, 200, 0,180 );
    path.draw();
    path.clear();
    ofPopMatrix();
    
    for(int i = 0 ; i < num_bar ; i++){
        ofSetColor(0,0,0);
        if(i < 5){
        ofDrawRectangle(310 + (i * 45), (ofGetHeight()/2 + 155) + (i*12), 15, -((size_bar[i] + (fix_size_bar[i]/400))));
        }else{
        ofDrawRectangle(320 + (i * 45), (ofGetHeight()/2 + 155) + ((9-i)*12), 15, -((size_bar[i] + (fix_size_bar[i]/400))));
        }
        ofSetColor(ofGetElapsedTimeMillis()%255,100,size_bar[i]%255);
    }
    
    ofDrawCircle(ofGetWidth() - 200  - (mouseX % ofGetWidth()/4), 150 + (mouseY % ofGetHeight()/4), size_bar[0]%100);
    ofDrawCircle(200 + (mouseX % ofGetWidth()/4), 150 + (mouseY % ofGetHeight()/4), size_bar[0]%100);
    
    ofDrawBitmapString("MakeSmile", mouseX + 10, mouseY + 10);
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
