
int __thiscall FUN_004de4f0(void *this,int param_1)

{
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar1;
  int iVar2;
  int iVar3;
  AnonShape_006ACC70_C8641025 *pAVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  int *piVar7;
  int aiStackY_3e4 [45];
  int aiStackY_330 [97];
  undefined4 uStackY_1ac;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
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
  
  iVar3 = param_1;
  local_20 = this;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = param_1 * 0xa62;
  pDVar5 = g_playerRuntime[param_1].objects;
  iVar2 = 0;
  if (pDVar5 != (DArrayTy *)0x0) {
    piVar7 = local_18c;
    for (iVar2 = 0x2d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    uVar6 = 0;
    iVar2 = param_1 * 0xa62;
    if (pDVar5->count != 0) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar5,uVar6,&local_8);
        if (local_8 != (int *)0x0) {
          param_1 = 0;
          if (local_8[8] == 0x14) {
            puVar9 = &local_24;
            piVar7 = &local_c;
            piVar8 = &param_1;
            SVar1 = (**(code **)(*local_8 + 0x2c))();
            uStackY_1ac = 0x4de587;
            iVar2 = STAllPlayersC::GetBoatWeaponInfo(SVar1,piVar8,piVar7,puVar9);
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
                iVar10 = 0;
                param_1 = (&DAT_00792ca0)[(iVar2 + -0x32) * 6];
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_c = thunk_FUN_004e8230(iVar3,iVar2 + -0x32,iVar10);
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_24 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
              }
            }
            goto LAB_004de602;
          }
        }
        uVar6 = uVar6 + 1;
        pDVar5 = *(DArrayTy **)((int)&g_playerRuntime[0].objects + local_14);
        iVar2 = local_14;
      } while (uVar6 < pDVar5->count);
    }
    piVar7 = local_d8;
    for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    pAVar4 = *(AnonShape_006ACC70_C8641025 **)((int)&g_playerRuntime[0].field2282_0x9ce + iVar2);
    if (pAVar4 != (AnonShape_006ACC70_C8641025 *)0x0) {
      uVar6 = 0;
      if (pAVar4->field_000C != 0) {
        do {
          FUN_006acc70(pAVar4,uVar6,&local_1c);
          param_1 = 0x96;
          do {
            local_c = thunk_FUN_004ddba0(local_1c,param_1);
            if (local_c != 0) {
              aiStackY_330[param_1] = aiStackY_330[param_1] + (int)(0x5dc / (longlong)local_c);
            }
            param_1 = param_1 + 1;
          } while (param_1 < 0xc3);
          uVar6 = uVar6 + 1;
          pAVar4 = *(AnonShape_006ACC70_C8641025 **)
                    ((int)&g_playerRuntime[0].field2282_0x9ce + local_14);
        } while (uVar6 < pAVar4->field_000C);
      }
      iVar3 = 0;
      do {
        iVar2 = *(int *)((int)local_d8 + iVar3);
        if ((iVar2 != 0) && (iVar2 < *(int *)((int)local_18c + iVar3))) {
          iVar2 = (*(int *)((int)local_18c + iVar3) / iVar2) / 0x1e;
          if (local_10 < iVar2) {
            local_10 = iVar2;
          }
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0xb4);
      return local_10;
    }
    iVar2 = 1;
    if (local_18 == 0) {
      iVar2 = local_10;
    }
  }
  return iVar2;
}

