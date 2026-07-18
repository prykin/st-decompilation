
undefined4 __thiscall thunk_FUN_004de300(void *this,undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  switch(param_1) {
  case 0:
    uVar3 = 0xbc;
    break;
  case 1:
    uVar3 = 0xb3;
    break;
  case 2:
    uVar3 = 0xb5;
    break;
  case 3:
    uVar3 = 0xbd;
    break;
  case 4:
    uVar3 = 0xad;
    break;
  case 5:
    uVar3 = 0xb8;
    break;
  case 6:
    uVar3 = 0xae;
    break;
  case 7:
    uVar3 = 0xbe;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (*(int *)((int)this + 0x4d0) < 0) {
    return 0;
  }
  puVar4 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar3) {
      *puVar4 = (uint)(*puVar4 == 0);
      puVar4[1] = *(uint *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004ddcc0((int)this);
    }
    puVar1 = puVar4 + 2;
    puVar2 = puVar4 + 2;
    puVar4 = puVar4 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

