// 4.22.0 0xf7c8f8ef
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_backgrounds_480x272_waves[]; // BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_WAVES_ID = 0, Size: 480x272 pixels
extern const unsigned char image_alternate_theme_images_bars_480x272_bottom_dim_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_BARS_480X272_BOTTOM_DIM_DARK_ID = 1, Size: 480x50 pixels
extern const unsigned char image_alternate_theme_images_dividers_vertical_medium_thin_dark[]; // BITMAP_ALTERNATE_THEME_IMAGES_DIVIDERS_VERTICAL_MEDIUM_THIN_DARK_ID = 2, Size: 2x320 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_active[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_ACTIVE_ID = 3, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_PRESSED_ID = 4, Size: 110x50 pixels
extern const unsigned char image_icon_keyboard_even_row[]; // BITMAP_ICON_KEYBOARD_EVEN_ROW_ID = 5, Size: 47x28 pixels
extern const unsigned char image_icon_keyboard_highlighted[]; // BITMAP_ICON_KEYBOARD_HIGHLIGHTED_ID = 6, Size: 47x28 pixels
extern const unsigned char image_icon_keyboard_odd_row[]; // BITMAP_ICON_KEYBOARD_ODD_ROW_ID = 7, Size: 47x28 pixels
extern const unsigned char image_keyboard_background[]; // BITMAP_KEYBOARD_BACKGROUND_ID = 8, Size: 320x240 pixels
extern const unsigned char image_keyboard_key_delete_highlighted[]; // BITMAP_KEYBOARD_KEY_DELETE_HIGHLIGHTED_ID = 9, Size: 56x40 pixels
extern const unsigned char image_keyboard_key_highlighted[]; // BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID = 10, Size: 26x40 pixels
extern const unsigned char image_keyboard_key_num_highlighted[]; // BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID = 11, Size: 56x40 pixels
extern const unsigned char image_keyboard_key_shift_highlighted[]; // BITMAP_KEYBOARD_KEY_SHIFT_HIGHLIGHTED_ID = 12, Size: 56x40 pixels
extern const unsigned char image_keyboard_space_highlighted[]; // BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID = 13, Size: 252x40 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_backgrounds_480x272_waves, 0, 480, 272, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 272, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_bars_480x272_bottom_dim_dark, 0, 480, 50, 0, 0, 480, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 50, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_dividers_vertical_medium_thin_dark, 0, 2, 320, 0, 0, 2, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_active, 0, 110, 50, 5, 0, 100, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_rounded_pressed, 0, 110, 50, 5, 0, 100, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_icon_keyboard_even_row, 0, 47, 28, 0, 0, 47, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 28, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_icon_keyboard_highlighted, 0, 47, 28, 0, 0, 47, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 28, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_icon_keyboard_odd_row, 0, 47, 28, 0, 0, 47, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 28, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_background, 0, 320, 240, 0, 0, 320, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 240, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_key_delete_highlighted, 0, 56, 40, 0, 0, 56, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_key_highlighted, 0, 26, 40, 0, 0, 26, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_key_num_highlighted, 0, 56, 40, 0, 0, 56, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_key_shift_highlighted, 0, 56, 40, 0, 0, 56, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_keyboard_space_highlighted, 0, 252, 40, 0, 0, 252, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
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
