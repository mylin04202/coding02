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
  
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
     ofNoFill();
     ofSetLineWidth(2);
     ofSetRectMode(OF_RECTMODE_CENTER);
     ofGetMouseX();
     ofGetMouseY();
     ofSetColor(255,192+ofGetMouseX()*0.2,203+ofGetMouseY()*0.1);
     for (int i = 0; i < 30; i++){
       ofRotateDeg(ofGetElapsedTimef());
       ofScale(0.9);
      // ofDrawRectangle(0, 0, 500, 500);
         ofDrawBezier(0, 20, ofGetMouseX()*3+70, ofGetMouseX()*2+100, ofGetMouseX()*5, ofGetMouseY(), 340, 500);
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
