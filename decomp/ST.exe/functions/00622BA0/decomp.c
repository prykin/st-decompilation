
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=71;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STMineSetC::sub_00622BA0(STMineSetC *this)

{
  STMineSetC_field_02ADState SVar1;
  STMineSetC_sub_00626B50_param_1Enum SVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 local_8;

  local_8 = 0;
  this->field_02C2 = this->field_0276;
  this->field_02C6 = this->field_027A;
  this->field_02CA = this->field_027E;
  this->field_0041 = (short)this->field_02C2;
  this->field_0043 = (short)this->field_02C6;
  this->field_0045 = (short)this->field_02CA;
  SVar2 = thunk_FUN_004ab050();
  sub_00626B50(this,SVar2);
  this->field_0056 = (short)this->field_02C6;
  iVar4 = this->field_02C2;
  this->field_0054 = (short)this->field_02C2;
  this->field_0058 = (short)this->field_02CA;
  sVar5 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar5 = (((short)(iVar4 / 0xc9) + sVar5) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar4 / 0xc9) + sVar5) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  iVar4 = this->field_02C6;
  this->field_0047 = sVar5;
  sVar6 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar6 = (((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  iVar4 = this->field_02CA;
  this->field_0049 = sVar6;
  sVar7 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    sVar7 = (((short)(iVar4 / 200) + sVar7) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar7 = ((short)(iVar4 / 200) + sVar7) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f);
  }
  this->field_005D = sVar6;
  this->field_004B = sVar7;
  this->field_005B = sVar5;
  this->field_005F = sVar7;
  uVar3 = thunk_FUN_00626f10(this->field_0272);
  this->field_02AD = (STMineSetC_field_02ADState)uVar3;
  this->field_035F = g_playSystem_00802A38->field_00E4;
  if ((STMineSetC_field_02ADState)uVar3 == CASE_2) {
    this->field_0342 = 0xffffffff;
  }
  sVar5 = this->field_0047 * 0xc9 + 100;
  this->field_003C = this->field_0049 * 0xc9 + 100;
  sVar7 = this->field_004B * 200;
  this->field_003A = sVar5;
  this->field_0313 = 1;
  sVar6 = sVar7 + 0x32;
  this->field_003E = sVar6;
  this->field_028A = (short)(sVar7 + 100) + -0x32;
  this->field_008E = 1;
  iVar4 = FUN_006acf0d(this->field_02C2,this->field_02C6,this->field_02CA,(int)sVar5,(int)sVar5,
                       (int)sVar6);
  this->field_02F6 = iVar4;
  SVar1 = this->field_02AD;
  if (SVar1 == CASE_3) {
    this->field_0352 = 0;
  }
  else {
    this->field_0352 = 1;
  }
  if (SVar1 < CASE_3) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      VisibleClassTy::sub_00558DC0
                (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                 (undefined *)(int)this->field_004B,(int *)this->field_0024,
                 *(uint *)(&DAT_007d02b4 + (uint)SVar1 * 4),(int *)this->field_0018,0xffffffff);
    }
  }
  else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    VisibleClassTy::sub_00558DC0
              (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
               (undefined *)(int)this->field_004B,(int *)this->field_0024,DAT_007d02c0,
               (int *)this->field_0018,0xffffffff);
    sub_0041D1A0(this,*(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4));
  }
  sVar5 = this->field_0047;
  if ((((-1 < sVar5) && (sVar6 = this->field_0049, -1 < sVar6)) &&
      (sVar7 = this->field_004B, -1 < sVar7)) &&
     (((sVar5 < g_worldGrid.sizeX && (sVar6 < g_worldGrid.sizeY)) && (sVar7 < 5)))) {
    this->field_003A = *(short *)&this->field_0282;
    this->field_003C = *(short *)&this->field_0286;
    this->field_003E = *(short *)&this->field_028A;
    if (this->field_0313 != '\0') {
      if (((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) &&
         (((-1 < sVar6 &&
           (((sVar6 < g_worldGrid.sizeY && (-1 < sVar7)) && (sVar7 < g_worldGrid.sizeZ)))) &&
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar7 + (int)g_worldGrid.sizeX * (int)sVar6 +
            (int)sVar5].objects[(byte)this->field_008E] != (STWorldObject *)0x0)))) {
        return 0;
      }
      iVar4 = DumpClassC::WritePtr
                        (sVar5,sVar6,sVar7,(uint)(byte)this->field_008E,
                         (AnonShape_00495EC0_95A268C6 *)this);
      if (iVar4 != 0) {
        return 0;
      }
      this->field_0314 = this->field_0314 + '\x01';
    }
    local_8 = 1;
  }
  return local_8;
}

