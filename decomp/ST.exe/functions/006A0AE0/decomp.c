
void __thiscall
FUN_006a0ae0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = thunk_FUN_00692c10(10,param_4,&local_8,0,param_5);
  puVar1 = puVar1 + 5;
  puVar6 = &local_9c;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(short *)puVar6 = (short)*puVar1;
  local_9c._2_2_ = (undefined2)param_2;
  local_9c._0_2_ = (undefined2)param_1;
  uVar2 = thunk_FUN_006a06d0(this,(param_1 * 0x14) / 100,(param_2 * 0x14) / 100);
  local_98 = (undefined2)uVar2;
  iVar3 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar3;
  iVar3 = FUN_006acf50(*(undefined4 **)this,iVar3 * 0x92 + 0xaa);
  *(int *)this = iVar3;
  puVar5 = &local_9c;
  puVar7 = (undefined4 *)(iVar3 + -0x7a + *(int *)((int)this + 4) * 0x92);
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar5;
  return;
}

