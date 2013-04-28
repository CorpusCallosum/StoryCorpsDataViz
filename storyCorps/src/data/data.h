//
//  data.h
//  StoryCorps
//
//  Created by Jack Kalish on 4/7/13.
//
//


#include "ofMain.h"
#include "ofxCsv.h"
#include "ofxXmlSettings.h"

using namespace wng;

class data
{
    
    public:
    //methods
        void loadCSV(string path);
        void loadXML(string path);
        void parse();
        ofxCsv getInterviewsWithKeyword(string k);
        std::vector<string> getKeywordsForItem(int i);
        void split(string str, string delimiters , vector<string> tokens);
        void addKeyword(string k);
    
    //vars
        ofxCsv csv;
        ofxXmlSettings XML;
        std::vector<std::pair<string, int> > keywords;

};