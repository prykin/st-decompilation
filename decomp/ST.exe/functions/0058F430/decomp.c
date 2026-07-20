
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0 */

bool __thiscall STSharkC::sub_0058F430(STSharkC *this)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_14;
  int local_c;
  
  local_14 = 0x7fff;
  this->field_023D = 0;
  *(undefined4 *)&this->field_0x249 = 0xff;
  iVar6 = this->field_0047 + -4;
  if (iVar6 < this->field_0047 + 4) {
    do {
      if (((iVar6 <= SHORT_007fb240) && (-1 < iVar6)) &&
         (iVar9 = this->field_0049 + -4, sVar7 = SHORT_007fb240, iVar9 < this->field_0049 + 4)) {
        do {
          if ((iVar9 <= SHORT_007fb242) && (-1 < iVar9)) {
            local_c = 0;
            do {
              sVar5 = (short)iVar6;
              if ((((-1 < sVar5) && (sVar5 < sVar7)) &&
                  ((sVar8 = (short)iVar9, -1 < sVar8 &&
                   ((((sVar8 < SHORT_007fb242 && (sVar1 = (short)local_c, -1 < sVar1)) &&
                     (sVar1 < SHORT_007fb244)) &&
                    ((this_00 = g_worldCells
                                [(int)sVar8 * (int)sVar7 + (int)sVar1 * (int)SHORT_007fb246 +
                                 (int)sVar5].objects[0], this_00 != (STWorldObject *)0x0 &&
                     (this_00->value_20 == 0x14)))))))) &&
                 (iVar2 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar2 == 0x15)) {
                iVar2 = this->field_0047 - iVar6;
                if (iVar2 < 0) {
                  iVar2 = -iVar2;
                }
                iVar3 = this->field_0049 - iVar9;
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar4 = this->field_004B - local_c;
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                iVar2 = iVar4 + iVar3 + iVar2;
                if (iVar2 < local_14) {
                  this->field_024D = *(undefined2 *)&this_00[1].field_0xe;
                  *(STWorldObjectVTable **)&this->field_0x249 = this_00[1].vtable;
                  this->field_0231 = sVar5;
                  this->field_0233 = sVar8;
                  this->field_0235 = sVar1;
                  this->field_023D = 1;
                  local_14 = iVar2;
                }
              }
              local_c = local_c + 1;
              sVar7 = SHORT_007fb240;
            } while (local_c < 5);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->field_0049 + 4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < this->field_0047 + 4);
  }
  return this->field_023D != 0;
}

