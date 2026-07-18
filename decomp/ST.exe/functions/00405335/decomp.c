
int __thiscall
thunk_FUN_0069bdc0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iStack_7c;
  undefined4 *puStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  int *piStack_5c;
  int *piStack_58;
  int iStack_50;
  int iStack_48;
  int iStack_40;
  uint uStack_3c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079d808;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff6c;
  iStack_40 = 0;
  iStack_68 = 0;
  iStack_7c = 0;
  if ((param_2 < 5) || (param_3 < 5)) {
    iStack_40 = 0;
  }
  else {
    iStack_48 = param_2 / 2 + param_3 / 2;
    iStack_48 = iStack_48 + iStack_48 / 2;
    uVar5 = ((*(int *)((int)this + 0x5833) - param_2) / param_4 + 2) *
            ((*(int *)((int)this + 0x5837) - param_3) / param_4 + 2);
    ExceptionList = &pvStack_14;
    puStack_78 = (undefined4 *)FUN_006aac70(uVar5 * 0x40);
    piVar7 = (int *)&stack0xffffff6c;
    puVar8 = puStack_78;
    for (iVar4 = (uVar5 & 0x3ffffff) << 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    iStack_64 = 0;
    iStack_2c = 1;
    uStack_3c = 0;
    iStack_50 = 0;
    while (iVar4 = 0, (int)uStack_3c < (int)uVar5) {
      if (*(int *)((int)this + 0x5837) < iStack_64 + param_3) {
        iStack_64 = *(int *)((int)this + 0x5837) - param_3;
        iStack_2c = 0;
      }
      iStack_24 = 1;
      iVar3 = iStack_64 + -1;
      iVar6 = uStack_3c << 6;
      do {
        *(int *)(iVar6 + 0x30 + (int)puStack_78) = iVar4;
        *(int *)(iVar6 + 0x34 + (int)puStack_78) = iStack_64;
        *(int *)(iVar6 + 0x38 + (int)puStack_78) = param_2 + -1 + iVar4;
        *(int *)(iVar6 + 0x3c + (int)puStack_78) = iVar3 + param_3;
        puVar1 = (undefined1 *)(iVar6 + (int)puStack_78);
        if (*(int *)((int)this + 0x5833) + -1 <= *(int *)(puVar1 + 0x38)) {
          iStack_24 = 0;
        }
        iVar2 = thunk_FUN_0069b400(this,iVar4,iStack_64,*(int *)(puVar1 + 0x38),
                                   *(int *)(puVar1 + 0x3c),(int)puVar1);
        *(int *)(iVar6 + 0x2c + (int)puStack_78) = iVar2;
        iVar2 = *(int *)(iVar6 + 0x2c + (int)puStack_78);
        if (iStack_50 < iVar2) {
          iStack_50 = iVar2;
        }
        uStack_3c = uStack_3c + 1;
        iVar6 = iVar6 + 0x40;
        iVar4 = iVar4 + param_4;
        iVar2 = *(int *)((int)this + 0x5833);
        if (iVar2 <= iVar4 + param_2) {
          iVar4 = iVar2 - param_2;
        }
      } while ((iVar4 < iVar2) && (iStack_24 != 0));
      iStack_64 = iStack_64 + param_4;
      if ((*(int *)((int)this + 0x5837) <= iStack_64) ||
         (((-1 < (int)uStack_3c &&
           (*(int *)((int)this + 0x5837) + -1 <= (int)puStack_78[uStack_3c * 0x10 + -1])) ||
          (iStack_2c == 0)))) break;
    }
    iVar4 = iStack_40;
    if (-1 < (int)uStack_3c) {
      uStack_8 = 0;
      FUN_0072da40();
      piStack_5c = (int *)&stack0xffffff6c;
      puStack_1c = &stack0xffffff6c;
      FUN_0072da40();
      uStack_8 = 0xffffffff;
      piStack_58 = (int *)&stack0xffffff6c;
      puStack_1c = &stack0xffffff6c;
      FUN_00730810((undefined1 *)puStack_78,uStack_3c,0x40,&LAB_00402adb);
      iStack_28 = (iStack_50 * param_5) / 100;
      uStack_60 = 0;
      if (0 < (int)uStack_3c) {
        do {
          if ((int)puStack_78[uStack_60 * 0x10 + 0xb] < iStack_28) {
            uStack_3c = uStack_60;
            break;
          }
          uStack_60 = uStack_60 + 1;
        } while ((int)uStack_60 < (int)uStack_3c);
      }
      iStack_50 = 0;
      for (iStack_74 = uStack_3c * param_1 * 0x32; -1 < iStack_74; iStack_74 = iStack_74 + -1) {
        iVar4 = thunk_FUN_0069b910((int)puStack_78,uStack_3c,piVar7,param_1,iStack_48,iStack_28);
        if (iVar4 == param_1) {
          iStack_40 = 1;
          iVar3 = thunk_FUN_0069bc10(this,(int)puStack_78,piVar7,param_1,0x122,&iStack_6c,&iStack_20
                                    );
          iVar4 = param_1;
          piVar9 = piStack_58;
          if (iStack_50 < iVar3) {
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar9 = piVar9 + 1;
            }
            iStack_68 = iStack_6c;
            iStack_7c = iStack_20;
            piVar7 = piStack_5c;
            iStack_50 = iVar3;
          }
        }
      }
      iVar4 = iStack_40;
      if (iStack_40 != 0) {
        *(int *)(param_7 + 0x10) = iStack_68;
        *(int *)(param_7 + 0x14) = iStack_7c;
        iVar3 = 0;
        iVar4 = param_1;
        if (0 < param_1) {
LAB_0069c0f3:
          uVar5 = FUN_0072e6c0();
          iVar4 = (int)uVar5 % 3 + 1;
          iStack_30 = iVar4;
          uVar5 = FUN_0072e6c0();
          piVar7 = piStack_58;
          uVar5 = uVar5 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          do {
            iStack_70 = 0;
            while( true ) {
              if (iVar3 <= iStack_70) {
                puStack_78[piStack_58[iVar3] * 0x10] = iVar4 << 0x10 | uVar5 & 0xffff;
                FUN_006ae1c0(*(uint **)(param_7 + 0x18),puStack_78 + piStack_58[iVar3] * 0x10);
                iVar4 = piVar7[iVar3];
                *(short *)(param_6 + iVar3 * 4) =
                     (short)((int)(puStack_78[iVar4 * 0x10 + 0xe] - puStack_78[iVar4 * 0x10 + 0xc])
                            / 2) + *(short *)(puStack_78 + iVar4 * 0x10 + 0xc);
                iVar4 = piVar7[iVar3];
                *(short *)(param_6 + 2 + iVar3 * 4) =
                     (short)((int)(puStack_78[iVar4 * 0x10 + 0xf] - puStack_78[iVar4 * 0x10 + 0xd])
                            / 2) + *(short *)(puStack_78 + iVar4 * 0x10 + 0xd);
                iVar3 = iVar3 + 1;
                iVar4 = param_1;
                if (iVar3 < param_1) goto LAB_0069c0f3;
                goto LAB_0069c1df;
              }
              if (*(ushort *)(puStack_78 + piStack_58[iStack_70] * 0x10) == uVar5) break;
              iStack_70 = iStack_70 + 1;
            }
            if ((int)uVar5 < 7) {
              uVar5 = uVar5 + 1;
              iVar4 = iStack_30;
            }
            else {
              uVar5 = 0;
              iVar4 = iStack_30 + 1;
              iStack_30 = iVar4;
              if (3 < iVar4) {
                iVar4 = 1;
                iStack_30 = 1;
              }
            }
          } while( true );
        }
      }
    }
LAB_0069c1df:
    iStack_40 = iVar4;
    FUN_006ab060(&puStack_78);
  }
  ExceptionList = pvStack_14;
  return iStack_40;
}

