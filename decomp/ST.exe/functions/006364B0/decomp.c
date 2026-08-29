#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00636260 @ 006363BC -> read as EAX on
   every CFG path | 00636750 @ 00636790 -> read as EAX on every CFG path */

int FUN_006364b0(int param_1)

{
  ushort *puVar1;
  char *text;
  uint local_8;

  local_8 = 0xffffffff;
  if (param_1 == 0) {
    /* ST_CALLSITE[006365E1]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806764,CASE_1D,"blast_p",0xffffffff,0,0,0,nullptr);
    if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
                 STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
                 (int)STField<uint>(puVar1,0xd) / 2,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    }
  }
  else if ((0 < param_1) && (param_1 < 3)) {
    if (param_1 == 1) {
      text = "shapeM";
    }
    else {
      text = "shapeB";
    }
    /* ST_CALLSITE[00636504]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
    if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {

      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar1,9),
                 STField<uint>(puVar1,0xd),(int)STField<uint>(puVar1,9) / 2,
                 (int)STField<uint>(puVar1,0xd) / 2,0);

      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,STField<int>(puVar1,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
      if (param_1 == 1) {
        ST3DSMAPContext::sub_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,nullptr);
        return local_8;
      }
      ST3DSMAPContext::sub_006EA8A0(g_sT3DSMAPContext_00807598,local_8,0,2,PTR_008032b8);
      return local_8;
    }
  }
  return local_8;
}

