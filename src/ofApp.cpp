#include "ofApp.h"
#include <math.h>

//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(0,0,0);
  
       
           

}

//--------------------------------------------------------------
void ofApp::update(){
    for (auto &vert : line.getVertices()){
        vert.x += ofRandom(-1,1);
        vert.y += ofRandom(-1,1);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
        path.draw();
       line.draw();
    
    ofFill(); // If we omit this and leave ofNoFill(), all the shapes will be outlines!
       // Draw some shapes (code omitted)

       ofNoFill(); // If we omit this and leave ofFill(), all the shapes will be filled!
       // Draw some shapes (code omitted)
     /* ofBackground(256, 100, 100);
       ofDrawRectangle(50, 50, 100, 100); // Top left corner at (50, 50), 100 wide x 100 high
       ofDrawCircle(250, 100, 50); // Centered at (250, 100), radius of 50
       ofDrawEllipse(400, 100, 80, 100); // Centered at (400 100), 80 wide x 100 high
       ofDrawTriangle(500, 150, 550, 50, 600, 150); // Three corners: (500, 150), (550, 50), (600, 150)
       ofDrawLine(700, 50, 700, 150); // Line from (700, 50) to (700, 150)
       ofLine(0, 0, 600, 600);
       ofDrawRectangle(64, 64, 64, 64);
       ofDrawCylinder(256, 256, 32, 128);
       ofDrawBezier(0, 100, 200, 120, 50, 300, 340, 210);
        */
    
       ofGetMouseX();
       ofGetMouseY();
       ofGetMousePressed(OF_MOUSE_BUTTON_LEFT);
       if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {  // 如果鼠标左键被按下...
           ofSetColor(255);
           ofSetRectMode(OF_RECTMODE_CENTER);
           //ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 50, 50);  // Draw a 50 x 50 rect centered over the mouse
            // ofDrawRectangle(ofGetMouseX(), ofGetMouseY(), 150, 150);  // Draw a 50 x 50 rect centered over the mouse
           //ofDrawLine(ofGetMouseX(), 150, 350, ofGetMouseY());
           float i;
           float pi = 3.14 * 2;
           float segments = 100;
           float spacing = pi / segments;
           int radius = 2;
           //ofSetColor(0xffffff);  // white  (255,255,255)
           // ofSetColor(0x000000);  // black  (0,0,0);
           ofSetColor(135, 206, 250);
       
           for ( i = 0; i < segments; i++) {
               
               float m = sin (i) *  ofGetMouseX()* 10;
               float n = cos (i)*  ofGetMouseY()* radius;
               //ofDrawLine(m, n*3, m+150+radius,n+122+radius);
               ofDrawBezier(250, m+300, 150, 30, 120, 120, n+620,n*2+500);
               ofDrawBezier(350, m+500, 80, m+30, n+90, 70, n+820,n*2+800);
                ofDrawBezier(n+850, 500, 80, m+30, n+90, 70, n+120,n*2+300);
                ofDrawBezier(n+950, 70, 80, m+30, n+90, 70, n+20,n*2+800);
                ofDrawBezier(n+950, 70, n+30, m+30, n+90, 70, n+20,n*2+800);
                ofDrawBezier(n+1050, 30, n+30, m+130, n+290, 70, n+20,n*2+300);
              /* ofDrawCurve(330, 510, m+320, n+150, ofGetMouseX()+227, ofGetMouseX()+334, m, n);
               ofDrawCurve(m*50, n*50, m+320, n+150, ofGetMouseX()+227, ofGetMouseX()+334, m, n);
               ofDrawCurve(m*50-100, n*50+200, m+120, n+450, ofGetMouseX()+227, ofGetMouseX()+234, m*2, n);
               */
               //int n = sin( i* (ofGetMouseX()/1000)) * sin(spacing * i * (ofGetMouseY()/50)) * radius;
              // ofDrawLine(m+500, n*ofGetMouseX(), m+ofGetMouseX() , n);
              // ofDrawBezier(250, m, 150+n, 30+n, 120+m, 520, n,n*2);
              
               //ofDrawLine(m+500, n+n+300, m , n);
               float sinvalue = sin(spacing * i * (ofGetMouseX()/10))*1000;
                //float sinvalue = sin(spacing * i * (ofGetMouseX()/3.3)) * radius;
               float cosvalue = cos(ofGetMouseX())*50;
               float value02 = ofGetMouseX()/50+130;
               float value01 = cos(ofGetMouseX())/5+200;
              // ofLine(300, 300, sinvalue*1000, cosvalue*1000);
               ofDrawLine(sinvalue, cosvalue, 350, cosvalue);
               ofDrawLine(sinvalue*0.5+100, sinvalue+100, sinvalue, sinvalue*0.5-100);
               //ofDrawBezier(sinvalue*50,  sinvalue+150, cosvalue*20, sinvalue*0.5-300, 120, 120, sinvalue*0.5-100, sinvalue*0.5-120);
              // ofDrawBezier(cosvalue*15, cosvalue*150, cosvalue*120, 330, 520, 520, cosvalue,cosvalue*12);
               //ofDrawBezier(cosvalue*15, cosvalue*150, cosvalue*120, 33*i, 52*i, 52*i, cosvalue,cosvalue*12);
              // ofDrawBezier(cosvalue*185, cosvalue*185, i*5.2, 5.3*i, value02, 52*i, cosvalue*190,cosvalue*182);
            
             // ofDrawBezier(value01*2, cosvalue*3, cosvalue*40, 930, value01*50, value01+820, cosvalue*i+50,cosvalue*2*i);
              //  ofDrawBezier(value01*50+value02, value01*50, 200, 120, 50, 300, value01+240, value01+210);
              // ofDrawBezier(500, 300, 270+value02*300, 330+value02, 120, 820+value02, 540+value02*5,432);
             // ofDrawBezier(850, cosvalue*2, cosvalue*4, 430, 520, 320, cosvalue,cosvalue*2);
             //  ofDrawBezier(550, value01, 350, 30, 520, 520, cosvalue,cosvalue*2);
              // ofDrawLine(value01*20, cosvalue, 550, value01);
                   cout<< m <<endl;
           }

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
    ofPoint pt;
    pt.set(x,y);
    line.addVertex(pt);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    line.clear();
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
