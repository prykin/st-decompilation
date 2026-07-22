
void __thiscall FUN_00614400(void *this,AnonShape_00614400_1B90EA7E *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  STWorldObject *pSVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  int local_8;

  *(undefined4 *)((int)this + 0x1fb) = param_1->field_002D;
  *(undefined2 *)((int)this + 0x1ff) = param_1->field_0031;
  *(undefined2 *)((int)this + 0x1e9) = param_1->field_001A;
  *(undefined2 *)((int)this + 0x1eb) = param_1->field_001C;
  *(undefined2 *)((int)this + 0x1ed) = param_1->field_001E;
  *(undefined2 *)((int)this + 0x1ef) = param_1->field_0020;
  *(undefined2 *)((int)this + 0x1f1) = param_1->field_0022;
  *(undefined2 *)((int)this + 499) = param_1->field_0024;
  *(undefined4 *)((int)this + 0x207) = param_1->field_0043;
  sVar8 = *(short *)((int)this + 0x1e9);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x215) = sVar8;
  sVar8 = *(short *)((int)this + 0x1eb);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)this + 0x217) = sVar8;
  sVar8 = *(short *)((int)this + 0x1ed);
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x219) = sVar8;
  sVar8 = param_1->field_0026;
  sVar4 = *(short *)((int)this + 0x1ef);
  *(short *)((int)this + 0x1f5) =
       (sVar8 / 0xf + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x88888889 >> 0x3f);
  if (sVar4 < 0) {
    sVar8 = ((sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar4 / 0xc9 + (sVar4 >> 0xf)) - (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f);
  }
  sVar4 = *(short *)((int)this + 0x1f1);
  *(short *)((int)this + 0x2c5) = sVar8;
  if (sVar4 < 0) {
    local_8 = (short)((sVar4 / 0xc9 + (sVar4 >> 0xf)) -
                     (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)((sVar4 / 0xc9 + (sVar4 >> 0xf)) -
                          (short)((longlong)(int)sVar4 * 0x28c1979 >> 0x3f));
  }
  *(short *)((int)this + 0x2c7) = (short)local_8;
  sVar5 = *(short *)((int)this + 499);
  if (sVar5 < 0) {
    sVar9 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar9 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x2cf) = sVar5;
  *(short *)((int)this + 0x2c9) = sVar9;
  *(undefined2 *)((int)this + 0x2cb) = *(undefined2 *)((int)this + 0x1ef);
  *(short *)((int)this + 0x2cd) = sVar4;
  iVar7 = param_1->field_0043;
  *(int *)((int)this + 0x2d1) = iVar7;
  if (((((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) && (-1 < (short)local_8)) &&
        (((short)local_8 < g_worldGrid.sizeY && (-1 < sVar9)))) &&
       ((sVar9 < g_worldGrid.sizeZ &&
        ((pSVar6 = g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar9 +
                    (int)g_worldGrid.sizeX * (int)(short)local_8 + (int)sVar8].objects[0],
         pSVar6 != (STWorldObject *)0x0 && (*(int *)&pSVar6->field_0x18 == iVar7)))))) &&
      (iVar7 = (*pSVar6->vtable[5].slots_00_28[0])(), iVar7 != 0)) &&
     ((pSVar6[1].vtable < (STWorldObjectVTable *)0x8 &&
      ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
       ((byte)(&DAT_008087e9)[(int)pSVar6[1].vtable * 0x51] < 8)))))) {
    bVar1 = *(byte *)&pSVar6[1].vtable;
    bVar2 = *(byte *)((int)this + 0x1d9);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT31(local_8._1_3_,bVar1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_c = CONCAT31(uStack_b,bVar2);
    if (DAT_00808a8f == '\0') {
      if (bVar1 == bVar2) {
LAB_0061478b:
        iVar7 = 0;
      }
      else {
        bVar3 = g_playerRelationMatrix[bVar1][bVar2];
        if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
          iVar7 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
          iVar7 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061478b;
          iVar7 = 2;
        }
      }
      bVar10 = iVar7 < 0;
    }
    else {
      bVar10 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if ((bVar10) && (iVar7 = (*pSVar6->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
      *(undefined4 *)((int)this + 0x2d1) = *(undefined4 *)&pSVar6->field_0x18;
      goto LAB_006147e6;
    }
  }
  iVar7 = FUN_006e62d0(g_playSystem_00802A38,*(int *)((int)this + 0x2d1),&local_10);
  if (iVar7 == -4) {
    *(undefined4 *)((int)this + 0x2d1) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x2d1) = *(undefined4 *)(local_10 + 0x18);
  }
LAB_006147e6:
  *(undefined4 *)((int)this + 0x1f7) = param_1->field_0028;
  iVar7 = DAT_007e6670;
  if ((param_1->field_0028 == 1) && (iVar7 = param_1->field_0033, param_1->field_0033 < 3)) {
    *(undefined4 *)((int)this + 0x21b) = 0x14;
    *(undefined4 *)((int)this + 0x20c) = 6;
    return;
  }
  *(int *)((int)this + 0x21b) = iVar7;
  *(undefined4 *)((int)this + 0x20c) = 6;
  return;
}

