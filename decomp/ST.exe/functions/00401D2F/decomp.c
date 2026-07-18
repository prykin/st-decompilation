
int __thiscall thunk_FUN_004de4f0(void *this,int param_1)

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
  int aiStack_18c [45];
  int aiStack_d8 [45];
  undefined4 uStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  iVar1 = param_1;
  pvStack_20 = this;
  iStack_10 = 0;
  iStack_c = 0;
  iStack_18 = 0;
  iVar4 = param_1 * 0xa62;
  iStack_14 = iVar4;
  iVar2 = *(int *)((int)&DAT_007f4e29 + iVar4);
  iVar3 = 0;
  if (iVar2 != 0) {
    piVar6 = aiStack_18c;
    for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    uVar5 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar2,uVar5,&piStack_8);
        if (piStack_8 != (int *)0x0) {
          param_1 = 0;
          if (piStack_8[8] == 0x14) {
            puVar8 = &uStack_24;
            piVar6 = &iStack_c;
            piVar7 = &param_1;
            iVar2 = (**(code **)(*piStack_8 + 0x2c))();
            uStackY_1ac = 0x4de587;
            iVar2 = thunk_FUN_004458d0(iVar2,piVar7,piVar6,puVar8);
            if (iVar2 == 1) {
LAB_004de602:
              if (param_1 != 0) {
                iStack_18 = 1;
                aiStackY_3e4[param_1] = aiStackY_3e4[param_1] + (int)(0x5dc / (longlong)iStack_c);
              }
            }
            else {
              param_1 = 0;
            }
          }
          else if (piStack_8[8] == 1000) {
            iVar2 = (**(code **)(*piStack_8 + 0x2c))();
            if (*(int *)(&DAT_007926b0 + iVar2 * 4) != 0) {
              iVar2 = (**(code **)(*piStack_8 + 0x2c))();
              if (*(int *)(&DAT_00793c98 + iVar2 * 8) == 1) {
                iVar2 = (**(code **)(*piStack_8 + 0x2c))();
                iVar3 = 0;
                param_1 = (&DAT_00792ca0)[(iVar2 + -0x32) * 6];
                iVar2 = (**(code **)(*piStack_8 + 0x2c))();
                iStack_c = thunk_FUN_004e8230(iVar1,iVar2 + -0x32,iVar3);
                iVar2 = (**(code **)(*piStack_8 + 0x2c))();
                uStack_24 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
              }
            }
            goto LAB_004de602;
          }
        }
        uVar5 = uVar5 + 1;
        iVar2 = *(int *)((int)&DAT_007f4e29 + iStack_14);
        iVar4 = iStack_14;
      } while (uVar5 < *(uint *)(iVar2 + 0xc));
    }
    piVar6 = aiStack_d8;
    for (iVar2 = 0x2d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    iVar2 = *(int *)(&DAT_007f57ee + iVar4);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)(iVar2 + 0xc) != 0) {
        do {
          FUN_006acc70(iVar2,uVar5,&pvStack_1c);
          param_1 = 0x96;
          do {
            iStack_c = thunk_FUN_004ddba0(pvStack_1c,param_1);
            if (iStack_c != 0) {
              aiStackY_330[param_1] = aiStackY_330[param_1] + (int)(0x5dc / (longlong)iStack_c);
            }
            param_1 = param_1 + 1;
          } while (param_1 < 0xc3);
          uVar5 = uVar5 + 1;
          iVar2 = *(int *)(&DAT_007f57ee + iStack_14);
        } while (uVar5 < *(uint *)(iVar2 + 0xc));
      }
      iVar2 = 0;
      do {
        iVar1 = *(int *)((int)aiStack_d8 + iVar2);
        if ((iVar1 != 0) && (iVar1 < *(int *)((int)aiStack_18c + iVar2))) {
          iVar1 = (*(int *)((int)aiStack_18c + iVar2) / iVar1) / 0x1e;
          if (iStack_10 < iVar1) {
            iStack_10 = iVar1;
          }
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 < 0xb4);
      return iStack_10;
    }
    iVar3 = 1;
    if (iStack_18 == 0) {
      iVar3 = iStack_10;
    }
  }
  return iVar3;
}

