/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.12

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "RNBO.h"
#include "RNBO_JuceAudioProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/

class CustomLookAndFeel : public LookAndFeel_V4
{
public: 

    std::map<Slider*, String> sliderLabels;

    void setSliderLabel(Slider* slider, const String& label)
    {
        sliderLabels[slider] = label;
    }

    void drawLabel(Graphics& g, Label& label) override
    {
        auto mainColor = Colour(0x00ffffff);  
        auto bounds = label.getLocalBounds().toFloat().reduced(0.5f, 0.5f);
        auto cornerSize = 10.0f;

        g.setColour(mainColor);
        g.fillRoundedRectangle(bounds, cornerSize);

        g.setColour(Colours::white);
        g.setFont(Font("Albert Sans", label.getHeight() * 0.65f, Font::plain));
        g.drawFittedText(label.getText(), label.getLocalBounds(), Justification::centred, 1);
    }

    Font getSliderPopupFont(Slider&) override
    {
        return Font("Albert Sans", 16.0f, Font::plain);
    }

    void drawRotarySlider(Graphics& g, int x, int y, int width, int height, float sliderPos,
                          float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        auto radius = (float) juce::jmin (width / 2, height / 2) - 4.0f;
        auto centreX = (float) x + (float) width * 0.5f;
        auto centreY = (float) y + (float) height * 0.5f;
        auto rx = centreX - radius;
        auto ry = centreY - radius;
        auto rw = radius * 2.0f;
        auto angle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);

        // fill
        g.setColour (juce::Colour (0xff979dac));
        g.fillEllipse (rx, ry, rw, rw);

        juce::Path p;
        auto pointerLength = 2 * radius * 0.33f;
        auto pointerThickness = 4.0f;
        
        if (slider.getWidth() == 107) 
        pointerThickness = 6.0f;
        else if (slider.getWidth() == 64)
        pointerThickness = 4.0f;
    
        p.addRectangle (-pointerThickness * 0.5f, -radius, pointerThickness, pointerLength);
        p.applyTransform (juce::AffineTransform::rotation (angle).translated (centreX, centreY));

        g.setColour (juce::Colour (0xffd4e6f1));
        g.fillPath (p);
    }
};

class ComboBoxLookAndFeel : public LookAndFeel_V4 
{
public:
    void drawComboBox(Graphics& g, int width, int height, bool isButtonDown,
    int buttonX, int buttonY, int buttonW, int buttonH, ComboBox& box) override
    {
    // Background color (matching your sliders)
    auto mainColor = juce::Colour(0xff979dac);

    // Create a rounded rectangle with 10px corners
    auto cornerSize = 10.0f;
    auto bounds = Rectangle<int>(0, 0, width, height).toFloat().reduced(0.5f, 0.5f);

    // Fill the background
    g.setColour(mainColor);
    g.fillRoundedRectangle(bounds, cornerSize);

    }

    Font getComboBoxFont(ComboBox& box) override
    {
        return Font("Albert Sans", box.getHeight() * 0.65f, Font::plain);
    }

    void positionComboBoxText(ComboBox& box, Label& label) override
    {
        label.setBounds(10, 1, box.getWidth() - 30, box.getHeight() - 2);
        label.setFont(getComboBoxFont(box));
    }
    
    // 🎨 Custom pop-up menu font
    Font getPopupMenuFont() override
    {
        return Font("Albert Sans", 16.0f, Font::plain);
    }

    // 🎨 Custom background for the pop-up menu
    void drawPopupMenuBackground(Graphics& g, int width, int height) override
    {
        g.fillAll(Colour(0xff979dac)); // Dark blue background
    }

    // 🎨 Custom styling for pop-up menu items
    void drawPopupMenuItem(Graphics& g, const Rectangle<int>& area, bool isSeparator, bool isActive,
        bool isHighlighted, bool isTicked, bool hasSubMenu, const String& text,
        const String& shortcutKeyText, const Drawable* icon, const Colour* textColour) override
    {
        if (isSeparator)
        {
            g.setColour(Colours::white.withAlpha(0.3f));
            g.fillRect(area.reduced(10, 0).removeFromTop(1));
            return;
        }

        Colour backgroundColor = isHighlighted ? Colour(0xff001845) : Colour(0xff979dac);
        g.setColour(backgroundColor);
        g.fillRoundedRectangle(area.toFloat(), 4.0f);

        Colour fontColor = isActive ? Colours::white : Colours::grey;
        g.setColour(fontColor);
        g.setFont(getPopupMenuFont());

        g.drawFittedText(text, area.reduced(10, 0), Justification::centredLeft, 1);
    }
};

class NewComponent  : public juce::Component,
                      public juce::Slider::Listener,
                      public juce::ComboBox::Listener
{

public:
    //==============================================================================
    NewComponent ();
    ~NewComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void setAudioProcessor(RNBO::JuceAudioProcessor *p);
    void updateSliderForParam(unsigned long index, double value);
    void updateComboBoxForParam(unsigned long index, double value);
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void sliderValueChanged (juce::Slider* sliderThatWasMoved) override;
    void comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged) override;

private:

    //[UserVariables]   -- You can add your own custom variables in this section.
    RNBO::JuceAudioProcessor *processor = nullptr;
    HashMap<int, Slider *> slidersByParameterIndex;
    HashMap<int, ComboBox *> comboBoxesByParameterIndex;

    CustomLookAndFeel customLookAndFeel;
    ComboBoxLookAndFeel comboBoxLookAndFeel;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Slider> juce__slider;
    std::unique_ptr<juce::Slider> juce__slider2;
    std::unique_ptr<juce::Slider> juce__slider3;
    std::unique_ptr<juce::Slider> juce__slider4;
    std::unique_ptr<juce::Slider> juce__slider5;
    std::unique_ptr<juce::Slider> juce__slider6;
    std::unique_ptr<juce::Slider> juce__slider7;
    std::unique_ptr<juce::Slider> juce__slider8;
    std::unique_ptr<juce::Slider> juce__slider9;
    std::unique_ptr<juce::Slider> juce__slider10;
    std::unique_ptr<juce::Slider> juce__slider11;
    std::unique_ptr<juce::Slider> juce__slider12;
    std::unique_ptr<juce::ComboBox> juce__comboBox;
    std::unique_ptr<juce::ComboBox> juce__comboBox2;
    std::unique_ptr<juce::ComboBox> juce__comboBox3;
    std::unique_ptr<juce::ComboBox> juce__comboBox4;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

