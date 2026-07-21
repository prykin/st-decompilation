
undefined4 __fastcall FUN_00622ba0(void *param_1)

{
  byte bVar1;
  Global_sub_00626B50_param_1Enum GVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 local_8;
  
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x2c2) = *(undefined4 *)((int)param_1 + 0x276);
  *(undefined4 *)((int)param_1 + 0x2c6) = *(undefined4 *)((int)param_1 + 0x27a);
  *(undefined4 *)((int)param_1 + 0x2ca) = *(undefined4 *)((int)param_1 + 0x27e);
  *(undefined2 *)((int)param_1 + 0x41) = *(undefined2 *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x43) = *(undefined2 *)((int)param_1 + 0x2c6);
  *(undefined2 *)((int)param_1 + 0x45) = *(undefined2 *)((int)param_1 + 0x2ca);
  GVar2 = thunk_FUN_004ab050();
  thunk_FUN_00626b50(param_1,GVar2);
  *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)((int)param_1 + 0x2c6);
  iVar4 = *(int *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x54) = *(undefined2 *)((int)param_1 + 0x2c2);
  *(undefined2 *)((int)param_1 + 0x58) = *(undefined2 *)((int)param_1 + 0x2ca);
  sVar5 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar5 = (((short)(iVar4 / 0xc9) + sVar5) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar4 / 0xc9) + sVar5) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  iVar4 = *(int *)((int)param_1 + 0x2c6);
  *(short *)((int)param_1 + 0x47) = sVar5;
  sVar6 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar6 = (((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  iVar4 = *(int *)((int)param_1 + 0x2ca);
  *(short *)((int)param_1 + 0x49) = sVar6;
  sVar7 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar7 = (((short)(iVar4 / 200) + sVar7) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar7 = ((short)(iVar4 / 200) + sVar7) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x5d) = sVar6;
  *(short *)((int)param_1 + 0x4b) = sVar7;
  *(short *)((int)param_1 + 0x5b) = sVar5;
  *(short *)((int)param_1 + 0x5f) = sVar7;
  uVar3 = thunk_FUN_00626f10(*(Global_sub_00626F10_param_1Enum *)((int)param_1 + 0x272));
  *(char *)((int)param_1 + 0x2ad) = (char)uVar3;
  *(undefined4 *)((int)param_1 + 0x35f) = PTR_00802a38->field_00E4;
  if ((char)uVar3 == '\x02') {
    *(undefined4 *)((int)param_1 + 0x342) = 0xffffffff;
  }
  sVar5 = *(short *)((int)param_1 + 0x47) * 0xc9 + 100;
  *(short *)((int)param_1 + 0x3c) = *(short *)((int)param_1 + 0x49) * 0xc9 + 100;
  sVar7 = *(short *)((int)param_1 + 0x4b) * 200;
  *(short *)((int)param_1 + 0x3a) = sVar5;
  *(undefined1 *)((int)param_1 + 0x313) = 1;
  sVar6 = sVar7 + 0x32;
  *(short *)((int)param_1 + 0x3e) = sVar6;
  *(int *)((int)param_1 + 0x28a) = (short)(sVar7 + 100) + -0x32;
  *(undefined1 *)((int)param_1 + 0x8e) = 1;
  uVar3 = FUN_006acf0d(*(int *)((int)param_1 + 0x2c2),*(int *)((int)param_1 + 0x2c6),
                       *(int *)((int)param_1 + 0x2ca),(int)sVar5,(int)sVar5,(int)sVar6);
  *(undefined4 *)((int)param_1 + 0x2f6) = uVar3;
  bVar1 = *(byte *)((int)param_1 + 0x2ad);
  if (bVar1 == 3) {
    *(undefined1 *)((int)param_1 + 0x352) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x352) = 1;
  }
  if (bVar1 < 3) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      thunk_FUN_00558dc0(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x47),
                         (int)*(short *)((int)param_1 + 0x49),
                         (undefined *)(int)*(short *)((int)param_1 + 0x4b),
                         *(int **)((int)param_1 + 0x24),*(uint *)(&DAT_007d02b4 + (uint)bVar1 * 4),
                         *(int **)((int)param_1 + 0x18),0xffffffff);
    }
  }
  else if ((bVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    thunk_FUN_00558dc0(g_visibleClass_00802A88,(int)*(short *)((int)param_1 + 0x47),
                       (int)*(short *)((int)param_1 + 0x49),
                       (undefined *)(int)*(short *)((int)param_1 + 0x4b),
                       *(int **)((int)param_1 + 0x24),DAT_007d02c0,*(int **)((int)param_1 + 0x18),
                       0xffffffff);
    thunk_FUN_0041d1a0(param_1,*(int *)(&DAT_007d02b4 + (uint)*(byte *)((int)param_1 + 0x2ad) * 4));
  }
  sVar5 = *(short *)((int)param_1 + 0x47);
  if ((((-1 < sVar5) && (sVar6 = *(short *)((int)param_1 + 0x49), -1 < sVar6)) &&
      (sVar7 = *(short *)((int)param_1 + 0x4b), -1 < sVar7)) &&
     (((sVar5 < g_worldGrid.sizeX && (sVar6 < g_worldGrid.sizeY)) && (sVar7 < 5)))) {
    *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)((int)param_1 + 0x282);
    *(undefined2 *)((int)param_1 + 0x3c) = *(undefined2 *)((int)param_1 + 0x286);
    *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_1 + 0x28a);
    if (*(char *)((int)param_1 + 0x313) != '\0') {
      if (((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) &&
         (((-1 < sVar6 &&
           (((sVar6 < g_worldGrid.sizeY && (-1 < sVar7)) && (sVar7 < g_worldGrid.sizeZ)))) &&
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar7 + (int)g_worldGrid.sizeX * (int)sVar6 +
            (int)sVar5].objects[*(byte *)((int)param_1 + 0x8e)] != (STWorldObject *)0x0)))) {
        return 0;
      }
      iVar4 = DumpClassC::WritePtr(sVar5,sVar6,sVar7,(uint)*(byte *)((int)param_1 + 0x8e),param_1);
      if (iVar4 != 0) {
        return 0;
      }
      *(char *)((int)param_1 + 0x314) = *(char *)((int)param_1 + 0x314) + '\x01';
    }
    local_8 = 1;
  }
  return local_8;
}

