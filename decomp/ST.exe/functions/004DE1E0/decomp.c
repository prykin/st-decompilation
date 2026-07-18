
undefined4 __thiscall FUN_004de1e0(void *this,undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  switch(param_1) {
  case 0:
    uVar4 = 0x96;
    break;
  case 1:
    uVar4 = 0x97;
    break;
  case 2:
    uVar4 = 0x98;
    break;
  case 3:
    uVar4 = 0x99;
    break;
  case 4:
    uVar4 = 0x9a;
    break;
  case 5:
    uVar4 = 0xa6;
    break;
  case 6:
    uVar4 = 0xa9;
    break;
  case 7:
    uVar4 = 0xa7;
    break;
  case 8:
    uVar4 = 0xab;
    break;
  case 9:
    uVar4 = 0xac;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (*(int *)((int)this + 0x4d0) < 0) {
    return 0;
  }
  puVar3 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar4) {
      *puVar3 = (uint)(*puVar3 == 0);
      puVar3[1] = *(uint *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004ddcc0((int)this);
    }
    puVar1 = puVar3 + 2;
    puVar2 = puVar3 + 2;
    puVar3 = puVar3 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

