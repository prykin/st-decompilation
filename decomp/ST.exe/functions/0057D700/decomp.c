
/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0
   
   [STSwitchEnumApplier] Switch target field_0267 uses
   /SubmarineTitans/Recovered/Enums/STFishC_field_0267State. Cases:
   CASE_E7=231;CASE_E8=232;CASE_E9=233;CASE_EA=234;CASE_EB=235 */

undefined4 __thiscall
STFishC::sub_0057D700(STFishC *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  short sVar13;
  int local_18;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  uVar3 = (uint)g_worldGrid.sizeX;
  uVar11 = 0;
  uVar10 = 0;
  uVar4 = uVar3 - 1;
  uVar5 = (uint)g_worldGrid.sizeY;
  uVar6 = uVar5 - 1;
  sub_004162B0(this,&local_a,&local_8,&local_6);
  local_18 = (int)this->field_004B - (PTR_00802a38->field_00E4 & 1);
  if (local_18 < 0) {
    local_18 = 1;
  }
  switch(this->field_0267) {
  case CASE_E7:
  case CASE_E9:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % uVar3;
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % uVar5;
    goto switchD_0057d76c_default;
  case CASE_E8:
  case CASE_EA:
  case CASE_EB:
    if (((((short)this->field_0047 < 1) &&
         (((sVar2 = this->field_006C, sVar2 == 0xe1 || (sVar2 == 0xb4)) || (sVar2 == 0x87)))) ||
        ((iVar9 = (int)(short)this->field_0047, (int)uVar4 <= iVar9 &&
         (((sVar2 = this->field_006C, sVar2 == 0x2d || (sVar2 == 0)) || (sVar2 == 0x13b)))))) ||
       ((((short)this->field_0049 < 1 &&
         (((sVar2 = this->field_006C, sVar2 == 0x87 || (sVar2 == 0x5a)) || (sVar2 == 0x2d)))) ||
        ((iVar7 = (int)(short)this->field_0049, (int)uVar6 <= iVar7 &&
         (((sVar2 = this->field_006C, sVar2 == 0xe1 || (sVar2 == 0x10e)) || (sVar2 == 0x13b))))))))
    {
      iVar9 = (sVar2 + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    break;
  default:
    goto switchD_0057d76c_default;
  }
  iVar8 = (int)((ulonglong)((longlong)(int)(short)this->field_006C * -0x49f49f49) >> 0x20) +
          (int)(short)this->field_006C;
  switch((iVar8 >> 5) - (iVar8 >> 0x1f)) {
  case 0:
    if (iVar9 < 0) {
      iVar7 = this->field_001C;
    }
    else {
      iVar7 = this->field_001C;
    }
    uVar10 = iVar7 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % ((uVar4 - iVar9) + 1) + iVar9;
    iVar9 = uVar11 - (int)(short)this->field_0047;
    goto LAB_0057d9ad;
  case 1:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)(short)this->field_0047;
    if (iVar9 < 0) {
LAB_0057db0a:
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    else {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    }
    goto LAB_0057db18;
  case 2:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % (iVar7 + 1U);
    iVar9 = (int)(short)this->field_0049 - uVar10;
    goto LAB_0057da88;
  case 3:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((int)(short)this->field_0049 + 1U);
    break;
  case 4:
    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar11 = (uVar10 >> 0x10) % (iVar9 + 1U);
    iVar9 = (int)(short)this->field_0047 - uVar11;
LAB_0057d9ad:
    iVar7 = (short)this->field_0049 - iVar9;
    if (iVar7 < 0) {
      iVar8 = this->field_001C;
    }
    else {
      iVar8 = this->field_001C;
    }
    uVar10 = iVar8 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((((short)this->field_0049 + iVar9) - iVar7) + 1U) + iVar7;
    break;
  case 5:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar11;
    uVar11 = (uVar11 >> 0x10) % ((int)(short)this->field_0047 + 1U);
    break;
  case 6:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    iVar9 = uVar10 - (int)(short)this->field_0049;
LAB_0057da88:
    uVar3 = (short)this->field_0047 + iVar9;
    iVar9 = (short)this->field_0047 - iVar9;
    if (iVar9 < 0) {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar11;
    }
    else {
      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar11;
    }
    goto LAB_0057db1e;
  case 7:
    if (iVar7 < 0) {
      iVar9 = this->field_001C;
    }
    else {
      iVar9 = this->field_001C;
    }
    uVar10 = iVar9 * 0x41c64e6d + 0x3039;
    this->field_001C = uVar10;
    uVar10 = (uVar10 >> 0x10) % ((uVar6 - iVar7) + 1) + iVar7;
    iVar9 = (int)(short)this->field_0047;
    if (-1 < iVar9) goto LAB_0057db0a;
    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
LAB_0057db18:
    this->field_001C = uVar11;
    uVar3 = uVar4;
LAB_0057db1e:
    uVar11 = (uVar11 >> 0x10) % ((uVar3 - iVar9) + 1) + iVar9;
    break;
  default:
    goto switchD_0057d88f_default;
  }
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
switchD_0057d88f_default:
  if ((int)uVar4 <= (int)uVar11) {
    uVar11 = uVar4;
  }
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  if ((int)uVar6 <= (int)uVar10) {
    uVar10 = uVar6;
  }
switchD_0057d76c_default:
  if ((uVar11 == (int)(short)this->field_0047) && (uVar10 == (int)(short)this->field_0049)) {
    if ((this->field_0267 == CASE_EB) || (this->field_0267 == CASE_E8)) {
      iVar9 = ((short)this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar9;
      if (-1 < iVar9) {
        return 2;
      }
      do {
        iVar9 = *param_4;
        *param_4 = iVar9 + 0x168;
      } while (iVar9 + 0x168 < 0);
      return 2;
    }
    uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar3;
    local_18 = (int)this->field_004B - (int)(short)((ulonglong)(uVar3 >> 0x10) % 5);
    if (local_18 < 0) {
      local_18 = -local_18;
    }
    local_18 = local_18 % 5;
  }
cf_continue_loop_0057DBE9:
  do {
    sVar2 = (short)uVar11;
    sVar12 = (short)uVar10;
    sVar13 = (short)local_18;
    bVar1 = thunk_FUN_004961b0(sVar2,sVar12,sVar13);
    if (((CONCAT31(extraout_var,bVar1) != 0) &&
        (((sVar2 < 0 || (g_worldGrid.sizeX <= sVar2)) ||
         ((sVar12 < 0 ||
          ((((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) || (g_worldGrid.sizeZ <= sVar13)) ||
           (g_worldGrid.cells
            [(int)sVar12 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar13 +
             (int)sVar2].objects[0] == (STWorldObject *)0x0)))))))) &&
       (((sVar2 < 0 || (g_worldGrid.sizeX <= sVar2)) ||
        ((sVar12 < 0 ||
         (((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar13 ||
           (g_worldGrid.cells
            [(int)sVar12 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar13 +
             (int)sVar2].objects[1] == (STWorldObject *)0x0)))))))))) {
      *param_1 = uVar11;
      *param_2 = uVar10;
      *param_3 = local_18;
      return 1;
    }
    bVar1 = (int)(uVar11 - (int)(short)this->field_0047) < 0;
    if (uVar11 == (int)(short)this->field_0047 || bVar1) {
      if (bVar1) {
        uVar11 = uVar11 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      bVar1 = (int)(uVar10 - (int)(short)this->field_0049) < 0;
      if (uVar10 == (int)(short)this->field_0049 || bVar1) {
        if (!bVar1) goto LAB_0057dd0c;
        uVar10 = uVar10 + 1;
        goto cf_continue_loop_0057DBE9;
      }
      uVar10 = uVar10 - 1;
      uVar3 = uVar10;
    }
    else {
      uVar11 = uVar11 - 1;
      uVar3 = uVar11;
    }
    if ((int)uVar3 < 0) {
LAB_0057dd0c:
      iVar9 = ((short)this->field_006C + 0x2d) % 0x168;
      *param_4 = iVar9;
      while (iVar9 < 0) {
        iVar9 = *param_4 + 0x168;
        *param_4 = iVar9;
      }
      return 2;
    }
  } while( true );
}

