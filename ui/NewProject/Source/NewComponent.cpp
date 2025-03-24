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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "NewComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NewComponent::NewComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    setSize (800, 600);

    juce__slider.reset (new juce::Slider ("mix"));
    addAndMakeVisible (juce__slider.get());
    juce__slider->setRange (0, 100, 0);
    juce__slider->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider->setNumDecimalPlacesToDisplay(2);
    juce__slider->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider.get(), "mix");
    juce__slider->setLookAndFeel(&customLookAndFeel);
    juce__slider->addListener (this);

    juce__slider->setBounds (720, 16, 64, 64);

    juce__slider2.reset (new juce::Slider ("saturation"));
    addAndMakeVisible (juce__slider2.get());
    juce__slider2->setRange (1, 10, 0);
    juce__slider2->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider2->setNumDecimalPlacesToDisplay(2);
    juce__slider2->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider2.get(), "saturation"); 
    juce__slider2->setLookAndFeel(&customLookAndFeel);
    juce__slider2->addListener (this);

    juce__slider2->setBounds (450, 320, 64, 64);

    juce__slider3.reset (new juce::Slider ("Gate/threshold"));
    addAndMakeVisible (juce__slider3.get());
    juce__slider3->setRange (-100, 0, 0);
    juce__slider3->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider3->setNumDecimalPlacesToDisplay(2);
    juce__slider3->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider3.get(), "gate");
    juce__slider3->setLookAndFeel(&customLookAndFeel);
    juce__slider3->addListener (this);

    juce__slider3->setBounds (614, 320, 64, 64);

    juce__slider4.reset (new juce::Slider ("feedback"));
    addAndMakeVisible (juce__slider4.get());
    juce__slider4->setRange (0, 100, 0);
    juce__slider4->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider4->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider4->setNumDecimalPlacesToDisplay(2);
    juce__slider4->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider4.get(), "feedback");
    juce__slider4->setLookAndFeel(&customLookAndFeel);
    juce__slider4->addListener (this);

    juce__slider4->setBounds (182, 350, 107, 107 );

    juce__slider5.reset (new juce::Slider ("freq"));
    addAndMakeVisible (juce__slider5.get());
    juce__slider5->setRange (0, 5000, 0);
    juce__slider5->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider5->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider5->setNumDecimalPlacesToDisplay(2);
    juce__slider5->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider5.get(), "frequency");
    juce__slider5->setLookAndFeel(&customLookAndFeel);
    juce__slider5->addListener (this);

    juce__slider5->setBounds (450, 113, 64, 64);

    juce__slider6.reset (new juce::Slider ("res"));
    addAndMakeVisible (juce__slider6.get());
    juce__slider6->setRange (1, 5, 0);
    juce__slider6->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider6->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider6->setNumDecimalPlacesToDisplay(2);
    juce__slider6->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider6.get(), "resonance");
    juce__slider6->setLookAndFeel(&customLookAndFeel);
    juce__slider6->addListener (this);

    juce__slider6->setBounds (614, 113, 64, 64);

    juce__slider7.reset (new juce::Slider ("Bubble/rate"));
    addAndMakeVisible (juce__slider7.get());
    juce__slider7->setRange (0, 10, 0);
    juce__slider7->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider7->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider7->setNumDecimalPlacesToDisplay(2);
    juce__slider7->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider7.get(), "rate");
    juce__slider7->setLookAndFeel(&customLookAndFeel);
    juce__slider7->addListener (this);

    juce__slider7->setBounds (450, 217, 64, 64);

    juce__slider8.reset (new juce::Slider ("Bubble/depth"));
    addAndMakeVisible (juce__slider8.get());
    juce__slider8->setRange (0, 100, 0);
    juce__slider8->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider8->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider8->setNumDecimalPlacesToDisplay(2);
    juce__slider8->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider8.get(), "depth");
    juce__slider8->setLookAndFeel(&customLookAndFeel);
    juce__slider8->addListener (this);

    juce__slider8->setBounds (614, 217, 64, 64);

    juce__slider9.reset (new juce::Slider ("ingain/in"));
    addAndMakeVisible (juce__slider9.get());
    juce__slider9->setRange (-12, 12, 0);
    juce__slider9->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider9->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider9->setNumDecimalPlacesToDisplay(2);
    juce__slider9->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider9.get(), "in");
    juce__slider9->setLookAndFeel(&customLookAndFeel);
    juce__slider9->addListener (this);

    juce__slider9->setBounds (16, 520, 64, 64);

    juce__slider10.reset (new juce::Slider ("outgain/out"));
    addAndMakeVisible (juce__slider10.get());
    juce__slider10->setRange (-12, 12, 0);
    juce__slider10->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider10->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider10->setNumDecimalPlacesToDisplay(2);
    juce__slider10->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider10.get(), "out");
    juce__slider10->setLookAndFeel(&customLookAndFeel);
    juce__slider10->addListener (this);

    juce__slider10->setBounds (720, 520, 64, 64);

    juce__slider11.reset (new juce::Slider ("DelayTime/Quant/TimeInMS"));
    addAndMakeVisible (juce__slider11.get());
    juce__slider11->setRange (0, 3000, 0);
    juce__slider11->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider11->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider11->setNumDecimalPlacesToDisplay(2);
    juce__slider11->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider11.get(), "time");
    juce__slider11->setLookAndFeel(&customLookAndFeel);
    juce__slider11->addListener (this);

    juce__slider11->setBounds (182, 143, 107, 107);

    juce__slider12.reset (new juce::Slider ("spread"));
    addAndMakeVisible (juce__slider12.get());
    juce__slider12->setRange (0, 10, 0);
    juce__slider12->setSliderStyle (juce::Slider::RotaryHorizontalVerticalDrag);
    juce__slider12->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 80, 20);
    juce__slider12->setNumDecimalPlacesToDisplay(2);
    juce__slider12->setColour (juce::Slider::backgroundColourId, juce::Colour (0x00ffffff));
    customLookAndFeel.setSliderLabel(juce__slider12.get(), "spread");
    juce__slider12->setLookAndFeel(&customLookAndFeel);
    juce__slider12->addListener (this);

    juce__slider12->setBounds (450, 424, 64, 64);

    juce__comboBox.reset (new juce::ComboBox ("DelayTime/Quant/TimeInBeats"));
    addAndMakeVisible (juce__comboBox.get());
    juce__comboBox->setEditableText (false);
    juce__comboBox->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox->setTextWhenNothingSelected (TRANS ("beats"));
    juce__comboBox->setTextWhenNoChoicesAvailable (TRANS ("(no choices)"));
    juce__comboBox->addItem (TRANS ("1/8"), 1);
    juce__comboBox->addItem (TRANS ("1/4"), 2);
    juce__comboBox->addItem (TRANS ("1/2"), 3);
    juce__comboBox->addItem (TRANS ("1x"), 4);
    juce__comboBox->addItem (TRANS ("2x"), 5);
    juce__comboBox->setLookAndFeel(&comboBoxLookAndFeel);
    juce__comboBox->addListener (this);

    juce__comboBox->setBounds (178, 255, 53.5f, 27);

    juce__comboBox2.reset (new juce::ComboBox ("DelayTime/Quant/quant"));
    addAndMakeVisible (juce__comboBox2.get());
    juce__comboBox2->setEditableText (false);
    juce__comboBox2->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox2->setTextWhenNothingSelected (TRANS ("quantization"));
    juce__comboBox2->setTextWhenNoChoicesAvailable (TRANS ("(no choices)"));
    juce__comboBox2->addItem (TRANS ("free"), 1);
    juce__comboBox2->addItem (TRANS ("beat"), 2);
    juce__comboBox2->addItem (TRANS ("triplet"), 3);
    juce__comboBox2->addItem (TRANS ("dotted"), 4);
    juce__comboBox2->setLookAndFeel(&comboBoxLookAndFeel);
    juce__comboBox2->addListener (this);

    juce__comboBox2->setBounds (240, 255, 53.5f, 27);

    juce__comboBox3.reset (new juce::ComboBox ("Bubble/burst"));
    addAndMakeVisible (juce__comboBox3.get());
    juce__comboBox3->setEditableText (false);
    juce__comboBox3->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox3->setTextWhenNothingSelected (TRANS ("burst"));
    juce__comboBox3->setTextWhenNoChoicesAvailable (TRANS ("(no choices)"));
    juce__comboBox3->addItem (TRANS ("4"), 1);
    juce__comboBox3->addItem (TRANS ("8"), 2);
    juce__comboBox3->addItem (TRANS ("16"), 3);
    juce__comboBox3->setLookAndFeel(&comboBoxLookAndFeel);
    juce__comboBox3->addListener (this);

    juce__comboBox3->setBounds (624, 443, 53.5f, 27);

    juce__comboBox4.reset (new juce::ComboBox ("Pitch/transp"));
    addAndMakeVisible (juce__comboBox4.get());
    juce__comboBox4->setEditableText (false);
    juce__comboBox4->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox4->setTextWhenNothingSelected (TRANS ("transp"));
    juce__comboBox4->setTextWhenNoChoicesAvailable (TRANS ("(no choices)"));
    juce__comboBox4->addItem (TRANS ("-24"), 1);
    juce__comboBox4->addItem (TRANS ("-19"), 2);
    juce__comboBox4->addItem (TRANS ("-12"), 3);
    juce__comboBox4->addItem (TRANS ("-7"), 4);
    juce__comboBox4->addItem (TRANS ("0"), 5);
    juce__comboBox4->addItem (TRANS ("7"), 6);
    juce__comboBox4->addItem (TRANS ("12"), 7);
    juce__comboBox4->addItem (TRANS ("19"), 8);
    juce__comboBox4->addItem (TRANS ("24"), 9);
    juce__comboBox4->setLookAndFeel(&comboBoxLookAndFeel);
    juce__comboBox4->addListener (this);

    juce__comboBox4->setBounds (624, 538, 53.5f, 27);


    //[UserPreSize]
    //[/UserPreSize]

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

