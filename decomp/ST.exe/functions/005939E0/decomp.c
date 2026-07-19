
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::OutBmpProc */

void __thiscall
ComboTy::OutBmpProc(ComboTy *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_8 = param_8;
  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    iVar3 = local_8;
    if (iVar2 == 0) {
      if (*(int *)(local_8 + 0x60) != 0) {
        iVar2 = *(int *)(local_8 + 0x78);
        FUN_006c5000(param_1,param_4,param_5 + 3,iVar2,0,0,0,*(uint *)(iVar2 + 4),
                     *(int *)(iVar2 + 8),*(int *)(local_8 + 0x60),
                     (byte)*(undefined4 *)(local_8 + 0x58));
      }
      if (*(int *)(iVar3 + 0x5c) != 0) {
        iVar2 = *(int *)(iVar3 + 0x74);
        FUN_006c5000(param_1,param_4,param_5,iVar2,0,0,0,*(uint *)(iVar2 + 4),*(int *)(iVar2 + 8),
                     *(int *)(iVar3 + 0x5c),(byte)*(undefined4 *)(iVar3 + 0x50));
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      FUN_006b4640(param_1,param_4 + 3,param_5,*(BITMAPINFO **)(iVar3 + 0x74),(uint *)0x0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0x12,0,iVar2,&DAT_007a4ccc,
                               s_ComboTy__OutBmpProc_007cbf10);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_combo_cpp_007cbeec,0x12);
  }
  return;
}

