
uint __thiscall
STManRub3C::AddNewDock
          (STManRub3C *this,int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          int param_5,undefined2 param_6,int *param_7)

{
  code *pcVar1;
  STManRub3C *pSVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_7c;
  int iStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  uint uStack_10;
  int iStack_c;
  STManRub3C *pSStack_8;
  
  *param_7 = 0;
  uStack_10 = 0xffffffff;
  IStack_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_7c;
  pSStack_8 = this;
  iVar3 = __setjmp3(IStack_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_7c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x1c8,0,iVar3,&DAT_007a4ccc,
                               s_STManRub3C__AddNewDock_007d1448);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_rab3m_cpp_007d13ec,0x1ca);
    return 0xffff;
  }
  if (*(int *)(pSStack_8 + param_1 * 4 + 0x50) == 0) {
    puVar4 = FUN_006ae290((uint *)0x0,10,0x28,10);
    *(uint **)(pSVar2 + param_1 * 4 + 0x50) = puVar4;
  }
  else {
    iStack_c = *(int *)(*(int *)(pSStack_8 + param_1 * 4 + 0x50) + 0xc);
    uVar6 = 0;
    if (0 < iStack_c) {
      do {
        iVar3 = *(int *)(pSStack_8 + param_1 * 4 + 0x50);
        if (uVar6 < *(uint *)(iVar3 + 0xc)) {
          piVar5 = (int *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        if ((piVar5 != (int *)0x0) && (*piVar5 == param_5)) {
          piVar5[3] = 0;
          *(undefined2 *)(piVar5 + 1) = param_6;
          *(undefined2 *)((int)piVar5 + 6) = param_2;
          *(undefined2 *)(piVar5 + 2) = param_3;
          *(undefined2 *)((int)piVar5 + 10) = param_4;
          piVar5[8] = 0;
          *param_7 = 1;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iStack_c);
    }
  }
  puVar4 = *(uint **)(pSVar2 + param_1 * 4 + 0x50);
  if ((puVar4 != (uint *)0x0) && (*param_7 == 0)) {
    piVar5 = &iStack_38;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    uStack_34 = param_6;
    iStack_38 = param_5;
    uStack_30 = param_3;
    uStack_32 = param_2;
    uStack_2e = param_4;
    uStack_2c = 0;
    uStack_18 = 0;
    uVar6 = FUN_006ae1c0(puVar4,&iStack_38);
    g_currentExceptionFrame = IStack_7c.previous;
    return uVar6;
  }
  g_currentExceptionFrame = IStack_7c.previous;
  return uStack_10;
}

