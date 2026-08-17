#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20488 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00491600(AnonShape_00491600_23458133 *param_1)

{
  AnonNested_00491600_05A6_E75AEFE8 *pAVar1;
  int iVar2;
  STMessage local_24;

  /* ST_CALLSITE[00491617]: CALL dword ptr [EAX + 0x100] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_0000 + 0x100))(param_1->field_01D1 | 0xd);
  thunk_FUN_00495ff0(param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1->field_008E
                     ,(AnonShape_00495FF0_59081BDD *)param_1);
  *(undefined4 *)&param_1[1].field_0x16 = 3;
  if (g_aiBossClass_008117BC != nullptr) {
    local_24.arg0.words.low = *(undefined2 *)&param_1->field_0x24;
    local_24.arg0.words.high = param_1->field_0032;
    local_24.id = MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE;
    if (param_1->field_05A6 == nullptr) {
      iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,param_1->field_05A2,(int *)&param_1->field_05A6);
      if (iVar2 == -4) {
        RaiseInternalException
                  (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x5008);
      }
    }
    pAVar1 = param_1->field_05A6;
    local_24.arg1.words.low = pAVar1->field_0024;
    local_24.arg1.words.high = pAVar1->field_0032;
    /* ST_CALLSITE[004916CB]: CALL dword ptr [EDX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

