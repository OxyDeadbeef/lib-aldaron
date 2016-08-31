// JL_LIB
	#include "jl.h"
// Standard Libraries
	#include <stdio.h>
	#include <dirent.h>
	#include <errno.h>

#define MAXFILELEN 1000 * 100000 //100,000 kb

//resolutions
#define JGR_STN 0 //standard 1280 by 960
#define JGR_LOW 1 //Low Res: 640 by 480
#define JGR_DSI 2 //DSi res: 256 by 192

#define VAR_POSITION 0
#define VAR_COLORS 1
#define VAR_TEXTUREI 2

// Media To Include
void *jl_gem(void);
uint32_t jl_gem_size(void);

// Main - Prototypes
	char* jl_file_convert__(jl_t* jl, const char* filename);
	void main_loop_(jl_t* jl);

	// LIB INITIALIZATION fn(Context)
	void jl_cm_init_(jl_t* jl);
	void jl_file_init_(jl_t * jl);
	jl_t* jl_mem_init_(void);
	void jl_mode_init__(jl_t* jl);
	void jl_sdl_init__(jl_t* jl);

	// LIB KILLS
	void jl_mem_kill_(jl_t* jl);

// End of file
