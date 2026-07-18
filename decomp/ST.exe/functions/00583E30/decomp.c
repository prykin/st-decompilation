
int __fastcall FUN_00583e30(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  short local_20 [2];
  short local_1c [2];
  short local_18 [2];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = 2;
  if (*(int *)((int)param_1 + 0x235) != 2) {
    local_14 = thunk_FUN_00584060(param_1,&local_10,&local_c,&local_8);
    if (local_14 == 1) {
      if (*(int *)((int)param_1 + 0x23d) != 0) {
        iVar1 = local_10 - *(short *)((int)param_1 + 0x47);
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (iVar1 < 2) {
          iVar1 = local_c - *(short *)((int)param_1 + 0x49);
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if (iVar1 < 2) {
            iVar1 = local_8 - *(short *)((int)param_1 + 0x4b);
            if (iVar1 < 0) {
              iVar1 = -iVar1;
            }
            if (iVar1 < 2) {
              iVar1 = thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),
                                         *(short *)((int)param_1 + 0x43),
                                         *(short *)((int)param_1 + 0x45),
                                         (short)local_10 * 0xc9 + 100,(short)local_c * 0xc9 + 100,
                                         (short)local_8 * 200 + 100,6);
              return (-(uint)(iVar1 != 0) & 0xfffffffd) + 3;
            }
          }
        }
      }
      *(undefined4 *)((int)param_1 + 0x239) = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x231) = 1;
      if (*(int *)((int)param_1 + 0x247) == 10) {
        *(undefined4 *)((int)param_1 + 0x24b) = 0;
      }
      uVar2 = FUN_006db910((int)*(short *)((int)param_1 + 0x47),(int)*(short *)((int)param_1 + 0x49)
                           ,local_10,local_c);
      uVar3 = FUN_006db990(uVar2,8);
      uVar2 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)param_1 + 0x1c) = uVar2;
      uVar2 = uVar2 >> 0x10;
      piVar9 = (int *)local_18;
      iVar5 = (int)*(short *)((int)param_1 + 0x49);
      piVar8 = (int *)local_1c;
      iVar6 = (int)*(short *)((int)param_1 + 0x47);
      piVar7 = (int *)local_20;
      iVar1 = (int)*(short *)((int)param_1 + 0x4b);
      iVar4 = FUN_006acf90(iVar6,iVar5,local_10,local_c);
      iVar1 = thunk_FUN_005845b0(uVar3,local_8 - *(short *)((int)param_1 + 0x4b),iVar4,iVar6,iVar5,
                                 iVar1,piVar7,piVar8,piVar9,uVar2);
      if (iVar1 != 0) {
        thunk_FUN_00417ff0(param_1,6);
        thunk_FUN_00418010(param_1,5);
        iVar1 = thunk_FUN_00418030(param_1,local_20[0],local_1c[0],local_18[0]);
        if (iVar1 == 0) {
          return 1;
        }
        iVar1 = thunk_FUN_00418030(param_1,(short)local_10,(short)local_c,(short)local_8);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

