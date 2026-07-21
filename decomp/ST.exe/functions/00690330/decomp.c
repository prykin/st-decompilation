
undefined4 __thiscall FUN_00690330(void *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *(int *)((int)this + 0xa5);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c);
    }
    else {
      iVar1 = 0;
    }
    if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar2 = (**(code **)**(undefined4 **)(iVar1 + 4))(param_2);
      return uVar2;
    }
  }
  return 0xffff;
}

