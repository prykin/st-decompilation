
/* [STVTableApplier] Virtual slot 0079DC74+0x14

   [STVTableApplier] Virtual slot 0079DE90+0x14

   [STVTableApplier] Virtual slot 007A14C8+0x14

   [STVTableApplier] Virtual slot 007A1780+0x14

   [STVTableApplier] Virtual slot 007A1908+0x14 */

int FUN_007486dd(AnonShape_007480A5_22FE1AF9 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  lpCriticalSection = param_1->field_005C;
  EnterCriticalSection(lpCriticalSection);
  iVar2 = FUN_007480a5(param_1);
  if (iVar2 == 0) {
    piVar1 = *(int **)&param_1[1].field_0x28;
    if (piVar1 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)&param_1[1].field_0x28 = 0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}

