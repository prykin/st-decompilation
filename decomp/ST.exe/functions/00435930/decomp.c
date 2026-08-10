#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCursorType

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00435945 MOV EAX,dword ptr [EDI + 0x20] classifies dword parameter loaded at 00435939
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=short __thiscall
   GetCursorType(STAllPlayersC * this, undefined4 param_1, AnonShape_00435930_AC276C8C * param_2,
   undefined4 param_3, int * param_4) Evidence: every machine RET purges exactly 16 explicit stack
   bytes; current signature describes 24; removed trailing parameter slots have no listing
   references; ret_sites=00435A2B RET 0x10 | 00435A5D RET 0x10 | 00435A9C RET 0x10 | 00435AD1 RET
   0x10 | 00435B0B RET 0x10 */

short __thiscall
STAllPlayersC::GetCursorType
          (STAllPlayersC *this,Global_sub_00435B90_param_3Enum param_1,
          AnonShape_00435930_AC276C8C *param_2,undefined4 param_3,int *param_4)

{
  DArrayTy *array;
  dword dVar1;
  short sVar4;
  short sVar3;
  uint uVar5;
  int iVar5;
  STGameObjC *pSVar6;
  undefined4 uVar7;
  int iVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  uint index;
  undefined1 local_8 [4];

  if ((param_2 != nullptr) &&
     ((((iVar8 = param_2->field_0020, iVar8 == 0x14 || (iVar8 == 1000)) || (iVar8 == 0x3e9)) ||
      ((iVar8 == 0x172 || (iVar8 == 0x1a4)))))) {
    thunk_FUN_0041f390((int)param_2);
    /* ST_PSEUDO[unresolved_register_input,call_clobber_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; candidate volatile-register merge after CALL: split the partial-register lifetime */
    in_EDX = extraout_EDX;
  }
  uVar5 = (uint)DAT_0080874d;
  if (g_packedRecords_A62x8[uVar5].field200_0x203 == 0) {
    if (g_packedRecords_A62x8[uVar5].field96_0x163 != 0) {
      if (g_packedRecords_A62x8[uVar5].field96_0x163 != 0x3c) {
        return 0;
      }
      if (*(uint *)&g_packedRecords_A62x8[uVar5].field97_0x167 != uVar5) {
        return 0;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      sVar3 = thunk_FUN_00435b90(STReplaceLowByte((uint32_t)(in_EDX), (uint8_t)(DAT_0080874d)),
                                 (DArrayTy *)g_packedRecords_A62x8[uVar5].field102_0x16d,param_1,
                                 (int *)param_2,param_3,param_4);
      return sVar3;
    }
  }
  else if (g_packedRecords_A62x8[uVar5].field200_0x203 == 1) {
    if (g_packedRecords_A62x8[uVar5].field149_0x1b3 != 0) {
      if (g_packedRecords_A62x8[uVar5].field149_0x1b3 != 0x19a) {
        return 0;
      }
      if (*(uint *)&g_packedRecords_A62x8[uVar5].field150_0x1b7 != uVar5) {
        return 0;
      }
      if (g_packedRecords_A62x8[uVar5].field156_0x1c1 != 1) {
        return 0;
      }
      array = (DArrayTy *)g_packedRecords_A62x8[uVar5].field155_0x1bd;
      index = 0;
      dVar1 = array->count;
      if ((int)dVar1 < 1) {
        return 0;
      }
      do {
        DArrayGetElement(array,index,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = GetObjPtr(this,g_packedRecords_A62x8[uVar5].field150_0x1b7,STPiece<0,2>(local_8),CASE_1);
          uVar7 = (*pSVar6->vtable->vfunc_28)(param_1,param_2,param_3,param_4);
          return (short)uVar7;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return 0;
    }
  }
  else {
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x11ea,0,0,"%s",
                               "STAllPlayersC::GetCursorType invalid active panel");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if ((param_2 != nullptr) && (param_2->field_0024 == (uint)DAT_0080874d)
     ) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((param_2->field_0020 == 0x14) &&
       (iVar8 = (**(code **)(*(int *)param_2 + 0xec))(), iVar8 == 1)) {
      return 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((param_2->field_0020 == 1000) || (param_2->field_0020 == 0x3e9)) &&
       (iVar8 = (**(code **)(*(int *)param_2 + 0xec))(), iVar8 == 1)) {
      return 4;
    }
  }
  return 0;
}

