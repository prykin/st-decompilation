
uint FUN_00679120(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  int *piVar3;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  undefined1 local_24 [4];
  uint local_20;
  short local_1c [4];
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  uVar2 = __setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (uVar2 == 0) {
    local_20 = thunk_FUN_00678e00(local_14,param_1);
    if (-1 < (int)local_20) {
      iVar1 = *(int *)((int)local_14 + 0x695);
      if (local_20 < *(uint *)(iVar1 + 0xc)) {
        piVar3 = (int *)(*(int *)(iVar1 + 8) * local_20 + *(int *)(iVar1 + 0x1c));
      }
      else {
        piVar3 = (int *)0x0;
      }
      if ((piVar3[1] == 0) && (*piVar3 != 0)) {
        local_10 = 0;
        if ((param_2 < 0) || ((param_3 < 0 || (param_4 < 0)))) {
          param_2 = (int)*(short *)((int)local_14 + 0x63a);
          param_3 = (int)*(short *)((int)local_14 + 0x63c);
          param_4 = (int)*(short *)((int)local_14 + 0x63e);
        }
        local_c = param_3 + -2;
        local_8 = param_2 + -2;
        local_1c[2] = 5;
        local_1c[3] = 0;
        local_1c[0] = 5;
        local_1c[1] = 0;
        thunk_FUN_006756d0((short *)&local_8,(short *)&local_c,local_1c,local_1c + 2);
        *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)((int)local_14 + 0x5d7);
        *(undefined4 *)(*piVar3 + 0x7d) = *(undefined4 *)((int)local_14 + 0x640);
        *(short *)(*piVar3 + 0x62) = (short)local_8 + 2;
        *(short *)(*piVar3 + 100) = (short)local_c + 2;
        *(short *)(*piVar3 + 0x66) = (short)param_4;
        *(undefined1 *)(*piVar3 + 0x68) = *(undefined1 *)((int)local_14 + 0x64f);
        thunk_FUN_0054cc20(0x38e,local_24,&local_10,*piVar3,0);
        FUN_006ab060(piVar3);
        *piVar3 = local_10;
        piVar3[1] = *(int *)(local_10 + 0x18);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return local_20;
  }
  g_currentExceptionFrame = local_68.previous;
  if (-1 < (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

