
undefined4 __fastcall thunk_FUN_00622ba0(void *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  *(undefined4 *)((int)param_1 + 0x2c2) = *(undefined4 *)((int)param_1 + 0x276);
  *(undefined4 *)((int)param_1 + 0x2c6) = *(undefined4 *)((int)param_1 + 0x27a);
  *(undefined4 *)((int)param_1 + 0x2ca) = *(undefined4 *)((int)param_1 + 0x27e);
  *(undefined2 *)((int)param_1 + 0x41) = *(undefined2 *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x43) = *(undefined2 *)((int)param_1 + 0x2c6);
  *(undefined2 *)((int)param_1 + 0x45) = *(undefined2 *)((int)param_1 + 0x2ca);
  uVar2 = thunk_FUN_004ab050();
  thunk_FUN_00626b50(param_1,uVar2);
  *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)((int)param_1 + 0x2c6);
  iVar3 = *(int *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x54) = *(undefined2 *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x58) = *(undefined2 *)((int)param_1 + 0x2ca);
  sVar4 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar4 = (((short)(iVar3 / 0xc9) + sVar4) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar4 = ((short)(iVar3 / 0xc9) + sVar4) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
  }
  iVar3 = *(int *)((int)param_1 + 0x2c6);
  *(short *)((int)param_1 + 0x47) = sVar4;
  sVar5 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar5 = (((short)(iVar3 / 0xc9) + sVar5) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar3 / 0xc9) + sVar5) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
  }
  iVar3 = *(int *)((int)param_1 + 0x2ca);
  *(short *)((int)param_1 + 0x49) = sVar5;
  sVar6 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar6 = (((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x5d) = sVar5;
  *(short *)((int)param_1 + 0x4b) = sVar6;
  *(short *)((int)param_1 + 0x5b) = sVar4;
  *(short *)((int)param_1 + 0x5f) = sVar6;
  uVar2 = thunk_FUN_00626f10(*(undefined4 *)((int)param_1 + 0x272));
  *(char *)((int)param_1 + 0x2ad) = (char)uVar2;
  *(undefined4 *)((int)param_1 + 0x35f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  if ((char)uVar2 == '\x02') {
    *(undefined4 *)((int)param_1 + 0x342) = 0xffffffff;
  }
  sVar4 = *(short *)((int)param_1 + 0x47) * 0xc9 + 100;
  *(short *)((int)param_1 + 0x3c) = *(short *)((int)param_1 + 0x49) * 0xc9 + 100;
  sVar6 = *(short *)((int)param_1 + 0x4b) * 200;
  *(short *)((int)param_1 + 0x3a) = sVar4;
  *(undefined1 *)((int)param_1 + 0x313) = 1;
  sVar5 = sVar6 + 0x32;
  *(short *)((int)param_1 + 0x3e) = sVar5;
  *(int *)((int)param_1 + 0x28a) = (short)(sVar6 + 100) + -0x32;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  uVar2 = FUN_006acf0d(*(int *)((int)param_1 + 0x2c2),*(int *)((int)param_1 + 0x2c6),
                       *(int *)((int)param_1 + 0x2ca),(int)sVar4,(int)sVar4,(int)sVar5);
  *(undefined4 *)((int)param_1 + 0x2f6) = uVar2;
  bVar1 = *(byte *)((int)param_1 + 0x2ad);
  if (bVar1 == 3) {
    *(undefined1 *)((int)param_1 + 0x352) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x352) = 1;
  }
  if (bVar1 < 3) {
    if (DAT_00802a88 != (void *)0x0) {
      thunk_FUN_00558dc0(DAT_00802a88,(int)*(short *)((int)param_1 + 0x47),
                         (int)*(short *)((int)param_1 + 0x49),
                         (undefined *)(int)*(short *)((int)param_1 + 0x4b),
                         *(uint *)((int)param_1 + 0x24),
                         *(undefined **)(&DAT_007d02b4 + (uint)bVar1 * 4),
                         *(int *)((int)param_1 + 0x18),0xffffffff);
    }
  }
  else if ((bVar1 == 3) && (DAT_00802a88 != (void *)0x0)) {
    thunk_FUN_00558dc0(DAT_00802a88,(int)*(short *)((int)param_1 + 0x47),
                       (int)*(short *)((int)param_1 + 0x49),
                       (undefined *)(int)*(short *)((int)param_1 + 0x4b),
                       *(uint *)((int)param_1 + 0x24),DAT_007d02c0,*(int *)((int)param_1 + 0x18),
                       0xffffffff);
    thunk_FUN_0041d1a0(param_1,*(int *)(&DAT_007d02b4 + (uint)*(byte *)((int)param_1 + 0x2ad) * 4));
  }
  sVar4 = *(short *)((int)param_1 + 0x47);
  if ((((-1 < sVar4) && (sVar5 = *(short *)((int)param_1 + 0x49), -1 < sVar5)) &&
      (sVar6 = *(short *)((int)param_1 + 0x4b), -1 < sVar6)) &&
     (((sVar4 < DAT_007fb240 && (sVar5 < DAT_007fb242)) && (sVar6 < 5)))) {
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)((int)param_1 + 0x282);
    *(undefined2 *)((int)param_1 + 0x3c) = *(undefined2 *)((int)param_1 + 0x286);
    *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_1 + 0x28a);
    if (*(char *)((int)param_1 + 0x313) != '\0') {
      if (((-1 < sVar4) && (sVar4 < DAT_007fb240)) &&
         (((-1 < sVar5 && (((sVar5 < DAT_007fb242 && (-1 < sVar6)) && (sVar6 < DAT_007fb244)))) &&
          (*(int *)(DAT_007fb248 +
                   ((uint)*(byte *)((int)param_1 + 0x8e) +
                   ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar5 + (int)sVar4) *
                   2) * 4) != 0)))) {
        return 0;
      }
      iVar3 = thunk_FUN_00495ec0(sVar4,sVar5,sVar6,(uint)*(byte *)((int)param_1 + 0x8e),(int)param_1
                                );
      if (iVar3 != 0) {
        return 0;
      }
      *(char *)((int)param_1 + 0x314) = *(char *)((int)param_1 + 0x314) + '\x01';
    }
    uStack_8 = 1;
  }
  return uStack_8;
}

