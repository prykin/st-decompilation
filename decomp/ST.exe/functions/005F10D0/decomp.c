
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_basis.cpp
   STManBasisC::GetMessage */

undefined4 __thiscall STManBasisC::GetMessage(STManBasisC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STManBasisC *this_00;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_54 [16];
  byte *local_14;
  uint local_10;
  STManBasisC *local_c;
  ushort *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_8 = (ushort *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54,0,unaff_ESI,pIVar5);
  this_00 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = pIVar5;
    iVar3 = ReportDebugMessage(s_E____titans_nick_to_basis_cpp_007ce560,0x5b,0,errorCode,
                               &DAT_007a4ccc,s_STManBasisC__GetMessage_007ce584);
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_nick_to_basis_cpp_007ce560,0x5d);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005f2330((int)local_c);
      g_currentExceptionFrame = pIVar5;
      return 0;
    }
    if (uVar1 == 0) {
      thunk_FUN_005f19a0(local_c);
      g_currentExceptionFrame = pIVar5;
      return 0;
    }
    if (uVar1 == 2) {
      local_c->field_001C = local_c->field_0018 * DAT_00808754;
      if (DAT_00806754 != (cMf32 *)0x0) {
        local_8 = mfAObjLoad(DAT_00806754,PTR_s_BASIS_MAN_0079c57c,0,0);
      }
      if (local_8 == (ushort *)0x0) {
        this_00->field_0020 = 0;
        this_00->field_0024 = 0xff;
        this_00->field_0028 = 1;
        this_00->field_002C = 1;
      }
      else if (*(int *)(local_8 + 6) == 2) {
        thunk_FUN_005f2110(this_00,(undefined4 *)local_8);
        this_00->field_001C = this_00->field_0044;
        thunk_FUN_005f21d0((int)this_00);
      }
      else {
        thunk_FUN_005f1380(this_00);
      }
      if ((local_8 != (ushort *)0x0) && (DAT_00806754 != (cMf32 *)0x0)) {
        cMf32::RecMemFree(DAT_00806754,(uint *)&local_8);
        g_currentExceptionFrame = pIVar5;
        return 0;
      }
    }
  }
  else if (uVar1 == 0x10f) {
    local_14 = (byte *)thunk_FUN_005f1fa0(local_c,(int *)&local_10);
    STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_BASIS_MAN_0079c57c,local_14,local_10,0xc);
    FUN_006ab060(&local_14);
  }
  g_currentExceptionFrame = pIVar5;
  return 0;
}

