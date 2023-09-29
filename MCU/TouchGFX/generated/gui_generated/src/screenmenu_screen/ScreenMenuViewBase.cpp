/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenmenu_screen/ScreenMenuViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenMenuViewBase::ScreenMenuViewBase() :
    buttonCallback(this, &ScreenMenuViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &ScreenMenuViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Background.setXY(0, 0);
    Background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_WAVES_ID));
    add(Background);

    scrollableContainerMenu.setPosition(0, 50, 480, 222);
    scrollableContainerMenu.enableHorizontalScroll(false);
    scrollableContainerMenu.setScrollbarsColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    scrollableContainerMenu.setScrollbarsAlpha(255);
    scrollableContainerMenu.setScrollbarsPermanentlyVisible();
    flexButtonDataFrequency.setText(TypedText(T___SINGLEUSE_NTEJ));
    flexButtonDataFrequency.setTextPosition(0, 0, 311, 50);
    flexButtonDataFrequency.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButtonDataFrequency.setAction(flexButtonCallback);
    flexButtonDataFrequency.setPosition(0, 200, 311, 50);
    scrollableContainerMenu.add(flexButtonDataFrequency);

    scrollableContainerDataFrequency.setPosition(319, 201, 161, 49);
    scrollableContainerDataFrequency.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainerDataFrequency.setScrollbarsAlpha(255);
    TextAreaBackgroundDataFrequency.setPosition(0, 0, 564, 49);
    TextAreaBackgroundDataFrequency.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TextAreaBackgroundDataFrequency.setAlpha(0);
    scrollableContainerDataFrequency.add(TextAreaBackgroundDataFrequency);

    textAreaDataFrequency.setPosition(0, 0, 564, 49);
    textAreaDataFrequency.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaDataFrequency.setLinespacing(0);
    Unicode::snprintf(textAreaDataFrequencyBuffer, TEXTAREADATAFREQUENCY_SIZE, "%s", touchgfx::TypedText(T_TEXTAREA).getText());
    textAreaDataFrequency.setWildcard(textAreaDataFrequencyBuffer);
    textAreaDataFrequency.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OIDY));
    scrollableContainerDataFrequency.add(textAreaDataFrequency);

    scrollableContainerMenu.add(scrollableContainerDataFrequency);

    flexButtonWifiPass.setText(TypedText(T___SINGLEUSE_HEII));
    flexButtonWifiPass.setTextPosition(0, 0, 311, 50);
    flexButtonWifiPass.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButtonWifiPass.setAction(flexButtonCallback);
    flexButtonWifiPass.setPosition(0, 150, 311, 50);
    scrollableContainerMenu.add(flexButtonWifiPass);

    scrollableContainerWifiPass.setPosition(319, 151, 161, 49);
    scrollableContainerWifiPass.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainerWifiPass.setScrollbarsAlpha(255);
    TextAreaBackgroundWifiPass.setPosition(0, 0, 564, 49);
    TextAreaBackgroundWifiPass.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TextAreaBackgroundWifiPass.setAlpha(0);
    scrollableContainerWifiPass.add(TextAreaBackgroundWifiPass);

    textAreaWifiPass.setPosition(0, 0, 564, 49);
    textAreaWifiPass.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaWifiPass.setLinespacing(0);
    Unicode::snprintf(textAreaWifiPassBuffer, TEXTAREAWIFIPASS_SIZE, "%s", touchgfx::TypedText(T_TEXTAREA).getText());
    textAreaWifiPass.setWildcard(textAreaWifiPassBuffer);
    textAreaWifiPass.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3X0B));
    scrollableContainerWifiPass.add(textAreaWifiPass);

    scrollableContainerMenu.add(scrollableContainerWifiPass);

    flexButtonWifiSsid.setText(TypedText(T___SINGLEUSE_YNN1));
    flexButtonWifiSsid.setTextPosition(0, 0, 311, 50);
    flexButtonWifiSsid.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButtonWifiSsid.setAction(flexButtonCallback);
    flexButtonWifiSsid.setPosition(0, 100, 311, 50);
    scrollableContainerMenu.add(flexButtonWifiSsid);

    scrollableContainerWifiSsid.setPosition(319, 101, 161, 49);
    scrollableContainerWifiSsid.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainerWifiSsid.setScrollbarsAlpha(255);
    TextAreaBackgroundWifiSsid.setPosition(0, 0, 564, 49);
    TextAreaBackgroundWifiSsid.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TextAreaBackgroundWifiSsid.setAlpha(0);
    scrollableContainerWifiSsid.add(TextAreaBackgroundWifiSsid);

    textAreaWifiSsid.setPosition(0, 0, 564, 49);
    textAreaWifiSsid.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaWifiSsid.setLinespacing(0);
    Unicode::snprintf(textAreaWifiSsidBuffer, TEXTAREAWIFISSID_SIZE, "%s", touchgfx::TypedText(T_TEXTAREA).getText());
    textAreaWifiSsid.setWildcard(textAreaWifiSsidBuffer);
    textAreaWifiSsid.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1UL5));
    scrollableContainerWifiSsid.add(textAreaWifiSsid);

    scrollableContainerMenu.add(scrollableContainerWifiSsid);

    flexButtonServerIp.setText(TypedText(T___SINGLEUSE_0LAU));
    flexButtonServerIp.setTextPosition(0, 0, 311, 50);
    flexButtonServerIp.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButtonServerIp.setAction(flexButtonCallback);
    flexButtonServerIp.setPosition(0, 50, 311, 50);
    scrollableContainerMenu.add(flexButtonServerIp);

    scrollableContainerServerIp.setPosition(319, 51, 161, 49);
    scrollableContainerServerIp.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainerServerIp.setScrollbarsAlpha(255);
    TextAreaBackgroundServerIp.setPosition(0, 0, 564, 49);
    TextAreaBackgroundServerIp.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TextAreaBackgroundServerIp.setAlpha(0);
    scrollableContainerServerIp.add(TextAreaBackgroundServerIp);

    textAreaServerIp.setPosition(0, 1, 564, 49);
    textAreaServerIp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaServerIp.setLinespacing(0);
    Unicode::snprintf(textAreaServerIpBuffer, TEXTAREASERVERIP_SIZE, "%s", touchgfx::TypedText(T_TEXTAREA).getText());
    textAreaServerIp.setWildcard(textAreaServerIpBuffer);
    textAreaServerIp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4FDR));
    scrollableContainerServerIp.add(textAreaServerIp);

    scrollableContainerMenu.add(scrollableContainerServerIp);

    flexButtonServerPort.setText(TypedText(T___SINGLEUSE_6TAB));
    flexButtonServerPort.setTextPosition(0, 0, 311, 50);
    flexButtonServerPort.setTextColors(touchgfx::Color::getColorFromRGB(10, 10, 10), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButtonServerPort.setAction(flexButtonCallback);
    flexButtonServerPort.setPosition(0, 0, 311, 50);
    scrollableContainerMenu.add(flexButtonServerPort);

    scrollableContainerServerPort.setPosition(319, 1, 161, 49);
    scrollableContainerServerPort.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    scrollableContainerServerPort.setScrollbarsAlpha(255);
    TextAreaBackgroundServerPort.setPosition(0, 0, 564, 49);
    TextAreaBackgroundServerPort.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    TextAreaBackgroundServerPort.setAlpha(0);
    scrollableContainerServerPort.add(TextAreaBackgroundServerPort);

    textAreaServerPort.setPosition(0, 0, 564, 49);
    textAreaServerPort.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textAreaServerPort.setLinespacing(0);
    Unicode::snprintf(textAreaServerPortBuffer, TEXTAREASERVERPORT_SIZE, "%s", touchgfx::TypedText(T_TEXTAREA).getText());
    textAreaServerPort.setWildcard(textAreaServerPortBuffer);
    textAreaServerPort.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IVI5));
    scrollableContainerServerPort.add(textAreaServerPort);

    scrollableContainerMenu.add(scrollableContainerServerPort);

    add(scrollableContainerMenu);

    imageScrollSeparator.setXY(317, 50);
    imageScrollSeparator.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_DIVIDERS_VERTICAL_MEDIUM_THIN_DARK_ID));
    add(imageScrollSeparator);

    containerMenuBar.setPosition(0, 0, 480, 50);
    TopBar.setXY(0, 0);
    TopBar.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BARS_480X272_BOTTOM_DIM_DARK_ID));
    TopBar.setAlpha(135);
    containerMenuBar.add(TopBar);

    textAreaMenu.setXY(158, 1);
    textAreaMenu.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaMenu.setLinespacing(0);
    textAreaMenu.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G20V));
    containerMenuBar.add(textAreaMenu);

    buttonLoadDefault.setXY(0, 0);
    buttonLoadDefault.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_PRESSED_ID));
    buttonLoadDefault.setLabelText(touchgfx::TypedText(T___SINGLEUSE_OJWK));
    buttonLoadDefault.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonLoadDefault.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonLoadDefault.setAction(buttonCallback);
    containerMenuBar.add(buttonLoadDefault);

    buttonConnect.setXY(370, 0);
    buttonConnect.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_PRESSED_ID));
    buttonConnect.setLabelText(touchgfx::TypedText(T___SINGLEUSE_9MJY));
    buttonConnect.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonConnect.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    containerMenuBar.add(buttonConnect);

    add(containerMenuBar);

    buttonWithLabelKeyboardExit.setXY(0, 212);
    buttonWithLabelKeyboardExit.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_PRESSED_ID));
    buttonWithLabelKeyboardExit.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ZRWR));
    buttonWithLabelKeyboardExit.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelKeyboardExit.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelKeyboardExit.setVisible(false);
    buttonWithLabelKeyboardExit.setAction(buttonCallback);
    add(buttonWithLabelKeyboardExit);

    buttonWithLabelKeyboardSave.setXY(420, 212);
    buttonWithLabelKeyboardSave.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_FILL_PRESSED_ID));
    buttonWithLabelKeyboardSave.setLabelText(touchgfx::TypedText(T___SINGLEUSE_N9FE));
    buttonWithLabelKeyboardSave.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelKeyboardSave.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelKeyboardSave.setVisible(false);
    buttonWithLabelKeyboardSave.setAction(buttonCallback);
    add(buttonWithLabelKeyboardSave);
}

