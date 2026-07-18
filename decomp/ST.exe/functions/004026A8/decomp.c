
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00573260(void)

{
  int iVar1;
  uint uVar2;
  void *in_stack_fffffec8;
  void *pvVar3;
  undefined4 in_stack_fffffecc;
  void *pvStack_f4;
  undefined4 auStack_f0 [16];
  void *pvStack_b0;
  undefined4 auStack_ac [16];
  void *pvStack_6c;
  undefined4 auStack_68 [16];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  pvStack_f4 = DAT_00858df8;
  DAT_00858df8 = &pvStack_f4;
  iVar1 = __setjmp3(auStack_f0,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x80) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],3,&iStack_14,&iStack_24);
    }
    register0x00000000 = (uint)(iStack_14 + iStack_24) >> 1;
  }
  else {
    register0x00000000 = 0;
  }
  DAT_00858df8 = &pvStack_b0;
  pvStack_b0 = pvStack_f4;
  iVar1 = __setjmp3(auStack_ac,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x50) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],1,&iStack_1c,&iStack_20);
    }
    _DAT_00807312 = (uint)(iStack_1c + iStack_20) >> 1;
  }
  else {
    _DAT_00807312 = 0;
  }
  DAT_00858df8 = (void **)&stack0xfffffec8;
  pvVar3 = pvStack_b0;
  iVar1 = __setjmp3((undefined4 *)&stack0xfffffecc,0,pvStack_b0,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x68) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],2,&iStack_c,&iStack_28);
    }
    _DAT_00807306 = (uint)(iStack_c + iStack_28) >> 1;
  }
  else {
    _DAT_00807306 = 0;
  }
  DAT_00858df8 = &pvStack_6c;
  pvStack_6c = pvVar3;
  iVar1 = __setjmp3(auStack_68,0,pvVar3,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x38) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],0,&iStack_18,&iStack_10);
    }
    DAT_00858df8 = pvStack_6c;
    _DAT_00807316 = (uint)(iStack_18 + iStack_10) >> 1;
    return;
  }
  DAT_00858df8 = pvStack_6c;
  _DAT_00807316 = 0;
  return;
}

