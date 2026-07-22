
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint FUN_00747704(AnonShape_00747822_A1E67AF6 *param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  AnonShape_00747822_A1E67AF6 *pAVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;

  pAVar2 = param_1;
  if (param_3 == (int *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    if (param_4 == (uint *)0x0) {
      if (1 < param_2) {
        return 0x80070057;
      }
    }
    else {
      *param_4 = 0;
    }
    local_8 = 0;
    iVar4 = FUN_00747e4e(param_1);
    if (iVar4 == 1) {
      FUN_0074784f(param_1);
    }
    param_1 = (AnonShape_00747822_A1E67AF6 *)(param_1->field_0008 - param_1->field_0004);
    if ((int)param_2 <= (int)param_1) {
      param_1 = (AnonShape_00747822_A1E67AF6 *)param_2;
    }
    if (param_1 == (AnonShape_00747822_A1E67AF6 *)0x0) {
      uVar3 = 1;
    }
    else {
      do {
        iVar4 = pAVar2->field_0004;
        if (pAVar2->field_0008 == iVar4) break;
        pAVar2->field_0004 = iVar4 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*pAVar2->field_000C + 0x1c))(iVar4);
        if (iVar4 == 0) {
          return 0x80040203;
        }
        iVar5 = FUN_0074dee5(&pAVar2[1].field_0004,iVar4);
        if (iVar5 == 0) {
          piVar1 = (int *)(iVar4 + 0xc);
          *param_3 = (int)piVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar1 + 4))(piVar1);
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          FUN_0074df72(&pAVar2[1].field_0004,iVar4);
          param_1 = (AnonShape_00747822_A1E67AF6 *)((int)&param_1[-1].field_0010 + 3);
        }
      } while (param_1 != (AnonShape_00747822_A1E67AF6 *)0x0);
      if (param_4 != (uint *)0x0) {
        *param_4 = local_8;
      }
      uVar3 = (uint)(param_2 != local_8);
    }
  }
  return uVar3;
}

