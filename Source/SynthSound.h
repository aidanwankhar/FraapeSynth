/*
  ==============================================================================

    SynthSound.h
    Created: 21 Apr 2024 7:53:09pm
    Author:  Aidan

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote(int midiNoteNumber) override { return true; }
    bool appliesToChannel(int midiChannel) override { return true; }
};