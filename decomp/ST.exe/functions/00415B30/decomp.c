
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0 */

undefined4 __thiscall
STJellyGunC::sub_00415B30
          (STJellyGunC *this,short param_1,short param_2,short param_3,short param_4,short param_5,
          short param_6,byte param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007901a0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  this->field_0034 = param_1;
  this->field_0036 = param_2;
  this->field_0038 = param_3;
  this->field_003A = param_4;
  this->field_003C = param_5;
  this->field_003E = param_6;
  this->field_0041 = param_1;
  this->field_0043 = param_2;
  this->field_0045 = param_3;
  iVar7 = (int)param_1;
  this->field_0047 = param_1 / 0xc9;
  iVar3 = (int)param_2;
  this->field_0049 = param_2 / 0xc9;
  iVar4 = (int)param_3;
  this->field_004B = param_3 / 200;
  iVar2 = (int)(short)((param_1 / 0xc9) * 0xc9 + 100);
  if ((((iVar2 + -0x1e < iVar7) && (iVar7 < iVar2 + 0x1e)) &&
      (iVar2 = (int)(short)((param_2 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < iVar3)) &&
     (((iVar3 < iVar2 + 0x1e &&
       (iVar2 = (int)(short)((param_3 / 200) * 200 + 100), iVar2 + -0x1d < iVar4)) &&
      (iVar4 < iVar2 + 0x1d)))) {
    this->field_004D = 0;
  }
  else {
    this->field_004D = 1;
  }
  this->field_0040 = this->field_004D;
  this->field_0063 = param_7;
  this->field_0068 = 0;
  iVar2 = FUN_006acf0d(iVar7,iVar3,iVar4,(int)param_4,(int)param_5,(int)param_6);
  this->field_0064 = iVar2 / (int)(uint)param_7;
  if (iVar2 / (int)(uint)param_7 < 1) {
    this->field_0064 = 1;
  }
  iVar2 = this->field_0064;
  sVar6 = param_1 + (short)((param_4 - iVar7) / iVar2);
  this->field_004E = sVar6;
  sVar1 = (short)((param_5 - iVar3) / iVar2) + param_2;
  this->field_0050 = sVar1;
  sVar5 = param_3 + (short)((param_6 - iVar4) / iVar2);
  this->field_0052 = sVar5;
  this->field_0054 = sVar6 / 0xc9;
  this->field_0056 = sVar1 / 0xc9;
  this->field_0058 = sVar5 / 200;
  iVar2 = (int)(short)((sVar6 / 0xc9) * 0xc9 + 100);
  if (((iVar2 + -0x1e < (int)sVar6) && ((int)sVar6 < iVar2 + 0x1e)) &&
     ((iVar2 = (int)(short)((sVar1 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < (int)sVar1 &&
      ((((int)sVar1 < iVar2 + 0x1e &&
        (iVar2 = (int)(short)((sVar5 / 200) * 200 + 100), iVar2 + -0x1d < (int)sVar5)) &&
       ((int)sVar5 < iVar2 + 0x1d)))))) {
    this->field_005A = 0;
  }
  else {
    this->field_005A = 1;
  }
  if ((this->field_004D == '\0') && (this->field_005A == '\x01')) {
    this->field_007A = 1;
  }
  else {
    this->field_007A = 0;
  }
  this->field_007E = 1;
  ExceptionList = local_14;
  return 0;
}

