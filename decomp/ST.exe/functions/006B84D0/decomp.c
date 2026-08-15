
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void FUN_006b84d0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 byte *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  if (param_2 == 0) {
    param_2 = FUN_006b4fa0((int *)param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar1 = *(short *)(param_5 + 0xe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)(param_5 + 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = (uint)*(short *)(param_5 + 0x12);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = (uint)*(short *)(param_5 + 0x14);
  local_24[2] = param_1->field_0004;
  local_24[1] = 0;
  local_24[0] = 0;
  local_18 = param_1->field_0008;
  pRVar4 = (RecoveredSourceFamily_dibcopy *)
           ((uint)param_1->field_000E * local_24[2] + 0x1f >> 3 & 0x1ffffffc);
  if (local_18 < 0) {
    local_18 = -local_18;
    param_1 = pRVar4;
  }
  else {
    param_1 = (RecoveredSourceFamily_dibcopy *)-(int)pRVar4;
  }
  local_14 = param_3 + sVar1;
  local_10 = param_4 + sVar2;
  iVar3 = FUN_006cfeb0(&local_14,&local_14,local_24);
  if (iVar3 != 0) {
    iVar3 = local_10;
    if ((int)param_1 < 0) {
      iVar3 = (local_18 - local_10) + -1;
    }
    FUN_006d2820((byte *)((int)pRVar4 * iVar3 + local_14 + param_2),param_1,param_5,
                 local_14 - (param_3 + sVar1),local_10 - (param_4 + sVar2),local_c,local_8,0,
                 nullptr,0,0,nullptr);
  }
  return;
}

