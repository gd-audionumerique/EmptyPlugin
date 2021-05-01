
//================================================================================================================================
//
// PluginEditor.h
//
//================================================================================================================================

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

typedef juce::AudioProcessorValueTreeState::SliderAttachment SliderAttachment;


class PluginEditor  : public juce::AudioProcessorEditor
{
public:
	//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– public members
	
	
	//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– public methods
	PluginEditor (PluginProcessor&);
	~PluginEditor() override;
	
	void paint (juce::Graphics&) override;
	void resized() override;
	
private:
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– private members
	PluginProcessor& mProcessor;
	
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– private methods
	
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEditor)
};

//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– eof
