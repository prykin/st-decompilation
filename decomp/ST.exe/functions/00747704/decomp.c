
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint FUN_00747704(AnonShape_00747822_A1E67AF6 *param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  AnonShape_00747822_A1E67AF6 *pAVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  uint local_8;
  
  pAVar2 = param_1;
  if (param_3 == (int *)0x0) {
    uVar4 = 0x80004003;
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
    bVar3 = FUN_00747e4e((AnonShape_00747E4E_3F64CF30 *)param_1);
    if (CONCAT31(extraout_var,bVar3) == 1) {
      FUN_0074784f(param_1);
    }
    param_1 = (AnonShape_00747822_A1E67AF6 *)(param_1->field_0008 - param_1->field_0004);
    if ((int)param_2 <= (int)param_1) {
      param_1 = (AnonShape_00747822_A1E67AF6 *)param_2;
    }
    if (param_1 == (AnonShape_00747822_A1E67AF6 *)0x0) {
      uVar4 = 1;
    }
    else {
      do {
        iVar5 = pAVar2->field_0004;
        if (pAVar2->field_0008 == iVar5) break;
        pAVar2->field_0004 = iVar5 + 1;
        iVar5 = (**(code **)(*pAVar2->field_000C + 0x1c))(iVar5);
        if (iVar5 == 0) {
          return 0x80040203;
        }
        iVar6 = FUN_0074dee5(&pAVar2[1].field_0004,iVar5);
        if (iVar6 == 0) {
          piVar1 = (int *)(iVar5 + 0xc);
          *param_3 = (int)piVar1;
          (**(code **)(*piVar1 + 4))(piVar1);
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          FUN_0074df72(&pAVar2[1].field_0004,iVar5);
          param_1 = (AnonShape_00747822_A1E67AF6 *)((int)&param_1[-1].field_0010 + 3);
        }
      } while (param_1 != (AnonShape_00747822_A1E67AF6 *)0x0);
      if (param_4 != (uint *)0x0) {
        *param_4 = local_8;
      }
      uVar4 = (uint)(param_2 != local_8);
    }
  }
  return uVar4;
}

