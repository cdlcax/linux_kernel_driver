#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
    .name = KBUILD_MODNAME,
    .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
    .exit = cleanup_module,
#endif
    .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
    __used
__attribute__((section("__versions"))) = {
    { 0x3b69997a, "module_layout" },
    { 0xa60f9d25, "remove_proc_entry" },
    { 0x91715312, "sprintf" },
    { 0x27e1a049, "printk" },
    { 0xa1c76e0a, "_cond_resched" },
    { 0xb4390f9a, "mcount" },
    { 0xf0fdf6cb, "__stack_chk_fail" },
    { 0x3021c756, "create_proc_entry" },
    { 0xb742fd7, "simple_strtol" },
    { 0x4f6b400b, "_copy_from_user" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
    "depends=";


MODULE_INFO(srcversion, "96A5CD386B515C84B7E458B");
