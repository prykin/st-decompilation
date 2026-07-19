
int FUN_006b85d0(uint *param_1,uint param_2,BITMAPINFO *param_3,uint param_4,int param_5,
                BITMAPINFO *param_6,uint param_7)

{
  uint uVar1;
  DWORD DVar2;
  BITMAPINFO *pBVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  BITMAPINFO *pBVar7;
  int exceptionCode;
  
  pBVar7 = param_3;
  puVar5 = param_1;
  exceptionCode = 0;
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  FUN_006b8850((int)param_1);
  if (param_3 == (BITMAPINFO *)0x0) goto LAB_006b87fb;
  param_1[8] = (uint)param_6;
  param_1[9] = param_7;
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar1 = param_1[1];
  param_1[0xb] = param_2;
  param_1[1] = uVar1 & 0xffffff;
  param_1 = (uint *)0x0;
  param_3 = (BITMAPINFO *)0x0;
  if ((param_4 & 0x8000000) == 0) {
    if ((param_4 & 0x40000000) == 0) {
      if ((param_4 & 0xc0000000) == 0) {
        exceptionCode = -0x34;
        goto LAB_006b87fb;
      }
      param_6 = pBVar7;
      puVar6 = FUN_006b04d0(param_2 * 4);
      puVar5[0xe] = (uint)puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        exceptionCode = -2;
        goto LAB_006b87fb;
      }
      param_7 = 0;
      if (0 < (int)param_2) {
        do {
          DVar2 = (param_6->bmiHeader).biSize;
          pBVar7 = *(BITMAPINFO **)(DVar2 + 4);
          puVar4 = *(uint **)(DVar2 + 8);
          exceptionCode =
               FUN_006bb6c0(*puVar5,(undefined4 *)(puVar5[0xe] + param_7 * 4),pBVar7,puVar4,param_5,
                            0);
          if (exceptionCode != 0) {
            *(undefined4 *)(puVar5[0xe] + param_7 * 4) = 0;
            goto LAB_006b87fb;
          }
          exceptionCode =
               FUN_006d0cc0(*puVar5,*(int **)(puVar5[0xe] + param_7 * 4),
                            (BITMAPINFO *)(param_6->bmiHeader).biSize,
                            (uint *)(param_6->bmiHeader).biWidth);
          if (exceptionCode != 0) goto LAB_006b87fb;
          if ((int)param_3 < (int)pBVar7) {
            param_3 = pBVar7;
          }
          if ((int)param_1 < (int)puVar4) {
            param_1 = puVar4;
          }
          param_6 = (BITMAPINFO *)&(param_6->bmiHeader).biHeight;
          param_7 = param_7 + 1;
        } while ((int)param_7 < (int)param_2);
      }
      puVar5[1] = puVar5[1] | 0xa0000000;
    }
    else {
      param_1 = (uint *)(pBVar7->bmiHeader).biHeight;
      param_3 = (BITMAPINFO *)(pBVar7->bmiHeader).biWidth;
      exceptionCode = FUN_006bb6c0(*puVar5,puVar5 + 0xe,param_3,param_1,param_5,0);
      if (exceptionCode != 0) {
        puVar5[0xe] = 0;
        goto LAB_006b87fb;
      }
      exceptionCode = FUN_006d0cc0(*puVar5,(int *)puVar5[0xe],pBVar7,(uint *)0x0);
      if (exceptionCode != 0) goto LAB_006b87fb;
      puVar5[0xc] = (uint)param_3;
      puVar5[1] = puVar5[1] | 0x20000000;
      puVar5[0xd] = (int)param_1 / (int)param_2;
    }
  }
  else {
    puVar5[0xe] = (uint)pBVar7;
    puVar5[1] = uVar1 & 0xffffff | 0x8000000;
    if (0 < (int)param_2) {
      do {
        DVar2 = (pBVar7->bmiHeader).biSize;
        pBVar3 = *(BITMAPINFO **)(DVar2 + 4);
        if ((int)param_3 < (int)pBVar3) {
          param_3 = pBVar3;
        }
        puVar4 = *(uint **)(DVar2 + 8);
        if ((int)param_1 < (int)puVar4) {
          param_1 = puVar4;
        }
        pBVar7 = (BITMAPINFO *)&(pBVar7->bmiHeader).biWidth;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  exceptionCode = FUN_006bb6c0(*puVar5,puVar5 + 0xf,param_3,param_1,-1,0);
  if (exceptionCode != 0) {
    puVar5[0xf] = 0;
  }
LAB_006b87fb:
  if ((*(uint *)(*puVar5 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*puVar5 + 0x4f0));
  }
  if (exceptionCode == 0) {
    return 0;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcurs_c_007edc18,0x95);
  return exceptionCode;
}

