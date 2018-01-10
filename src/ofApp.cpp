#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  myBlockPong.setup();
  x = 200;
}

//--------------------------------------------------------------
void ofApp::update(){
  myBlockPong.update(x);
}

//--------------------------------------------------------------
void ofApp::draw(){
  myBlockPong.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  printf("%d", key);
  if (key == 358) {
    x += 50;
  }else if (key == 356) {
    x -= 50;
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
