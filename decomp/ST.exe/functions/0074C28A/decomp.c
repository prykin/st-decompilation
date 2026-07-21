
/* [STVTableApplier] Virtual slot 0079DDB0+0x14 */

int FUN_0074c28a(AnonShape_007470E5_0A8F5E67 *param_1)

{
  undefined4 *puVar1;
  AnonShape_007470E5_0A8F5E67 *pAVar2;
  AnonShape_007470E5_0A8F5E67 *pAVar3;

  pAVar3 = param_1;
  pAVar2 = param_1 + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  puVar1 = &param_1->field_0008;
  param_1 = (AnonShape_007470E5_0A8F5E67 *)0x0;
  if (*puVar1 != 1) {
    if ((*(int *)&pAVar3[2].field_0x20 == 0) ||
       (*(int *)(*(int *)&pAVar3[2].field_0x20 + 0x18) == 0)) {
      if ((*(int **)&pAVar3[2].field_0x24 != (int *)0x0) && (*(int *)&pAVar3[1].field_0x14 == 0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pAVar3[2].field_0x24 + 0x4c))();
        *(undefined4 *)&pAVar3[1].field_0x14 = 1;
      }
    }
    else if (*(int *)(*(int *)&pAVar3[2].field_0x24 + 0x18) != 0) {
      if (*puVar1 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        param_1 = (AnonShape_007470E5_0A8F5E67 *)
                  (**(code **)(*(int *)&pAVar3[-1].field_0x24 + 0x38))();
        LeaveCriticalSection((LPCRITICAL_SECTION)&pAVar3[2].field_0008);
      }
      if (-1 < (int)param_1) {
        param_1 = (AnonShape_007470E5_0A8F5E67 *)FUN_007470e5(pAVar3);
      }
      goto LAB_0074c313;
    }
    pAVar3->field_0008 = 1;
  }
LAB_0074c313:
  *(undefined4 *)&pAVar3[1].field_0x18 = 0;
  *(undefined4 *)&pAVar3[1].field_0x1c = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&pAVar2->field_0x20);
  return (int)param_1;
}

