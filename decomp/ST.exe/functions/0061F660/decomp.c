
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_manag.Cpp
   SndUnderAttMenegC::GetMessage */

undefined4 __thiscall SndUnderAttMenegC::GetMessage(SndUnderAttMenegC *this,int param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  float local_c;
  SndUnderAttMenegC *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_manag_Cpp_007d020c,0x6e,0,iVar3,&DAT_007a4ccc,
                               s_SndUnderAttMenegC__GetMessage_007d0230);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_manag_Cpp_007d020c,0x70);
    return 0xffff;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    iVar3 = 0xafffff5;
    piVar6 = &local_8->field_0031;
    do {
      if (*(char *)((int)piVar6 + -0x11) != '\0') {
        FUN_006e6780(DAT_00807598,iVar3);
        iVar4 = *(int *)(DAT_00802a38 + 0xe4) - piVar6[2];
        fVar2 = (float)iVar4;
        local_c = fVar2 * (float)piVar6[1] * fVar2 * _DAT_00790784 +
                  ((float)(piVar6[-1] - iVar4 * *piVar6) * _DAT_007904f8 + _DAT_007904f4) *
                  _DAT_0079070c;
        if (local_c <= _DAT_007904f8) {
          FUN_006e6780(DAT_00807598,iVar3);
          *(undefined1 *)((int)piVar6 + -0x11) = 0;
        }
        else {
          FUN_006e6710(DAT_00807598,(float)piVar6[-4] * _DAT_007904f8 + _DAT_007904f4,
                       (float)piVar6[-3] * _DAT_007904f8 + _DAT_007904f4,local_c,piVar6[-2],iVar3);
        }
      }
      iVar3 = iVar3 + 0xffffff;
      piVar6 = (int *)((int)piVar6 + 0x1d);
    } while (iVar3 < 0xffffff0);
  }
  else if (iVar3 == 2) {
    if (DAT_007fb284 != 0) {
      local_8->field_001C = (int)DAT_007fb240 / 2;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (iVar3 == 3) {
    thunk_FUN_0061fcc0((int)local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

