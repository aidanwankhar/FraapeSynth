/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "UI/AdsrComponent.h"
#include "UI/OscComponent.h"
#include "UI/FilterComponent.h"
#include "SynthSound.h"
#include "SynthVoice.h"
//==============================================================================
/**
*/
class FraapeSynthAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    FraapeSynthAudioProcessorEditor (FraapeSynthAudioProcessor&);
    ~FraapeSynthAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //juce::ComboBox oscSelector;
    //std::unique_ptr<juce::AudioProcessorValueTreeState::ComboBoxAttachment> oscSelAttachment;
    FraapeSynthAudioProcessor& audioProcessor;
    OscComponent osc;
    adsrComponent adsr;
    FilterComponent filter;
    adsrComponent modAdsr;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FraapeSynthAudioProcessorEditor)
};
