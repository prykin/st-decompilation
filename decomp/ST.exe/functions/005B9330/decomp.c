#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::GetMessage */

undefined4 __thiscall MMsgTy::GetMessage(MMsgTy *this,int param_1)

{
  code *pcVar1;
  MMsgTy *this_00;
  byte bVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_8 = this;
  DVar3 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x200,0,iVar4,&DAT_007a4ccc
                               ,s_MMsgTy__GetMessage_007ccd10);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x200);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_8,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((0x697e < uVar7) && (uVar7 < 0x69ff)) {
    switch(uVar7) {
    case 0x697f:
      iVar6 = -1;
      iVar4 = 3;
      uVar7 = 0;
      break;
    case 0x6980:
      iVar6 = -1;
      iVar4 = 2;
      uVar7 = 1;
      break;
    case 0x6981:
      iVar6 = -1;
      iVar4 = 2;
      uVar7 = 2;
      break;
    case 0x6982:
      iVar6 = -2;
      iVar4 = 2;
      uVar7 = 3;
      break;
    case 0x6983:
      iVar6 = 2;
      iVar4 = 2;
      uVar7 = 4;
      break;
    case 0x6984:
      iVar6 = 1;
      iVar4 = 2;
      uVar7 = 5;
      break;
    case 0x6985:
      iVar6 = 1;
      iVar4 = 2;
      uVar7 = 6;
      break;
    case 0x6986:
      iVar6 = 1;
      iVar4 = 3;
      uVar7 = 7;
      break;
    default:
      goto switchD_005b939a_default;
    }
    MMObjTy::PaintSprBut((MMObjTy *)this_00,param_1,uVar7,iVar4,iVar6,-1);
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
switchD_005b939a_default:
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((0x68fe < uVar7) && (uVar7 < 0x697f)) {
    bVar2 = (char)uVar7 + 1;
    this_00->field_1A5A = bVar2;
    if ((&this_00->field_0xe1)[(uint)bVar2 * 0x1fb] == '\0') {
      if (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->field_0000 + 8))();
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    NoneMMsg(this_00);
    break;
  case 2:
    InitMMsg(this_00);
    break;
  case 3:
    DoneMMsg(this_00);
    break;
  case 5:
    PaintMMsg(this_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  uVar5 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar5;
}

