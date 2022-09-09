#include "gfx/legato/generated/screen/le_gen_screen_default.h"

// screen member widget declarations
static leWidget* root0;

leWidget* default_Layer0_FillPanel;
leLabelWidget* default_TitleLabel;
leButtonWidget* default_SloganButton;
leButtonWidget* default_LogoButton;
leLabelWidget* default_ImageTypeLabelWidget;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_default(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_default(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    default_Layer0_FillPanel = leWidget_New();
    default_Layer0_FillPanel->fn->setPosition(default_Layer0_FillPanel, 0, 0);
    default_Layer0_FillPanel->fn->setSize(default_Layer0_FillPanel, 480, 272);
    default_Layer0_FillPanel->fn->setScheme(default_Layer0_FillPanel, &AriaImport_LayerScheme);
    root0->fn->addChild(root0, (leWidget*)default_Layer0_FillPanel);

    default_TitleLabel = leLabelWidget_New();
    default_TitleLabel->fn->setPosition(default_TitleLabel, 16, 0);
    default_TitleLabel->fn->setSize(default_TitleLabel, 455, 55);
    default_TitleLabel->fn->setBackgroundType(default_TitleLabel, LE_WIDGET_BACKGROUND_NONE);
    default_TitleLabel->fn->setHAlignment(default_TitleLabel, LE_HALIGN_CENTER);
    default_TitleLabel->fn->setString(default_TitleLabel, (leString*)&string_TitleString);
    root0->fn->addChild(root0, (leWidget*)default_TitleLabel);

    default_SloganButton = leButtonWidget_New();
    default_SloganButton->fn->setPosition(default_SloganButton, 10, 210);
    default_SloganButton->fn->setSize(default_SloganButton, 464, 50);
    default_SloganButton->fn->setString(default_SloganButton, (leString*)&string_DrawRLE);
    default_SloganButton->fn->setReleasedEventCallback(default_SloganButton, event_default_SloganButton_OnReleased);
    root0->fn->addChild(root0, (leWidget*)default_SloganButton);

    default_LogoButton = leButtonWidget_New();
    default_LogoButton->fn->setPosition(default_LogoButton, 71, 60);
    default_LogoButton->fn->setSize(default_LogoButton, 150, 130);
    default_LogoButton->fn->setBackgroundType(default_LogoButton, LE_WIDGET_BACKGROUND_NONE);
    default_LogoButton->fn->setBorderType(default_LogoButton, LE_WIDGET_BORDER_NONE);
    default_LogoButton->fn->setPressedImage(default_LogoButton, (leImage*)&MHGS_logo_small_compressed);
    default_LogoButton->fn->setReleasedImage(default_LogoButton, (leImage*)&MHGS_logo_small_compressed);
    default_LogoButton->fn->setPressedOffset(default_LogoButton, 0);
    default_LogoButton->fn->setReleasedEventCallback(default_LogoButton, event_default_LogoButton_OnReleased);
    root0->fn->addChild(root0, (leWidget*)default_LogoButton);

    default_ImageTypeLabelWidget = leLabelWidget_New();
    default_ImageTypeLabelWidget->fn->setPosition(default_ImageTypeLabelWidget, 236, 100);
    default_ImageTypeLabelWidget->fn->setSize(default_ImageTypeLabelWidget, 215, 51);
    default_ImageTypeLabelWidget->fn->setBackgroundType(default_ImageTypeLabelWidget, LE_WIDGET_BACKGROUND_NONE);
    default_ImageTypeLabelWidget->fn->setHAlignment(default_ImageTypeLabelWidget, LE_HALIGN_CENTER);
    default_ImageTypeLabelWidget->fn->setString(default_ImageTypeLabelWidget, (leString*)&string_ImageIsPaletteCompressed);
    root0->fn->addChild(root0, (leWidget*)default_ImageTypeLabelWidget);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_default(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_default(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    default_Layer0_FillPanel = NULL;
    default_TitleLabel = NULL;
    default_SloganButton = NULL;
    default_LogoButton = NULL;
    default_ImageTypeLabelWidget = NULL;


    showing = LE_FALSE;
}

void screenDestroy_default(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_default(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