ScreenMenuViewBase::~ScreenMenuViewBase()
{

}

void ScreenMenuViewBase::setupScreen()
{

}

void ScreenMenuViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonLoadDefault)
    {
        //LoadDefaultParameters
        //When buttonLoadDefault clicked call virtual function
        //Call LoadDefaultParameters
        LoadDefaultParameters();
    }
    if (&src == &buttonWithLabelKeyboardExit)
    {
        //buttonWithLabelKeyboardExitClicked
        //When buttonWithLabelKeyboardExit clicked call virtual function
        //Call buttonWithLabelKeyboardExitClicked
        buttonWithLabelKeyboardExitClicked();
    }
    if (&src == &buttonWithLabelKeyboardSave)
    {
        //buttonWithLabelKeyboardSaveClicked
        //When buttonWithLabelKeyboardSave clicked call virtual function
        //Call buttonWithLabelKeyboardSaveClicked
        buttonWithLabelKeyboardSaveClicked();
    }
}

void ScreenMenuViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButtonServerPort)
    {
        //flexButtonServerPortClicked
        //When flexButtonServerPort clicked call virtual function
        //Call flexButtonServerPortClicked
        flexButtonServerPortClicked();
    }
    if (&src == &flexButtonServerIp)
    {
        //flexButtonServerIpClicked
        //When flexButtonServerIp clicked call virtual function
        //Call flexButtonServerIpClicked
        flexButtonServerIpClicked();
    }
    if (&src == &flexButtonWifiSsid)
    {
        //flexButtonWifiSsidClicked
        //When flexButtonWifiSsid clicked call virtual function
        //Call flexButtonWifiSsidClicked
        flexButtonWifiSsidClicked();
    }
    if (&src == &flexButtonWifiPass)
    {
        //flexButtonWifiPassClicked
        //When flexButtonWifiPass clicked call virtual function
        //Call flexButtonWifiPassClicked
        flexButtonWifiPassClicked();
    }
    if (&src == &flexButtonDataFrequency)
    {
        //flexButtonDataFrequencyClicked
        //When flexButtonDataFrequency clicked call virtual function
        //Call flexButtonDataFrequencyClicked
        flexButtonDataFrequencyClicked();
    }
}
