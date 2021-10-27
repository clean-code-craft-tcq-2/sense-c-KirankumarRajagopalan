struct Stats s {
    s.average = 0;
    s.min = 0;
    s.max = 0;
};


typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
