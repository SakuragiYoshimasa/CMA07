#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    color_circle.setHsb(0,0,0);
    size_circle = 0.0;
    
    x_line = 0.0;
    y_line = 0.0;
    
    flag_mode = false;
    
    ofBackground(255);
    ofSetCircleResolution(50);
    
    path.setCircleResolution(50);
    path.setFilled(true);
    path.setColor(ofColor(0, 0, 0, 50));
    path.setStrokeColor(ofColor(0, 0, 0, 80));
    path.setStrokeWidth(2);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    mouseAngle = atan2(mouseY-ofGetHeight()/2, mouseX-ofGetWidth()/2);
    dist = ofDist(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);
    
    
    color_circle.setHsb(ofMap(mouseAngle, -PI, PI, 0, 255),255, 255);
    
    if(flag_mode){
        fix_angle = atan2(mouseY-ofGetHeight()/2, (ofGetWidth()-mouseX)-ofGetWidth()/2);
        fix_angle = ofMap(fix_angle, -PI, PI, 0, 360);
    }
    
    ofNoFill();
    ofSetLineWidth(3);
    ofSetColor(color_circle);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, dist);
    
    ofFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, dist/4);
    

    
    ofSetColor(0,0,0,50);
    ofSetLineWidth(1);
    for(int i = 1 ; i < ofGetHeight()/32 ; i++)
        ofDrawLine(0,i+(32*i),ofGetWidth(),i+(32*i));
    for(int i = 1 ; i < ofGetWidth()/32 ; i++)
        ofDrawLine(i+(32*i),0,i+(32*i),ofGetHeight());
    
    ofSetColor(0,0,0,100);
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofDrawLine(0, mouseY, ofGetWidth(), mouseY);
    
    if(flag_mode){
        ofDrawBitmapString("radius:"+ofToString(dist), mouseX + 20, mouseY + 20);
        ofDrawBitmapString("angle:"+ofToString(fix_angle), mouseX + 20, mouseY + 40);
//        ofDrawBitmapString("mouseAngle:"+ofToString(mouseAngle), mouseX + 20, mouseY + 60);
        

        path.moveTo(ofGetWidth()/2, ofGetHeight()/2);
        path.arc(ofGetWidth()/2, ofGetHeight()/2, dist, dist, (mouseAngle*180/PI),0 );
        path.draw();
        path.clear();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' ')
        flag_mode = !flag_mode;
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
