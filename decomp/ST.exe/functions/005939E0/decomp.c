
/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::OutBmpProc */

void __thiscall
ComboTy::OutBmpProc(ComboTy *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  AnonShape_005939E0_9F78A8B0 *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  AnonShape_005939E0_9F78A8B0 *local_8;
  
  local_8 = (AnonShape_005939E0_9F78A8B0 *)param_8;
  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pAVar2 = local_8;
    if (iVar3 == 0) {
      if (local_8->field_0060 != 0) {
        iVar3 = local_8->field_0078;
        Library::DKW::DDX::FUN_006c5000
                  (param_1,param_4,param_5 + 3,iVar3,0,0,0,*(uint *)(iVar3 + 4),*(int *)(iVar3 + 8),
                   local_8->field_0060,(byte)local_8->field_0058);
      }
      if (*(int *)&pAVar2->field_0x5c != 0) {
        iVar3 = *(int *)&pAVar2->field_0x74;
        Library::DKW::DDX::FUN_006c5000
                  (param_1,param_4,param_5,iVar3,0,0,0,*(uint *)(iVar3 + 4),*(int *)(iVar3 + 8),
                   *(int *)&pAVar2->field_0x5c,(byte)*(undefined4 *)&pAVar2->field_0x50);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      FUN_006b4640(param_1,param_4 + 3,param_5,*(BITMAPINFO **)&pAVar2->field_0x74,(uint *)0x0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_combo_cpp_007cbeec,0x12,0,iVar3,&DAT_007a4ccc,
                               s_ComboTy__OutBmpProc_007cbf10);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_combo_cpp_007cbeec,0x12);
  }
  return;
}

