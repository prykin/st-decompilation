#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __cdecl
FUN_00637930(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint local_8;

  uVar1 = thunk_FUN_00635da0(param_3,param_4,param_5);
  if ((((char)uVar1 != '\0') &&
      (puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                          (DAT_0080678c,CASE_1D,"tlo_emb6",0xffffffff,0,1,0,
                           nullptr), puVar2 != nullptr)) &&
     (g_sT3DSMAPContext_00807598 != nullptr)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar2,9),
               STField<uint>(puVar2,0xd),0x10,0x15,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,param_6);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,local_8,param_1);
    if (param_2 == 0) {
      param_1 = 0xffffffff;
    }
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,1,param_1,param_7);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

