/* This file auto-generated by genmodule.c - don't edit it */

/*
 * YASM module loader
 *
 *  Copyright (C) 2004-2007  Peter Johnson
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND OTHER CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR OTHER CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <util.h>

#include <libyasm.h>


typedef struct module {
    const char *keyword;            /* module keyword */
    void *data;                     /* associated data */
} module;

extern yasm_arch_module yasm_x86_LTX_arch;
extern yasm_arch_module yasm_lc3b_LTX_arch;
extern yasm_listfmt_module yasm_nasm_LTX_listfmt;
extern yasm_parser_module yasm_gas_LTX_parser;
extern yasm_parser_module yasm_gnu_LTX_parser;
extern yasm_parser_module yasm_nasm_LTX_parser;
extern yasm_parser_module yasm_tasm_LTX_parser;
extern yasm_preproc_module yasm_nasm_LTX_preproc;
extern yasm_preproc_module yasm_tasm_LTX_preproc;
extern yasm_preproc_module yasm_raw_LTX_preproc;
extern yasm_preproc_module yasm_cpp_LTX_preproc;
extern yasm_dbgfmt_module yasm_cv8_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_null_LTX_dbgfmt;
extern yasm_dbgfmt_module yasm_stabs_LTX_dbgfmt;
extern yasm_objfmt_module yasm_dbg_LTX_objfmt;
extern yasm_objfmt_module yasm_bin_LTX_objfmt;
extern yasm_objfmt_module yasm_dosexe_LTX_objfmt;
extern yasm_objfmt_module yasm_elf_LTX_objfmt;
extern yasm_objfmt_module yasm_elf32_LTX_objfmt;
extern yasm_objfmt_module yasm_elf64_LTX_objfmt;
extern yasm_objfmt_module yasm_coff_LTX_objfmt;
extern yasm_objfmt_module yasm_macho_LTX_objfmt;
extern yasm_objfmt_module yasm_macho32_LTX_objfmt;
extern yasm_objfmt_module yasm_macho64_LTX_objfmt;
extern yasm_objfmt_module yasm_rdf_LTX_objfmt;
extern yasm_objfmt_module yasm_win32_LTX_objfmt;
extern yasm_objfmt_module yasm_win64_LTX_objfmt;
extern yasm_objfmt_module yasm_x64_LTX_objfmt;
extern yasm_objfmt_module yasm_xdf_LTX_objfmt;

static module arch_modules[] = {
    {"x86", &yasm_x86_LTX_arch},
    {"lc3b", &yasm_lc3b_LTX_arch},
};

static module dbgfmt_modules[] = {
    {"cv8", &yasm_cv8_LTX_dbgfmt},
    {"dwarf2", &yasm_dwarf2_LTX_dbgfmt},
    {"null", &yasm_null_LTX_dbgfmt},
    {"stabs", &yasm_stabs_LTX_dbgfmt},
};

static module objfmt_modules[] = {
    {"dbg", &yasm_dbg_LTX_objfmt},
    {"bin", &yasm_bin_LTX_objfmt},
    {"dosexe", &yasm_dosexe_LTX_objfmt},
    {"elf", &yasm_elf_LTX_objfmt},
    {"elf32", &yasm_elf32_LTX_objfmt},
    {"elf64", &yasm_elf64_LTX_objfmt},
    {"coff", &yasm_coff_LTX_objfmt},
    {"macho", &yasm_macho_LTX_objfmt},
    {"macho32", &yasm_macho32_LTX_objfmt},
    {"macho64", &yasm_macho64_LTX_objfmt},
    {"rdf", &yasm_rdf_LTX_objfmt},
    {"win32", &yasm_win32_LTX_objfmt},
    {"win64", &yasm_win64_LTX_objfmt},
    {"x64", &yasm_x64_LTX_objfmt},
    {"xdf", &yasm_xdf_LTX_objfmt},
};

static module listfmt_modules[] = {
    {"nasm", &yasm_nasm_LTX_listfmt},
};

static module parser_modules[] = {
    {"gas", &yasm_gas_LTX_parser},
    {"gnu", &yasm_gnu_LTX_parser},
    {"nasm", &yasm_nasm_LTX_parser},
    {"tasm", &yasm_tasm_LTX_parser},
};

