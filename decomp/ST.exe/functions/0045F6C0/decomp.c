#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_0045F6C0(STBoatC *this)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  int uVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int arg_6;
  uint uVar11;
  short arg_5;
  short arg_4;
  int iVar12;
  int iVar13;

  iVar12 = 0;
  /* ST_CALLSITE[0045F6D7]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar6 = LookupRecordByte((char)this->field_0024);
  uVar6 = (int)(byte)uVar6;
  if (uVar6 == 1) {
    iVar12 = this->field_0024;
    iVar13 = 5;
  }
  else if (uVar6 == 2) {
    iVar12 = this->field_0024;
    iVar13 = 0x82;
  }
  else {
    if (uVar6 != 3) goto LAB_0045f710;
    iVar12 = this->field_0024;
    iVar13 = 0x6d;
  }
  iVar12 = thunk_FUN_004e60d0(iVar12,iVar13);
LAB_0045f710:
  bVar4 = thunk_FUN_00430750(this->field_06F7);
  if (iVar12 == 1) {
    bVar4 = bVar4 + 2;
  }
  else if (iVar12 == 2) {
    bVar4 = bVar4 + 6;
  }
  else if (iVar12 == 3) {
    bVar4 = bVar4 + 8;
  }
  this->field_0061 = bVar4;
  this->field_00E3 = '\x01';
  this->field_0062 = bVar4 >> 1;
  puVar1 = this->field_0097;
  this->field_00D3 = 1;
  arg_4 = puVar1[4] * 0xc9 + 100;
  uVar8 = (int)arg_4 - (int)this->field_0041;
  arg_5 = puVar1[5] * 0xc9 + 100;
  uVar11 = (int)uVar8 >> 0x1f;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  arg_6 = CONCAT22(extraout_var,puVar1[6] * 200) + 100;
  iVar12 = (uVar8 ^ uVar11) - uVar11;
  uVar8 = (int)arg_5 - (int)this->field_0043;
  uVar11 = (int)uVar8 >> 0x1f;
  iVar13 = (uVar8 ^ uVar11) - uVar11;
  sVar5 = (short)arg_6;
  uVar8 = (int)sVar5 - (int)this->field_0045;
  uVar11 = (int)uVar8 >> 0x1f;
  iVar9 = (uVar8 ^ uVar11) - uVar11;
  if (((iVar9 != 0) && (iVar12 == 0 || 2 < iVar9 / iVar12)) && (iVar13 == 0 || 2 < iVar9 / iVar13))
  {
    bVar4 = bVar4 >> 1;
  }
  /* ST_CALLSITE[0045F827]: CALL 0x00402455; direct=00402455 sub_00415B30 */
  iVar10 = sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,arg_4,arg_5,sVar5,
                        bVar4);
  if (iVar10 != 0) {
    return 0xffffffff;
  }
  if ((this->field_008C != 1) && ((this->field_0041 != arg_4 || (this->field_0043 != arg_5)))) {
    bVar3 = false;
    bVar2 = false;
    if ((iVar12 != 0) && (0x23a < (iVar9 * 100) / iVar12)) {
      bVar2 = true;
    }
    if ((iVar13 != 0) && (0x23a < (iVar9 * 100) / iVar13)) {
      bVar3 = true;
    }
    if ((!bVar2) || (!bVar3)) {
      /* ST_CALLSITE[0045F8C9]: CALL dword ptr [EDX + 0x10] */
      sVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar13), (uint16_t)(this->field_0045)),arg_4,arg_5,arg_6);
      /* ST_CALLSITE[0045F8CF]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar7 = sub_004176C0(this,sVar5);
      if ((short)uVar7 != this->field_006C) {
        thunk_FUN_00417740(this,this->field_006C,(short)uVar7);
      }
    }
  }
  return 0;
}

