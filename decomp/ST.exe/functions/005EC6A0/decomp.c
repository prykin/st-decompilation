
void __fastcall FUN_005ec6a0(AnonShape_005EC6A0_C8559927 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_12 = param_1->field_0032;
    local_10 = param_1->field_032A;
    local_18 = 0x5ddb;
    if (param_1->field_0354 != 0) {
      iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_0354,&local_8);
      if (iVar1 != -4) {
        local_e = *(undefined2 *)(local_8 + 0x32);
      }
    }
    (**(code **)*DAT_008117bc)(local_28);
  }
  return;
}

