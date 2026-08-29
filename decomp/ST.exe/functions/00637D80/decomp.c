#include "../../pseudocode_runtime.h"


void __cdecl FUN_00637d80(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  /* ST_CALLSITE[00637D9C]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,"mstarR",0xffffffff,0,1,0,nullptr);
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
  return;
}

