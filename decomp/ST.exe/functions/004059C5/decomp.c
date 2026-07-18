
undefined4 __thiscall thunk_FUN_004eb150(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar5 = param_1 * 0xa62;
  if ((uVar3 >> 0x10) % 0x385 + 0x834 + *(int *)(&DAT_007f57e2 + iVar5) <=
      *(uint *)(DAT_00802a38 + 0xe4)) {
    *(uint *)(&DAT_007f57e2 + iVar5) = *(uint *)(DAT_00802a38 + 0xe4);
    iVar4 = thunk_FUN_004406c0((char)param_1);
    if ((char)iVar4 != '\x03') {
      if ((*(uint *)(DAT_00802a38 + 0xe4) < 30000) || (0 < *(int *)(&DAT_007f57e6 + iVar5))) {
        if ((59999 < *(uint *)(DAT_00802a38 + 0xe4)) && (*(int *)(&DAT_007f57e6 + iVar5) < 2)) {
          *(undefined4 *)(&DAT_007f57e6 + iVar5) = 2;
        }
        param_1 = 0;
        iVar4 = 0;
        piVar6 = (int *)((int)&DAT_007f57c2 + iVar5);
      }
      else {
        *(undefined4 *)(&DAT_007f57e6 + iVar5) = 1;
        param_1 = 0;
        iVar4 = 0;
        piVar6 = (int *)((int)&DAT_007f57c2 + iVar5);
      }
      while( true ) {
        do {
          piVar6[1] = *piVar6;
          piVar7 = piVar6 + 2;
          iVar1 = iVar4 + (param_1 + *(int *)(&DAT_007f57e6 + iVar5) * 2) * 2;
          iVar2 = (&DAT_007c15c4)[iVar1 * 2];
          iVar1 = *(int *)(&DAT_007c15c0 + iVar1 * 8);
          uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar3;
          iVar4 = iVar4 + 1;
          *piVar6 = (uVar3 >> 0x10) % ((iVar2 - iVar1) + 1U) + iVar1;
          piVar6 = piVar7;
        } while (iVar4 < 2);
        param_1 = param_1 + 1;
        if (1 < param_1) break;
        iVar4 = 0;
      }
    }
  }
  return 0;
}

