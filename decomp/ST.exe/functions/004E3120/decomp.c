
undefined4 __fastcall FUN_004e3120(TLOBaseTy *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  
  if (param_1->field_0361 == CASE_2) {
    thunk_FUN_004e5f20(*(int *)&param_1->field_0x24,param_1->field_0369);
    if (DAT_008117bc != (undefined4 *)0x0) {
      uVar1 = *(undefined2 *)&param_1->field_0x24;
      puVar4 = local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_e = *(undefined2 *)&param_1->field_0x32;
      local_c = *(undefined2 *)&param_1->field_0369;
      local_14 = 0x5de8;
      local_10 = uVar1;
      uVar2 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,param_1->field_0369);
      local_a = (short)uVar2 + 1;
      (**(code **)*DAT_008117bc)(local_24);
    }
    param_1->field_04D0 = 0;
    TLOBaseTy::RotateSpr(param_1,1);
  }
  return 1;
}

