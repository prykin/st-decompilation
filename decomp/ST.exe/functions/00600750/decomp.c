
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00600750(void *param_1)

{
  short sVar1;
  STT3DSprC *this;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  int local_8;
  
  local_18 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)param_1 + 0x226)) {
    do {
      iVar5 = local_8;
      iVar6 = local_8 * 0x52;
      iVar4 = iVar6 + *(int *)((int)param_1 + 0x233);
      local_c = (void *)iVar6;
      switch(*(undefined4 *)(iVar6 + 0x39 + *(int *)((int)param_1 + 0x233))) {
      case 1:
        uVar3 = thunk_FUN_006001e0(param_1,local_8);
        pvVar2 = DAT_00802a88;
        if (uVar3 == 0) {
          if (*(char *)((int)param_1 + 0x232) != '\0') {
            local_c = *(void **)(iVar6 + 0x42 + *(int *)((int)param_1 + 0x233));
            iVar4 = iVar6 + *(int *)((int)param_1 + 0x233);
            if (DAT_00802a88 != (void *)0x0) {
              sVar1 = *(short *)(iVar4 + 10);
              if (sVar1 < 0) {
                local_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = *(short *)(iVar4 + 8);
              if (sVar1 < 0) {
                iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              sVar1 = *(short *)(iVar4 + 6);
              if (sVar1 < 0) {
                iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                  (((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                        iVar4,iVar5,&local_1c,&local_24), local_10 < 0 ||
                    ((4 < local_10 || (local_1c < 0)))) ||
                   (*(int *)((int)pvVar2 + 0x30) <= local_1c)))) ||
                 ((((iVar4 = local_24 + (&DAT_0079aed0)[local_10], iVar4 < 0 ||
                    (*(int *)((int)pvVar2 + 0x34) <= iVar4)) || (*(int *)((int)pvVar2 + 0x4c) == 0))
                  || (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + local_1c +
                               *(int *)((int)pvVar2 + 0x4c)) != '\0')))) {
                if (*(char *)(iVar6 + 0x41 + *(int *)((int)param_1 + 0x233)) == '\0') {
                  thunk_FUN_004ad460(local_c,0);
                  *(undefined1 *)(iVar6 + 0x41 + *(int *)((int)param_1 + 0x233)) = 1;
                }
              }
              else if (*(char *)(iVar6 + 0x41 + *(int *)((int)param_1 + 0x233)) != '\0') {
                thunk_FUN_004ad430((int)local_c);
                *(undefined1 *)(iVar6 + 0x41 + *(int *)((int)param_1 + 0x233)) = 0;
              }
            }
            iVar6 = *(int *)((int)param_1 + 0x233) + iVar6;
            local_14 = (int)*(short *)(iVar6 + 6);
            thunk_FUN_004ad3c0(local_c,(float)local_14 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar6 + 8) * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar6 + 10) * _DAT_007904f8 * _DAT_007904f0 +
                               _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar6 + 0x39 + *(int *)((int)param_1 + 0x233)) = 3;
          if ((*(char *)((int)param_1 + 0x232) == '\0') ||
             (iVar4 = thunk_FUN_005fdb50(param_1,1,iVar5), iVar4 != 0)) {
LAB_00600928:
            thunk_FUN_005fd940(param_1,iVar5);
          }
          else {
            sVar1 = *(short *)(iVar6 + 8 + *(int *)((int)param_1 + 0x233));
            iVar6 = iVar6 + *(int *)((int)param_1 + 0x233);
            iVar4 = *(int *)(iVar6 + 0x42);
            if (sVar1 < 0) {
              iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar6 + 6);
            if (sVar1 < 0) {
              iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            thunk_FUN_00600110(param_1,iVar6,iVar5,0x460);
            iVar6 = *(int *)((int)param_1 + 0x1e9);
            if (iVar6 != 0) {
              if (*(int *)((int)param_1 + 0x1f1) == 0) {
                FUN_006ea460(DAT_00807598,*(uint *)(iVar4 + 0x18),*(int *)(iVar6 + 0x1ed));
              }
              else {
                FUN_006ea3e0(DAT_00807598,*(uint *)(iVar4 + 0x18),*(int *)(iVar6 + 0x1ed));
              }
            }
            uVar8 = 0x53;
            uVar7 = 0x5a;
            iVar6 = 1;
            uVar3 = thunk_FUN_004ad650(iVar4);
            FUN_006ea4e0(DAT_00807598,uVar3,iVar6,uVar7,uVar8);
          }
        }
        break;
      case 2:
        if (((*(uint *)(iVar4 + 0x3d) <= *(uint *)(DAT_00802a38 + 0xe4)) &&
            (iVar4 = thunk_FUN_005ff1f0(param_1,local_8,3,*(int *)((int)param_1 + 0x22e)),
            -1 < iVar4)) &&
           (iVar4 = thunk_FUN_005fff60(param_1,local_8,iVar4), iVar5 = local_8, iVar4 != 0)) {
          iVar4 = thunk_FUN_005fdb50(param_1,0,local_8);
          if (iVar4 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar6 + 0x39 + *(int *)((int)param_1 + 0x233)) = 1;
        }
        break;
      case 3:
        if (*(char *)((int)param_1 + 0x232) == '\0') {
          thunk_FUN_005fd940(param_1,local_8);
        }
        else {
          this = *(STT3DSprC **)(iVar4 + 0x42);
          local_14 = thunk_FUN_004ac910(this,'\r');
          local_28 = thunk_FUN_004ac910(this,'\x0e');
          if (0x15 < local_14) {
            if (local_14 == 0x16) {
              STT3DSprC::StartShow(this,0xf,*(undefined4 *)(DAT_00802a38 + 0xe4));
            }
            local_10 = thunk_FUN_004ac910(this,'\x0f');
            STT3DSprC::ShowCurFase(this,'\x0f');
            iVar4 = thunk_FUN_004acd30(this,'\x0f');
            if (local_10 < iVar4) {
              local_10 = local_10 + 1;
            }
            thunk_FUN_004abe40(this,'\x0f',local_10);
          }
          if (*(char *)(iVar6 + 0x28 + *(int *)((int)param_1 + 0x233)) != '\0') {
            iVar4 = thunk_FUN_004acd30(this,'\x0e');
            iVar6 = thunk_FUN_004ac910(this,'\x0e');
            if (iVar4 + -1 == iVar6) {
              STT3DSprC::StopShow(this,0xe);
            }
          }
          iVar4 = thunk_FUN_004acd30(this,'\r');
          iVar6 = thunk_FUN_004ac910(this,'\r');
          if (iVar4 + -1 == iVar6) {
            STT3DSprC::StopShow(this,0xd);
          }
          iVar4 = thunk_FUN_004acd30(this,'\x0f');
          iVar6 = thunk_FUN_004ac910(this,'\x0f');
          if (iVar4 + -1 == iVar6) {
            *(undefined4 *)((int)local_c + 0x39 + *(int *)((int)param_1 + 0x233)) = 4;
          }
          iVar6 = thunk_FUN_004acd30(this,'\r');
          iVar4 = local_14;
          if (local_14 < iVar6) {
            iVar4 = local_14 + 1;
          }
          iVar5 = thunk_FUN_004acd30(this,'\x0e');
          iVar6 = local_28;
          if (local_28 < iVar5) {
            iVar6 = local_28 + 1;
          }
          thunk_FUN_004abe40(this,'\x0e',iVar6);
          STT3DSprC::ShowCurFase(this,'\x0e');
          thunk_FUN_004abe40(this,'\r',iVar4);
          STT3DSprC::ShowCurFase(this,'\r');
          iVar4 = (int)local_c + *(int *)((int)param_1 + 0x233);
          local_28 = (int)*(short *)(iVar4 + 6);
          thunk_FUN_004ad3c0(this,(float)local_28 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)((int)local_c + 10 +
                                                   *(int *)((int)param_1 + 0x233)) * _DAT_007904f8 *
                             _DAT_007904f0 + _DAT_007904fc);
          pvVar2 = DAT_00802a88;
          if (DAT_00802a88 != (void *)0x0) {
            sVar1 = *(short *)((int)local_c + 10 + *(int *)((int)param_1 + 0x233));
            iVar4 = (int)local_c + *(int *)((int)param_1 + 0x233);
            if (sVar1 < 0) {
              local_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = *(short *)(iVar4 + 8);
            if (sVar1 < 0) {
              iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar4 + 6);
            if (sVar1 < 0) {
              iVar4 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            if (((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                 (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar4,
                                     iVar6,&local_20,&local_2c), local_10 < 0)) ||
                (((4 < local_10 || (local_20 < 0)) ||
                 ((*(int *)((int)pvVar2 + 0x30) <= local_20 ||
                  ((iVar4 = (&DAT_0079aed0)[local_10] + local_2c, iVar4 < 0 ||
                   (*(int *)((int)pvVar2 + 0x34) <= iVar4)))))))) ||
               ((*(int *)((int)pvVar2 + 0x4c) == 0 ||
                (*(char *)(iVar4 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                          local_20) != '\0')))) {
              if (*(char *)((int)local_c + 0x41 + *(int *)((int)param_1 + 0x233)) == '\0') {
                thunk_FUN_004ad460(this,0);
                *(undefined1 *)((int)local_c + 0x41 + *(int *)((int)param_1 + 0x233)) = 1;
              }
            }
            else if (*(char *)((int)local_c + 0x41 + *(int *)((int)param_1 + 0x233)) != '\0') {
              thunk_FUN_004ad430((int)this);
              *(undefined1 *)((int)local_c + 0x41 + *(int *)((int)param_1 + 0x233)) = 0;
            }
          }
        }
        break;
      case 4:
        thunk_FUN_005fd940(param_1,local_8);
        break;
      case 5:
        local_18 = local_18 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)param_1 + 0x226));
  }
  if (local_18 != *(int *)((int)param_1 + 0x226)) {
    return 0;
  }
  return 1;
}

