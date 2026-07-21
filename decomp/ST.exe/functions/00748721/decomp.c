
int FUN_00748721(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)(*(int *)(param_1 + -0x98) + 0x38))();
    if (iVar2 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)*piVar1)(piVar1,&DAT_007a1b70,&param_2);
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x10) = 0x30;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x20,param_1 + 0x28);
        if (-1 < iVar2) {
          *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 0x110;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1 + 0x34);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0x38);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1);
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
      }
      else {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (**(code **)(*param_2 + 0x4c))(param_2,0x30,param_1 + 0x10);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_2 + 8))(param_2);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((*(byte *)(param_1 + 0x18) & 8) == 0) ||
         (iVar2 = (**(code **)(*(int *)(param_1 + -0x98) + 0x20))(*(undefined4 *)(param_1 + 0x34)),
         iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        *(undefined4 *)(param_1 + -0x2c) = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)(param_1 + -0x8c) + 0x38))((int *)(param_1 + -0x8c));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_00747406(*(void **)(param_1 + -0x28),3,(int *)0x8004022a,0);
        iVar2 = -0x7ffbfe00;
      }
    }
  }
  return iVar2;
}

