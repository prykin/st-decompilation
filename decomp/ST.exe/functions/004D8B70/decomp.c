
undefined4 FUN_004d8b70(char param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  
  uVar5 = (uint)param_1;
  if (uVar5 == 0xff) {
    return 0;
  }
  if ((uVar5 == DAT_0080874d) && (DAT_008016d4 != (void *)0x0)) {
    iVar4 = uVar5 * 0xa62;
    if ((&DAT_007f4e20)[iVar4] == '\x03') {
      iVar2 = thunk_FUN_004e41c0(uVar5);
      iVar3 = thunk_FUN_004e4180(uVar5);
      iVar3 = (iVar2 * 0x14) / iVar3;
      if (0x14 < iVar3) {
        iVar3 = 0x14;
      }
      bVar1 = (byte)iVar3;
      uVar6 = *(uint *)((int)&DAT_007f4e43 + iVar4);
      iVar2 = 0;
      uVar8 = 1;
      uVar7 = *(uint *)((int)&DAT_007f57be + iVar4);
      uVar5 = thunk_FUN_004e41c0(uVar5);
      thunk_FUN_0052bc30(DAT_008016d4,uVar5,uVar6,uVar7,bVar1,uVar8,iVar2);
      return 0;
    }
    iVar2 = *(int *)((int)&DAT_007f5792 + iVar4);
    iVar3 = iVar2 - *(int *)((int)&DAT_007f5796 + iVar4);
    if (iVar3 < 0) {
      thunk_FUN_0052bc30(DAT_008016d4,*(uint *)((int)&DAT_007f4e3f + iVar4),
                         *(uint *)((int)&DAT_007f4e43 + iVar4),*(uint *)((int)&DAT_007f4e47 + iVar4)
                         ,0xd,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar3 != 0)) && (iVar3 = (iVar3 * 0xd) / iVar2, 0xd < iVar3)) {
      iVar3 = 0xd;
    }
    thunk_FUN_0052bc30(DAT_008016d4,*(uint *)((int)&DAT_007f4e3f + iVar4),
                       *(uint *)((int)&DAT_007f4e43 + iVar4),*(uint *)((int)&DAT_007f4e47 + iVar4),
                       (byte)iVar3,1,0);
  }
  return 0;
}

