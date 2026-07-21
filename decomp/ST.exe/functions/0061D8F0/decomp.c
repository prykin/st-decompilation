
int __thiscall FUN_0061d8f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_10;
  int local_c;
  int *local_8;

  if (this == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)((int)this + 0x1c);
  }
  puVar5 = param_1;
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_c = thunk_FUN_0061d9c0(this,(ushort *)(param_1 + 0x24),&local_10,1);
  piVar1 = (int *)(local_c + (int)(param_1 + 0x24));
  piVar6 = piVar1 + 1;
  local_8 = piVar6;
  piVar2 = (int *)Library::DKW::LIB::FUN_006aac70(*(int *)((int)this + 0x93) << 4);
  *(int **)((int)this + 0x57) = piVar2;
  for (iVar4 = (*(uint *)((int)this + 0x93) & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar2 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar2 = (int *)((int)piVar2 + 1);
  }
  uVar3 = FUN_006b0060((uint *)0x0,(uint *)((int)local_8 + *piVar1 + 4));
  *(undefined4 *)((int)this + 0xa3) = uVar3;
  return local_c;
}

