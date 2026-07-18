
void FUN_005acb30(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    thunk_FUN_005b6220();
    if (((*(int *)(local_8 + 0x4d) != 0x6121) && (DAT_00811764 != (undefined4 *)0x0)) &&
       (DAT_0080877e != '\0')) {
      FUN_00715360(DAT_00811764,0,'\x10',(char *)0x0,0,0,0xffffffff);
      thunk_FUN_005dac60();
    }
    if (*(HANDLE *)(local_8 + 0x1c8f) != (HANDLE)0x0) {
      FindCloseChangeNotification(*(HANDLE *)(local_8 + 0x1c8f));
      *(undefined4 *)(local_8 + 0x1c8f) = 0;
    }
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    iVar3 = *(int *)(local_8 + 0x4d);
    if (((iVar3 != 0x6120) && (iVar3 != 0x6121)) && (iVar3 != 0x6105)) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      FUN_006f20e0((uint *)(DAT_0081176c + 0x2c));
    }
    if (*(int *)(local_8 + 0x20b8) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x20b8));
      *(undefined4 *)(local_8 + 0x20b8) = 0;
    }
    FUN_00715ab0();
    FUN_00715ab0();
    FUN_00715ab0();
    puVar5 = (uint *)(local_8 + 0x1c23);
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(uint *)(local_8 + 0x1c87) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(local_8 + 0x1c87));
    }
    *(undefined4 *)(local_8 + 0x1c87) = 0xffffffff;
    if (*(int *)(local_8 + 0x20bc) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x20bc));
      *(undefined4 *)(local_8 + 0x20bc) = 0;
    }
    if (*(char *)(local_8 + 0x20b4) != '\0') {
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
    if (*(int *)(local_8 + 0x20c0) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x20c0));
      *(undefined4 *)(local_8 + 0x20c0) = 0;
    }
    if ((*(char *)(local_8 + 0x20b7) != '\0') &&
       (((cVar1 = *(char *)(local_8 + 0x1a5f), cVar1 == '\f' || (cVar1 == '\x04')) ||
        ((cVar1 == '\x05' || (cVar1 == '\x13')))))) {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x558)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      }
      if (-1 < (int)*(uint *)(DAT_0081176c + 0x554)) {
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
    }
    if (*(int *)(local_8 + 0x1c7b) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1c7b));
    }
    *(undefined4 *)(local_8 + 0x1c7f) = 0;
    if (*(int *)(local_8 + 0x1c8b) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1c8b));
    }
    if ((*(char *)(local_8 + 0x20b6) != '\0') && (*(int *)(*(int *)(local_8 + 0x1a5b) + 0x2e6) != 0)
       ) {
      thunk_FUN_005b6ff0();
      *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(byte **)(local_8 + 0x1c97) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x1c97));
      *(undefined4 *)(local_8 + 0x1c97) = 0;
    }
    if (*(byte **)(local_8 + 0x1c9b) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_8 + 0x1c9b));
      *(undefined4 *)(local_8 + 0x1c9b) = 0;
    }
    if (*(byte **)(local_8 + 0x1c9f) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x1c9f));
      *(undefined4 *)(local_8 + 0x1c9f) = 0;
    }
    if (*(int *)(local_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(local_8 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_load_obj_cpp_007cc728,0x191,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cc728,0x191);
  return;
}

