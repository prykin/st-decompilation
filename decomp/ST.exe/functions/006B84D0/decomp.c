
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void FUN_006b84d0(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 RecoveredRecordView_006B84D0_87AF9D9B *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  if (param_2 == 0) {

    param_2 = FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)param_1);
  }
  local_c = (uint)param_5->field_0012;
  iVar3 = param_3 + param_5->field_000E;
  iVar1 = param_4 + param_5->field_0010;
  local_8 = (uint)param_5->field_0014;
  local_24[2] = param_1->field_0004;
  local_24[1] = 0;
  local_24[0] = 0;
  local_18 = param_1->field_0008;
  pRVar4 = (RecoveredSourceFamily_dibcopy *)
           ((uint)param_1->field_000E * local_24[2] + 0x1f >> 3 & 0x1ffffffc);
  if (local_18 < 0) {
    local_18 = -local_18;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pRVar4;
  }
  else {
    param_1 = (RecoveredSourceFamily_dibcopy *)-(int)pRVar4;
  }
  local_14 = iVar3;
  local_10 = iVar1;

  iVar2 = FUN_006cfeb0(&local_14,&local_14,local_24);
  if (iVar2 != 0) {
    iVar2 = local_10;
    if ((int)param_1 < 0) {
      iVar2 = (local_18 - local_10) + -1;
    }
    FUN_006d2820((byte *)((int)pRVar4 * iVar2 + local_14 + param_2),param_1,
                 (RecoveredRecord_006D2820_5C2BCC8C *)param_5,local_14 - iVar3,local_10 - iVar1,
                 local_c,local_8,0,nullptr,0,0,nullptr);
  }
  return;
}

