
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=6 */

bool __thiscall STBoatC::sub_004939B0(STBoatC *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  local_c = 1000000;
  local_8 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = this->field_0639 + local_8;
      sVar6 = (short)iVar7;
      sVar2 = (short)local_8;
      if (((iVar4 == this->field_005B) && (this->field_063B + iVar7 == (int)this->field_005D)) &&
         (this->field_063D + 1 == (int)this->field_005F)) {
        *param_1 = this->field_0639 + sVar2;
        *param_2 = this->field_063B + sVar6;
        *param_3 = this->field_063D + 1;
        return true;
      }
      sVar1 = this->field_063D + 1;
      sVar5 = sVar6 + this->field_063B;
      sVar3 = sVar2 + this->field_0639;
      if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
           ((sVar5 < 0 || ((SHORT_007fb242 <= sVar5 || (sVar1 < 0)))))) || (SHORT_007fb244 <= sVar1)
          ) || (*(int *)(DAT_007fb248 +
                        ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar5 +
                        (int)sVar3) * 8) == 0)) {
        iVar4 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,iVar4
                             ,this->field_063B + iVar7,this->field_063D + 1);
        if (iVar4 < local_c) {
          *param_1 = this->field_0639 + sVar2;
          *param_2 = sVar6 + this->field_063B;
          *param_3 = this->field_063D + 1;
          local_c = iVar4;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return local_c != 1000000;
    }
  } while( true );
}

