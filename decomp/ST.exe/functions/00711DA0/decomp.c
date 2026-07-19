
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrArr */

int __thiscall ccFntTy::WrArr(ccFntTy *this,int *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  code *pcVar2;
  ccFntTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  InternalExceptionFrame local_5c;
  int local_18;
  ccFntTy *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar3 == 0) {
    iVar3 = FUN_00711530(local_14,param_1);
    local_18 = iVar3;
    iVar4 = FUN_00711580(this_00,param_1);
    if ((((param_2 < 0) && (param_2 != -3)) && (param_2 != -2)) &&
       ((int)this_00->field_0068 < iVar3)) {
      param_2 = 0;
    }
    if ((param_3 < 0) && ((int)this_00->field_006C < iVar4)) {
      param_3 = 0;
    }
    local_c = param_2;
    if (((param_2 < 0) && (param_2 != -3)) && ((param_2 != -2 && (param_2 != -4)))) {
      local_c = (this_00->field_0068 - iVar3) / 2;
    }
    if (param_3 < 0) {
      param_3 = (this_00->field_006C - iVar4) / 2;
    }
    iVar4 = 0;
    this_00->field_0044 = param_4;
    this_00->field_0048 = param_4;
    this_00->field_004C = 0;
    iVar3 = *param_1;
    local_10 = param_1;
    local_8 = param_3;
    while (iVar3 != 0) {
      puVar1 = (uint *)*local_10;
      if (param_2 == -4) {
        uVar6 = this_00->field_0044;
        iVar5 = local_8 + iVar4;
        iVar3 = FUN_00711110(this_00,puVar1);
        iVar3 = (this_00->field_0068 + local_18) / 2 - iVar3;
      }
      else {
        uVar6 = this_00->field_0044;
        if (param_2 == -2) {
          iVar5 = local_8 + iVar4;
          iVar3 = -1;
        }
        else {
          iVar5 = local_8 + iVar4;
          iVar3 = local_c;
        }
      }
      WrStr(this_00,puVar1,iVar3,iVar5,uVar6);
      iVar3 = FUN_007111c0(this_00,puVar1);
      iVar4 = iVar4 + iVar3 + this_00->field_005C;
      local_10 = local_10 + 1;
      iVar3 = *local_10;
    }
    this_00->field_004C = 1;
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x71c,0,iVar3,&DAT_007a4ccc,
                             s_ccFntTy__WrArr_007f02b8);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  local_14->field_004C = 1;
  RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x720);
  return iVar3;
}