NewComponent::~NewComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__slider->setLookAndFeel(nullptr);
    juce__slider2->setLookAndFeel(nullptr);
    juce__slider3->setLookAndFeel(nullptr);
    juce__slider4->setLookAndFeel(nullptr);
    juce__slider5->setLookAndFeel(nullptr);
    juce__slider6->setLookAndFeel(nullptr);
    juce__slider7->setLookAndFeel(nullptr);
    juce__slider8->setLookAndFeel(nullptr);
    juce__slider9->setLookAndFeel(nullptr);
    juce__slider10->setLookAndFeel(nullptr);
    juce__slider11->setLookAndFeel(nullptr);
    juce__slider12->setLookAndFeel(nullptr);
    juce__comboBox->setLookAndFeel(nullptr);
    juce__comboBox2->setLookAndFeel(nullptr);
    juce__comboBox3->setLookAndFeel(nullptr);
    juce__comboBox4->setLookAndFeel(nullptr);

    juce__slider = nullptr;
    juce__slider2 = nullptr;
    juce__slider3 = nullptr;
    juce__slider4 = nullptr;
    juce__slider5 = nullptr;
    juce__slider6 = nullptr;
    juce__slider7 = nullptr;
    juce__slider8 = nullptr;
    juce__slider9 = nullptr;
    juce__slider10 = nullptr;
    juce__slider11 = nullptr;
    juce__slider12 = nullptr;
    juce__comboBox = nullptr;
    juce__comboBox2 = nullptr;
    juce__comboBox3 = nullptr;
    juce__comboBox4 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void NewComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff001845)); 

    //[UserPaint] Add your own custom painting code here..

    // Box 1: color 0353A4
    g.setColour(juce::Colour(0xff0353A4));
    g.fillRoundedRectangle(82.0f, 103.0f, 308.0f, 394.0f, 10.0f);
    
    // Box 2: color 023E7D
    g.setColour(juce::Colour(0xff023E7D));
    g.fillRoundedRectangle(410.0f, 103.0f, 308.0f, 187.0f, 10.0f);
    
    // Box 3: color 002855
    g.setColour(juce::Colour(0xff002855));
    g.fillRoundedRectangle(410.0f, 310.0f, 308.0f, 187.0f, 10.0f);

    // TEXTO

    g.setFont(juce::Font("Albert Sans", 64.0f, juce::Font::bold));
    g.setColour(juce::Colour(0xffd4e6f1));

    g.drawText("Bubble Delay", 10, 0, 393, 77, juce::Justification::centredLeft, false);

    g.setFont(juce::Font("Albert Sans", 18.0f, juce::Font::bold));
    g.setColour(juce::Colour(0xffd4e6f1));

    g.drawText("Delay", 212, 77, 48, 22, juce::Justification::centredLeft, false);
    g.drawText("Filter / Mod", 515, 77, 98, 22, juce::Justification::centredLeft, false);
    g.drawText("Color", 540, 501, 47, 22, juce::Justification::centredLeft, false);
    
    g.setFont(juce::Font("Albert Sans", 16.0f, juce::Font::plain));
    g.drawText("Time", 217, 120, 38, 19, juce::Justification::centredLeft, false);
    g.drawText("Feedback", 200, 327, 72, 19, juce::Justification::centredLeft, false);

    //[/UserPaint]
}

void NewComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void NewComponent::sliderValueChanged (juce::Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == juce__slider.get())
    {
        //[UserSliderCode_juce__slider] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider]
    }
    else if (sliderThatWasMoved == juce__slider2.get())
    {
        //[UserSliderCode_juce__slider2] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider2]
    }
    else if (sliderThatWasMoved == juce__slider3.get())
    {
        //[UserSliderCode_juce__slider3] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider3]
    }
    else if (sliderThatWasMoved == juce__slider4.get())
    {
        //[UserSliderCode_juce__slider4] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider4]
    }
    else if (sliderThatWasMoved == juce__slider5.get())
    {
        //[UserSliderCode_juce__slider5] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider5]
    }
    else if (sliderThatWasMoved == juce__slider6.get())
    {
        //[UserSliderCode_juce__slider6] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider6]
    }
    else if (sliderThatWasMoved == juce__slider7.get())
    {
        //[UserSliderCode_juce__slider7] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider7]
    }
    else if (sliderThatWasMoved == juce__slider8.get())
    {
        //[UserSliderCode_juce__slider8] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider8]
    }
    else if (sliderThatWasMoved == juce__slider9.get())
    {
        //[UserSliderCode_juce__slider9] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider9]
    }
    else if (sliderThatWasMoved == juce__slider10.get())
    {
        //[UserSliderCode_juce__slider10] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider10]
    }
    else if (sliderThatWasMoved == juce__slider11.get())
    {
        //[UserSliderCode_juce__slider11] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider11]
    }
    else if (sliderThatWasMoved == juce__slider12.get())
    {
        //[UserSliderCode_juce__slider12] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider12]
    }

    //[UsersliderValueChanged_Post]
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(sliderThatWasMoved->getName().toRawUTF8());
    if (index != -1) {
        const auto param = processor->getParameters()[index];
        auto newVal = sliderThatWasMoved->getValue();

        if (param && param->getValue() != newVal)
        {
            auto normalizedValue = coreObject.convertToNormalizedParameterValue(index, newVal);
            param->beginChangeGesture();
            param->setValueNotifyingHost(normalizedValue);
            param->endChangeGesture();
        }
    }
    //[/UsersliderValueChanged_Post]
}

