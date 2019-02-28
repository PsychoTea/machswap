#ifndef OFFSETS_H
#define OFFSETS_H

typedef struct {
    struct {
        const char *version;
        uint64_t kernel_image_base;
    } constant;

    struct {
        uint64_t copyin;
        uint64_t copyout;
        uint64_t kalloc_external;
        uint64_t csblob_get_cdhash;
    } funcs;

    struct {
        uint64_t zonemap;
        uint64_t kernproc;
        uint64_t realhost;
        uint64_t system_clock;
    } data;

    struct {
        uint32_t proc_pid;
        uint32_t proc_task;
        uint32_t proc_ucred;
        uint32_t task_vm_map;
        uint32_t task_bsd_info;
        uint32_t task_itk_self;
        uint32_t task_itk_registered;
        uint32_t task_all_image_info_addr;
        uint32_t task_all_image_info_size;
    } struct_offsets;

    struct {
        uint32_t create_outsize;
        uint32_t get_external_trap_for_index;
    } iosurface;
} offsets_t;

offsets_t *get_offsets(void);

#endif
