
uint __thiscall thunk_FUN_004c7730(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(&DAT_00794d4c + param_1 * 4);
  switch(param_1) {
  case 1:
    return *(uint *)(&DAT_007e049c + param_2 * 4);
  case 2:
    iVar1 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_2);
    uVar2 = (&DAT_007e5478)[iVar1 + param_2 * 4];
    if (DAT_0080c51e != 0) {
      uVar4 = 0;
      puVar3 = &DAT_007e5478;
      do {
        if (uVar4 < *puVar3) {
          uVar4 = *puVar3;
        }
        puVar3 = puVar3 + 4;
      } while ((int)puVar3 < 0x7e5e28);
      uVar2 = (uVar2 * 0x5dc) / uVar4;
      if (0x5dc < uVar2) {
        return 0x5dc;
      }
    }
    break;
  case 4:
    return DAT_007e6120;
  case 5:
    return *(uint *)(&DAT_007e2da8 +
                    (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4);
  case 6:
    return DAT_007e6184;
  case 8:
    uVar2 = DAT_007e633c;
  }
  return uVar2;
}

