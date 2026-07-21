#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DestroyObjectMsg

   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_DestroyObjectMsg_param_3Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 00449B60 @ 00655AAC | 00652810 -> 00449B60 @ 00655BDB
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00449B7B MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::DestroyObjectMsg
          (STAllPlayersC *this,char param_1,uint param_2,
          STAllPlayersC_DestroyObjectMsg_param_3Enum param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  DArrayTy *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  uVar2 = param_2;
  switch(param_3) {
  case CASE_1:
    array = g_playerRuntime[param_1].objects;
    break;
  case CASE_2:
    array = PTR_007fa154;
    break;
  case CASE_3:
    array = PTR_007fa158;
    break;
  case CASE_4:
    array = PTR_007fa15c;
    break;
  case CASE_5:
    array = PTR_007fa160;
    break;
  case CASE_6:
    array = PTR_007fa164;
    break;
  default:
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2eb1,0,0,"%s",
                               "STAllPlayersC::DestroyObjectMsg");
    if (iVar3 == 0) {
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((array != (DArrayTy *)0x0) &&
      (iVar3 = DArrayGetElement(array,param_2 & 0xffff,&param_1), iVar3 != -4)) &&
     (_param_1 != (undefined4 *)0x0)) {
    local_20 = 10000;
    local_1c = 0;
    local_18 = 0xfe;
    local_14 = (undefined2)uVar2;
    local_12 = *(undefined2 *)(_param_1 + 6);
    local_2c = &local_20;
    local_10 = 0;
    local_c = 1;
    local_8 = param_4;
    local_30 = 0x128;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*_param_1)(local_40);
    return 1;
  }
  return 0;
}

