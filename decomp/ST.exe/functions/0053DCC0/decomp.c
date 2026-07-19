
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintLBut */

void __thiscall
UPanelTy::PaintLBut(UPanelTy *this,int param_1,byte param_2,char *param_3,char *param_4,
                   undefined *param_5)

{
  int *piVar1;
  code *pcVar2;
  UPanelTy *pUVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  local_8 = (ushort *)0x0;
  local_10 = *piVar1 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_c = piVar1[1] + *(int *)(this + 0x48);
  }
  else {
    local_c = piVar1[1] - *(int *)(this + 0x44);
  }
  if (param_5 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      uVar5 = (*(code *)param_5)(param_1);
      pCVar6 = FUN_006f2c00(param_3,1,uVar5);
      local_8 = FUN_006f1ce0(param_2,pCVar6,(int *)0x0,1);
      iVar4 = local_c;
      pUVar3 = local_14;
      thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),local_10,local_c,param_2,(byte *)local_8)
      ;
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (*(int *)(param_1 + 0x14) == 3) {
        local_8 = FUN_006f1ce0(6,param_4,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)(pUVar3 + 0x68),local_10,iVar4,'\x06',(byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      FUN_006b3640(DAT_008075a8,*(uint *)(pUVar3 + 0x60),0xffffffff,*(uint *)(pUVar3 + 0x3c),
                   *(uint *)(pUVar3 + 0x44));
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x74,0,iVar4,&DAT_007a4ccc,
                               s_UPanelTy__PaintLBut_007c78e4);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x74);
  }
  return;
}

