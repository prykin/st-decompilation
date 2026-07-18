
void __fastcall thunk_FUN_00501a10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x434);
  piVar4 = piVar1;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  if (*(char *)(param_1 + 0xb9e) == '\x01') {
    if (DAT_0080874e == '\x03') {
      if (*(int *)(param_1 + 0xb99) == 0x1a) {
        *piVar1 = *(int *)(param_1 + 0x48) + 0x3c;
        *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0xa0) + 0x84;
        *(undefined4 *)(param_1 + 0x43c) = 0x55;
        *(undefined4 *)(param_1 + 0x440) = 0xe;
        *(undefined4 *)(param_1 + 0x44c) = 0x2ef3;
      }
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x48) + 4;
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0xa0) + 8;
      *(undefined4 *)(param_1 + 0x458) = 100;
      *(undefined4 *)(param_1 + 0x45c) = 0x3c;
      uVar2 = FUN_0070b3a0(*(int *)(param_1 + 0x77c),0);
      *(undefined4 *)(param_1 + 0x460) = uVar2;
      *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x458);
      *(undefined4 *)(param_1 + 0x468) = 0x4e87;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x48) + 2;
      *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0xa0) + 6;
      *(undefined4 *)(param_1 + 0x474) = 0x20;
      *(undefined4 *)(param_1 + 0x478) = 0x35;
      uVar2 = FUN_0070b3a0(*(int *)(param_1 + 0x77c),2);
      *(undefined4 *)(param_1 + 0x47c) = uVar2;
      *(undefined4 *)(param_1 + 0x484) = 0x2ef0;
      *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x474);
      return;
    }
    switch(*(int *)(param_1 + 0xb99)) {
    case 8:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x25:
      iVar3 = FUN_0070b3a0(*(int *)(param_1 + 0x2b2),0);
      *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(iVar3 + 4);
      iVar3 = FUN_0070b3a0(*(int *)(param_1 + 0x2b2),0);
      *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(iVar3 + 8);
      *piVar1 = (*(int *)(*(int *)(param_1 + 0x18c) + 4) - *(int *)(param_1 + 0x43c)) / 2 +
                *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0xa0) + 0x50;
    }
    switch(*(undefined4 *)(param_1 + 0xb99)) {
    case 8:
    case 0x14:
      *(undefined4 *)(param_1 + 0x44c) = 0x2ef3;
      break;
    case 0x16:
    case 0x17:
      *(undefined4 *)(param_1 + 0x44c) = 0x2ef0;
    }
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x468) = 0x4e87;
  }
  return;
}

