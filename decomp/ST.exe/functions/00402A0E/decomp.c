
uint thunk_FUN_00679120(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  int *piVar3;
  void *unaff_EDI;
  InternalExceptionFrame IStack_68;
  undefined1 auStack_24 [4];
  uint uStack_20;
  short asStack_1c [4];
  void *pvStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_68;
  uVar2 = Library::MSVCRT::__setjmp3(IStack_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (uVar2 == 0) {
    uStack_20 = thunk_FUN_00678e00(pvStack_14,param_1);
    if (-1 < (int)uStack_20) {
      iVar1 = *(int *)((int)pvStack_14 + 0x695);
      if (uStack_20 < *(uint *)(iVar1 + 0xc)) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) * uStack_20 + *(int *)(iVar1 + 0x1c));
      }
      else {
        piVar3 = (int *)0x0;
      }
      if ((piVar3[1] == 0) && (*piVar3 != 0)) {
        iStack_10 = 0;
        if ((param_2 < 0) || ((param_3 < 0 || (param_4 < 0)))) {
          param_2 = (int)*(short *)((int)pvStack_14 + 0x63a);
          param_3 = (int)*(short *)((int)pvStack_14 + 0x63c);
          param_4 = (int)*(short *)((int)pvStack_14 + 0x63e);
        }
        iStack_c = param_3 + -2;
        iStack_8 = param_2 + -2;
        asStack_1c[2] = 5;
        asStack_1c[3] = 0;
        asStack_1c[0] = 5;
        asStack_1c[1] = 0;
        thunk_FUN_006756d0((short *)&iStack_8,(short *)&iStack_c,asStack_1c,asStack_1c + 2);
        *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)((int)pvStack_14 + 0x5d7);
        *(undefined4 *)(*piVar3 + 0x7d) = *(undefined4 *)((int)pvStack_14 + 0x640);
        *(short *)(*piVar3 + 0x62) = (short)iStack_8 + 2;
        *(short *)(*piVar3 + 100) = (short)iStack_c + 2;
        *(short *)(*piVar3 + 0x66) = (short)param_4;
        *(undefined1 *)(*piVar3 + 0x68) = *(undefined1 *)((int)pvStack_14 + 0x64f);
        STPlaySystemC::CreateGameObject(DAT_00802a38,0x38e,auStack_24,&iStack_10,*piVar3,0);
        FUN_006ab060(piVar3);
        *piVar3 = iStack_10;
        piVar3[1] = *(int *)(iStack_10 + 0x18);
      }
    }
    g_currentExceptionFrame = IStack_68.previous;
    return uStack_20;
  }
  g_currentExceptionFrame = IStack_68.previous;
  if (-1 < (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

