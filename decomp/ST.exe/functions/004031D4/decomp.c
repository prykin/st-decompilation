
void __thiscall MMMObjTy::PaintSlBut(MMMObjTy *this,int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  uint uVar4;
  InternalExceptionFrame *pIVar5;
  undefined4 auStack_48 [16];
  MMMObjTy *pMStack_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pMStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,pIVar5);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar5;
    iVar3 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x121,0,iVar2,&DAT_007a4ccc
                               ,s_MMMObjTy__PaintSlBut_007ccb00);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x121);
    return;
  }
  switch(*(undefined2 *)(param_2 + 0x14)) {
  case 0:
    *(uint *)(param_1 + 8) = (param_3 & 0xff) * 3 + 2;
    goto switchD_005b65a4_default;
  case 1:
  case 3:
    iVar2 = (param_3 & 0xff) * 3;
    break;
  case 2:
    iVar2 = (param_3 & 0xff) * 3 + 1;
    break;
  default:
    goto switchD_005b65a4_default;
  }
  *(int *)(param_1 + 8) = iVar2;
switchD_005b65a4_default:
  if (*(uint *)(param_1 + 4) != 0xffffffff) {
    FUN_006b3730(*(uint **)(param_1 + 0x48),*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                 *(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20));
  }
  if (*(short *)(param_2 + 0x14) == 2) {
    uVar4 = 10;
  }
  else {
    if (*(short *)(param_2 + 0x14) != 3) {
      g_currentExceptionFrame = pIVar5;
      return;
    }
    uVar4 = 9;
  }
  thunk_FUN_005b6730(pMStack_8,uVar4,'\x01',-1);
  g_currentExceptionFrame = pIVar5;
  return;
}

