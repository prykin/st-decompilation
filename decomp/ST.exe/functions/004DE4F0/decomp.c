
int __thiscall FUN_004de4f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int aiStackY_3e4 [45];
  int aiStackY_330 [97];
  undefined4 uStackY_1ac;
  int *piVar7;
  undefined4 *puVar8;
  int local_18c [45];
  int local_d8 [45];
  undefined4 local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar1 = param_1;
  local_20 = this;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  iVar4 = param_1 * 0xa62;
  local_14 = iVar4;
  iVar2 = *(int *)((int)&DAT_007f4e29 + iVar4);
  iVar3 = 0;
  if (iVar2 != 0) {
    piVar6 = local_18c;
    for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    uVar5 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar2,uVar5,&local_8);
        if (local_8 != (int *)0x0) {
          param_1 = 0;
          if (local_8[8] == 0x14) {
            puVar8 = &local_24;
            piVar6 = &local_c;
            piVar7 = &param_1;
            iVar2 = (**(code **)(*local_8 + 0x2c))();
            uStackY_1ac = 0x4de587;
            iVar2 = thunk_FUN_004458d0(iVar2,piVar7,piVar6,puVar8);
            if (iVar2 == 1) {
LAB_004de602:
              if (param_1 != 0) {
                local_18 = 1;
                aiStackY_3e4[param_1] = aiStackY_3e4[param_1] + (int)(0x5dc / (longlong)local_c);
              }
            }
            else {
              param_1 = 0;
            }
          }
          else if (local_8[8] == 1000) {
            iVar2 = (**(code **)(*local_8 + 0x2c))();
            if (*(int *)(&DAT_007926b0 + iVar2 * 4) != 0) {
              iVar2 = (**(code **)(*local_8 + 0x2c))();
              if (*(int *)(&DAT_00793c98 + iVar2 * 8) == 1) {
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                iVar3 = 0;
                param_1 = (&DAT_00792ca0)[(iVar2 + -0x32) * 6];
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_c = thunk_FUN_004e8230(iVar1,iVar2 + -0x32,iVar3);
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_24 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
              }
            }
            goto LAB_004de602;
          }
        }
        uVar5 = uVar5 + 1;
        iVar2 = *(int *)((int)&DAT_007f4e29 + local_14);
        iVar4 = local_14;
      } while (uVar5 < *(uint *)(iVar2 + 0xc));
    }
    piVar6 = local_d8;
    for (iVar2 = 0x2d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    iVar2 = *(int *)(&DAT_007f57ee + iVar4);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)(iVar2 + 0xc) != 0) {
        do {
          FUN_006acc70(iVar2,uVar5,&local_1c);
          param_1 = 0x96;
          do {
            local_c = thunk_FUN_004ddba0(local_1c,param_1);
            if (local_c != 0) {
              aiStackY_330[param_1] = aiStackY_330[param_1] + (int)(0x5dc / (longlong)local_c);
            }
            param_1 = param_1 + 1;
          } while (param_1 < 0xc3);
          uVar5 = uVar5 + 1;
          iVar2 = *(int *)(&DAT_007f57ee + local_14);
        } while (uVar5 < *(uint *)(iVar2 + 0xc));
      }
      iVar2 = 0;
      do {
        iVar1 = *(int *)((int)local_d8 + iVar2);
        if ((iVar1 != 0) && (iVar1 < *(int *)((int)local_18c + iVar2))) {
          iVar1 = (*(int *)((int)local_18c + iVar2) / iVar1) / 0x1e;
          if (local_10 < iVar1) {
            local_10 = iVar1;
          }
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0xb4);
      return local_10;
    }
    iVar3 = 1;
    if (local_18 == 0) {
      iVar3 = local_10;
    }
  }
  return iVar3;
}

