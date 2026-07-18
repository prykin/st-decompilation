
undefined4 __thiscall
thunk_FUN_0055ad00(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uStack_1c;
  int iStack_18;
  char *pcStack_10;
  undefined *puStack_c;
  int *piStack_8;
  
  if (((*(int *)((int)this + 0x114) != 0) && (param_4 < 8)) &&
     ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    piStack_8 = (int *)((int)this + 0x54);
    uStack_1c = 0;
    pcStack_10 = &DAT_008087e9;
    do {
      if ((uStack_1c != param_4) && (*pcStack_10 != -1)) {
        if (DAT_00808a8f == '\0') {
          if ((char)param_4 == (char)uStack_1c) {
LAB_0055ae0a:
            iVar4 = 0;
          }
          else {
            uVar3 = param_4 & 0xff;
            uVar6 = uStack_1c & 0xff;
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar6);
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
              iVar4 = -2;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\0')) {
              iVar4 = -1;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) == '\x01')) {
              iVar4 = 1;
            }
            else {
              if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar3) != '\x01')
                 ) goto LAB_0055ae0a;
              iVar4 = 2;
            }
          }
          bVar9 = iVar4 < 0;
        }
        else {
          bVar9 = (&DAT_008087ea)[(uStack_1c & 0xff) * 0x51] !=
                  (&DAT_008087ea)[(param_4 & 0xff) * 0x51];
        }
        if ((bVar9) && (*piStack_8 != 0)) {
          if (param_5 < 0) {
            param_5 = 0;
          }
          iVar4 = -param_5 + param_1;
          iVar8 = -param_5 + param_2;
          puVar5 = thunk_FUN_005532f0(param_5);
          iStack_18 = 0;
          puStack_c = puVar5;
          if (0 < param_5 * 2 + 1) {
            do {
              iVar7 = 0;
              do {
                if ((((((puVar5 == (undefined *)0x0) || (puStack_c[iVar7] != '\0')) &&
                      (iVar1 = iVar7 + iVar4, -1 < iVar1)) &&
                     ((iVar1 < *(int *)((int)this + 0x20) && (-1 < iVar8)))) &&
                    ((iVar8 < *(int *)((int)this + 0x24) &&
                     (((int)pcStack_10 < 0x808a71 && (*piStack_8 != 0)))))) &&
                   (*(char *)(iVar8 * *(int *)((int)this + 0x20) + *piStack_8 + iVar7 + iVar4) !=
                    '\0')) {
                  return 1;
                }
                iVar7 = iVar7 + 1;
                iVar1 = param_5 * 2 + 1;
              } while (iVar7 < iVar1);
              iStack_18 = iStack_18 + 1;
              iVar8 = iVar8 + 1;
              puStack_c = puStack_c + iVar1;
            } while (iStack_18 < iVar1);
          }
        }
      }
      pcStack_10 = pcStack_10 + 0x51;
      uStack_1c = uStack_1c + 1;
      piStack_8 = piStack_8 + 1;
    } while ((int)pcStack_10 < 0x808a71);
  }
  return 0;
}

