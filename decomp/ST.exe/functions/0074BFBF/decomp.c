
int __thiscall FUN_0074bfbf(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  void *local_10;
  int *local_c;
  int *local_8;

  iVar5 = *(int *)((int)this + 0x8c);
  bVar6 = *(int *)((int)this + 0x54) != 0;
  uVar3 = *(uint *)(iVar5 + 0xb0);
  if ((uVar3 & 1) == 0) {
    bVar6 = bVar6 | 2;
  }
  puVar1 = (undefined4 *)(iVar5 + 0xc0);
  local_c = *(int **)(*(int *)((int)this + 0x90) + 0x98);
  puVar2 = (undefined4 *)(iVar5 + 0xb8);
  local_10 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*local_c + 0x1c))
                    (local_c,&local_8,-(uint)((uVar3 & 0x10) != 0) & (uint)puVar2,
                     -(uint)((uVar3 & 0x100) != 0) & (uint)puVar1,bVar6);
  *param_2 = local_8;
  if (-1 < iVar4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)*local_8)(local_8,&DAT_007a1b70,&local_c);
    if (iVar4 < 0) {
      if ((*(byte *)(iVar5 + 0xb0) & 0x10) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x18))(local_8,puVar2,puVar1);
      }
      if ((*(byte *)(iVar5 + 0xb0) & 1) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x20))(local_8,1);
      }
      if ((*(byte *)(iVar5 + 0xb0) & 4) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x40))(local_8,1);
        *(undefined4 *)((int)local_10 + 0x54) = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*param_1 + 0x44))(param_1,local_20,local_18);
      if (iVar5 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0x48))(local_8,local_20,local_18);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 0x4c))(local_c,0x10,&local_50);
      local_4c = *(undefined4 *)(iVar5 + 0xac);
      local_48 = (local_48 ^ *(uint *)(iVar5 + 0xb0)) & 8 ^ *(uint *)(iVar5 + 0xb0);
      local_40 = *puVar2;
      local_3c = *(undefined4 *)(iVar5 + 0xbc);
      local_38 = *puVar1;
      local_34 = *(undefined4 *)(iVar5 + 0xc4);
      local_50 = 0x20;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 0x50))(local_c,0x20,&local_50);
      if ((*(byte *)(iVar5 + 0xb0) & 4) != 0) {
        *(undefined4 *)((int)local_10 + 0x54) = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*local_c + 8))(local_c);
    }
    iVar4 = 0;
  }
  return iVar4;
}