static module preproc_modules[] = {
    {"nasm", &yasm_nasm_LTX_preproc},
    {"tasm", &yasm_tasm_LTX_preproc},
    {"raw", &yasm_raw_LTX_preproc},
    {"cpp", &yasm_cpp_LTX_preproc},
};

static struct {
    module *m;
    size_t n;
} module_types[] = {
    {arch_modules, sizeof(arch_modules)/sizeof(module)},
    {dbgfmt_modules, sizeof(dbgfmt_modules)/sizeof(module)},
    {objfmt_modules, sizeof(objfmt_modules)/sizeof(module)},
    {listfmt_modules, sizeof(listfmt_modules)/sizeof(module)},
    {parser_modules, sizeof(parser_modules)/sizeof(module)},
    {preproc_modules, sizeof(preproc_modules)/sizeof(module)},
};

typedef struct loaded_module {
    yasm_module_type type;          /* module type */
    const char *keyword;            /* module keyword */
    void *data;                     /* associated data */
} loaded_module;

static loaded_module *loaded_modules = NULL;
static size_t num_loaded_modules = 0;

void *
yasm_load_module(yasm_module_type type, const char *keyword)
{
    size_t i;
    module *modules;
    size_t n;

    /* Look for the module/symbol, first in loaded modules */
    if (loaded_modules) {
        for (i=0; i<num_loaded_modules; i++) {
            if (loaded_modules[i].type == type &&
                yasm__strcasecmp(loaded_modules[i].keyword, keyword) == 0)
                return loaded_modules[i].data;
        }
    }

    modules = module_types[type].m;
    n = module_types[type].n;
    for (i=0; i<n; i++) {
        if (yasm__strcasecmp(modules[i].keyword, keyword) == 0)
            return modules[i].data;
    }

    return NULL;
}

void
yasm_register_module(yasm_module_type type, const char *keyword, void *data)
{
    loaded_modules =
        yasm_xrealloc(loaded_modules,
                      (num_loaded_modules+1)*sizeof(loaded_module));
    loaded_modules[num_loaded_modules].type = type;
    loaded_modules[num_loaded_modules].keyword = keyword;
    loaded_modules[num_loaded_modules].data = data;
    num_loaded_modules++;
}

static void
yasm_list_one_module(yasm_module_type type, void *data,
                     void (*printfunc) (const char *name, const char *keyword))
{
    yasm_arch_module *arch;
    yasm_dbgfmt_module *dbgfmt;
    yasm_objfmt_module *objfmt;
    yasm_listfmt_module *listfmt;
    yasm_parser_module *parser;
    yasm_preproc_module *preproc;

    switch (type) {
        case YASM_MODULE_ARCH:
            arch = data;
            printfunc(arch->name, arch->keyword);
            break;
        case YASM_MODULE_DBGFMT:
            dbgfmt = data;
            printfunc(dbgfmt->name, dbgfmt->keyword);
            break;
        case YASM_MODULE_OBJFMT:
            objfmt = data;
            printfunc(objfmt->name, objfmt->keyword);
            break;
        case YASM_MODULE_LISTFMT:
            listfmt = data;
            printfunc(listfmt->name, listfmt->keyword);
            break;
        case YASM_MODULE_PARSER:
            parser = data;
            printfunc(parser->name, parser->keyword);
            break;
        case YASM_MODULE_PREPROC:
            preproc = data;
            printfunc(preproc->name, preproc->keyword);
            break;
    }
}

void
yasm_list_modules(yasm_module_type type,
                  void (*printfunc) (const char *name, const char *keyword))
{
    size_t i;
    module *modules;
    size_t n;;

    /* Go through available list, and try to load each one */
    if (loaded_modules) {
        for (i=0; i<num_loaded_modules; i++)
            yasm_list_one_module(type, loaded_modules[i].data, printfunc);
    }

    modules = module_types[type].m;
    n = module_types[type].n;
    for (i=0; i<n; i++)
        yasm_list_one_module(type, modules[i].data, printfunc);
}
