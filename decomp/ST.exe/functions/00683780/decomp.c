#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_script.cpp
   Diagnostic line evidence: 926 | 933 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl FUN_00683780(int *param_1,RecoveredGlobalRecordView_00848A14 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_c;
  short sStack_b;
  undefined1 uStack_9;
  undefined1 uStack_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_3 == 0) || (param_1 == nullptr)) ||
     (param_2 == nullptr)) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x39e);
  }
  iVar7 = 0;
  iVar1 = param_1[1];
  if (0 < param_2->field_0004) {
    iVar6 = 0;
    do {
      puVar3 = (undefined4 *)(param_2->field_0008 + iVar6);
      uVar2 = *puVar3;
      local_c = (char)uVar2;
      sStack_b = (short)((uint)uVar2 >> 8);
      uStack_9 = (undefined1)((uint)uVar2 >> 0x18);
      uStack_8 = ((undefined1 *)puVar3)[1];
      if ((local_c == '\x06') || (local_c == '\x03')) {
        /* ST_CALLSITE[006837E8]: CALL 0x0040353a; direct=0040353A thunk_FUN_0067ee40; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/byte; signature=__cdecl;pointer:/byte;/int */
        pbVar4 = thunk_FUN_0067ee40((int)sStack_b);
        if (pbVar4 == nullptr) {
          RaiseInternalException
                    (-0x6b,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_script.cpp",0x3a5
                    );
        }
        else {

          iVar5 = thunk_FUN_006836c0((DArrayTy *)param_3,pbVar4);
          sStack_b = (short)iVar5;
        }
      }

      thunk_FUN_0064a830(param_1,(undefined4 *)&local_c);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 5;
    } while (iVar7 < param_2->field_0004);
  }
  local_c = '\a';
  sStack_b = 0x1d;
  uStack_9 = 0;
  uStack_8 = 0;

  thunk_FUN_0064a830(param_1,(undefined4 *)&local_c);
  return iVar1;
}

