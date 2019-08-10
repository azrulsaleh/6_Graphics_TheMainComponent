/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (400, 300);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
	g.fillAll(currentBackgroundColor);

    g.setFont (Font (16.0f));
	g.setColour(Colours::darkblue);
	g.drawText(currentSizeAsString, getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
	currentSizeAsString = (String)getWidth() + " x " + (String)getHeight();
	currentBackgroundColor = Colour(random.nextInt(255) , random.nextInt(255), random.nextInt(255));
}
