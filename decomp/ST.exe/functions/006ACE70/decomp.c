
void __fastcall FUN_006ace70(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;

  iVar3 = 0x20;
  uVar4 = param_2;
  if (param_2 == 0) {
    iVar3 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar4 = in_EAX;
  }
  if ((uVar4 & 0xffff0000) == 0) {
    uVar1 = 0xf;
    uVar5 = (ushort)uVar4;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar6 = (uint)uVar1;
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
  }
  uVar4 = iVar3 + uVar6 + 1;
  if ((byte)uVar4 < 0x3f) {
    bVar2 = (byte)(uVar4 >> 1) & 0x1f;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    uVar4 = in_EAX >> bVar2 | param_2 << 0x20 - bVar2;
    do {
      uVar6 = uVar4;
      if (uVar4 < param_2) {
        uVar6 = (param_2 >> 1) + param_2;
      }
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = (uint)(CONCAT44(param_2,in_EAX) / (ulonglong)uVar6);
      uVar7 = uVar6 + uVar4;
      uVar4 = uVar7 >> 1 | (uint)CARRY4(uVar6,uVar4) << 0x1f;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      if ((int)(CONCAT44(param_2,in_EAX) % (ulonglong)uVar6) != 0) {
        uVar4 = uVar4 + ((uVar7 & 1) != 0);
      }
    } while (uVar4 != uVar6);
  }
  return;
}

