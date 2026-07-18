
void __fastcall thunk_FUN_00551800(void *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)((int)param_1 + 0x1c8);
  if (*(short *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 2 + 0x1bc) == 0) {
    if (iVar2 != 0) {
      *(undefined4 *)((int)param_1 + 0x28) = 0x21;
      FUN_006e6080(param_1,2,iVar2,(undefined4 *)((int)param_1 + 0x18));
      if (*(int *)((int)param_1 + 0x2c) != 0) {
        *(undefined4 *)((int)param_1 + 0x28) = 0x20;
        *(undefined4 *)((int)param_1 + 0x2c) = 0;
        FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c8),
                     (undefined4 *)((int)param_1 + 0x18));
      }
    }
    if (*(int *)((int)param_1 + 0x1cc) == 0) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x28) = 0x21;
    FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1cc),(undefined4 *)((int)param_1 + 0x18));
    if (*(int *)((int)param_1 + 0x2c) == 0) {
      return;
    }
    *(undefined4 *)((int)param_1 + 0x28) = 0x20;
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    goto LAB_00551a54;
  }
  if ((iVar2 == 0) || (DAT_007fa174 == 0)) goto LAB_005519bc;
  *(undefined4 *)((int)param_1 + 0x28) = 0x21;
  FUN_006e6080(param_1,2,iVar2,(undefined4 *)((int)param_1 + 0x18));
  iVar2 = *(int *)((int)param_1 + 0x2c);
  if (*(char *)((int)param_1 + 0x1bb) == '\0') {
    if ((DAT_0080874e == '\x03') && (*(char *)((int)param_1 + 0x1d0) == '\0')) {
      if (*(ushort *)((int)param_1 + 0x1ad) == 0) goto LAB_0055198e;
      iVar4 = (uint)*(ushort *)((int)param_1 + 0x1bc) * (uint)*(ushort *)((int)param_1 + 0x1ad);
LAB_0055194f:
      if (iVar4 < 1) goto LAB_0055198e;
      if (DAT_0080874e == '\x03') {
        iVar3 = thunk_FUN_004e41c0((uint)DAT_0080874d);
      }
      else {
        iVar3 = thunk_FUN_004d8870(DAT_0080874d);
      }
      if (iVar3 < iVar4) goto LAB_0055198e;
      iVar4 = 1;
    }
    else {
      uVar1 = *(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 8 + 0x1ad);
      if (uVar1 != 0) {
        iVar4 = (int)((ulonglong)
                      *(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 2 + 0x1bc)
                     / (ulonglong)(longlong)(int)(uint)uVar1);
        goto LAB_0055194f;
      }
LAB_0055198e:
      iVar4 = 0;
    }
    *(int *)((int)param_1 + 0x2c) = iVar4;
    if (iVar4 == 0) {
      if (iVar2 != 0) {
LAB_005519a4:
        uVar6 = *(undefined4 *)((int)param_1 + 0x1c8);
        *(undefined4 *)((int)param_1 + 0x28) = 0x20;
        goto LAB_005519b3;
      }
    }
    else if (iVar2 == 0) goto LAB_005519a4;
  }
  else {
    if (iVar2 != 0) goto LAB_005519bc;
    uVar6 = *(undefined4 *)((int)param_1 + 0x1c8);
    *(undefined4 *)((int)param_1 + 0x28) = 0x20;
    *(undefined4 *)((int)param_1 + 0x2c) = 1;
LAB_005519b3:
    FUN_006e6080(param_1,2,uVar6,(undefined4 *)((int)param_1 + 0x18));
  }
LAB_005519bc:
  if (*(int *)((int)param_1 + 0x1cc) == 0) {
    return;
  }
  if (DAT_007fa174 == 0) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0x21;
  FUN_006e6080(param_1,2,*(int *)((int)param_1 + 0x1cc),(undefined4 *)((int)param_1 + 0x18));
  iVar2 = *(int *)((int)param_1 + 0x2c);
  if (*(char *)((int)param_1 + 0x1d0) == '\0') {
    iVar4 = thunk_FUN_004d89b0(DAT_0080874d);
  }
  else {
    iVar4 = thunk_FUN_004d8af0(DAT_0080874d);
  }
  uVar5 = (uint)((int)(uint)*(ushort *)
                             ((int)param_1 + (uint)*(byte *)((int)param_1 + 0x1d0) * 2 + 0x1bc) <=
                iVar4);
  *(uint *)((int)param_1 + 0x2c) = uVar5;
  if (uVar5 == 0) {
    if (iVar2 == 0) {
      return;
    }
  }
  else if (iVar2 != 0) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0x20;
LAB_00551a54:
  FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1cc),(undefined4 *)((int)param_1 + 0x18));
  return;
}

