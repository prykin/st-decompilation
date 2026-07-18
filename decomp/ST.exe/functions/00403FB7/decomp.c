
void thunk_FUN_005c4930(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    thunk_FUN_005b6220();
    if (*(undefined4 **)(iStack_8 + 7999) != (undefined4 *)0x0) {
      FUN_006f1170(*(undefined4 **)(iStack_8 + 7999));
    }
    *(undefined4 *)(iStack_8 + 7999) = 0;
    if (*(undefined4 **)(iStack_8 + 0x1f43) != (undefined4 *)0x0) {
      FUN_006f1170(*(undefined4 **)(iStack_8 + 0x1f43));
    }
    *(undefined4 *)(iStack_8 + 0x1f43) = 0;
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar2 = *(int *)(iStack_8 + 0x4d);
    if (((iVar2 != 0x611f) && (iVar2 != 0x6109)) && (iVar2 != 0x6105)) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(int *)(iStack_8 + 0x21ec) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x21ec));
      *(undefined4 *)(iStack_8 + 0x21ec) = 0;
    }
    if (*(char *)(iStack_8 + 0x21e2) != '\0') {
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x540)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
    }
    if (*(int *)(iStack_8 + 0x21f4) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x21f4));
      *(undefined4 *)(iStack_8 + 0x21f4) = 0;
    }
    if (*(int *)(iStack_8 + 0x21e8) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x21e8));
      *(undefined4 *)(iStack_8 + 0x21e8) = 0;
    }
    if (*(int *)(iStack_8 + 0x21f0) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x21f0));
      *(undefined4 *)(iStack_8 + 0x21f0) = 0;
    }
    if (*(int *)(iStack_8 + 0x21f8) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x21f8));
      *(undefined4 *)(iStack_8 + 0x21f8) = 0;
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      FUN_006f20e0((uint *)(DAT_0081176c + 0x2c));
    }
    if (*(int *)(iStack_8 + 0x1e2b) != 0) {
      FUN_006f20e0((uint *)(iStack_8 + 0x1e2b));
    }
    if (*(int *)(iStack_8 + 0x1c67) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1c67));
    }
    DAT_0081175c = 0;
    if (*(byte **)(iStack_8 + 0x1f7c) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(iStack_8 + 0x1f7c));
    }
    iVar2 = *(int *)(iStack_8 + 0x1f84);
    *(undefined4 *)(iStack_8 + 0x1f7c) = 0;
    if (iVar2 != 0) {
      uVar4 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        bVar6 = *(int *)(iVar2 + 0xc) != 0;
        do {
          if (bVar6) {
            iVar2 = *(int *)(iVar2 + 8) * uVar4 + *(int *)(iVar2 + 0x1c);
          }
          else {
            iVar2 = 0;
          }
          if ((iVar2 != 0) && (*(byte **)(iVar2 + 0x50) != (byte *)0x0)) {
            FUN_006ae110(*(byte **)(iVar2 + 0x50));
          }
          iVar2 = *(int *)(iStack_8 + 0x1f84);
          uVar4 = uVar4 + 1;
          bVar6 = uVar4 < *(uint *)(iVar2 + 0xc);
        } while ((int)uVar4 < (int)*(uint *)(iVar2 + 0xc));
      }
      FUN_006ae110(*(byte **)(iStack_8 + 0x1f84));
      *(undefined4 *)(iStack_8 + 0x1f84) = 0;
    }
    if (*(byte **)(iStack_8 + 0x1e2f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(iStack_8 + 0x1e2f));
    }
    *(undefined4 *)(iStack_8 + 0x1e2f) = 0;
    FUN_00715ab0();
    FUN_00715ab0();
    FUN_00715ab0();
    piVar5 = (int *)(iStack_8 + 0x20f4);
    iVar2 = 10;
    do {
      FUN_006b3bb0(DAT_008075a8,piVar5[-10]);
      if (*piVar5 != 0) {
        FUN_006ab060(piVar5);
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(iStack_8 + 0x1e1e) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1e1e));
    }
    FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 0x1e22));
    if ((*(char *)(iStack_8 + 0x21e7) != '\0') &&
       (*(int *)(*(int *)(iStack_8 + 0x1a5b) + 0x2e6) != 0)) {
      thunk_FUN_005b6ff0();
      *(undefined4 *)(*(int *)(*(int *)(iStack_8 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)(iStack_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(iStack_8 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ce,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd0e8,0x1ce);
  return;
}

