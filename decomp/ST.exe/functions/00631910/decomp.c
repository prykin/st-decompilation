
int __thiscall
FUN_00631910(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar4 = local_28;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_28[1] = param_2;
  uVar3 = 0;
  local_18 = param_5;
  local_c = param_8;
  local_28[2] = param_3;
  local_28[3] = param_4;
  local_28[0] = param_1;
  local_14 = param_6;
  local_10 = param_7;
  local_8 = 0;
  if (*(int *)((int)this + 0x69) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x24,10);
    *(uint **)((int)this + 0x69) = puVar1;
  }
  if (*(uint **)((int)this + 0x69) != (uint *)0x0) {
    uVar3 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x69),local_28);
    if ((int)uVar3 < 0) goto LAB_006319a2;
  }
  thunk_FUN_00631c20(this,param_5,param_6,(byte)param_2,param_1,param_3,uVar3);
LAB_006319a2:
  return uVar3 + 1;
}

