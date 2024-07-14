/*
  ==============================================================================

    AdsrData.h
    Created: 28 Apr 2024 4:29:34pm
    Author:  Aidan

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class AdsrData  : public juce::ADSR
{
public:
    void updateADSR(const float attack, const float decay, const float sustain, const float release);
private:
    
    juce::ADSR::Parameters adsrParams;
};
