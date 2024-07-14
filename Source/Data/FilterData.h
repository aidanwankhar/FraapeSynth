/*
  ==============================================================================

    FilterData.h
    Created: 4 Jul 2024 3:08:53pm
    Author:  Aidan

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class FilterData
{
public:
    void prepareToPlay(double sampleRate, int samplesPerBlock, int numChannels);
    void process(juce::AudioBuffer<float>& buffer);
    void updateParameters(const int filterType, const float frequency, const float resonance, const float modulator=1.0f);
    void reset();
         
private:
    juce::dsp::StateVariableTPTFilter<float> filter;
    bool isPrepared{ false };
};