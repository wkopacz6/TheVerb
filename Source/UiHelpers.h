#pragma once

#include "BinaryData.h"
#include "juce_gui_basics/juce_gui_basics.h"

namespace Colors
{
    const auto hexKnobLightGray { juce::Colour (0xff6f6f6f) };
    const auto backgroundTeal { juce::Colour (0xff08303c) };
}

namespace Fonts
{

    static juce::Font getRegularFont()
    {
        static auto typeFace { juce::Typeface::createSystemTypefaceFor (BinaryData::ostrichregular_ttf, BinaryData::ostrichregular_ttfSize) };
        return juce::Font (typeFace).withExtraKerningFactor (0.2);
    }

}
