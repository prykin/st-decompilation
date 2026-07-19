
undefined4 __thiscall STGroupC::AddObjs(STGroupC *this,int param_1,int param_2)

{
  code *pcVar1;
  STGroupC *this_00;
  uint uVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  InternalExceptionFrame IStack_54;
  STGroupC *pSStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_c = *(uint *)(param_1 + 0xc);
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pSStack_10 = this;
  errorCode = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  uVar2 = uStack_c;
  this_00 = pSStack_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0xf8,0,errorCode,&DAT_007a4ccc
                               ,s_STGroupC__AddObjs_007a5134);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(errorCode,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0xf9);
    return 0xffffffff;
  }
  if (uStack_c == 0) {
    return 0;
  }
  uVar6 = 0;
  if (uStack_c != 0) {
    uVar5 = 0;
    do {
      FUN_006acc70(param_1,uVar5,&uStack_8);
      AddObj(this_00,uStack_8,param_2);
      uVar6 = uVar6 + 1;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < uVar2);
  }
  g_currentExceptionFrame = IStack_54.previous;
  return 0;
}

