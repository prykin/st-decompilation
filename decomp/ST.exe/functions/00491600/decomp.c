#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20488 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00491600(AnonShape_00491600_23458133 *param_1)

{
  AnonNested_00491600_05A6_E75AEFE8 *pAVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0x100))(param_1->field_01D1 | 0xd);
  thunk_FUN_00495ff0(param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1->field_008E
                     ,(AnonShape_00495FF0_59081BDD *)param_1);
  *(undefined4 *)&param_1[1].field_0x16 = 3;
  if (DAT_008117bc != nullptr) {
    local_10 = *(undefined2 *)&param_1->field_0x24;
    local_e = param_1->field_0032;
    local_14 = 0x5dd2;
    if (param_1->field_05A6 == nullptr) {
      iVar2 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,param_1->field_05A2,(int *)&param_1->field_05A6);
      if (iVar2 == -4) {
        RaiseInternalException
                  (-4,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x5008);
      }
    }
    pAVar1 = param_1->field_05A6;
    local_c = pAVar1->field_0024;
    local_a = pAVar1->field_0032;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

