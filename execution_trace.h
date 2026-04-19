#ifndef EXECUTION_TRACE_H
#define EXECUTION_TRACE_H

typedef struct {
    char module[64];
    char event[128];
    long timestamp;
} trace_event_t;

void trace_init();
void trace_log(const char *module, const char *event);

#endif
