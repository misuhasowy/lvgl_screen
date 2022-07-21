// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include"lv_conf.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Mainscreen;
lv_obj_t * ui_backgroundscreen;
lv_obj_t * ui_btntemp;
lv_obj_t * ui_labtemp;
lv_obj_t * ui_btnhumi;
lv_obj_t * ui_labhumi;
lv_obj_t * ui_btnO3;
lv_obj_t * ui_labO3;
lv_obj_t * ui_btnAP;
lv_obj_t * ui_Label8;
lv_obj_t * ui_O3screen;
lv_obj_t * ui_Chart2;
lv_obj_t * ui_Arc3;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_APscreen;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Humiscreen;
lv_obj_t * ui_Chart3;
lv_obj_t * ui_Arc2;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Temcreen;
lv_obj_t * ui_Chart4;
lv_obj_t * ui_Arc4;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label9;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Mainscreen(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_btntemp(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Temcreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}
static void ui_event_btnhumi(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Humiscreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}
static void ui_event_btnO3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_O3screen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0);
    }
}
static void ui_event_labO3(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}
static void ui_event_btnAP(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_APscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_O3screen(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_O3screen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_APscreen(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_Humiscreen(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_Temcreen(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Mainscreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Mainscreen_screen_init(void)
{

    // ui_Mainscreen

    ui_Mainscreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Mainscreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Mainscreen, ui_event_Mainscreen, LV_EVENT_ALL, NULL);

    // ui_backgroundscreen

    ui_backgroundscreen = lv_img_create(ui_Mainscreen);
    lv_img_set_src(ui_backgroundscreen, &ui_img_result1_png);

    lv_obj_set_width(ui_backgroundscreen, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_backgroundscreen, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_backgroundscreen, 0);
    lv_obj_set_y(ui_backgroundscreen, 0);

    lv_obj_set_align(ui_backgroundscreen, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_backgroundscreen, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_backgroundscreen, LV_OBJ_FLAG_SCROLLABLE);

    // ui_btntemp

    ui_btntemp = lv_btn_create(ui_Mainscreen);

    lv_obj_set_width(ui_btntemp, 70);
    lv_obj_set_height(ui_btntemp, 30);

    lv_obj_set_x(ui_btntemp, -70);
    lv_obj_set_y(ui_btntemp, 25);

    lv_obj_set_align(ui_btntemp, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_btntemp, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_btntemp, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_btntemp, ui_event_btntemp, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_btntemp, lv_color_hex(0x1E1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btntemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_labtemp

    ui_labtemp = lv_label_create(ui_Mainscreen);

    lv_obj_set_width(ui_labtemp, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_labtemp, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_labtemp, -72);
    lv_obj_set_y(ui_labtemp, 25);

    lv_obj_set_align(ui_labtemp, LV_ALIGN_CENTER);

    lv_label_set_text(ui_labtemp, "TEMP");

    lv_obj_add_state(ui_labtemp, LV_STATE_CHECKED);

    lv_obj_set_style_text_font(ui_labtemp, LV_FONT_MONTSERRAT_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_btnhumi

    ui_btnhumi = lv_btn_create(ui_Mainscreen);

    lv_obj_set_width(ui_btnhumi, 70);
    lv_obj_set_height(ui_btnhumi, 30);

    lv_obj_set_x(ui_btnhumi, 110);
    lv_obj_set_y(ui_btnhumi, 25);

    lv_obj_set_align(ui_btnhumi, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_btnhumi, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_btnhumi, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_btnhumi, ui_event_btnhumi, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_btnhumi, lv_color_hex(0x1E1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnhumi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_labhumi

    ui_labhumi = lv_label_create(ui_Mainscreen);

    lv_obj_set_width(ui_labhumi, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_labhumi, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_labhumi, 110);
    lv_obj_set_y(ui_labhumi, 25);

    lv_obj_set_align(ui_labhumi, LV_ALIGN_CENTER);

    lv_label_set_text(ui_labhumi, "HUMI");

    lv_obj_set_style_text_font(ui_labhumi, LV_FONT_MONTSERRAT_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_btnO3

    ui_btnO3 = lv_btn_create(ui_Mainscreen);

    lv_obj_set_width(ui_btnO3, 60);
    lv_obj_set_height(ui_btnO3, 28);

    lv_obj_set_x(ui_btnO3, -126);
    lv_obj_set_y(ui_btnO3, -60);

    lv_obj_set_align(ui_btnO3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_btnO3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_btnO3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_btnO3, ui_event_btnO3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_btnO3, lv_color_hex(0x1E1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnO3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_labO3

    ui_labO3 = lv_label_create(ui_Mainscreen);

    lv_obj_set_width(ui_labO3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_labO3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_labO3, -128);
    lv_obj_set_y(ui_labO3, -60);

    lv_obj_set_align(ui_labO3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_labO3, "O3");

    lv_obj_add_event_cb(ui_labO3, ui_event_labO3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_text_font(ui_labO3, LV_FONT_MONTSERRAT_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_btnAP

    ui_btnAP = lv_btn_create(ui_Mainscreen);

    lv_obj_set_width(ui_btnAP, 90);
    lv_obj_set_height(ui_btnAP, 28);

    lv_obj_set_x(ui_btnAP, -114);
    lv_obj_set_y(ui_btnAP, -16);

    lv_obj_set_align(ui_btnAP, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_btnAP, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_btnAP, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_btnAP, ui_event_btnAP, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_btnAP, lv_color_hex(0x1E1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnAP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_Mainscreen);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, -114);
    lv_obj_set_y(ui_Label8, -16);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "AIR PRE");

    lv_obj_set_style_text_font(ui_Label8, LV_FONT_MONTSERRAT_20, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_O3screen_screen_init(void)
{

    // ui_O3screen

    ui_O3screen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_O3screen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_O3screen, ui_event_O3screen, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_O3screen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_O3screen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart2

    ui_Chart2 = lv_chart_create(ui_O3screen);

    lv_obj_set_width(ui_Chart2, 301);
    lv_obj_set_height(ui_Chart2, 151);

    lv_obj_set_x(ui_Chart2, 2);
    lv_obj_set_y(ui_Chart2, -36);

    lv_obj_set_align(ui_Chart2, LV_ALIGN_CENTER);

    // ui_Arc3

    ui_Arc3 = lv_arc_create(ui_O3screen);

    lv_obj_set_width(ui_Arc3, 88);
    lv_obj_set_height(ui_Arc3, 71);

    lv_obj_set_x(ui_Arc3, 8);
    lv_obj_set_y(ui_Arc3, 82);

    lv_obj_set_align(ui_Arc3, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc3, 0, 100);
    lv_arc_set_value(ui_Arc3, 50);
    lv_arc_set_bg_angles(ui_Arc3, 120, 60);

    lv_obj_set_style_bg_img_recolor(ui_Arc3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Arc3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x0909C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 155, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc3, lv_color_hex(0x0A1414), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x9B14FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0x7C14FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Arc3, LV_BORDER_SIDE_TOP, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_O3screen);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 1);
    lv_obj_set_y(ui_Label1, 114);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "O3");

    // ui_Label2

    ui_Label2 = lv_label_create(ui_O3screen);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 4);
    lv_obj_set_y(ui_Label2, -100);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "O3 DATA ");

    lv_obj_set_style_text_font(ui_Label2, LV_FONT_MONTSERRAT_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_APscreen_screen_init(void)
{

    // ui_APscreen

    ui_APscreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_APscreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_APscreen, ui_event_APscreen, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_APscreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_APscreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_APscreen);

    lv_obj_set_width(ui_Chart1, 301);
    lv_obj_set_height(ui_Chart1, 151);

    lv_obj_set_x(ui_Chart1, 2);
    lv_obj_set_y(ui_Chart1, -36);

    lv_obj_set_align(ui_Chart1, LV_ALIGN_CENTER);

    // ui_Arc1

    ui_Arc1 = lv_arc_create(ui_APscreen);

    lv_obj_set_width(ui_Arc1, 88);
    lv_obj_set_height(ui_Arc1, 71);

    lv_obj_set_x(ui_Arc1, 8);
    lv_obj_set_y(ui_Arc1, 82);

    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc1, 0, 100);
    lv_arc_set_value(ui_Arc1, 50);
    lv_arc_set_bg_angles(ui_Arc1, 120, 60);

    lv_obj_set_style_bg_img_recolor(ui_Arc1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Arc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x0909C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 155, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc1, lv_color_hex(0x0A1414), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x9B14FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x7C14FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Arc1, LV_BORDER_SIDE_TOP, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_APscreen);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, 1);
    lv_obj_set_y(ui_Label3, 113);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "AP");

    // ui_Label4

    ui_Label4 = lv_label_create(ui_APscreen);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, 4);
    lv_obj_set_y(ui_Label4, -100);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "AIR PRESSURE DATA ");

    lv_obj_set_style_text_font(ui_Label4, LV_FONT_MONTSERRAT_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Humiscreen_screen_init(void)
{

    // ui_Humiscreen

    ui_Humiscreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Humiscreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Humiscreen, ui_event_Humiscreen, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Humiscreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Humiscreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart3

    ui_Chart3 = lv_chart_create(ui_Humiscreen);

    lv_obj_set_width(ui_Chart3, 301);
    lv_obj_set_height(ui_Chart3, 151);

    lv_obj_set_x(ui_Chart3, 2);
    lv_obj_set_y(ui_Chart3, -36);

    lv_obj_set_align(ui_Chart3, LV_ALIGN_CENTER);

    // ui_Arc2

    ui_Arc2 = lv_arc_create(ui_Humiscreen);

    lv_obj_set_width(ui_Arc2, 88);
    lv_obj_set_height(ui_Arc2, 71);

    lv_obj_set_x(ui_Arc2, 8);
    lv_obj_set_y(ui_Arc2, 82);

    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc2, 0, 100);
    lv_arc_set_value(ui_Arc2, 50);
    lv_arc_set_bg_angles(ui_Arc2, 120, 60);

    lv_obj_set_style_bg_img_recolor(ui_Arc2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Arc2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x0909C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 155, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc2, lv_color_hex(0x0A1414), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x9B14FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0x7C14FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Arc2, LV_BORDER_SIDE_TOP, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Humiscreen);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, -1);
    lv_obj_set_y(ui_Label5, 114);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "HU");

    // ui_Label6

    ui_Label6 = lv_label_create(ui_Humiscreen);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, 4);
    lv_obj_set_y(ui_Label6, -100);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "HUMIDITY DATA");

    lv_obj_set_style_text_font(ui_Label6, LV_FONT_MONTSERRAT_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Temcreen_screen_init(void)
{

    // ui_Temcreen

    ui_Temcreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Temcreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Temcreen, ui_event_Temcreen, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Temcreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Temcreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart4

    ui_Chart4 = lv_chart_create(ui_Temcreen);

    lv_obj_set_width(ui_Chart4, 301);
    lv_obj_set_height(ui_Chart4, 151);

    lv_obj_set_x(ui_Chart4, 2);
    lv_obj_set_y(ui_Chart4, -36);

    lv_obj_set_align(ui_Chart4, LV_ALIGN_CENTER);

    // ui_Arc4

    ui_Arc4 = lv_arc_create(ui_Temcreen);

    lv_obj_set_width(ui_Arc4, 88);
    lv_obj_set_height(ui_Arc4, 71);

    lv_obj_set_x(ui_Arc4, 8);
    lv_obj_set_y(ui_Arc4, 82);

    lv_obj_set_align(ui_Arc4, LV_ALIGN_CENTER);

    lv_arc_set_range(ui_Arc4, 0, 100);
    lv_arc_set_value(ui_Arc4, 50);
    lv_arc_set_bg_angles(ui_Arc4, 120, 60);

    lv_obj_set_style_bg_img_recolor(ui_Arc4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_Arc4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x0909C8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 155, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc4, lv_color_hex(0x0A1414), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x9B14FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0x7C14FF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Arc4, LV_BORDER_SIDE_TOP, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_Temcreen);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 114);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "TE");

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Temcreen);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 4);
    lv_obj_set_y(ui_Label9, -100);

    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label9, "TEMPERATURE DATA");

    lv_obj_set_style_text_font(ui_Label9, LV_FONT_MONTSERRAT_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Mainscreen_screen_init();
    ui_O3screen_screen_init();
    ui_APscreen_screen_init();
    ui_Humiscreen_screen_init();
    ui_Temcreen_screen_init();
    lv_disp_load_scr(ui_Mainscreen);
}
