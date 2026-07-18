
void __fastcall thunk_FUN_005ad390(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 *this;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar7;
  int *piVar8;
  undefined4 *puStack_b0;
  undefined4 auStack_ac [16];
  int aiStack_6c [8];
  uint uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 uStack_45;
  uint uStack_41;
  undefined1 uStack_3d;
  undefined1 uStack_3b;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined4 *puStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  puStack_20 = param_1;
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar4;
  puStack_b0 = DAT_00858df8;
  DAT_00858df8 = &puStack_b0;
  iVar5 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  this = puStack_20;
  if (iVar5 != 0) {
    DAT_00858df8 = puStack_b0;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x24e,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cc728,0x24e);
    return;
  }
  if (((*(char *)((int)puStack_20 + 0x65) == '\x01') &&
      (*(HANDLE *)((int)puStack_20 + 0x1c8f) != (HANDLE)0x0)) &&
     (DVar4 = WaitForSingleObject(*(HANDLE *)((int)puStack_20 + 0x1c8f),0), DVar4 == 0)) {
    FindNextChangeNotification(*(HANDLE *)((int)this + 0x1c8f));
    thunk_FUN_005afd00(this,*(uint *)((int)this + 0x1c93));
    *(undefined4 *)((int)this + 0x2d) = 5;
    if (this[0x69b] != 0) {
      FUN_006e6080(this,2,this[0x69b],(undefined4 *)((int)this + 0x1d));
    }
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e6080(this,2,*(int *)(DAT_0081176c + 0x389),(undefined4 *)((int)this + 0x1d));
    }
  }
  if ((this[0x699] != 0) && (0xf9 < (uint)(*(int *)((int)this + 0x61) - this[0x69a]))) {
    thunk_FUN_005ae050(*(uint *)((int)this + 0x1c93));
    this[0x699] = 0;
  }
  cVar1 = *(char *)((int)this + 0x65);
  if (cVar1 == '\x01') {
    if (DAT_0080877e != '\0') {
      switch(*(undefined1 *)((int)this + 0x1a5f)) {
      case 4:
      case 5:
      case 0xc:
      case 0x13:
        iStack_c = 0;
        FUN_006b7510(DAT_00811764,-1,&iStack_14,-1,0);
        if (DAT_008067a0 != '\0') {
          CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
        }
        iStack_10 = 0;
        if (0 < iStack_14) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,-1,&uStack_18,&iStack_1c,&iStack_c,&uStack_4c,-1,0);
            if (iVar5 == -0x4d) {
              piVar8 = aiStack_6c;
              for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar8 = 0;
                piVar8 = piVar8 + 1;
              }
              aiStack_6c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)((int)this + 0x1a5b) + 0x2e6) == 0) {
                (**(code **)*this)(aiStack_6c);
              }
              else {
                aiStack_6c[2] = this[2];
                aiStack_6c[3] = 2;
                thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),0x2522,'\0',
                                   aiStack_6c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            else if (iVar5 == 1) {
              if (uStack_18 == 0x1a) {
                if (*(char *)(iStack_c + 2) == '\x04') {
                  uStack_46 = 3;
                  uStack_48 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                  uStack_45 = DAT_008087be;
                  uStack_41 = (*(char *)((int)this + 0x1a5f) != '\f') - 1 & DAT_00808750;
                  uStack_3b = DAT_00807361;
                  switch(*(char *)((int)this + 0x1a5f)) {
                  case '\x04':
switchD_005adb01_caseD_4:
                    uStack_3d = 2;
                    break;
                  case '\x05':
switchD_005adb01_caseD_5:
                    uStack_3d = 3;
                    break;
                  default:
                    uStack_3d = 0xff;
                    break;
                  case '\f':
switchD_005adb01_caseD_c:
                    uStack_3d = 5;
                    break;
                  case '\x13':
                    switch(DAT_00803400) {
                    case 4:
                      goto switchD_005adb01_caseD_4;
                    case 5:
                      goto switchD_005adb01_caseD_5;
                    case 0xc:
                      goto switchD_005adb01_caseD_c;
                    case 0x14:
                    case 0x15:
                      uStack_3d = 4;
                    }
                  }
                  uStack_26 = *(undefined4 *)(iStack_c + 0x22);
                  uStack_2a = *(undefined4 *)(iStack_c + 0x1e);
                  FUN_00715360(DAT_00811764,iStack_1c,'\x1a',(char *)&uStack_48,0x26,1,0xffffffff);
                }
              }
              else if (uStack_18 == 0x1b) {
                thunk_FUN_005dd850(iStack_c);
              }
              if (iStack_c != 0) {
                FUN_006ab060(&iStack_c);
              }
            }
            iStack_10 = iStack_10 + 1;
          } while (iStack_10 < iStack_14);
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((*(char *)((int)this + 0x20b5) != '\0') &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if (((*(char *)((int)this + 0x20b3) != '\0') && (this[0x82e] != 0)) &&
       (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_8 = 0;
    }
    if (((*(char *)(this + 0x82d) != '\0') && (this[0x82f] != 0)) &&
       (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_8 = 0;
    }
    if (((*(char *)((int)this + 0x20b7) != '\0') && (this[0x830] != 0)) &&
       (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if ((*(char *)((int)this + 0x20b3) != '\0') && (this[0x82e] != 0)) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this[0x82e]);
        this[0x82e] = 0;
      }
      if ((*(char *)(this + 0x82d) != '\0') && (this[0x82f] != 0)) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this[0x82f]);
        this[0x82f] = 0;
      }
      if ((*(char *)((int)this + 0x20b7) != '\0') && (this[0x830] != 0)) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this[0x830]);
        this[0x830] = 0;
      }
      *(undefined1 *)((int)this + 0x65) = 1;
      if (*(char *)((int)this + 0x20b5) != '\0') {
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      thunk_FUN_005aeab0('\x01');
      if (this[0x69d] != 0xffffffff) {
        FUN_006b34d0((uint *)this[0x6ae],this[0x69d],0xfffffffe,this[0x6a3],this[0x6a4]);
      }
      if (*(uint *)((int)this + 0x1b05) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)this + 0x1b49),*(uint *)((int)this + 0x1b05),0xfffffffe,
                     *(uint *)((int)this + 0x1b1d),*(uint *)((int)this + 0x1b21));
      }
      if (*(uint *)((int)this + 0x1b96) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)this + 0x1bda),*(uint *)((int)this + 0x1b96),0xfffffffe,
                     *(uint *)((int)this + 0x1bae),*(uint *)((int)this + 0x1bb2));
      }
      puVar7 = (uint *)((int)this + 0x1c23);
      iVar5 = 0x16;
      do {
        FUN_006b3430(DAT_008075a8,*puVar7);
        puVar7 = puVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
      }
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      cVar1 = *(char *)((int)this + 0x1a5f);
      if ((((cVar1 == '\f') || (cVar1 == '\x04')) || (cVar1 == '\x05')) || (cVar1 == '\x13')) {
        if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
        }
        if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
        }
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
      thunk_FUN_005ad050('\0');
      DAT_00858df8 = puStack_b0;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((*(char *)((int)this + 0x20b5) != '\0') && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if ((*(char *)((int)this + 0x20b3) != '\0') && (this[0x82e] != 0)) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this[0x82e] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this[0x82e] + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(char *)(this + 0x82d) != '\0') && (this[0x82f] != 0)) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this[0x82f] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this[0x82f] + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(char *)((int)this + 0x20b7) != '\0') && (this[0x830] != 0)) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this[0x830] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this[0x830] + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      bVar2 = *(byte *)((int)this + 0x1a5a);
      *(undefined1 *)((int)this + 0x65) = 2;
      if ((bVar2 != 0xff) && (*(int *)((int)this + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)((int)this + (uint)bVar2 * 0x1fb + 0xc1));
        DAT_00858df8 = puStack_b0;
        return;
      }
    }
  }
  DAT_00858df8 = puStack_b0;
  return;
}

