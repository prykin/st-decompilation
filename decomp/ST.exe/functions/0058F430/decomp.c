
/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0 */

bool __thiscall STSharkC::sub_0058F430(STSharkC *this)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int local_14;
  int local_c;
  
  local_14 = 0x7fff;
  this->field_023D = 0;
  *(undefined4 *)&this->field_0x249 = 0xff;
  iVar7 = this->field_0047 + -4;
  if (iVar7 < this->field_0047 + 4) {
    do {
      if (((iVar7 <= SHORT_007fb240) && (-1 < iVar7)) &&
         (iVar10 = this->field_0049 + -4, sVar8 = SHORT_007fb240, iVar10 < this->field_0049 + 4)) {
        do {
          if ((iVar10 <= SHORT_007fb242) && (-1 < iVar10)) {
            local_c = 0;
            do {
              sVar6 = (short)iVar7;
              if ((((-1 < sVar6) && (sVar6 < sVar8)) &&
                  ((sVar9 = (short)iVar10, -1 < sVar9 &&
                   ((((sVar9 < SHORT_007fb242 && (sVar2 = (short)local_c, -1 < sVar2)) &&
                     (sVar2 < SHORT_007fb244)) &&
                    ((piVar1 = *(int **)(DAT_007fb248 +
                                        ((int)sVar9 * (int)sVar8 + (int)sVar2 * (int)SHORT_007fb246
                                        + (int)sVar6) * 8), piVar1 != (int *)0x0 &&
                     (piVar1[8] == 0x14)))))))) &&
                 (iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 == 0x15)) {
                iVar3 = this->field_0047 - iVar7;
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar4 = this->field_0049 - iVar10;
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                iVar5 = this->field_004B - local_c;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                iVar3 = iVar5 + iVar4 + iVar3;
                if (iVar3 < local_14) {
                  this->field_024D = *(undefined2 *)((int)piVar1 + 0x32);
                  *(int *)&this->field_0x249 = piVar1[9];
                  this->field_0231 = sVar6;
                  this->field_0233 = sVar9;
                  this->field_0235 = sVar2;
                  this->field_023D = 1;
                  local_14 = iVar3;
                }
              }
              local_c = local_c + 1;
              sVar8 = SHORT_007fb240;
            } while (local_c < 5);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < this->field_0049 + 4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < this->field_0047 + 4);
  }
  return this->field_023D != 0;
}

