#include "ui.h"
#include "./pages/ui_HomePage/ui_HomePage.h"
#include "./pages/ui_SettingPage/ui_SettingPage.h"
#include "./pages/ui_WeatherPage/ui_WeatherPage.h"
#include "./pages/ui_CalendarPage/ui_CalendarPage.h"
#include "./pages/ui_GameMuyuPage/ui_GameMuyuPage.h"
#include "./pages/ui_Game2048Page/ui_Game2048Page.h"
#include "./pages/ui_ChatBotPage/ui_ChatBotPage.h"
#include "./pages/ui_GameMemoryPage/ui_GameMemoryPage.h"
#include "./pages/ui_DrawPage/ui_DrawPage.h"
///////////////////// VARIABLES ////////////////////

lv_lib_pm_t page_manager;

ui_system_para_t ui_system_para;

///////////////////// TEST LVGL SETTINGS ////////////////////

#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif

///////////////////// all apps ////////////////////

#define _APP_NUMS 9 // number of apps (including HomePage)

ui_app_data_t ui_apps[_APP_NUMS] = 
{
    {
        .name = "HomePage",
        .init = ui_HomePage_init,
        .deinit = ui_HomePage_deinit,
        .page_obj = NULL
    },
    {
        .name = "SettingPage",
        .init = ui_SettingPage_init,
        .deinit = ui_SettingPage_deinit,
        .page_obj = NULL
    },
    {
        .name = "WeatherPage",
        .init = ui_WeatherPage_init,
        .deinit = ui_WeatherPage_deinit,
        .page_obj = NULL
    },
    {
        .name = "CalendarPage",
        .init = ui_CalendarPage_init,
        .deinit = ui_CalendarPage_deinit,
        .page_obj = NULL
    },
    // {
    //     .name = "MemoPage",
    //     .init = NULL,
    //     .deinit = NULL,
    //     .page_obj = NULL
    // },
    {
        .name = "GameMuyuPage",
        .init = ui_GameMuyuPage_init,
        .deinit = ui_GameMuyuPage_deinit,
        .page_obj = NULL
    },
    {
        .name = "Game2048Page",
        .init = ui_Game2048Page_init,
        .deinit = ui_Game2048Page_deinit,
        .page_obj = NULL
    },
    {
        .name = "ChatBotPage",
        .init = ui_ChatBotPage_init,
        .deinit = ui_ChatBotPage_deinit,
        .page_obj = NULL
    },
    // {
    //     .name = "CameraPage",
    //     .init = NULL,
    //     .deinit = NULL,
    //     .page_obj = NULL
    // },
    // {
    //     .name = "YOLOPage",
    //     .init = NULL,
    //     .deinit = NULL,
    //     .page_obj = NULL
    // },
    {
        .name = "GameMemoryPage",
        .init = ui_GameMemoryPage_init,
        .deinit = ui_GameMemoryPage_deinit,
        .page_obj = NULL
    },
    {
        .name = "DrawPage",
        .init = ui_DrawPage_init,
        .deinit = ui_DrawPage_deinit,
        .page_obj = NULL
    }

};

///////////////////// Function ////////////////////

void _sys_para_init(void)
{
    if(sys_load_system_parameters(sys_config_path, &ui_system_para)!=0)
    {
        LV_LOG_WARN("Load system parameters failed, create a new config file.");
        ui_system_para.year = 2025;
        ui_system_para.month = 1;
        ui_system_para.day = 1;
        ui_system_para.hour = 0;
        ui_system_para.minute = 0;
        ui_system_para.brightness = 50;
        ui_system_para.sound = 50;
        ui_system_para.wifi_connected = false;
        ui_system_para.auto_time = true;
        ui_system_para.auto_location = false;
        strcpy(ui_system_para.location.city, "东城区");
        strcpy(ui_system_para.location.adcode, "110101");
        strcpy(ui_system_para.gaode_api_key, "your_amap_key");
        // create a new config file and save
        sys_save_system_parameters(sys_config_path, &ui_system_para);
    }
    
    if(ui_system_para.auto_time == true)
    {
        if(sys_get_time_from_ntp("ntp1.aliyun.com", &ui_system_para.year, &ui_system_para.month, &ui_system_para.day, &ui_system_para.hour, &ui_system_para.minute, NULL))
        {
            LV_LOG_WARN("Get time from NTP failed, use system time.");
        }
        else
        {
            sys_set_time(ui_system_para.year, ui_system_para.month, ui_system_para.day, ui_system_para.hour, ui_system_para.minute, 0);
            LV_LOG_USER("Auto NTP time year: %d, month: %d, day: %d, hour: %d, minute: %d", ui_system_para.year, ui_system_para.month, ui_system_para.day, ui_system_para.hour, ui_system_para.minute);
        }

    }
    else
    {
        sys_set_time(ui_system_para.year, ui_system_para.month, ui_system_para.day, ui_system_para.hour, ui_system_para.minute, 0);
        LV_LOG_USER("Manual time year: %d, month: %d, day: %d, hour: %d, minute: %d", ui_system_para.year, ui_system_para.month, ui_system_para.day, ui_system_para.hour, ui_system_para.minute);
    }
    if(ui_system_para.auto_location == true)
    {
        if(sys_get_auto_location_by_ip(&ui_system_para.location, ui_system_para.gaode_api_key) == 0)
        {
            LV_LOG_USER("Auto location city: %s, adcode: %s", ui_system_para.location.city, ui_system_para.location.adcode);
        }
        else
        {
            LV_LOG_WARN("Get location by IP failed, use system location.");
            const char *city_name = sys_get_city_name_by_adcode(city_adcode_path, ui_system_para.location.adcode);
            strcpy(ui_system_para.location.city, city_name);
            LV_LOG_USER("Manual location city: %s, adcode: %s", ui_system_para.location.city, ui_system_para.location.adcode);
        }
    }
    else
    {
        const char *city_name = sys_get_city_name_by_adcode(city_adcode_path, ui_system_para.location.adcode);
        strcpy(ui_system_para.location.city, city_name);
        LV_LOG_USER("Manual location city: %s, adcode: %s", ui_system_para.location.city, ui_system_para.location.adcode);
    }
    LV_LOG_USER("System para init done.");
}

///////////////////// timer //////////////////////

void _maintimer_cb(void)
{
    static uint16_t time_count = 0;
    time_count++;
    // 每5分钟保存一次系统参数
    if(time_count >= 300)
    {
        sys_get_time(&ui_system_para.year, &ui_system_para.month, &ui_system_para.day, &ui_system_para.hour, &ui_system_para.minute, NULL);
        sys_save_system_parameters(sys_config_path, &ui_system_para);
        time_count = 0;
    }
    
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    _sys_para_init();
    lv_disp_t * dispp = lv_display_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);

    lv_lib_pm_Init(&page_manager);
    lv_lib_pm_page_t *pm_page[_APP_NUMS];
    for(int i = 0; i < _APP_NUMS; i++)
    {
        pm_page[i] = lv_lib_pm_CreatePage(&page_manager, ui_apps[i].name, ui_apps[i].init, ui_apps[i].deinit, NULL);
    }
    lv_lib_pm_OpenPage(&page_manager, NULL, "HomePage");
    lv_timer_create(_maintimer_cb, 1000, NULL);
}