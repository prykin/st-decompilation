
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=2; incoming_this_accesses=6;
   incoming_edx_uses=0 */

int __thiscall STJellyGunC::sub_00583E30(STJellyGunC *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  short local_20 [2];
  short local_1c [2];
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = 2;
  if (this->field_0235 != CASE_2) {
    local_14 = sub_00584060(this,&local_10,&local_c,&local_8);
    if (local_14 == 1) {
      if (this->field_023D != 0) {
        iVar1 = local_10 - this->field_0047;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (iVar1 < 2) {
          iVar1 = local_c - this->field_0049;
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if (iVar1 < 2) {
            iVar1 = local_8 - this->field_004B;
            if (iVar1 < 0) {
              iVar1 = -iVar1;
            }
            if (iVar1 < 2) {
              iVar1 = sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                                   (short)local_10 * 0xc9 + 100,(short)local_c * 0xc9 + 100,
                                   (short)local_8 * 200 + 100,6);
              return (-(uint)(iVar1 != 0) & 0xfffffffd) + 3;
            }
          }
        }
      }
      this->field_0239 = -1;
      this->field_0231 = 1;
      if (*(int *)&this->field_0x247 == 10) {
        *(undefined4 *)&this->field_0x24b = 0;
      }
      uVar2 = FUN_006db910((int)this->field_0047,(int)this->field_0049,local_10,local_c);
      uVar3 = FUN_006db990(uVar2,8);
      uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
      this->field_001C = uVar2;
      uVar2 = uVar2 >> 0x10;
      piVar9 = (int *)local_18;
      iVar5 = (int)this->field_0049;
      piVar8 = (int *)local_1c;
      iVar6 = (int)this->field_0047;
      piVar7 = (int *)local_20;
      iVar1 = (int)this->field_004B;
      iVar4 = FUN_006acf90(iVar6,iVar5,local_10,local_c);
      iVar1 = thunk_FUN_005845b0(uVar3,local_8 - this->field_004B,iVar4,iVar6,iVar5,iVar1,piVar7,
                                 piVar8,piVar9,uVar2);
      if (iVar1 != 0) {
        thunk_FUN_00417ff0(this,6);
        thunk_FUN_00418010(this,5);
        iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                          ((AnonReceiver_00417FF0 *)this,local_20[0],local_1c[0],local_18[0]);
        if (iVar1 == 0) {
          return 1;
        }
        iVar1 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::thunk_FUN_00418030
                          ((AnonReceiver_00417FF0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

