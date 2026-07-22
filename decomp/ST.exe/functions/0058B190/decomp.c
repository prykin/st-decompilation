
/* [STMethodOwnerApplier] Structural method owner recovered as STOctopusC.
   Evidence: this_call_owners=[STOctopusC]; agreed_this_calls=1; incoming_this_accesses=59;
   incoming_edx_uses=17; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STOctopusC::sub_0058B190
          (STOctopusC *this,short *param_1,short *param_2,short *param_3,short *param_4)

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

  this->field_0281 = 0;
  iVar3 = g_worldGrid.sizeX + -1;
  iVar4 = g_worldGrid.sizeY + -1;
  sVar10 = this->field_0041;
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
  sVar10 = this->field_0043;
  this->field_0047 = (short)local_14;
  if (sVar10 < 0) {
    sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) - (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
  }
  sVar11 = this->field_0045;
  this->field_0049 = sVar10;
  if (sVar11 < 0) {
    sVar11 = ((sVar11 / 200 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar11 = (sVar11 / 200 + (sVar11 >> 0xf)) - (short)((longlong)(int)sVar11 * 0x51eb851f >> 0x3f);
  }
  this->field_004B = sVar11;
  if ((short)local_14 < 0) {
    this->field_0047 = 0;
  }
  if (sVar10 < 0) {
    this->field_0049 = 0;
  }
  if (iVar3 < this->field_0047) {
    this->field_0047 = (short)iVar3;
  }
  if (iVar4 < this->field_0049) {
    this->field_0049 = (short)iVar4;
  }
  iVar8 = (int)this->field_0047;
  bVar14 = iVar8 + -1 < 0;
  iVar5 = (int)this->field_0049;
  if (iVar5 + -1 < 0) {
    bVar14 = bVar14 + 1;
  }
  if (iVar3 < iVar8 + 1) {
    bVar14 = bVar14 + 1;
  }
  if (iVar4 < iVar5 + 1) {
    bVar14 = bVar14 + 1;
  }
  if ((((this->field_02A5 == 0xf8) || (this->field_02A5 == 0xf9)) && (sVar11 < 4)) &&
     (((byte)g_playSystem_00802A38->field_00E4 & 7) == 1)) {
    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar12;
    this->field_0281 = 1;
    local_c = (uVar12 >> 0x10) % 0x66 + 100 + (int)this->field_0045;
    goto LAB_0058b5ac;
  }
  iVar13 = 0;
  iVar9 = 0;
  if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
    iVar13 = this->field_0251;
    iVar9 = iVar13;
    if (iVar13 < 0) {
      iVar9 = -iVar13;
    }
    if (0x1d < iVar9) {
      iVar8 = iVar8 + ((-1 < iVar13) - 1 & 0xfffffffe) + 1;
    }
    iVar13 = this->field_0255;
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
    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar12;
    iVar8 = ((uVar12 >> 0x10) % 3 - 1) + (int)this->field_006C;
  }
  else {
    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar12;
    iVar8 = ((uVar12 >> 0x10) % 5 - 2) + (int)this->field_006C;
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
    iVar9 = (int)this->field_0049;
    iVar13 = this->field_0047 + 1;
    break;
  case 1:
    iVar13 = this->field_0047 + 1;
    iVar9 = this->field_0049 + -1;
    break;
  case 2:
    iVar13 = (int)this->field_0047;
    iVar9 = this->field_0049 + -1;
    break;
  case 3:
    iVar13 = this->field_0047 + -1;
    iVar9 = this->field_0049 + -1;
    break;
  case 4:
    iVar9 = (int)this->field_0049;
    iVar13 = this->field_0047 + -1;
    break;
  case 5:
    iVar13 = this->field_0047 + -1;
    goto LAB_0058b466;
  case 6:
    iVar13 = (int)this->field_0047;
    goto LAB_0058b466;
  case 7:
    iVar13 = this->field_0047 + 1;
LAB_0058b466:
    iVar9 = this->field_0049 + 1;
  }
  iVar8 = iVar13;
  if (iVar3 < iVar13) {
    iVar9 = (int)this->field_0049;
    iVar8 = iVar3;
  }
  if (iVar8 < 0) {
    iVar9 = (int)this->field_0049;
    iVar8 = 0;
  }
  iVar5 = iVar9;
  if (iVar4 <= iVar9) {
    iVar8 = (int)this->field_0047;
    iVar5 = iVar4;
  }
  if (iVar5 < 0) {
    iVar8 = (int)this->field_0047;
    iVar5 = 0;
  }
LAB_0058b499:
  local_c = (int)this->field_0045;
  uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar12;
  local_8 = (uVar12 >> 0x10) % 0x65;
  if ((int)((int)this->field_0045 + local_8) < 900) {
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
      bVar15 = -1 < iVar8 - this->field_0047;
      if (iVar8 != this->field_0047 && bVar15) break;
      if (bVar15) {
        bVar15 = iVar5 - this->field_0049 < 0;
        if (iVar5 == this->field_0049 || bVar15) {
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
     ((((int)this->field_0041 != (int)sVar10 || ((int)this->field_0043 != (int)sVar11)) ||
      (this->field_0045 != local_c)))) {
    *param_1 = sVar10;
    *param_2 = sVar11;
    *param_3 = (short)local_c;
    uVar7 = (undefined2)((uint)local_c >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar2 = (*this->vtable->vfunc_10)
                      (CONCAT22(uVar7,this->field_0041),this->field_0043,
                       CONCAT22(uVar7,this->field_0045),(int)sVar10,(int)sVar11,local_c);
    *param_4 = sVar2 / 0x2d - (short)((int)sVar2 / -0x4c000000);
    thunk_FUN_0058af70(this,sVar10,sVar11,(short)local_c);
    return 1;
  }
  uVar12 = (int)this->field_006C + 1U & 0x80000007;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
  }
  *param_4 = (short)uVar12;
  return 0;
}

