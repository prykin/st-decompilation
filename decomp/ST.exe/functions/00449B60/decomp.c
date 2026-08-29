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
  uint uVar2;
  int iVar3;
  uint uVar4;
  DArrayOf_STGameObjCPtr *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  byte local_40 [16];
  uint local_30;
  undefined4 *local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  ushort local_14;
  ushort local_12;
  uint local_10;
  uint local_c;
  uint local_8;
  uVar2 = param_2;
  switch(param_3) {
  case CASE_1:
    array = g_packedRecords_A62x8[param_1].field3_0x9;
    break;
  case CASE_2:
    array = g_array_007FA154;
    break;
  case CASE_3:
    array = g_array_007FA158;
    break;
  case CASE_4:
    array = g_array_007FA15C;
    break;
  case CASE_5:
    array = g_array_007FA160;
    break;
  case CASE_6:
    array = g_array_007FA164;
    break;
  default:

    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2eb1,0,0,"%s",
                               "STAllPlayersC::DestroyObjectMsg");
    if (iVar3 == 0) {
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((array != nullptr) &&

      (iVar3 = DArrayGetElement((DArrayTy *)array,param_2 & 0xffff,&param_1), iVar3 != -4)) &&
     (_param_1 != nullptr)) {
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
    /* ST_CALLSITE[00449C30]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
    STStructuralVirtualCall<void>(_param_1, 0x0, local_40);
    return 1;
  }
  return 0;
}

