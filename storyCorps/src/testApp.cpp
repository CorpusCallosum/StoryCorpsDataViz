/**
 *  ofxCsv
 *  Inspired and based on Ben Fry's [table class](http://benfry.com/writing/map/Table.pde)
 *
 *  
 *  The MIT License
 *
 *  Copyright (c) 2011-2012 Paul Vollmer, http://www.wng.cc
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 *
 *  
 *  @testet_oF          0071
 *  @testet_plattform   MacOs 10.6+
 *                      ??? Win
 *                      ??? Linux
 *  @dependencies       
 *  @modified           2012.06.28
 *  @version            0.1.3
 */

#include "testApp.h"





//--------------------------------------------------------------
void testApp::setup(){
    string dataType = "XML";
    
   /* if(dataType =="XML"){
        //load and parse XML data file
        cout << "Load XML file" << endl;
        string message;
        if( XML.loadFile("sc_data.xml") ){
            message = "data loaded!";
        }else{
            message = "unable to load mySettings.xml check data/ folder";
        }
        cout << message << endl;

    }
    
    if(dataType == "CSV"){
	// Load a CSV File.
	csv.loadFile(ofToDataPath("sc_data.csv"));
	
	cout << "Print out a specific CSV value" << endl;
    for(int i=0;i<95;i++){
        cout << "row 1, column "<<i<<": ";
        cout << csv.data[1][i] << endl;
    }
	// also you can write...
	//cout << csv.data[0].at(1) << endl;
	
	cout << "Print out the first value" << endl;
	cout << csv.data[0].front() << endl;
	
	cout << "Maximum Size:";
	cout << csv.data[0].max_size() << endl;
    }
    */
    data.loadXML(ofToDataPath("search-export-interviews-chicago.xml"));
    data.parse();
    //std::vector<string> d =
    //data.getKeywordsForItem(2);
    //for(int i=0;i< d.size(); i++){
    //    cout << d[i];
    // }
		
}

//--------------------------------------------------------------
void testApp::update(){
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
		
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
	
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
		
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
	
}
