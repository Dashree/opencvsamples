#include "../include/posedetector.h"

using namespace std;

PoseDetector::PoseDetector(string modelLoc, int type) {
    initialize(modelLoc, type);
}
