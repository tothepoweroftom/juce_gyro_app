/*
  ==============================================================================

    MotionManager.h
    Created: 4 Sep 2023 5:47:04pm
    Author:  Thomas Power

  ==============================================================================
*/

#pragma once

class MotionManager
{
public:

    MotionManager();
    ~MotionManager();

    void start();
    void stop();

    double accelerationX = 0;
    double accelerationY = 0;
    double accelerationZ = 0;
    
    double gravityX = 0;
    double gravityY = 0;
    double gravityZ = 0;

    double rotationX = 0;
    double rotationY = 0;
    double rotationZ = 0;

    double attitudeX = 0;
    double attitudeY = 0;
    double attitudeZ = 0;
        
    void accelerationChanged (double x, double y, double z);
    void gravityChanged      (double x, double y, double z);
    void rotationChanged     (double x, double y, double z);
    void attitudeChanged     (double x, double y, double z);

private:

    void* motionManagerWrapper;
    bool isRunning;
};