void NewComponent::comboBoxChanged(juce::ComboBox* comboBoxThatWasChanged)
{
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(comboBoxThatWasChanged->getName().toRawUTF8());
    if (index != -1) {
        const auto param = processor->getParameters()[index];
        auto newVal = comboBoxThatWasChanged->getSelectedItemIndex();
        
        if (param) {
            RNBO::ParameterInfo paramInfo;
            coreObject.getParameterInfo(index, &paramInfo);
            auto normalizedValue = coreObject.convertToNormalizedParameterValue(index, newVal);
            
            param->beginChangeGesture();
            param->setValueNotifyingHost(normalizedValue);
            param->endChangeGesture();
        }
    }
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void NewComponent::setAudioProcessor(RNBO::JuceAudioProcessor *p)
{
    processor = p;

    RNBO::ParameterInfo parameterInfo;
    RNBO::CoreObject& coreObject = processor->getRnboObject();

    for (unsigned long i = 0; i < coreObject.getNumParameters(); i++) {
        auto parameterName = coreObject.getParameterId(i);
        RNBO::ParameterValue value = coreObject.getParameterValue(i);
        Slider *slider = nullptr;
        if (juce::String(parameterName) == juce__slider.get()->getName()) {
            slider = juce__slider.get();
        } else if (juce::String(parameterName) == juce__slider2.get()->getName()) {
            slider = juce__slider2.get();
        } else if (juce::String(parameterName) == juce__slider3.get()->getName()) {
            slider = juce__slider3.get();
        } else if (juce::String(parameterName) == juce__slider4.get()->getName()) {
            slider = juce__slider4.get();
        } else if (juce::String(parameterName) == juce__slider5.get()->getName()) {
            slider = juce__slider5.get();
        } else if (juce::String(parameterName) == juce__slider6.get()->getName()) {
            slider = juce__slider6.get();
        } else if (juce::String(parameterName) == juce__slider7.get()->getName()) {
            slider = juce__slider7.get();
        } else if (juce::String(parameterName) == juce__slider8.get()->getName()) {
            slider = juce__slider8.get();
        } else if (juce::String(parameterName) == juce__slider9.get()->getName()) {
            slider = juce__slider9.get();
        } else if (juce::String(parameterName) == juce__slider10.get()->getName()) {
            slider = juce__slider10.get();
        } else if (juce::String(parameterName) == juce__slider11.get()->getName()) {
            slider = juce__slider11.get();
        } else if (juce::String(parameterName) == juce__slider12.get()->getName()) {
            slider = juce__slider12.get();
        }

        if (slider) {
            slidersByParameterIndex.set(i, slider);
            coreObject.getParameterInfo(i, &parameterInfo);
            slider->setRange(parameterInfo.min, parameterInfo.max);
            slider->setValue(value);
        }

        // Handle combo boxes
        ComboBox *comboBox = nullptr;
        if (juce::String(parameterName) == juce__comboBox.get()->getName()) {
            comboBox = juce__comboBox.get();
        } else if (juce::String(parameterName) == juce__comboBox2.get()->getName()) {
            comboBox = juce__comboBox2.get();
        } else if (juce::String(parameterName) == juce__comboBox3.get()->getName()) {
            comboBox = juce__comboBox3.get();
        } else if (juce::String(parameterName) == juce__comboBox4.get()->getName()) {
            comboBox = juce__comboBox4.get();
        }

        if (comboBox) {
            comboBoxesByParameterIndex.set(i, comboBox);
            coreObject.getParameterInfo(i, &parameterInfo);
            comboBox->setSelectedItemIndex(static_cast<int>(value), juce::NotificationType::dontSendNotification);
        }
    }
}

void NewComponent::updateSliderForParam(unsigned long index, double value)
{
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto denormalizedValue = coreObject.convertFromNormalizedParameterValue(index, value);
    auto slider = slidersByParameterIndex.getReference((int) index);
    if (slider && (slider->getThumbBeingDragged() == -1)) {
        slider->setValue(denormalizedValue, NotificationType::dontSendNotification);
    }
}

void NewComponent::updateComboBoxForParam(unsigned long index, double value)
{
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto denormalizedValue = coreObject.convertFromNormalizedParameterValue(index, value);

    auto comboBox = comboBoxesByParameterIndex.getReference((int) index);
    if (comboBox) {
        comboBox->setSelectedItemIndex(static_cast<int>(denormalizedValue), 
                                      NotificationType::dontSendNotification);
    }
}

//[/MiscUserCode]
