
int __thiscall FUN_004c5980(void *this,short param_1,short param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_8;
  
  iVar7 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)((int)this + 0x235) * 4) != 1);
  iVar3 = (**(code **)(*(int *)this + 0xf8))();
  if ((iVar3 == 0) && (iVar3 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x04'), 0x10 < iVar3)
     ) {
    return -1;
  }
  iVar3 = *(int *)((int)this + 0x5b0) * 0xc9;
  if ((iVar3 <= param_1) && ((int)param_1 < (*(int *)((int)this + 0x5b0) + iVar7) * 0xc9)) {
    iVar2 = *(int *)((int)this + 0x5b4) * 0xc9;
    if ((iVar2 <= param_2) && ((int)param_2 < (*(int *)((int)this + 0x5b4) + iVar7) * 0xc9)) {
      iVar6 = (int)param_3;
      iVar5 = *(int *)((int)this + 0x5b8) * 200;
      if ((iVar5 <= iVar6) && (iVar6 < (*(int *)((int)this + 0x5b8) * 5 + 5) * 0x28)) {
        piVar1 = *(int **)((int)this + 0x5fb);
        local_18 = 0;
        local_8 = 1;
        iVar4 = (iVar7 * 0xc9) / 2;
        iVar8 = (piVar1[1] - (int)param_2) + iVar4 + iVar2;
        iVar9 = (iVar4 - param_1) + iVar3 + *piVar1;
        iVar7 = (piVar1[2] - iVar6) + iVar5;
        iVar7 = iVar7 * iVar7 + iVar9 * iVar9 + iVar8 * iVar8;
        while( true ) {
          iVar6 = piVar1[3];
          if (((iVar6 == 0) && (piVar1[4] == 0)) && (piVar1[5] == 0)) break;
          iVar6 = (iVar6 - param_1) + iVar4 + iVar3;
          iVar8 = iVar2 + (piVar1[4] - (int)param_2) + iVar4;
          iVar9 = iVar5 + (piVar1[5] - (int)param_3);
          iVar6 = iVar8 * iVar8 + iVar9 * iVar9 + iVar6 * iVar6;
          if (iVar6 < iVar7) {
            local_18 = local_8;
            iVar7 = iVar6;
          }
          local_8 = local_8 + 1;
          piVar1 = piVar1 + 3;
        }
        return local_18;
      }
      return -1;
    }
  }
  return -1;
}

