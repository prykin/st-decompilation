
void __cdecl
FUN_0057b990(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [5];
  undefined4 *local_2c;
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;

  if (param_3 != 0) {
    puVar2 = local_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = local_20;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_20[2] = param_1;
    local_20[0] = param_2;
    local_14 = param_5;
    local_12 = param_4;
    local_40[2] = *(undefined4 *)(param_3 + 8);
    local_20[1] = param_6;
    local_2c = local_20;
    local_40[3] = 2;
    local_40[4] = param_7;
    (*PTR_00802a38->vtable->SendMessage)((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_40);
  }
  return;
}

