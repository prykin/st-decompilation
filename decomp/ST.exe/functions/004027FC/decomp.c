
undefined4 thunk_FUN_00497370(int param_1,int param_2,uint param_3,undefined4 param_4,void *param_5)

{
  char cVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  uint uStack_60;
  char cStack_5c;
  undefined3 uStack_5b;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_28;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = DAT_007fb270;
  puStack_c = &DAT_00790718;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff90;
  uStack_28 = 0xffffffff;
  iVar2 = *(int *)(DAT_007fb270 + 0xc);
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  iStack_44 = iVar2;
  Library::MSVCRT::FUN_0072da40();
  puStack_38 = &stack0xffffff90;
  puStack_1c = &stack0xffffff90;
  Library::MSVCRT::FUN_0072da40();
  uStack_8 = 0xffffffff;
  iStack_30 = 0;
  iStack_40 = 0;
  uStack_34 = 0;
  piStack_3c = (int *)&stack0xffffff90;
  puStack_1c = &stack0xffffff90;
  if (0 < iVar2) {
    puVar10 = &uStack_60;
    piStack_3c = (int *)&stack0xffffff90;
    puStack_1c = &stack0xffffff90;
    do {
      if (uStack_34 < *(uint *)(iVar4 + 0xc)) {
        puVar11 = (uint *)(*(int *)(iVar4 + 8) * uStack_34 + *(int *)(iVar4 + 0x1c));
      }
      else {
        puVar11 = (uint *)0x0;
      }
      uVar3 = puVar11[2];
      if (uVar3 != param_3) {
        _cStack_5c = CONCAT31(uStack_5b,(char)uVar3);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar3 == (char)param_3) {
LAB_004974ca:
            iVar2 = 0;
          }
          else {
            uVar3 = uVar3 & 0xff;
            uVar8 = param_3 & 0xff;
            cVar1 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8);
            if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
              iVar2 = -2;
            }
            else if ((cVar1 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
              iVar2 = -1;
            }
            else if ((cVar1 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\x01')) {
              iVar2 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) != '\x01')
                 ) goto LAB_004974ca;
              iVar2 = 2;
            }
          }
          bVar13 = iVar2 < 0;
        }
        else {
          bVar13 = (&DAT_008087ea)[(param_3 & 0xff) * 0x51] !=
                   (&DAT_008087ea)[(uVar3 & 0xff) * 0x51];
        }
        if ((bVar13) &&
           (iVar2 = FUN_006aced8(*puVar11 * 0xc9 + 100,puVar11[1] * 0xc9 + 100,param_1 * 0xc9 + 100,
                                 param_2 * 0xc9 + 100), iVar4 = DAT_007fb270, iVar2 < 0xbc7)) {
          puVar12 = puVar10 + -4;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar3 = thunk_FUN_0060ca20(puVar10[1]);
          uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
          *puVar10 = uVar3;
          iStack_40 = iStack_40 + uVar3;
          iStack_30 = iStack_30 + 1;
          puVar10 = puVar10 + 6;
          iVar4 = DAT_007fb270;
        }
      }
      uStack_34 = uStack_34 + 1;
    } while ((int)uStack_34 < iStack_44);
  }
  if (iStack_30 != 0) {
    iVar4 = thunk_FUN_0060ca20((int)param_5);
    iVar7 = iStack_30;
    iStack_20 = iStack_30;
    iVar2 = iVar4 / iStack_30;
    if (iVar4 < iStack_40) {
      iVar6 = 0;
      piVar9 = piStack_3c;
      if (0 < iStack_30) {
        do {
          *piVar9 = iVar6;
          iVar6 = iVar6 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar6 < iStack_30);
      }
      thunk_FUN_004977c0((int)puStack_38,piStack_3c,iStack_30);
      while (0 < iVar4) {
        iVar6 = iStack_30 - iVar7;
        if (iVar6 < iStack_30) {
          piVar9 = (int *)(puStack_38 + iVar6 * 0x18 + 0x10);
          iVar6 = iStack_30 - iVar6;
          do {
            iVar7 = *piVar9;
            if (iVar7 < iVar2) {
              *piVar9 = 0;
              iStack_20 = iStack_20 + -1;
            }
            else {
              *piVar9 = iVar7 - iVar2;
              iVar7 = iVar2;
            }
            iStack_40 = iStack_40 - iVar7;
            iVar4 = iVar4 - iVar7;
            piVar9 = piVar9 + 6;
            iVar6 = iVar6 + -1;
            iVar7 = iStack_20;
          } while (iVar6 != 0);
        }
        if (((iVar4 < 1) || (iVar7 < 1)) || (iVar2 = iVar4 / iVar7, iVar2 == 0)) {
          iVar4 = 0;
        }
      }
    }
    else {
      iVar4 = iVar4 - iStack_40;
      if (0 < iStack_30) {
        puVar5 = (undefined4 *)(puStack_38 + 0x10);
        iVar2 = iStack_30;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 6;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = iStack_30;
    iVar7 = thunk_FUN_0060ca20((int)param_5);
    thunk_FUN_0060ca40(param_5,iVar7 - iVar4);
    if (0 < iVar2) {
      piVar9 = (int *)(puStack_38 + 0x10);
      do {
        this = (void *)piVar9[1];
        iVar4 = thunk_FUN_0060ca20((int)this);
        if (iVar4 != *piVar9) {
          iVar4 = thunk_FUN_0060ca20((int)this);
          thunk_FUN_0060ca40(this,iVar4 - *piVar9);
          thunk_FUN_00497110((int)param_5,(int)this);
        }
        piVar9 = piVar9 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = thunk_FUN_0060ca20((int)param_5);
  if (0 < iVar2) {
    uStack_28 = 1;
  }
  ExceptionList = pvStack_14;
  return uStack_28;
}

