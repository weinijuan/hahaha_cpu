#include "diff_manage.h"
#include "common.h"

Difftest** difftest = NULL;

int DiffManage::init_difftest() {
    difftest = new Difftest*[NUM_CORES];
    for (int i = 0; i < NUM_CORES; ++i) {
        difftest[i] = new Difftest(i);
    }
    return 0;
}

int DiffManage::difftest_state() {
    /* trap as long as any core trapping */
    for (int i = 0; i < NUM_CORES; i++) {
        if (difftest[i]->get_trap_valid()) {
            return difftest[i]->get_trap_code();
        }
    }
    return STATE_RUNNING;
}

int DiffManage::do_step(vluint64_t &main_time) {
    int ret = 0;
    for (int i = 0; i < NUM_CORES; ++i) {
        ret = difftest[i]->step(main_time);
        if (ret)
            return ret;
    }
    return STATE_RUNNING;
}

DiffManage::~DiffManage() {
    for(int i = 0; i < NUM_CORES; ++i) {
        delete difftest[i];
        difftest[i] = NULL;
    }
    delete difftest;
    difftest = NULL;
}