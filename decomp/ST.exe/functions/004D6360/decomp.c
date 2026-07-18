
int __thiscall FUN_004d6360(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_8;
  
  iVar5 = *(int *)((int)this + 0x265);
  iVar4 = *(int *)((int)this + 0x261);
  iVar1 = *(int *)((int)this + 0x25d);
  iVar7 = 2 - (uint)(*(int *)((int)this + 0x2c) != 1);
  iVar3 = (**(code **)(*(int *)this + 0xf8))();
  if (iVar3 != 0) {
    iVar3 = iVar1 * 0xc9;
    if ((iVar3 <= param_1) && ((int)param_1 < (iVar7 + iVar1) * 0xc9)) {
      iVar1 = iVar4 * 0xc9;
      if ((iVar1 <= param_2) && ((int)param_2 < (iVar4 + iVar7) * 0xc9)) {
        iVar6 = (int)param_3;
        iVar4 = iVar5 * 200;
        if ((iVar4 <= iVar6) && (iVar6 < (iVar5 * 5 + 5) * 0x28)) {
          piVar2 = *(int **)((int)this + 0x360);
          local_18 = 0;
          local_8 = 1;
          iVar7 = (iVar7 * 0xc9) / 2;
          iVar8 = (piVar2[1] - (int)param_2) + iVar7 + iVar1;
          iVar9 = (iVar7 - param_1) + iVar3 + *piVar2;
          iVar5 = (piVar2[2] - iVar6) + iVar4;
          iVar5 = iVar5 * iVar5 + iVar9 * iVar9 + iVar8 * iVar8;
          while( true ) {
            iVar6 = piVar2[3];
            if (((iVar6 == 0) && (piVar2[4] == 0)) && (piVar2[5] == 0)) break;
            iVar8 = iVar1 + (piVar2[4] - (int)param_2) + iVar7;
            iVar6 = (iVar6 - param_1) + iVar7 + iVar3;
            iVar9 = iVar4 + (piVar2[5] - (int)param_3);
            iVar6 = iVar8 * iVar8 + iVar9 * iVar9 + iVar6 * iVar6;
            if (iVar6 < iVar5) {
              local_18 = local_8;
              iVar5 = iVar6;
            }
            local_8 = local_8 + 1;
            piVar2 = piVar2 + 3;
          }
          return local_18;
        }
      }
    }
  }
  return -1;
}

