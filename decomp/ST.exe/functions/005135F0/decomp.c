
void FUN_005135f0(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_64;
  undefined4 local_60 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  int local_c;
  uint local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar3 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    cVar1 = *(char *)(local_c + 0x1a1);
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
      *(char *)(local_c + 0x1a2) = cVar1;
      *(undefined4 *)(local_c + 0x1ab) = *(undefined4 *)(local_c + 0x1a3);
    }
    else {
      *(undefined1 *)(local_c + 0x1a2) = 0;
      *(undefined4 *)(local_c + 0x1ab) = 0;
    }
    *(undefined1 *)(local_c + 0x1a1) = 0;
    *(undefined4 *)(local_c + 0x1a3) = 0;
    if (*(int *)(local_c + 0x178) != 0) {
      *(undefined4 *)(local_c + 0x28) = 0x4202;
      *(undefined2 *)(local_c + 0x2c) = 0;
      *(undefined2 *)(local_c + 0x2e) = 2;
      *(int *)(local_c + 0x30) = *(int *)(local_c + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(local_c + 0x18);
      }
    }
    *(undefined4 *)(local_c + 0x1cf) = 0xffffffff;
    *(undefined4 *)(*(int *)(local_c + 0x1cb) + 0xc) = 0;
    FUN_006b55f0(*(undefined4 **)(local_c + 0x68),0,0x21,0x16,*(int *)(local_c + 0x1dc),0,0x21,0x16,
                 0x1b8,0x118);
    local_8 = 0;
    *(undefined4 *)(*(int *)(local_c + 0x1b3) + 0xc) = 0;
    *(undefined4 *)(local_c + 0x1b7) = 0;
    if (*(int *)sizeHelp_exref != 0) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)(local_c + 0x1c7) + iVar3);
        if (puVar4[1] == 0) {
          local_20 = *puVar4;
          local_1c = puVar4[1];
          local_18 = puVar4[2];
          local_14 = puVar4[3];
          local_10 = *(undefined1 *)(puVar4 + 4);
          local_f = 0;
          local_e = 0;
          local_d = 0;
          FUN_006ae1c0(*(uint **)(local_c + 0x1b3),&local_20);
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x11;
      } while (local_8 < *(uint *)sizeHelp_exref);
    }
    thunk_FUN_005123a0();
    DAT_00858df8 = (undefined4 *)local_64;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_64;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x295,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x295);
  return;
}

