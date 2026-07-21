
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (17), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00465E15
   -> CMP CMP EAX,EDI | 00465C60 @ 0046604C -> CMP CMP EAX,EDI | 00465C60 @ 004663A9 -> TEST TEST
   EAX,EAX | 00465C60 @ 004666BB -> TEST TEST EAX,EAX | 00465C60 @ 00466AEA -> CMP CMP EAX,EDI |
   00465C60 @ 00466D3A -> CMP CMP EAX,EDI | 00465C60 @ 00466F7E -> CMP CMP EAX,EDI | 00465C60 @
   00467202 -> CMP CMP EAX,EDI | 00465C60 @ 004678DA -> CMP CMP EAX,EDI | 00465C60 @ 00467C43 ->
   TEST TEST EAX,EAX | 00465C60 @ 00467FDB -> TEST TEST EAX,EAX | 00465C60 @ 00468498 -> CMP CMP
   EAX,EBX | 00465C60 @ 0046870E -> CMP CMP EAX,EDI | 00465C60 @ 00468AAC -> CMP CMP EAX,EDI |
   00465C60 @ 00469722 -> CMP CMP EAX,EBX | 00465C60 @ 00469969 -> CMP CMP EAX,EBX | 0049C210 @
   0049C896 -> TEST TEST EAX,EAX */

int __fastcall FUN_0048d440(AnonShape_0048D440_9DC42AE7 *param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STGroupBoatC *this;
  int iVar1;
  int iVar2;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  this = thunk_FUN_0042b760(param_1->field_0024,
                            CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_0030));
  if (param_1->field_04A1 == -1) {
    if (param_1->field_04AB != -1) {
      return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
    }
    return 0;
  }
  if (param_1->field_04AB == -1) {
    return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
  }
  iVar1 = thunk_FUN_0040bc90(this,(uint)param_1->field_0032,(short *)(int)param_1->field_049B,
                             (short *)(int)param_1->field_049D,(short *)(param_1->field_049F + 1),
                             '\0');
  iVar2 = thunk_FUN_0040bc90(this,(uint)param_1->field_0032,(short *)(int)param_1->field_04A5,
                             (short *)(int)param_1->field_04A7,(short *)(param_1->field_04A9 + 1),
                             '\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return (uint)(param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28);
    }
    return ((((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2) * 100) / 0x28 <=
            100 - (iVar1 * 100) / (iVar2 + iVar1)) - 1 & 6) + 1;
  }
  if (iVar2 != -4) {
    return (param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1 & 7;
  }
  return 0;
}

