
uint FUN_006c6f10(int param_1,undefined *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;
  
  while( true ) {
    if ((0 < *(int *)(param_1 + 0x6a)) && (0 < *(int *)(param_1 + 0x6e))) {
      (*(code *)param_3)(param_1);
    }
    uVar2 = Library::DKW::GPC::FUN_006d80c0(param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    bVar1 = *(byte *)(param_1 + 0x5e) & 0x1c;
    if (bVar1 == 8) {
      *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_1 + 0x1a);
      *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_1 + 0x1e);
      *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_1 + 0x22);
      *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_1 + 0x26);
    }
    else if (bVar1 == 0xc) {
      *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_1 + 0x1a);
      *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_1 + 0x1e);
      *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_1 + 0x22);
      *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_1 + 0x26);
      (*(code *)param_2)(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
    }
    uVar2 = FUN_006d7d9a(param_1);
    if (uVar2 != 0) break;
    *(uint *)(param_1 + 0x56) = *(uint *)(param_1 + 0x56) & 0xfffffffb;
    if (*(short *)(param_1 + 0x5f) != 0) {
      return 0;
    }
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  return 0;
}

