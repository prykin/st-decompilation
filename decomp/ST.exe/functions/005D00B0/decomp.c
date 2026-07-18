
void __thiscall FUN_005d00b0(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = *(uint **)(param_1 + 0x50);
  puVar3 = &local_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_64._3_1_ = *(undefined1 *)(param_1 + 3);
  local_64._2_1_ = *(undefined1 *)(param_1 + 2);
  local_60 = 1;
  FUN_006afe40(&local_14,puVar1);
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_1a = *(undefined1 *)(param_1 + 0x4a);
  local_c = *(undefined4 *)(param_1 + 0x58);
  local_8 = *(undefined4 *)(param_1 + 0x5c);
  local_19 = 0;
  local_15 = 0;
  FUN_006b11d0(*(uint **)((int)this + 0x1f84),param_2,&local_64);
  return;
}

