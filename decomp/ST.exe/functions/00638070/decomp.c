#include "../../pseudocode_runtime.h"


void __cdecl FUN_00638070(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,"iso_frnt",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,2,param_1,param_2);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,"iso_back",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),0x5a,0x45,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,2,param_1,param_2);
    Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,param_1,local_8);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

