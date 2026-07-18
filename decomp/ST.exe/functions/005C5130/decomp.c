
int __fastcall FUN_005c5130(int *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int *piVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  undefined4 *local_50;
  undefined4 local_4c [16];
  int *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = param_1;
  DVar5 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar5;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar6 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  piVar4 = local_c;
  if (iVar6 != 0) {
    DAT_00858df8 = local_50;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243,0,iVar6,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar6,0,0x7cd0e8,0x243);
      return 0;
    }
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  cVar1 = *(char *)((int)local_c + 0x65);
  if (cVar1 == '\x01') {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((*(char *)((int)local_c + 0x21e1) != '\0') && (local_c[0x87a] != 0)) &&
       (iVar6 = thunk_FUN_005ab0a0(), iVar6 != 0)) {
      local_8 = 0;
    }
    if (((*(char *)((int)piVar4 + 0x21e5) != '\0') && (piVar4[0x87d] != 0)) &&
       (iVar6 = thunk_FUN_005ab0a0(), iVar6 != 0)) {
      local_8 = 0;
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if (((cVar1 != '\x06') && (cVar1 != '\a')) &&
       ((cVar1 != '\x0e' &&
        (((*(char *)((int)piVar4 + 0x21e2) != '\0' && (piVar4[0x87b] != 0)) &&
         (iVar6 = thunk_FUN_005ab0a0(), iVar6 != 0)))))) {
      local_8 = 0;
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       (((*(char *)((int)piVar4 + 0x21e3) != '\0' && (piVar4[0x87c] != 0)) &&
        (iVar6 = thunk_FUN_005ab0a0(), iVar6 != 0)))) {
      local_8 = 0;
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if (((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
        ((*(char *)((int)piVar4 + 0x21e6) != '\0' && (piVar4[0x87e] != 0)))) &&
       (iVar6 = thunk_FUN_005ab0a0(), iVar6 != 0)) {
      local_8 = 0;
    }
    if (((char)piVar4[0x879] != '\0') &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (piVar4[0x87c] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)piVar4[0x87c]);
        piVar4[0x87c] = 0;
      }
      cVar1 = *(char *)((int)piVar4 + 0x1e26);
      if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
         (*(char *)((int)piVar4 + 0x21e3) != '\0')) {
        FUN_006b3430(DAT_008075a8,piVar4[0x7e0]);
      }
      if (piVar4[0x87a] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)piVar4[0x87a]);
        piVar4[0x87a] = 0;
      }
      if (*(char *)((int)piVar4 + 0x21e1) != '\0') {
        if (*(uint *)((int)piVar4 + 0x1c6f) != 0xffffffff) {
          FUN_006b34d0(*(uint **)((int)piVar4 + 0x1cb3),*(uint *)((int)piVar4 + 0x1c6f),0xfffffffe,
                       *(uint *)((int)piVar4 + 0x1c87),*(uint *)((int)piVar4 + 0x1c8b));
        }
        if (piVar4[0x740] != 0xffffffff) {
          FUN_006b34d0((uint *)piVar4[0x751],piVar4[0x740],0xfffffffe,piVar4[0x746],piVar4[0x747]);
        }
        if (*(uint *)((int)piVar4 + 0x1d91) != 0xffffffff) {
          FUN_006b34d0(*(uint **)((int)piVar4 + 0x1dd5),*(uint *)((int)piVar4 + 0x1d91),0xfffffffe,
                       *(uint *)((int)piVar4 + 0x1da9),*(uint *)((int)piVar4 + 0x1dad));
        }
        puVar8 = (uint *)(piVar4 + 0x833);
        iVar6 = 10;
        do {
          FUN_006b3430(DAT_008075a8,*puVar8);
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (piVar4[0x87d] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)piVar4[0x87d]);
        piVar4[0x87d] = 0;
      }
      if (*(char *)((int)piVar4 + 0x21e5) != '\0') {
        FUN_006b3430(DAT_008075a8,*(uint *)((int)piVar4 + 0x1e22));
      }
      if (piVar4[0x87b] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)piVar4[0x87b]);
        piVar4[0x87b] = 0;
      }
      cVar1 = *(char *)((int)piVar4 + 0x1e26);
      if (((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) {
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
      }
      if ((char)piVar4[0x879] != '\0') {
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      if (piVar4[0x87e] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)piVar4[0x87e]);
        piVar4[0x87e] = 0;
      }
      if (*(char *)((int)piVar4 + 0x21e6) != '\0') {
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
      *(undefined1 *)((int)piVar4 + 0x65) = 1;
      (**(code **)(*piVar4 + 0x18))(0);
      cVar1 = *(char *)((int)piVar4 + 0x1e26);
      if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) {
        thunk_FUN_005c8200();
      }
      thunk_FUN_005c4e20('\0');
      DAT_00858df8 = local_50;
      return local_8;
    }
  }
  else {
    if (cVar1 != '\x04') {
      DAT_00858df8 = local_50;
      return 0;
    }
    if (((char)local_c[0x879] != '\0') && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((*(char *)((int)piVar4 + 0x21e1) != '\0') && (piVar4[0x87a] != 0)) {
      iVar6 = thunk_FUN_005ab0a0();
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(piVar4[0x87a] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(piVar4[0x87a] + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((*(char *)((int)piVar4 + 0x21e5) != '\0') && (piVar4[0x87d] != 0)) {
      iVar6 = thunk_FUN_005ab0a0();
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(piVar4[0x87d] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(piVar4[0x87d] + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if ((((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) &&
       ((*(char *)((int)piVar4 + 0x21e2) != '\0' && (piVar4[0x87b] != 0)))) {
      iVar6 = thunk_FUN_005ab0a0();
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(piVar4[0x87b] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(piVar4[0x87b] + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       ((*(char *)((int)piVar4 + 0x21e3) != '\0' && (piVar4[0x87c] != 0)))) {
      iVar6 = thunk_FUN_005ab0a0();
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(piVar4[0x87c] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(piVar4[0x87c] + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = *(char *)((int)piVar4 + 0x1e26);
    if ((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       ((*(char *)((int)piVar4 + 0x21e6) != '\0' && (piVar4[0x87e] != 0)))) {
      iVar6 = thunk_FUN_005ab0a0();
      if (iVar6 == 0) {
        if (-1 < (int)*(uint *)(piVar4[0x87e] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(piVar4[0x87e] + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar2 = *(byte *)((int)piVar4 + 0x1a5a);
      *(undefined1 *)((int)piVar4 + 0x65) = 2;
      if ((bVar2 != 0xff) && (*(int *)((int)piVar4 + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)((int)piVar4 + (uint)bVar2 * 0x1fb + 0xc1));
        DAT_00858df8 = local_50;
        return local_8;
      }
    }
  }
  DAT_00858df8 = local_50;
  return local_8;
}

