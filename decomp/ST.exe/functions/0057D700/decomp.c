
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0

   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
STFishC::sub_0057D700(STFishC *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  int local_18;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;

  uVar2 = (uint)g_worldGrid.sizeX;
  uVar10 = 0;
  uVar9 = 0;
  uVar3 = uVar2 - 1;
  uVar4 = (uint)g_worldGrid.sizeY;
  uVar5 = uVar4 - 1;
  sub_004162B0(this,&local_a,&local_8,&local_6);
  local_18 = (int)this->field_004B - (PTR_00802a38->field_00E4 & 1);
  if (local_18 < 0) {
    local_18 = 1;
  }
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % uVar2;
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % uVar4;
    goto switchD_0057d76c_default;
  case CASE_E8:
  case CASE_EA:
  case CASE_EB:
    if ((((this->field_0047 < 1) &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0xb4)) || (sVar1 == 0x87)))) ||
        ((iVar6 = (int)this->field_0047, (int)uVar3 <= iVar6 &&
         (((sVar1 = this->field_006C, sVar1 == 0x2d || (sVar1 == 0)) || (sVar1 == 0x13b)))))) ||
       (((this->field_0049 < 1 &&
         (((sVar1 = this->field_006C, sVar1 == 0x87 || (sVar1 == 0x5a)) || (sVar1 == 0x2d)))) ||
        ((iVar7 = (int)this->field_0049, (int)uVar5 <= iVar7 &&
         (((sVar1 = this->field_006C, sVar1 == 0xe1 || (sVar1 == 0x10e)) || (sVar1 == 0x13b))))))))
    {
      iVar6 = (sVar1 + 0x2d) % 0x168;
      *param_4 = iVar6;
      if (-1 < iVar6) {
        return 2;
      }
      do {
        iVar6 = *param_4;
        *param_4 = iVar6 + 0x168;
      } while (iVar6 + 0x168 < 0);
      return 2;
    }
    break;
  default:
    goto switchD_0057d76c_default;
  }
  iVar8 = (int)((ulonglong)((longlong)(int)this->field_006C * -0x49f49f49) >> 0x20) +
          (int)this->field_006C;
  switch((iVar8 >> 5) - (iVar8 >> 0x1f)) {
  case 0:
    if (iVar6 < 0) {
      iVar7 = this->field_001C;
    }
    else {
      iVar7 = this->field_001C;
    }
    uVar9 = iVar7 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % ((uVar3 - iVar6) + 1) + iVar6;
    iVar6 = uVar10 - (int)this->field_0047;
    goto LAB_0057d9ad;
  case 1:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (iVar7 + 1U);
    iVar6 = (int)this->field_0047;
    if (iVar6 < 0) {
LAB_0057db0a:
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    else {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    goto LAB_0057db18;
  case 2:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (iVar7 + 1U);
    iVar6 = (int)this->field_0049 - uVar9;
    goto LAB_0057da88;
  case 3:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % (iVar6 + 1U);
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((int)this->field_0049 + 1U);
    break;
  case 4:
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar10 = (uVar9 >> 0x10) % (iVar6 + 1U);
    iVar6 = (int)this->field_0047 - uVar10;
LAB_0057d9ad:
    iVar7 = this->field_0049 - iVar6;
    if (iVar7 < 0) {
      iVar8 = this->field_001C;
    }
    else {
      iVar8 = this->field_001C;
    }
    uVar9 = iVar8 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % (((this->field_0049 + iVar6) - iVar7) + 1U) + iVar7;
    break;
  case 5:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((int)this->field_0047 + 1U);
    break;
  case 6:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar6 = uVar9 - (int)this->field_0049;
LAB_0057da88:
    uVar2 = this->field_0047 + iVar6;
    iVar6 = this->field_0047 - iVar6;
    if (iVar6 < 0) {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar10;
    }
    else {
      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar10;
    }
    goto LAB_0057db1e;
  case 7:
    if (iVar7 < 0) {
      iVar6 = this->field_001C;
    }
    else {
      iVar6 = this->field_001C;
    }
    uVar9 = iVar6 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar9 = (uVar9 >> 0x10) % ((uVar5 - iVar7) + 1) + iVar7;
    iVar6 = (int)this->field_0047;
    if (-1 < iVar6) goto LAB_0057db0a;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
LAB_0057db18:
    this->field_001C = uVar10;
    uVar2 = uVar3;
LAB_0057db1e:
    uVar10 = (uVar10 >> 0x10) % ((uVar2 - iVar6) + 1) + iVar6;
    break;
  default:
    goto switchD_0057d88f_default;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
switchD_0057d88f_default:
  if ((int)uVar3 <= (int)uVar10) {
    uVar10 = uVar3;
  }
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  if ((int)uVar5 <= (int)uVar9) {
    uVar9 = uVar5;
  }
switchD_0057d76c_default:
  if ((uVar10 == (int)this->field_0047) && (uVar9 == (int)this->field_0049)) {
    if ((this->field_0267 == CASE_EB) || (this->field_0267 == CASE_E8)) {
      iVar6 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar6;
      if (-1 < iVar6) {
        return 2;
      }
      do {
        iVar6 = *param_4;
        *param_4 = iVar6 + 0x168;
      } while (iVar6 + 0x168 < 0);
      return 2;
    }
    uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar2;
    local_18 = (int)this->field_004B - (int)(short)((ulonglong)(uVar2 >> 0x10) % 5);
    if (local_18 < 0) {
      local_18 = -local_18;
    }
    local_18 = local_18 % 5;
  }
cf_continue_loop_0057DBE9:
  do {
    sVar1 = (short)uVar10;
    sVar12 = (short)uVar9;
    sVar13 = (short)local_18;
    iVar6 = thunk_FUN_004961b0(sVar1,sVar12,sVar13);
    if (((iVar6 != 0) &&
        (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
         ((sVar12 < 0 ||
          ((((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) || (g_worldGrid.sizeZ <= sVar13)) ||
           (g_worldGrid.cells
            [(int)sVar12 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar13 +
             (int)sVar1].objects[0] == (STWorldObject *)0x0)))))))) &&
       (((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar12 < 0 ||
         (((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar13 ||
           (g_worldGrid.cells
            [(int)sVar12 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar13 +
             (int)sVar1].objects[1] == (STWorldObject *)0x0)))))))))) {
      *param_1 = uVar10;
      *param_2 = uVar9;
      *param_3 = local_18;
      return 1;
    }
    bVar11 = (int)(uVar10 - (int)this->field_0047) < 0;
    if (uVar10 == (int)this->field_0047 || bVar11) {
      if (bVar11) {
        uVar10 = uVar10 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      bVar11 = (int)(uVar9 - (int)this->field_0049) < 0;
      if (uVar9 == (int)this->field_0049 || bVar11) {
        if (!bVar11) goto LAB_0057dd0c;
        uVar9 = uVar9 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      uVar9 = uVar9 - 1;
      uVar2 = uVar9;
    }
    else {
      uVar10 = uVar10 - 1;
      uVar2 = uVar10;
    }
    if ((int)uVar2 < 0) {
LAB_0057dd0c:
      iVar6 = (this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar6;
      while (iVar6 < 0) {
        iVar6 = *param_4 + 0x168;
        *param_4 = iVar6;
      }
      return 2;
    }
  } while( true );
}

