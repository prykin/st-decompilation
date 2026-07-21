
void __thiscall FUN_0062af90(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  STWorldObject *this_00;
  AnonShape_0062FCA0_22A9EE35 *pAVar8;
  AnonShape_0062FCA0_22A9EE35 local_38;
  undefined4 local_c;
  AnonShape_0062AF90_A19AAC76 *local_8;

  iVar5 = 1;
  sVar6 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar7 = (short)(((short)(param_1 / 0xc9) + sVar6) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar6) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar6 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar6) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar6) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar6 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar2 = (short)(((short)(param_3 / 200) + sVar6) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(param_3 / 200) + sVar6) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) && (-1 < iVar4)) &&
     (((iVar4 < g_worldGrid.sizeY && (-1 < iVar2)) && (iVar2 < g_worldGrid.sizeZ)))) {
    sVar6 = (short)iVar7;
    if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
       ((sVar3 = (short)iVar4, sVar3 < 0 ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar1 = (short)iVar2, sVar1 < 0)) ||
         (g_worldGrid.sizeZ <= sVar1)))))) {
      this_00 = (STWorldObject *)0x0;
    }
    else {
      this_00 = g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar1 + (int)sVar3 * (int)g_worldGrid.sizeX +
                 (int)sVar6].objects[1];
    }
    pAVar8 = &local_38;
    local_8 = this;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pAVar8 = 0;
      pAVar8 = (AnonShape_0062FCA0_22A9EE35 *)&pAVar8->field_0x4;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._28_4_ = param_3;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._20_4_ = param_1;
    local_c = local_8->field_0018;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._24_4_ = param_2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._36_4_ = local_8->field_0004;
    local_38.field_0020 = 1000;
    switch(local_8->field_0015) {
    case 1:
      if (local_8->field_001C == 1) {
        iVar5 = 1;
      }
      else if (local_8->field_001C == 2) {
        iVar5 = 2;
      }
      break;
    case 2:
      iVar5 = 5;
      break;
    case 8:
      iVar5 = 4;
      break;
    case 0x10:
    case 0x20:
    case 0x80:
      iVar5 = 3;
      break;
    case 0x40:
      iVar5 = 6;
    }
    local_38.field_0028 = iVar5 << 0x10 | (uint)local_8->field_0014;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._0_4_ = 0xbe;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._4_4_ = 0xff;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._8_4_ = 0;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_38._12_4_ = 1;
    if ((this_00 != (STWorldObject *)0x0) && (this_00->value_20 == 0xbe)) {
      thunk_FUN_006301b0(this_00,&local_38);
      return;
    }
    (*PTR_00802a38->vtable->vfunc_08)(0x132,0,0,&local_38,0);
  }
  return;
}

