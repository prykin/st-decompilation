#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00638230(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  uint local_8;

  /* ST_CALLSITE[0063824C]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,"rippleM",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {

    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
               STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
               (int)STField<uint>(puVar1,0xd) / 2 - 0x17,0);

    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    ST3DSMAPContext::sub_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,nullptr);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

    Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
              (g_sT3DSMAPContext_00807598,local_8,1,STField<int>(puVar1,9) / 2,
               STField<int>(puVar1,0xd) / 2 + -0x17);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim
              (g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,param_2);

    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

