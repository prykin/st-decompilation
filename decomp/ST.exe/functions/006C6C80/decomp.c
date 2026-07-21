
uint FUN_006c6c80(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_108;
  undefined4 local_107;
  uint local_8;

  iVar2 = param_1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(param_1 + 0x42))(param_1,(int)&param_1 + 3,1);
  if (uVar3 != 1) {
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    return 0xfffffffb;
  }
  bVar1 = false;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (param_1._3_1_ == -1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if (((char)local_8 == '\v') &&
       (iVar4 = Library::MSVCRT::_strncmp((char *)&local_108,s_NETSCAPE2_0_007edfbc,0xb), iVar4 == 0
       )) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
  while( true ) {
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if ((char)local_8 == '\0') {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) break;
    if (((bVar1) && ((local_108 & 7) == 1)) && (2 < (byte)local_8)) {
      *(uint *)(iVar2 + 0x56) = *(uint *)(iVar2 + 0x56) | 2;
      *(uint *)(iVar2 + 0x5a) = local_107 & 0xffff;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((param_1._3_1_ == -7) && (3 < (byte)local_8)) {
      *(byte *)(iVar2 + 0x5e) = local_108;
      *(short *)(iVar2 + 0x5f) = (short)local_107;
      *(undefined1 *)(iVar2 + 0x61) = local_107._2_1_;
      if ((short)local_107 != 0) {
        *(uint *)(iVar2 + 0x56) = *(uint *)(iVar2 + 0x56) | 2;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  return 0xfffffffb;
}

