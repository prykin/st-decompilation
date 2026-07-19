
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::UpdatePing */

void __thiscall SettMapMTy::UpdatePing(SettMapMTy *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (this->field_1F84 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar5 = 0;
      iVar3 = local_8->field_1F84;
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (0 < (int)uVar1) {
        bVar6 = uVar1 != 0;
        while( true ) {
          if (bVar6) {
            iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          if (((iVar4 != 0) && (*(int *)(iVar4 + 6) == param_1)) &&
             ((*(char *)(iVar4 + 4) == '\x02' || (*(char *)(iVar4 + 4) == '\x03')))) break;
          uVar5 = uVar5 + 1;
          bVar6 = uVar5 < uVar1;
          if ((int)uVar1 <= (int)uVar5) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        *(undefined4 *)(iVar4 + 0x4b) = param_2;
        iVar3 = (uVar5 - local_8->field_1F88) * 0x20;
        if (*(int *)(iVar3 + 0x1fa4 + (int)local_8) != 0) {
          local_8->field_002D = 5;
          FUN_006e6080(local_8,2,*(undefined4 *)(iVar3 + 0x1fa4 + (int)local_8),
                       (undefined4 *)&local_8->field_0x1d);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4bf,0,iVar3,&DAT_007a4ccc
                               ,s_SettMapMTy__UpdatePing_007cd39c);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4bf);
  }
  return;
}

