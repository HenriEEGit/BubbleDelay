#include "CustomAudioEditor.h"

CustomAudioEditor::CustomAudioEditor (RNBO::JuceAudioProcessor* const p, RNBO::CoreObject& rnboObject)
    : AudioProcessorEditor (p)
    , _rnboObject(rnboObject)
    , _audioProcessor(p)
{
    _audioProcessor->AudioProcessor::addListener(this);

    /* _label.setText("Hi I'm Custom Interface", NotificationType::dontSendNotification);
    _label.setBounds(0, 0, 400, 300);
    _label.setColour(Label::textColourId, Colours::black);
    addAndMakeVisible(_label);
    setSize (_label.getWidth(), _label.getHeight()); */
    
    _newComponent.setAudioProcessor(p);
    addAndMakeVisible(_newComponent);
    setSize(_newComponent.getWidth(), _newComponent.getHeight());
}

CustomAudioEditor::~CustomAudioEditor()
{
    _audioProcessor->AudioProcessor::removeListener(this);
}

void CustomAudioEditor::paint (Graphics& g)
{
    g.fillAll(Colours::white);
}

void CustomAudioEditor::audioProcessorParameterChanged (AudioProcessor*, int parameterIndex, float value)
{
    _newComponent.updateSliderForParam(parameterIndex, value);
    _newComponent.updateComboBoxForParam(parameterIndex, value);
}

