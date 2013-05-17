//
//  zipcodes.h
//  StoryCorps
//
//  Created by gabriella levine on 5/16/13.
//
//

#ifndef __StoryCorps__zipcodes__
#define __StoryCorps__zipcodes__

#include <iostream>
#include "ofMain.h"

class zipcodes
{
public:
    //methods
    void getIncomingZip(string Mlocation);
    ofVec2f loadData(string Minput);
    void mapData(ofVec2f latlong,float mapSouthEdge, float mapNorthEdge, float mapWestEdge, float mapEastEdge );
    
    //vars
    string Minput;//this is the string , the zip code, that is the input
    vector<string> fileTxt ;//vector of words of each line of the input text from the CSV file with zip, lat, long
    
    
    //edge of the image
    float mapSouthEdge;
    float mapNorthEdge ;
    float mapWestEdge ;
    float mapEastEdge;
    
    
};

#endif /* defined(__StoryCorps__zipcodes__) */
