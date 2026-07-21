#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::GetMessage */

undefined4 __thiscall SAMPanelTy::GetMessage(SAMPanelTy *this,int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  SpecPanelTy *this_00;
  byte bVar4;
  int iVar5;
  LPSTR pCVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SpecPanelTy *local_c;
  undefined1 local_6;
  char local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = (SpecPanelTy *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x94,0,iVar5,&DAT_007a4ccc
                               ,s_SAMPanelTy__GetMessage_007c7854);
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x94);
    return 0xffff;
  }
  SpecPanelTy::GetMessage(local_c,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xb509) {
    if (uVar1 == 0xb508) {
      local_6 = 0xff;
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_6,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        DoneSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (uVar1 == 2) {
        InitSAMPanel((SAMPanelTy *)this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if ((0xb4fe < uVar1) && (uVar1 < 0xb508)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5 = *(char *)(param_1 + 0x10) + '\x01';
      thunk_FUN_0054edf0((undefined4 *)0x2a,(undefined4 *)&local_5,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (0xb50e < uVar1) {
    if (uVar1 < 0xb518) {
      iVar5 = this_00->field_003C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar4 = *(char *)(param_1 + 0x10) - 0xf;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar9 = **(int **)(param_1 + 0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = (*(int **)(param_1 + 0x18))[1];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_10 = CONCAT31(uStack_f,bVar4);
      iVar7 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar7 = this_00->field_0044;
      }
      pbVar8 = (byte *)FUN_0070b3a0(*(AnonShape_GLOBAL_0081175C_57F682DD **)&this_00[1].field_0x24,
                                    (uint)((&this_00[1].field_0x1e)[bVar4] == '\0'));
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,iVar9 - iVar5,iVar2 - iVar7,'\x01',
             pbVar8);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_00->field_0x60,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
    }
    else if (uVar1 == 0xb518) {
      iVar5 = this_00->field_0000;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0x2755;
      pCVar6 = thunk_FUN_00571240(s_BUT_BIG_007c77e0,0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar5 + 0x10))(param_1,pCVar6,uVar10,uVar11,uVar12);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

