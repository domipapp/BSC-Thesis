/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CUSTOMCONTAINERMENUITEMWIFIPASSWORDBASE_HPP
#define CUSTOMCONTAINERMENUITEMWIFIPASSWORDBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class CustomContainerMenuItemWifiPasswordBase : public touchgfx::Container
{
public:
    CustomContainerMenuItemWifiPasswordBase();
    virtual ~CustomContainerMenuItemWifiPasswordBase();
    virtual void initialize();

    /*
     * Virtual Action Handlers
     */
    virtual void FlexButtonClicked()
    {
        // Override and implement this function in CustomContainerMenuItemWifiPassword
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box TextAreaBackground;
    touchgfx::TextAreaWithOneWildcard textArea;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButton;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaBuffer[TEXTAREA_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CustomContainerMenuItemWifiPasswordBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // CUSTOMCONTAINERMENUITEMWIFIPASSWORDBASE_HPP
