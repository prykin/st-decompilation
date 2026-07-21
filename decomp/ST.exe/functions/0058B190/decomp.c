
undefined4 __thiscall
FUN_0058b190(void *this,short *param_1,short *param_2,short *param_3,short *param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  bool bVar15;
  int local_14;
  int local_c;
  uint local_8;

  *(undefined4 *)((int)this + 0x281) = 0;
  iVar3 = g_worldGrid.sizeX + -1;
  iVar4 = g_worldGrid.sizeY + -1;
  sVar10 = *(short *)((int)this + 0x41);
  if (sVar10 < 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14._0_2_ =
         ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) +
         -1;
  }
  else {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_14._0_2_ =
         (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  sVar10 = *(short *)((int)this + 0x43);
  *(short *)((int)this + 0x47) = (short)local_14;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  sVar11 = *(short *)((int)this + 0x45);
  *(short *)((int)this + 0x49) = sVar10;
  if (sVar11 < 0) {
    sVar11 = ((sVar11 / 200 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar11 = (sVar11 / 200 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)this + 0x4b) = sVar11;
  if ((short)local_14 < 0) {
    *(undefined2 *)((int)this + 0x47) = 0;
  }
  if (sVar10 < 0) {
    *(undefined2 *)((int)this + 0x49) = 0;
  }
  if (iVar3 < *(short *)((int)this + 0x47)) {
    *(short *)((int)this + 0x47) = (short)iVar3;
  }
  if (iVar4 < *(short *)((int)this + 0x49)) {
    *(short *)((int)this + 0x49) = (short)iVar4;
  }
  iVar8 = (int)*(short *)((int)this + 0x47);
  bVar14 = iVar8 + -1 < 0;
  iVar5 = (int)*(short *)((int)this + 0x49);
  if (iVar5 + -1 < 0) {
    bVar14 = bVar14 + 1;
  }
  if (iVar3 < iVar8 + 1) {
    bVar14 = bVar14 + 1;
  }
  if (iVar4 < iVar5 + 1) {
    bVar14 = bVar14 + 1;
  }
  if ((((*(int *)((int)this + 0x2a5) == 0xf8) || (*(int *)((int)this + 0x2a5) == 0xf9)) &&
      (sVar11 < 4)) && (((byte)PTR_00802a38->field_00E4 & 7) == 1)) {
    uVar12 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar12;
    *(undefined4 *)((int)this + 0x281) = 1;
    local_c = (uVar12 >> 0x10) % 0x66 + 100 + (int)*(short *)((int)this + 0x45);
    goto LAB_0058b5ac;
  }
  iVar13 = 0;
  iVar9 = 0;
  if ((PTR_00802a38->field_00E4 & 3) == 0) {
    iVar13 = *(int *)((int)this + 0x251);
    iVar9 = iVar13;
    if (iVar13 < 0) {
      iVar9 = -iVar13;
    }
    if (0x1d < iVar9) {
      iVar8 = iVar8 + ((-1 < iVar13) - 1 & 0xfffffffe) + 1;
    }
    iVar13 = *(int *)((int)this + 0x255);
    iVar9 = iVar13;
    if (iVar13 < 0) {
      iVar9 = -iVar13;
    }
    if (0x1d < iVar9) {
      iVar5 = iVar5 + ((-1 < iVar13) - 1 & 0xfffffffe) + 1;
    }
    iVar13 = iVar8;
    iVar9 = iVar5;
    if (((iVar3 < iVar8) || (iVar8 < 0)) || ((iVar4 <= iVar5 || (iVar5 < 0)))) goto LAB_0058b3ab;
    goto LAB_0058b499;
  }
LAB_0058b3ab:
  if (bVar14 < 2) {
    uVar12 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar12;
    iVar8 = ((uVar12 >> 0x10) % 3 - 1) + (int)*(short *)((int)this + 0x6c);
  }
  else {
    uVar12 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar12;
    iVar8 = ((uVar12 >> 0x10) % 5 - 2) + (int)*(short *)((int)this + 0x6c);
  }
  if (iVar8 < 8) {
    if (iVar8 < 0) {
      iVar8 = iVar8 + 8;
    }
  }
  else {
    iVar8 = iVar8 + -8;
  }
  switch(iVar8) {
  case 0:
    iVar9 = (int)*(short *)((int)this + 0x49);
    iVar13 = *(short *)((int)this + 0x47) + 1;
    break;
  case 1:
    iVar13 = *(short *)((int)this + 0x47) + 1;
    iVar9 = *(short *)((int)this + 0x49) + -1;
    break;
  case 2:
    iVar13 = (int)*(short *)((int)this + 0x47);
    iVar9 = *(short *)((int)this + 0x49) + -1;
    break;
  case 3:
    iVar13 = *(short *)((int)this + 0x47) + -1;
    iVar9 = *(short *)((int)this + 0x49) + -1;
    break;
  case 4:
    iVar9 = (int)*(short *)((int)this + 0x49);
    iVar13 = *(short *)((int)this + 0x47) + -1;
    break;
  case 5:
    iVar13 = *(short *)((int)this + 0x47) + -1;
    goto LAB_0058b466;
  case 6:
    iVar13 = (int)*(short *)((int)this + 0x47);
    goto LAB_0058b466;
  case 7:
    iVar13 = *(short *)((int)this + 0x47) + 1;
LAB_0058b466:
    iVar9 = *(short *)((int)this + 0x49) + 1;
  }
  iVar8 = iVar13;
  if (iVar3 < iVar13) {
    iVar9 = (int)*(short *)((int)this + 0x49);
    iVar8 = iVar3;
  }
  if (iVar8 < 0) {
    iVar9 = (int)*(short *)((int)this + 0x49);
    iVar8 = 0;
  }
  iVar5 = iVar9;
  if (iVar4 <= iVar9) {
    iVar8 = (int)*(short *)((int)this + 0x47);
    iVar5 = iVar4;
  }
  if (iVar5 < 0) {
    iVar8 = (int)*(short *)((int)this + 0x47);
    iVar5 = 0;
  }
LAB_0058b499:
  local_c = (int)*(short *)((int)this + 0x45);
  uVar12 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar12;
  local_8 = (uVar12 >> 0x10) % 0x65;
  if ((int)((int)*(short *)((int)this + 0x45) + local_8) < 900) {
    iVar3 = local_c - local_8;
    if (0x31 < iVar3) {
      sVar10 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        iVar3 = (short)(((short)(iVar3 / 200) + sVar10) -
                       (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar3 = (int)(short)(((short)(iVar3 / 200) + sVar10) -
                            (short)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      }
      uVar12 = thunk_FUN_00496250(iVar8,iVar5,iVar3);
      iVar3 = local_8 + local_c;
      sVar10 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        iVar3 = (short)(((short)(iVar3 / 200) + sVar10) -
                       (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar3 = (int)(short)(((short)(iVar3 / 200) + sVar10) -
                            (short)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      }
      uVar6 = thunk_FUN_00496250(iVar8,iVar5,iVar3);
      if (((int)uVar12 < 0) && ((int)uVar6 < 0)) {
        if ((local_8 & 1) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        if ((local_8 != 0) && (-1 < (int)uVar6)) {
          local_8 = -local_8;
        }
        if (((int)local_8 < 0) && (-1 < (int)uVar12)) {
          local_8 = -local_8;
        }
      }
    }
  }
  else {
    local_8 = -local_8;
  }
  local_c = local_c + local_8;
LAB_0058b5ac:
  sVar10 = (short)(local_c >> 0x1f);
  if (local_c < 0) {
    local_8 = (short)(((short)(local_c / 200) + sVar10) -
                     (short)((longlong)local_c * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_8 = (uint)(short)(((short)(local_c / 200) + sVar10) -
                           (short)((longlong)local_c * 0x51eb851f >> 0x3f));
  }
  bVar1 = false;
  do {
    while( true ) {
      local_14 = local_8;
      if ((int)local_8 < (int)(local_8 + 5)) {
        do {
          iVar3 = local_14;
          if (4 < local_14) {
            iVar3 = local_14 + -5;
          }
          sVar10 = (short)iVar8;
          sVar11 = (short)iVar5;
          iVar4 = thunk_FUN_004961b0(sVar10,sVar11,(short)iVar3);
          if ((iVar4 != 0) &&
             ((((sVar10 < 0 || (g_worldGrid.sizeX <= sVar10)) || (sVar11 < 0)) ||
              (((g_worldGrid.sizeY <= sVar11 || (sVar2 = (short)local_8, sVar2 < 0)) ||
               ((g_worldGrid.sizeZ <= sVar2 ||
                (g_worldGrid.cells
                 [(int)sVar11 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar2 +
                  (int)sVar10].objects[0] == (STWorldObject *)0x0)))))))) {
            if (iVar3 != local_8) {
              local_c = (int)(short)((short)iVar3 * 200 + 100);
            }
            bVar1 = true;
            goto LAB_0058b6f6;
          }
          local_14 = local_14 + 1;
        } while (local_14 < (int)(local_8 + 5));
      }
      bVar15 = -1 < iVar8 - *(short *)((int)this + 0x47);
      if (iVar8 != *(short *)((int)this + 0x47) && bVar15) break;
      if (bVar15) {
        bVar15 = iVar5 - *(short *)((int)this + 0x49) < 0;
        if (iVar5 == *(short *)((int)this + 0x49) || bVar15) {
          if (!bVar15) goto LAB_0058b6f6;
          iVar5 = iVar5 + 1;
        }
        else {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0058b6f6;
        }
      }
      else {
        iVar8 = iVar8 + 1;
      }
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
LAB_0058b6f6:
  sVar10 = (short)iVar8 * 0xc9 + 100;
  sVar11 = (short)iVar5 * 0xc9 + 100;
  if ((bVar1) &&
     ((((int)*(short *)((int)this + 0x41) != (int)sVar10 ||
       ((int)*(short *)((int)this + 0x43) != (int)sVar11)) ||
      (*(short *)((int)this + 0x45) != local_c)))) {
    *param_1 = sVar10;
    *param_2 = sVar11;
    *param_3 = (short)local_c;
    uVar7 = (undefined2)((uint)local_c >> 0x10);
    /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
    sVar2 = (**(code **)(*(int *)this + 0x10))
                      (CONCAT22(uVar7,*(undefined2 *)((int)this + 0x41)),
                       *(undefined2 *)((int)this + 0x43),
                       CONCAT22(uVar7,*(undefined2 *)((int)this + 0x45)),(int)sVar10,(int)sVar11,
                       local_c);
    *param_4 = sVar2 / 0x2d - (short)((int)sVar2 / -0x4c000000);
    thunk_FUN_0058af70(this,sVar10,sVar11,(short)local_c);
    return 1;
  }
  uVar12 = (int)*(short *)((int)this + 0x6c) + 1U & 0x80000007;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
  }
  *param_4 = (short)uVar12;
  return 0;
}

