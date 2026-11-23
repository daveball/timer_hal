#include "timer.h"
#include "timer_platform.h"
#include "timer_config.h"
static bool g_initialised=false;
timer_status_t timer_init(void){if(g_initialised){return TIMER_STATUS_OK;} timer_platform_init(); g_initialised=true; return TIMER_STATUS_OK;}
bool timer_is_initialised(void){return g_initialised;}
timer_version_t timer_get_version(void){static const timer_version_t version={TIMER_VERSION_MAJOR,TIMER_VERSION_MINOR,TIMER_VERSION_PATCH}; return version;}
timer_tick_t timer_get_ms(void){if(!g_initialised){return 0U;} return (timer_tick_t)timer_platform_get_tick_ms();}
timer_status_t timer_start(timer_handle_t *handle){if(handle==NULL){return TIMER_STATUS_INVALID_PARAMETER;} if(!g_initialised){return TIMER_STATUS_NOT_INITIALISED;} handle->start=timer_get_ms(); return TIMER_STATUS_OK;}
timer_status_t timer_restart(timer_handle_t *handle){return timer_start(handle);}
timer_status_t timer_elapsed(const timer_handle_t *handle,timer_tick_t *elapsed_ms){if(handle==NULL||elapsed_ms==NULL){return TIMER_STATUS_INVALID_PARAMETER;} if(!g_initialised){return TIMER_STATUS_NOT_INITIALISED;} *elapsed_ms=(timer_tick_t)(timer_get_ms()-handle->start); return TIMER_STATUS_OK;}
timer_status_t timer_expired(const timer_handle_t *handle,timer_tick_t timeout_ms,bool *expired){timer_tick_t elapsed; timer_status_t status; if(expired==NULL){return TIMER_STATUS_INVALID_PARAMETER;} if(!g_initialised){return TIMER_STATUS_NOT_INITIALISED;} status=timer_elapsed(handle,&elapsed); if(status!=TIMER_STATUS_OK){return status;} *expired=(elapsed>=timeout_ms); return TIMER_STATUS_OK;}
void timer_delay_ms(timer_tick_t delay_ms){timer_handle_t handle; timer_tick_t elapsed; timer_status_t status; if(!g_initialised||delay_ms==0U){return;} status=timer_start(&handle); if(status!=TIMER_STATUS_OK){return;} do{status=timer_elapsed(&handle,&elapsed); if(status!=TIMER_STATUS_OK){return;}}while(elapsed<delay_ms);}
#ifdef UNIT_TEST
void timer_reset_for_test(void){g_initialised=false;}
#endif
