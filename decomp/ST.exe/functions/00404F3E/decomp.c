
undefined4 __fastcall thunk_FUN_0058f030(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  short asStack_10 [2];
  short asStack_c [2];
  short asStack_8 [2];
  
  uVar1 = FUN_006db910((int)*(short *)((int)param_1 + 0x47),(int)*(short *)((int)param_1 + 0x49),
                       (int)*(short *)((int)param_1 + 0x231),(int)*(short *)((int)param_1 + 0x233));
  uVar2 = FUN_006db990(uVar1,8);
  uVar1 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar1;
  uVar1 = uVar1 >> 0x10;
  piVar9 = (int *)asStack_8;
  piVar8 = (int *)asStack_c;
  iVar5 = (int)*(short *)((int)param_1 + 0x49);
  iVar6 = (int)*(short *)((int)param_1 + 0x47);
  piVar7 = (int *)asStack_10;
  iVar3 = (int)*(short *)((int)param_1 + 0x4b);
  iVar4 = FUN_006acf90(iVar6,iVar5,(int)*(short *)((int)param_1 + 0x231),
                       (int)*(short *)((int)param_1 + 0x233));
  iVar3 = thunk_FUN_005845b0(uVar2,(int)*(short *)((int)param_1 + 0x235) -
                                   (int)*(short *)((int)param_1 + 0x4b),iVar4,iVar6,iVar5,iVar3,
                             piVar7,piVar8,piVar9,uVar1);
  if (iVar3 == 0) {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar3 = thunk_FUN_00418030(param_1,*(short *)((int)param_1 + 0x231),
                               *(short *)((int)param_1 + 0x233),*(short *)((int)param_1 + 0x235));
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    thunk_FUN_00417ff0(param_1,8);
    thunk_FUN_00418010(param_1,6);
    iVar3 = thunk_FUN_00418030(param_1,asStack_10[0],asStack_c[0],asStack_8[0]);
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = thunk_FUN_00418030(param_1,*(short *)((int)param_1 + 0x231),
                               *(short *)((int)param_1 + 0x233),*(short *)((int)param_1 + 0x235));
    if (iVar3 == 0) {
      return 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x253) = 0x1f;
  return 0;
}

