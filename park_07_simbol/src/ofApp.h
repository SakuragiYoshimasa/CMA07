#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    private:
        ofSoundPlayer soundplayer;
    
        int num_bar = 9;
        int size_bar[9];
        int fix_size_bar[9];
        int ctr_bar[9];
    
        int y_bar[9];
    
        float * volume;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofPath path;
};
