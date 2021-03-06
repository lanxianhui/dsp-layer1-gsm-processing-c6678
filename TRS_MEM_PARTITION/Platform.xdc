/*!
 * File generated by platform wizard. DO NOT MODIFY
 *
 */

metaonly module Platform inherits xdc.platform.IPlatform {

    config ti.platforms.generic.Platform.Instance CPU =
        ti.platforms.generic.Platform.create("CPU", {
            clockRate:      1000,                                       
            catalogName:    "ti.catalog.c6000",
            deviceName:     "TMS320C6678",
            customMemoryMap:
           [          
                ["L1D_RAM", 
                     {
                        name: "L1D_RAM",
                        base: 0x00F00000,                    
                        len: 0x8000,                    
                        space: "data",
                        access: "RW",
                     }
                ],
                ["L1P_RAM", 
                     {
                        name: "L1P_RAM",
                        base: 0x00E00000,                    
                        len: 0x8000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["L2RAM", 
                     {
                        name: "L2RAM",
                        base: 0x00820000,                    
                        len: 0x0005FFFF,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["L2HEAP", 
                     {
                        name: "L2HEAP",
                        base: 0x00800000,                    
                        len: 0x00020000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C1_L2RAM_INSHARED", 
                     {
                        name: "C1_L2RAM_INSHARED",
                        base: 0xC000000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C2_L2RAM_INSHARED", 
                     {
                        name: "C2_L2RAM_INSHARED",
                        base: 0xC046000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C3_L2RAM_INSHARED", 
                     {
                        name: "C3_L2RAM_INSHARED",
                        base: 0xC08C000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C4_L2RAM_INSHARED", 
                     {
                        name: "C4_L2RAM_INSHARED",
                        base: 0xC0D2000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C5_L2RAM_INSHARED", 
                     {
                        name: "C5_L2RAM_INSHARED",
                        base: 0xC118000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C6_L2RAM_INSHARED", 
                     {
                        name: "C6_L2RAM_INSHARED",
                        base: 0xC15E000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C7_L2RAM_INSHARED", 
                     {
                        name: "C7_L2RAM_INSHARED",
                        base: 0xC1A4000,                    
                        len: 0x00046000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C1_SCRATCH_INSHARED", 
                     {
                        name: "C1_SCRATCH_INSHARED",
                        base: 0xC1EA00A,                    
                        len: 0x00032000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C2_SCRATCH_INSHARED", 
                     {
                        name: "C2_SCRATCH_INSHARED",
                        base: 0xC21C00A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C3_SCRATCH_INSHARED", 
                     {
                        name: "C3_SCRATCH_INSHARED",
                        base: 0xC24E00A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C4_SCRATCH_INSHARED", 
                     {
                        name: "C4_SCRATCH_INSHARED",
                        base: 0xC28000A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C5_SCRATCH_INSHARED", 
                     {
                        name: "C5_SCRATCH_INSHARED",
                        base: 0xC2B200A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C6_SCRATCH_INSHARED", 
                     {
                        name: "C6_SCRATCH_INSHARED",
                        base: 0xC2E400A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C7_SCRATCH_INSHARED", 
                     {
                        name: "C7_SCRATCH_INSHARED",
                        base: 0xC31600A,                    
                        len: 0x00032000,                    
                        space: "code/data",
                        access: "RWX",
                     }
                ],
                ["C0_HEAP_RAM", 
                     {
                        name: "C0_HEAP_RAM",
                        base: 0x80000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C0_DATA_RAM", 
                     {
                        name: "C0_DATA_RAM",
                        base: 0x83200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C0_PROG_RAM", 
                     {
                        name: "C0_PROG_RAM",
                        base: 0x86400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C1_HEAP_RAM", 
                     {
                        name: "C1_HEAP_RAM",
                        base: 0x90000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C1_DATA_RAM", 
                     {
                        name: "C1_DATA_RAM",
                        base: 0x93200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C1_PROG_RAM", 
                     {
                        name: "C1_PROG_RAM",
                        base: 0x96400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C2_HEAP_RAM", 
                     {
                        name: "C2_HEAP_RAM",
                        base: 0xA0000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C2_DATA_RAM", 
                     {
                        name: "C2_DATA_RAM",
                        base: 0xA3200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C2_PROG_RAM", 
                     {
                        name: "C2_PROG_RAM",
                        base: 0xA6400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C3_HEAP_RAM", 
                     {
                        name: "C3_HEAP_RAM",
                        base: 0xB0000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C3_DATA_RAM", 
                     {
                        name: "C3_DATA_RAM",
                        base: 0xB3200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C3_PROG_RAM", 
                     {
                        name: "C3_PROG_RAM",
                        base: 0xB6400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C4_HEAP_RAM", 
                     {
                        name: "C4_HEAP_RAM",
                        base: 0xc0000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C4_DATA_RAM", 
                     {
                        name: "C4_DATA_RAM",
                        base: 0xC3200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C4_PROG_RAM", 
                     {
                        name: "C4_PROG_RAM",
                        base: 0xC6400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C5_HEAP_RAM", 
                     {
                        name: "C5_HEAP_RAM",
                        base: 0xD0000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C5_DATA_RAM", 
                     {
                        name: "C5_DATA_RAM",
                        base: 0xD3200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C5_PROG_RAM", 
                     {
                        name: "C5_PROG_RAM",
                        base: 0xD6400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C6_HEAP_RAM", 
                     {
                        name: "C6_HEAP_RAM",
                        base: 0xE0000000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C6_DATA_RAM", 
                     {
                        name: "C6_DATA_RAM",
                        base: 0xE3200000,                    
                        len: 0x3200000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C6_PROG_RAM", 
                     {
                        name: "C6_PROG_RAM",
                        base: 0xE6400000,                    
                        len: 0x3200000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["C7_HEAP_RAM", 
                     {
                        name: "C7_HEAP_RAM",
                      base: 0xF0000000,  
                                   
                        len: 0xA00000,      
                                
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C7_DATA_RAM", 
                     {
                        name: "C7_DATA_RAM",
                        base: 0xF0A00000,                    
                        len: 0xA00000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["C7_PROG_RAM", 
                     {
                        name: "C7_PROG_RAM",
                        base: 0xF1400000,                    
                        len: 0xA00000,                    
                        space: "code",
                        access: "RWX",
                     }
                ],
                ["CORE_HEALTH", 
                     {
                        name: "CORE_HEALTH",
                        base: 0xF1E00000,                    
                        len: 0x400,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["CX_CRITICAL_SECTION", 
                     {
                        name: "CX_CRITICAL_SECTION",
                        base: 0xF1E00400,                    
                        len: 0xA00000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
                ["CX_CRITICAL_SECTION_REFERENCE", 
                     {
                        name: "CX_CRITICAL_SECTION_REFERENCE",
                        base: 0xF2800400,                    
                        len: 0xA00000,                    
                        space: "data",
                        access: "RWX",
                     }
                ],
           ],
          l2Mode:"0k",
          l1PMode:"32k",
          l1DMode:"32k",

    });
    
instance :
    
    override config string codeMemory  = "C0_PROG_RAM";   
    override config string dataMemory  = "C0_DATA_RAM";                                
    override config string stackMemory = "C3_DATA_RAM";
    
}
