/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENHOMEVIEWBASE_HPP
#define SCREENHOMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenhome_screen/ScreenHomePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class ScreenHomeViewBase : public touchgfx::View<ScreenHomePresenter>
{
public:
    ScreenHomeViewBase();
    virtual ~ScreenHomeViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void signalTransitionSource()
    {
        // Override and implement this function in ScreenHome
    }
    virtual void displayTemperatureAndHumidity()
    {
        // Override and implement this function in ScreenHome
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Background;
    touchgfx::Container containerMenuBar;
    touchgfx::Image TopBar;
    touchgfx::TextArea textAreaMenu;
    touchgfx::ButtonWithLabel buttonSettings;
    touchgfx::ButtonWithLabel buttonDisconnect;
    touchgfx::ButtonWithLabel buttonReconnect;
    touchgfx::Image textAreaTemperatureBackground;
    touchgfx::TextAreaWithOneWildcard textAreaTemeratureNum;
    touchgfx::TextArea textAreaTemperature;
    touchgfx::Image textAreaHumidityBackground;
    touchgfx::TextAreaWithOneWildcard textAreaHumidityNum;
    touchgfx::TextArea textAreaHumidity;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREATEMERATURENUM_SIZE = 8;
    touchgfx::Unicode::UnicodeChar textAreaTemeratureNumBuffer[TEXTAREATEMERATURENUM_SIZE];
    static const uint16_t TEXTAREAHUMIDITYNUM_SIZE = 8;
    touchgfx::Unicode::UnicodeChar textAreaHumidityNumBuffer[TEXTAREAHUMIDITYNUM_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenHomeViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_DISPLAYTEMPERATUREANDHUMIDITY_INTERVAL = 30;
    uint32_t frameCountDisplayTemperatureAndHumidityInterval;

};

#endif // SCREENHOMEVIEWBASE_HPP
