
void thunk_FUN_006829b0(void)

{
  byte bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 uStack_c;
  float fStack_b;
  
  bVar1 = thunk_FUN_006800a0(DAT_00857528);
  iVar4 = CONCAT31(extraout_var,bVar1);
  if (iVar4 == 0) {
    if (DAT_007d3fa4 != 0) {
      thunk_FUN_006802a0(-0x73,(char *)DAT_00857528);
    }
    uVar2 = thunk_FUN_0067f5e0(DAT_00857528);
    if ((int)uVar2 < 0) {
      thunk_FUN_006802a0(-0x73,(char *)DAT_00857528);
    }
    else {
      iVar4 = 2;
    }
  }
  switch(iVar4) {
  case 1:
    uStack_c = 6;
    iVar4 = thunk_FUN_0067ed20(DAT_00857528);
    fStack_b = (float)CONCAT22(fStack_b._2_2_,(short)iVar4);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006827a0();
    return;
  case 2:
    uStack_c = 1;
    fStack_b = (float)thunk_FUN_0067f5b0(DAT_00857528);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006827a0();
    return;
  case 3:
    uStack_c = 2;
    fVar6 = thunk_FUN_0067f920(DAT_00857528);
    fStack_b = (float)fVar6;
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006827a0();
    return;
  case 4:
    iVar4 = thunk_FUN_0067fce0(DAT_00857528);
    if (iVar4 == 0) {
      thunk_FUN_006802a0(-0x73,(char *)DAT_00857528);
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar4 + 4)) {
      iVar3 = 0;
      do {
        thunk_FUN_00682370((undefined4 *)(*(int *)(iVar4 + 8) + iVar3));
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 5;
      } while (iVar5 < *(int *)(iVar4 + 4));
      thunk_FUN_006827a0();
      return;
    }
    break;
  case 5:
    uStack_c = 1;
    fStack_b = 1.26117e-44;
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    uStack_c = 1;
    fStack_b = (float)thunk_FUN_0067ff00((char *)DAT_00857528);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006823a0(0x7d1,2);
    thunk_FUN_006827a0();
    return;
  case 6:
    uStack_c = 1;
    fStack_b = (float)thunk_FUN_0067ff50((char *)DAT_00857528);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006823a0(0x7d2,1);
    thunk_FUN_006827a0();
    return;
  case 7:
    uStack_c = 1;
    fStack_b = (float)thunk_FUN_0067ffa0((char *)DAT_00857528);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006823a0(0x7d4,1);
    thunk_FUN_006827a0();
    return;
  case 8:
    uStack_c = 1;
    fStack_b = (float)thunk_FUN_0067fff0((char *)DAT_00857528);
    thunk_FUN_00682370((undefined4 *)&uStack_c);
    thunk_FUN_006823a0(0x7d5,1);
    thunk_FUN_006827a0();
    return;
  default:
    thunk_FUN_006802a0(-0x73,(char *)DAT_00857528);
  }
  thunk_FUN_006827a0();
  return;
}

