#include "../src/clog.h"

int main(void){
	log_emerg("Test emerg");
	log_alert("Test alert");
	log_critical("Test critical");
	log_error("Test error");
	log_warning("Test warning");
	log_notice("Test notice");
	log_info("Test info");
	log_debug("Test debug");
	return 0;
}
