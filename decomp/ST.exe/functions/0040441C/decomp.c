
undefined4 __thiscall
thunk_FUN_0062d2d0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *apiStack_4c [2];
  int aiStack_44 [5];
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  uint uStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079d088;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffffa8;
  uStack_2c = 0;
  if ((this != (void *)0xffffffd0) && (iVar6 = *(int *)((int)this + param_1 * 4 + 0x30), iVar6 != 0)
     ) {
    iVar6 = *(int *)(iVar6 + 0xc);
    uStack_8 = 0;
    ExceptionList = &pvStack_14;
    Library::MSVCRT::FUN_0072da40();
    puStack_1c = &stack0xffffffa8;
    uStack_8 = 0xffffffff;
    uStack_24 = 0xffffffff;
    if (param_6 == 0) {
      aiStack_44[3] = (int)DAT_007fb242 * (int)DAT_007fb240;
    }
    else {
      aiStack_44[3] = 4;
    }
    iStack_30 = aiStack_44[3];
    uStack_20 = 0xffffffff;
    uVar3 = 0;
    if (0 < iVar6) {
      apiStack_4c[0] = aiStack_44 + 4;
      do {
        iVar1 = *(int *)((int)this + param_1 * 4 + 0x30);
        if (uVar3 < *(uint *)(iVar1 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c));
        }
        else {
          piVar4 = (int *)0x0;
        }
        iVar1 = FUN_006acf90(param_2,param_3,piVar4[1],piVar4[2]);
        if (iVar1 < aiStack_44[3]) {
          uStack_24 = uVar3;
          aiStack_44[3] = iVar1;
        }
        if ((piVar4[7] == 0) && (iVar1 < iStack_30)) {
          iStack_30 = iVar1;
          uStack_20 = uVar3;
        }
        piVar5 = apiStack_4c[0] + -9;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        apiStack_4c[0][-1] = iVar1;
        *apiStack_4c[0] = 0;
        uVar3 = uVar3 + 1;
        apiStack_4c[0] = apiStack_4c[0] + 10;
      } while ((int)uVar3 < iVar6);
    }
    if ((int)uStack_20 < 0) {
      if ((int)uStack_24 < 0) {
        ExceptionList = pvStack_14;
        return uStack_2c;
      }
      *param_5 = aiStack_44[uStack_24 * 10 + -4];
      param_5[1] = *(int *)(&stack0xffffffb0 + uStack_24 * 0x28);
      param_5[2] = (int)apiStack_4c[uStack_24 * 10];
      param_5[3] = aiStack_44[uStack_24 * 10];
      iVar6 = aiStack_44[uStack_24 * 10];
      piVar4 = apiStack_4c[uStack_24 * 10];
      iVar1 = *(int *)(&stack0xffffffb0 + uStack_24 * 0x28);
      iVar2 = aiStack_44[uStack_24 * 10 + -4];
      uVar3 = uStack_24;
    }
    else {
      *param_5 = aiStack_44[uStack_20 * 10 + -4];
      param_5[1] = *(int *)(&stack0xffffffb0 + uStack_20 * 0x28);
      param_5[2] = (int)apiStack_4c[uStack_20 * 10];
      param_5[3] = aiStack_44[uStack_20 * 10];
      iVar6 = aiStack_44[uStack_20 * 10];
      piVar4 = apiStack_4c[uStack_20 * 10];
      iVar1 = *(int *)(&stack0xffffffb0 + uStack_20 * 0x28);
      iVar2 = aiStack_44[uStack_20 * 10 + -4];
      uVar3 = uStack_20;
    }
    thunk_FUN_0062d120(this,param_1,iVar2,iVar1,(int)piVar4,iVar6,uVar3,1);
    uStack_2c = 1;
  }
  ExceptionList = pvStack_14;
  return uStack_2c;
}

