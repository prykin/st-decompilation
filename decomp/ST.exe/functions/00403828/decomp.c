
uint __thiscall STGroupC::GetTOBJQty(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_58;
  int iStack_14;
  STGroupC *pSStack_10;
  uint uStack_c;
  int iStack_8;
  
  uVar6 = 0;
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pSStack_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_10;
  if (iVar3 == 0) {
    iStack_8 = 0;
    iStack_14 = *(int *)(*(int *)(pSStack_10 + 0x29) + 0xc);
    if (0 < iStack_14) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar6,&uStack_c);
        if ((short)uStack_c != -1) {
          piVar4 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2[0x24]),uStack_c
                                     ,1);
          if (piVar4 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x66);
          }
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar3 == param_1) {
            iStack_8 = iStack_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_14);
    }
    g_currentExceptionFrame = IStack_58.previous;
    return CONCAT22((short)((uint)IStack_58.previous >> 0x10),(undefined2)iStack_8);
  }
  g_currentExceptionFrame = IStack_58.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6b,0,iVar3,&DAT_007a4ccc,
                             s_STGroupC__GetTOBJQty_007a50e8);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar3,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6c);
  return CONCAT22(extraout_var,(undefined2)iStack_8);
}

