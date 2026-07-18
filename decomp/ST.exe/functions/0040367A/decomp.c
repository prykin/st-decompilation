
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_00600750(void *param_1)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  int iStack_8;
  
  iStack_18 = 0;
  iStack_8 = 0;
  if (0 < *(int *)((int)param_1 + 0x226)) {
    do {
      iVar6 = iStack_8;
      iVar7 = iStack_8 * 0x52;
      iVar5 = iVar7 + *(int *)((int)param_1 + 0x233);
      pvStack_c = (void *)iVar7;
      switch(*(undefined4 *)(iVar7 + 0x39 + *(int *)((int)param_1 + 0x233))) {
      case 1:
        uVar4 = thunk_FUN_006001e0(param_1,iStack_8);
        pvVar2 = DAT_00802a88;
        if (uVar4 == 0) {
          if (*(char *)((int)param_1 + 0x232) != '\0') {
            pvStack_c = *(void **)(iVar7 + 0x42 + *(int *)((int)param_1 + 0x233));
            iVar5 = iVar7 + *(int *)((int)param_1 + 0x233);
            if (DAT_00802a88 != (void *)0x0) {
              sVar1 = *(short *)(iVar5 + 10);
              if (sVar1 < 0) {
                iStack_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                   (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iStack_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = *(short *)(iVar5 + 8);
              if (sVar1 < 0) {
                iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              sVar1 = *(short *)(iVar5 + 6);
              if (sVar1 < 0) {
                iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                  (((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                        iVar5,iVar6,&iStack_1c,&iStack_24), iStack_10 < 0 ||
                    ((4 < iStack_10 || (iStack_1c < 0)))) ||
                   (*(int *)((int)pvVar2 + 0x30) <= iStack_1c)))) ||
                 ((((iVar5 = iStack_24 + (&DAT_0079aed0)[iStack_10], iVar5 < 0 ||
                    (*(int *)((int)pvVar2 + 0x34) <= iVar5)) || (*(int *)((int)pvVar2 + 0x4c) == 0))
                  || (*(char *)(iVar5 * *(int *)((int)pvVar2 + 0x30) + iStack_1c +
                               *(int *)((int)pvVar2 + 0x4c)) != '\0')))) {
                if (*(char *)(iVar7 + 0x41 + *(int *)((int)param_1 + 0x233)) == '\0') {
                  thunk_FUN_004ad460(pvStack_c,0);
                  *(undefined1 *)(iVar7 + 0x41 + *(int *)((int)param_1 + 0x233)) = 1;
                }
              }
              else if (*(char *)(iVar7 + 0x41 + *(int *)((int)param_1 + 0x233)) != '\0') {
                thunk_FUN_004ad430((int)pvStack_c);
                *(undefined1 *)(iVar7 + 0x41 + *(int *)((int)param_1 + 0x233)) = 0;
              }
            }
            iVar7 = *(int *)((int)param_1 + 0x233) + iVar7;
            iStack_14 = (int)*(short *)(iVar7 + 6);
            thunk_FUN_004ad3c0(pvStack_c,(float)iStack_14 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar7 + 8) * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar7 + 10) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar7 + 0x39 + *(int *)((int)param_1 + 0x233)) = 3;
          if ((*(char *)((int)param_1 + 0x232) == '\0') ||
             (iVar5 = thunk_FUN_005fdb50(param_1,1,iVar6), iVar5 != 0)) {
LAB_00600928:
            thunk_FUN_005fd940(param_1,iVar6);
          }
          else {
            sVar1 = *(short *)(iVar7 + 8 + *(int *)((int)param_1 + 0x233));
            iVar7 = iVar7 + *(int *)((int)param_1 + 0x233);
            iVar5 = *(int *)(iVar7 + 0x42);
            if (sVar1 < 0) {
              iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar7 + 6);
            if (sVar1 < 0) {
              iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            thunk_FUN_00600110(param_1,iVar7,iVar6,0x460);
            iVar7 = *(int *)((int)param_1 + 0x1e9);
            if (iVar7 != 0) {
              if (*(int *)((int)param_1 + 0x1f1) == 0) {
                FUN_006ea460(DAT_00807598,*(uint *)(iVar5 + 0x18),*(int *)(iVar7 + 0x1ed));
              }
              else {
                FUN_006ea3e0(DAT_00807598,*(uint *)(iVar5 + 0x18),*(int *)(iVar7 + 0x1ed));
              }
            }
            uVar9 = 0x53;
            uVar8 = 0x5a;
            iVar7 = 1;
            uVar4 = thunk_FUN_004ad650(iVar5);
            FUN_006ea4e0(DAT_00807598,uVar4,iVar7,uVar8,uVar9);
          }
        }
        break;
      case 2:
        if (((*(uint *)(iVar5 + 0x3d) <= *(uint *)(DAT_00802a38 + 0xe4)) &&
            (iVar5 = thunk_FUN_005ff1f0(param_1,iStack_8,3,*(int *)((int)param_1 + 0x22e)),
            -1 < iVar5)) &&
           (iVar5 = thunk_FUN_005fff60(param_1,iStack_8,iVar5), iVar6 = iStack_8, iVar5 != 0)) {
          iVar5 = thunk_FUN_005fdb50(param_1,0,iStack_8);
          if (iVar5 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar7 + 0x39 + *(int *)((int)param_1 + 0x233)) = 1;
        }
        break;
      case 3:
        if (*(char *)((int)param_1 + 0x232) == '\0') {
          thunk_FUN_005fd940(param_1,iStack_8);
        }
        else {
          pvVar2 = *(void **)(iVar5 + 0x42);
          iStack_14 = thunk_FUN_004ac910(pvVar2,'\r');
          iStack_28 = thunk_FUN_004ac910(pvVar2,'\x0e');
          if (0x15 < iStack_14) {
            if (iStack_14 == 0x16) {
              thunk_FUN_004ac1a0(0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
            }
            iStack_10 = thunk_FUN_004ac910(pvVar2,'\x0f');
            thunk_FUN_004ac040('\x0f');
            iVar5 = thunk_FUN_004acd30(pvVar2,'\x0f');
            if (iStack_10 < iVar5) {
              iStack_10 = iStack_10 + 1;
            }
            thunk_FUN_004abe40(pvVar2,'\x0f',iStack_10);
          }
          if (*(char *)(iVar7 + 0x28 + *(int *)((int)param_1 + 0x233)) != '\0') {
            iVar5 = thunk_FUN_004acd30(pvVar2,'\x0e');
            iVar7 = thunk_FUN_004ac910(pvVar2,'\x0e');
            if (iVar5 + -1 == iVar7) {
              thunk_FUN_004ac410(0xe);
            }
          }
          iVar5 = thunk_FUN_004acd30(pvVar2,'\r');
          iVar7 = thunk_FUN_004ac910(pvVar2,'\r');
          if (iVar5 + -1 == iVar7) {
            thunk_FUN_004ac410(0xd);
          }
          iVar5 = thunk_FUN_004acd30(pvVar2,'\x0f');
          iVar7 = thunk_FUN_004ac910(pvVar2,'\x0f');
          if (iVar5 + -1 == iVar7) {
            *(undefined4 *)((int)pvStack_c + 0x39 + *(int *)((int)param_1 + 0x233)) = 4;
          }
          iVar7 = thunk_FUN_004acd30(pvVar2,'\r');
          iVar5 = iStack_14;
          if (iStack_14 < iVar7) {
            iVar5 = iStack_14 + 1;
          }
          iVar6 = thunk_FUN_004acd30(pvVar2,'\x0e');
          iVar7 = iStack_28;
          if (iStack_28 < iVar6) {
            iVar7 = iStack_28 + 1;
          }
          thunk_FUN_004abe40(pvVar2,'\x0e',iVar7);
          thunk_FUN_004ac040('\x0e');
          thunk_FUN_004abe40(pvVar2,'\r',iVar5);
          thunk_FUN_004ac040('\r');
          iVar5 = (int)pvStack_c + *(int *)((int)param_1 + 0x233);
          iStack_28 = (int)*(short *)(iVar5 + 6);
          thunk_FUN_004ad3c0(pvVar2,(float)iStack_28 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)((int)pvStack_c + 10 +
                                                   *(int *)((int)param_1 + 0x233)) * _DAT_007904f8 *
                             _DAT_007904f0 + _DAT_007904fc);
          pvVar3 = DAT_00802a88;
          if (DAT_00802a88 != (void *)0x0) {
            sVar1 = *(short *)((int)pvStack_c + 10 + *(int *)((int)param_1 + 0x233));
            iVar5 = (int)pvStack_c + *(int *)((int)param_1 + 0x233);
            if (sVar1 < 0) {
              iStack_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                 (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iStack_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = *(short *)(iVar5 + 8);
            if (sVar1 < 0) {
              iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar5 + 6);
            if (sVar1 < 0) {
              iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            if (((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                 (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,
                                     iVar7,&iStack_20,&iStack_2c), iStack_10 < 0)) ||
                (((4 < iStack_10 || (iStack_20 < 0)) ||
                 ((*(int *)((int)pvVar3 + 0x30) <= iStack_20 ||
                  ((iVar5 = (&DAT_0079aed0)[iStack_10] + iStack_2c, iVar5 < 0 ||
                   (*(int *)((int)pvVar3 + 0x34) <= iVar5)))))))) ||
               ((*(int *)((int)pvVar3 + 0x4c) == 0 ||
                (*(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                          iStack_20) != '\0')))) {
              if (*(char *)((int)pvStack_c + 0x41 + *(int *)((int)param_1 + 0x233)) == '\0') {
                thunk_FUN_004ad460(pvVar2,0);
                *(undefined1 *)((int)pvStack_c + 0x41 + *(int *)((int)param_1 + 0x233)) = 1;
              }
            }
            else if (*(char *)((int)pvStack_c + 0x41 + *(int *)((int)param_1 + 0x233)) != '\0') {
              thunk_FUN_004ad430((int)pvVar2);
              *(undefined1 *)((int)pvStack_c + 0x41 + *(int *)((int)param_1 + 0x233)) = 0;
            }
          }
        }
        break;
      case 4:
        thunk_FUN_005fd940(param_1,iStack_8);
        break;
      case 5:
        iStack_18 = iStack_18 + 1;
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < *(int *)((int)param_1 + 0x226));
  }
  if (iStack_18 != *(int *)((int)param_1 + 0x226)) {
    return 0;
  }
  return 1;
}

