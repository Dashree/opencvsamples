#ifndef POSE_DETECTOR_H
#define POSE_DETECTOR_H

#include<string>

using namespace std;

// Algo specific constants
#define MPI 0
#define COCO 1

class PoseDetector {
public:
    PoseDetector(string modelLoc, int type);
    ~PoseDetector();
    void detect();

private:
    void initialize(string modelLoc, int type);
    void loadModel();
    void preprocess();
    void process();
    void postprocess();

    // Incase of openPose detector model file is called as proto file. 
    std::string mPrototxtPath;
    std::string mWeightsPath;

};

#endif // POSE_DETECTOR_H