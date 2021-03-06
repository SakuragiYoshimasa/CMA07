#include "ofApp.h"
float posx;
bool forwarding;
float speedx = 1;
ofEasyCam easycam;

//--------------------------------------------------------------
void ofApp::setup(){
    forwarding = true;
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(forwarding){
        posx+= speedx;
    }else{
        posx-= speedx;
    }
    
    if(posx >= 1024){
        forwarding = false;
    }
    
    if(posx <= 0){
        forwarding = true;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    easycam.begin();

    ofBackground(0,0,0);
    ofSetColor(255, 255, 255, 255);
    /*ofCircle(300, 550, 100);
    ofRect(200,450,100,100);
    ofTriangle(100,100,100,200,200,200);
    ofEllipse(500, 200, 200, 100);
    ofLine(10, 500, 10,100 );
    
    ofNoFill();
    ofBeginShape();
    ofVertex(10, 10);
    ofVertex(100, 100);
    ofEndShape();
     */
    
    ofLine(1024/8,0, 1024/8, 768);
    ofLine(1024/8*2,0, 1024/8*2,768);
    ofLine(1024/8*3,0, 1024/8*3,768);
    ofLine(1024/8*4,0, 1024/8*4,768);
    ofLine(1024/8*5,0, 1024/8*5,768);
    ofLine(1024/8*6,0, 1024/8*6,768);
    ofLine(1024/8*7,0, 1024/8*7,768);
    ofLine(1024/8*8,0, 1024/8*8,768);
    
    ofLine(0,768/6, 1024, 768/6);
    ofLine(0,768/6*2, 1024, 768/6*2);
    ofLine(0,768/6*3, 1024, 768/6*3);
    ofLine(0,768/6*4, 1024, 768/6*4);
    ofLine(0,768/6*5, 1024, 768/6*5);
    ofLine(0,768/6*6, 1024, 768/6*6);
    
    //ofEllipse(1024/8, 768/2, 100, 700);
    ofSetColor(0, 0, 255);
    
    easycam.begin();
    ofCircle(posx, 768/6, 100);
    
    //ofRect(1024/8*4, 768/6*2, 1024/8*2, 768/6*2);
    
    /*ofColor color = ofColor(255, 0, 0);
    ofSetColor(color);
    ofTriangle(1024/8*2+50, 768/6*4+50,  1024/8*3+50 , 768-50, 1024/8*3-50 ,768/6*6-50); */
    
    ofPushMatrix();
    ofTranslate(1024/2, 768/2);
    ofRotate(45);
    ofRect(0, 0, 100, 100);
    
    ofPopMatrix();
    ofRect(0,0,200,200);
    easycam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key =='a'){
        speedx++;
    }
    if(key =='b'){
        speedx--;
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
