
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573260(void)

{
  int iVar1;
  uint uVar2;
  void *in_stack_fffffec8;
  void *pvVar3;
  undefined4 in_stack_fffffecc;
  void *local_f4;
  undefined4 local_f0 [16];
  void *local_b0;
  undefined4 local_ac [16];
  void *local_6c;
  undefined4 local_68 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_f4 = DAT_00858df8;
  DAT_00858df8 = &local_f4;
  iVar1 = __setjmp3(local_f0,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(local_8[1] + 0x80) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(local_8[1],3,&local_14,&local_24);
    }
    register0x00000000 = (uint)(local_14 + local_24) >> 1;
  }
  else {
    register0x00000000 = 0;
  }
  DAT_00858df8 = &local_b0;
  local_b0 = local_f4;
  iVar1 = __setjmp3(local_ac,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(local_8[1] + 0x50) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(local_8[1],1,&local_1c,&local_20);
    }
    _DAT_00807312 = (uint)(local_1c + local_20) >> 1;
  }
  else {
    _DAT_00807312 = 0;
  }
  DAT_00858df8 = (void **)&stack0xfffffec8;
  pvVar3 = local_b0;
  iVar1 = __setjmp3((undefined4 *)&stack0xfffffecc,0,local_b0,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(local_8[1] + 0x68) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(local_8[1],2,&local_c,&local_28);
    }
    _DAT_00807306 = (uint)(local_c + local_28) >> 1;
  }
  else {
    _DAT_00807306 = 0;
  }
  DAT_00858df8 = &local_6c;
  local_6c = pvVar3;
  iVar1 = __setjmp3(local_68,0,pvVar3,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*local_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(local_8[1] + 0x38) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(local_8[1],0,&local_18,&local_10);
    }
    DAT_00858df8 = local_6c;
    _DAT_00807316 = (uint)(local_18 + local_10) >> 1;
    return;
  }
  DAT_00858df8 = local_6c;
  _DAT_00807316 = 0;
  return;
}

