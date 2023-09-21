// 4.22.0 0x40dfdcc2
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_480x272_waves[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_WAVES_ID = 0, Size: 480x272 pixels
extern const unsigned char image_alternate_theme_images_bars_480x272_bottom_dim_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_BARS_480X272_BOTTOM_DIM_DARK_ID = 1, Size: 480x50 pixels
extern const unsigned char image_alternate_theme_images_dividers_vertical_medium_thin_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_DIVIDERS_VERTICAL_MEDIUM_THIN_DARK_ID = 2, Size: 2x320 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_active[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_ACTIVE_ID = 3, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_PRESSED_ID = 4, Size: 110x50 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_480x272_waves, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_bars_480x272_bottom_dim_dark, 0, 480, 50, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 50, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_dividers_vertical_medium_thin_dark, 0, 2, 320, 0, 0, 2, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_active, 0, 110, 50, 5, 0, 100, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_pressed, 0, 110, 50, 5, 0, 100, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
