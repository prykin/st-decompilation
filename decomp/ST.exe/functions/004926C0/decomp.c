
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_004926C0(STBoatC *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short local_dc [94];
  uint local_20;
  STBoatC *local_1c;
  int local_18;
  uint local_14;
  short *local_10;
  int local_c;
  int local_8;
  
  local_dc[2] = 0;
  local_dc[3] = 0;
  local_dc[0xc] = 0;
  local_dc[0xd] = 0;
  local_dc[0x10] = 0;
  local_dc[0x11] = 0;
  local_dc[0x16] = 0;
  local_dc[0x17] = 0;
  local_dc[0x26] = 0;
  local_dc[0x27] = 0;
  local_dc[0x38] = 0;
  local_dc[0x39] = 0;
  local_dc[0x44] = 0;
  local_dc[0x45] = 0;
  local_dc[0x52] = 0;
  local_dc[0x53] = 0;
  uVar1 = *(ushort *)&this->field_0x5ec;
  local_dc[0x2e] = 2;
  local_dc[0x2f] = 0;
  local_dc[0x3e] = 2;
  local_dc[0x3f] = 0;
  local_dc[0x42] = 2;
  local_dc[0x43] = 0;
  local_dc[0x46] = 2;
  local_dc[0x47] = 0;
  local_dc[0x4c] = 2;
  local_dc[0x4d] = 0;
  local_dc[0x50] = 2;
  local_dc[0x51] = 0;
  local_dc[0x54] = 2;
  local_dc[0x55] = 0;
  local_dc[0x58] = 2;
  local_dc[0x59] = 0;
  local_dc[0x5a] = 2;
  local_dc[0x5b] = 0;
  local_dc[0x5c] = 2;
  local_dc[0x5d] = 0;
  uVar2 = this->field_05EE;
  local_dc[0x1e] = -2;
  local_dc[0x1f] = -1;
  local_dc[0x20] = -2;
  local_dc[0x21] = -1;
  local_dc[0x24] = -2;
  local_dc[0x25] = -1;
  local_dc[0x28] = -2;
  local_dc[0x29] = -1;
  local_dc[0x2c] = -2;
  local_dc[0x2d] = -1;
  local_dc[0x30] = -2;
  local_dc[0x31] = -1;
  local_dc[0x32] = -2;
  local_dc[0x33] = -1;
  local_dc[0x36] = -2;
  local_dc[0x37] = -1;
  local_dc[0x3a] = -2;
  local_dc[0x3b] = -1;
  local_dc[0x4a] = -2;
  local_dc[0x4b] = -1;
  local_1c = this;
  local_dc[0] = -1;
  local_dc[1] = -1;
  local_dc[4] = -1;
  local_dc[5] = -1;
  local_dc[6] = 1;
  local_dc[7] = 0;
  local_dc[8] = -1;
  local_dc[9] = -1;
  local_dc[10] = -1;
  local_dc[0xb] = -1;
  local_dc[0xe] = 1;
  local_dc[0xf] = 0;
  local_dc[0x12] = -1;
  local_dc[0x13] = -1;
  local_dc[0x14] = 1;
  local_dc[0x15] = 0;
  local_dc[0x18] = 1;
  local_dc[0x19] = 0;
  local_dc[0x1a] = 1;
  local_dc[0x1b] = 0;
  local_dc[0x1c] = 1;
  local_dc[0x1d] = 0;
  local_dc[0x22] = -1;
  local_dc[0x23] = -1;
  local_dc[0x2a] = 1;
  local_dc[0x2b] = 0;
  local_dc[0x34] = -1;
  local_dc[0x35] = -1;
  local_dc[0x3c] = 1;
  local_dc[0x3d] = 0;
  local_dc[0x40] = -1;
  local_dc[0x41] = -1;
  local_dc[0x48] = 1;
  local_dc[0x49] = 0;
  local_dc[0x4e] = -1;
  local_dc[0x4f] = -1;
  local_dc[0x56] = 1;
  local_dc[0x57] = 0;
  local_14 = (uint)uVar2;
  local_20 = (uint)uVar1;
  if ((((((short)uVar1 < 0) || (SHORT_007fb240 <= (short)uVar1)) || ((short)uVar2 < 0)) ||
      (((SHORT_007fb242 <= (short)uVar2 || (SHORT_007fb244 < 5)) ||
       (local_8 = (int)SHORT_007fb246,
       *(int *)(DAT_007fb248 +
               ((int)(short)uVar2 * (int)SHORT_007fb240 + SHORT_007fb246 * 4 + (int)(short)uVar1) *
               8) == 0)))) &&
     ((((short)uVar1 < 0 || (SHORT_007fb240 <= (short)uVar1)) ||
      (((short)uVar2 < 0 ||
       (((SHORT_007fb242 <= (short)uVar2 || (SHORT_007fb244 < 5)) ||
        (local_8 = (int)SHORT_007fb246,
        *(int *)(DAT_007fb248 + 4 +
                ((int)(short)uVar2 * (int)SHORT_007fb240 + SHORT_007fb246 * 4 + (int)(short)uVar1) *
                8) == 0)))))))) {
    *(ushort *)&this->field_0x5f2 = uVar1;
    *(ushort *)&this->field_0x5f4 = uVar2;
    this->field_05F6 = 4;
    return 1;
  }
  iVar6 = 4;
  local_18 = *(short *)&this->field_0x5f0 + 1;
  if (local_18 < 5) {
    do {
      local_10 = local_dc;
      local_c = 0;
      do {
        sVar4 = *local_10 + uVar2;
        sVar3 = local_10[-2] + uVar1;
        if ((((-1 < sVar3) && (sVar3 < SHORT_007fb278)) &&
            ((-1 < sVar4 && (sVar4 < SHORT_007fb27a)))) &&
           ((sVar5 = (short)iVar6, SHORT_007fb240 <= sVar3 ||
            ((((SHORT_007fb242 <= sVar4 || (sVar5 < 0)) ||
              ((SHORT_007fb244 <= sVar5 ||
               (*(int *)(DAT_007fb248 +
                        ((int)sVar4 * (int)SHORT_007fb240 + sVar5 * local_8 + (int)sVar3) * 8) == 0)
               ))) && ((((SHORT_007fb240 <= sVar3 || (SHORT_007fb242 <= sVar4)) || (sVar5 < 0)) ||
                       ((SHORT_007fb244 <= sVar5 ||
                        (*(int *)(DAT_007fb248 + 4 +
                                 ((int)sVar4 * (int)SHORT_007fb240 + sVar5 * local_8 + (int)sVar3) *
                                 8) == 0)))))))))) {
          this->field_05F6 = sVar5;
          *(short *)&this->field_0x5f4 = sVar4;
          *(short *)&this->field_0x5f2 = sVar3;
          return 1;
        }
        local_10 = local_10 + 4;
        local_c = local_c + 1;
      } while (local_c < 0x18);
      iVar6 = iVar6 + -1;
    } while (local_18 <= iVar6);
  }
  return 0;
}

