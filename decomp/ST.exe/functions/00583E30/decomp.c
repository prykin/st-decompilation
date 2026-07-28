
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=6;
   incoming_edx_uses=0

   [STPrototypeApplier] Propagated return.
   Evidence: 00583E30 returns stored into /STJellyGunC+0x235 @ 005827C2 | 00583E30 returns stored
   into /STJellyGunC+0x235 @ 005829FB */

STJellyGunC_field_0235State __thiscall STJellyGunC::sub_00583E30(STJellyGunC *this)

{
  STJellyGunC_field_0235State SVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short local_20 [2];
  short local_1c [2];
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  SVar1 = CASE_2;
  if (this->field_0235 != CASE_2) {
    local_14 = sub_00584060(this,&local_10,&local_c,&local_8);
    if (local_14 == 1) {
      if (this->field_023D != 0) {
        iVar2 = local_10 - this->field_0047;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 2) {
          iVar2 = local_c - this->field_0049;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (iVar2 < 2) {
            iVar2 = local_8 - this->field_004B;
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            if (iVar2 < 2) {
              iVar2 = sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                                   (short)local_10 * 0xc9 + 100,(short)local_c * 0xc9 + 100,
                                   (short)local_8 * 200 + 100,6);
              return (-(uint)(iVar2 != 0) & 0xfffffffd) + CASE_3;
            }
          }
        }
      }
      this->field_0239 = -1;
      this->field_0231 = 1;
      if (*(int *)&this->field_0x247 == 10) {
        *(undefined4 *)&this->field_0x24b = 0;
      }
      uVar3 = FUN_006db910((int)this->field_0047,(int)this->field_0049,local_10,local_c);
      uVar4 = FUN_006db990(uVar3,8);
      uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar3;
      uVar3 = uVar3 >> 0x10;
      piVar10 = (int *)local_18;
      iVar6 = (int)this->field_0049;
      piVar9 = (int *)local_1c;
      iVar7 = (int)this->field_0047;
      piVar8 = (int *)local_20;
      iVar2 = (int)this->field_004B;
      iVar5 = FUN_006acf90(iVar7,iVar6,local_10,local_c);
      iVar2 = thunk_FUN_005845b0(uVar4,local_8 - this->field_004B,iVar5,iVar7,iVar6,iVar2,piVar8,
                                 piVar9,piVar10,uVar3);
      if (iVar2 != 0) {
        thunk_FUN_00417ff0(this,6);
        thunk_FUN_00418010(this,5);
        iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                          ((AnonReceiver_004167A0 *)this,local_20[0],local_1c[0],local_18[0]);
        if (iVar2 == 0) {
          return CASE_1;
        }
        iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                          ((AnonReceiver_004167A0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar2 == 0) {
          return CASE_1;
        }
      }
    }
    SVar1 = 0;
  }
  return SVar1;
}

