/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/settingsContainerBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

settingsContainerBase::settingsContainerBase() :
    buttonCallback(this, &settingsContainerBase::buttonCallbackHandler),
    flexButtonCallback(this, &settingsContainerBase::flexButtonCallbackHandler),
    clockModeButtonClickedCallback(0),
    temperatureUnitButtonClickedCallback(0),
    backButonClickedCallback(0),
    changeCityCallback(0),
    wifiMenuSelectedCallback(0)
{
    setWidth(800);
    setHeight(480);

    gradienBackgorundLeft.setXY(50, 90);
    gradienBackgorundLeft.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_BOX_BG_ID));

    gradienBackgorundRight.setXY(420, 90);
    gradienBackgorundRight.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_BOX_BG_ID));

    preferencesHeadline.setXY(440, 98);
    preferencesHeadline.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    preferencesHeadline.setLinespacing(0);
    preferencesHeadline.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));

    tempUnits.setXY(440, 149);
    tempUnits.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    tempUnits.setLinespacing(0);
    tempUnits.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));

    temperatureUnitButton.setXY(630, 159);
    temperatureUnitButton.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_FAHRENHEIT_BUTTON_ID), touchgfx::Bitmap(BITMAP_SETTINGS_CELCIUS_BUTTON_ID));
    temperatureUnitButton.forceState(true);
    temperatureUnitButton.setAction(buttonCallback);

    timeSettings.setXY(440, 213);
    timeSettings.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    timeSettings.setLinespacing(0);
    timeSettings.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    clockModeButton.setXY(630, 223);
    clockModeButton.setBitmaps(touchgfx::Bitmap(BITMAP_SETTINGS_12_BUTTON_ID), touchgfx::Bitmap(BITMAP_SETTINGS_24_BUTTON_ID));
    clockModeButton.forceState(true);
    clockModeButton.setAction(buttonCallback);

    cfText.setXY(440, 176);
    cfText.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    cfText.setLinespacing(0);
    cfText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID180));

    hourText.setXY(440, 240);
    hourText.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    hourText.setLinespacing(0);
    hourText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID181));

    wifiList.setDirection(touchgfx::SOUTH);
    wifiList.setPosition(50, 142, 330, 60);

    moreNetweorksButton.setText(TypedText(T_SINGLEUSEID182));
    moreNetweorksButton.setTextPosition(0, 12, 330, 58);
    moreNetweorksButton.setTextColors(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255), touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    moreNetweorksButton.setPosition(50, 382, 330, 58);
    moreNetweorksButton.setAction(flexButtonCallback);

    metworksHeadline.setXY(70, 98);
    metworksHeadline.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    metworksHeadline.setLinespacing(0);
    metworksHeadline.setTypedText(touchgfx::TypedText(T_SINGLEUSEID183));

    add(gradienBackgorundLeft);
    add(gradienBackgorundRight);
    add(preferencesHeadline);
    add(tempUnits);
    add(temperatureUnitButton);
    add(timeSettings);
    add(clockModeButton);
    add(cfText);
    add(hourText);
    add(wifiList);
    add(moreNetweorksButton);
    add(metworksHeadline);
}

void settingsContainerBase::initialize()
{
	
}

void settingsContainerBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &temperatureUnitButton)
    {
        //temperatureUnitButtonClicked
        //When temperatureUnitButton clicked emit temperatureUnitButtonClicked callback
        //Emit callback
        emitTemperatureUnitButtonClickedCallback(temperatureUnitButton.getState());
    }
    else if (&src == &clockModeButton)
    {
        //clockModeButtonClicked
        //When clockModeButton clicked emit clockModeButtonClicked callback
        //Emit callback
        emitClockModeButtonClickedCallback(clockModeButton.getState());
    }
}

void settingsContainerBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &moreNetweorksButton)
    {
        //moreNetwotksClicked
        //When moreNetweorksButton clicked emit wifiMenuSelected callback
        //Emit callback
        emitWifiMenuSelectedCallback();
    }
}