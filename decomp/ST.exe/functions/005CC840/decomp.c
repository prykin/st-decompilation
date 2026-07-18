
void FUN_005cc840(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    thunk_FUN_00540dc0(0,*(undefined4 *)(local_8 + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    if (*(uint *)(local_8 + 0x21fc) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x21fc));
      *(undefined4 *)(local_8 + 0x21fc) = 0;
    }
    if (-1 < (int)*(uint *)(local_8 + 0x2200)) {
      FUN_006b3af0(DAT_008075a8,*(uint *)(local_8 + 0x2200));
    }
    if (*(char *)(local_8 + 0x21e6) != '\0') {
      if (*(uint *)(DAT_0081176c + 0x54c) != 0) {
        FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(DAT_0081176c + 0x54c));
        *(undefined4 *)(DAT_0081176c + 0x54c) = 0;
      }
      if (*(uint *)(DAT_0081176c + 0x550) != 0) {
        FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(DAT_0081176c + 0x550));
        *(undefined4 *)(DAT_0081176c + 0x550) = 0;
      }
      if (*(int *)(local_8 + 0x21f8) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)(local_8 + 0x21f8));
        *(undefined4 *)(local_8 + 0x21f8) = 0;
      }
      puVar3 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3[2] = 1;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 3) = 0xffffffff;
        puVar3[1] = 2;
        *(undefined4 *)(puVar3 + 7) = 0;
        *(undefined4 *)(puVar3 + 0xb) = 0;
        *(undefined4 *)(puVar3 + 0xf) = 0;
        *(undefined4 *)(puVar3 + 0x1b) = 1;
        *(undefined4 *)(puVar3 + 0x13) = 1;
        *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar3 + 0x27) = 0;
        *(undefined4 *)(puVar3 + 0x23) = 0;
        *(undefined4 *)(puVar3 + 0x2f) = 1;
        *(undefined4 *)(puVar3 + 0x2b) = 1;
      }
      *(undefined1 **)(local_8 + 0x21f8) = puVar3;
      if (puVar3 != (undefined1 *)0x0) {
        uVar7 = 0;
        cVar6 = '\x01';
        uVar5 = 0x10;
        iVar4 = 1;
        iVar2 = FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar5 = thunk_FUN_005aacb0(1,200,0x1f1,iVar2,iVar4,uVar5,cVar6,uVar7);
        if (uVar5 != 0) {
          iVar2 = *(int *)(local_8 + 0x21f8);
          *(undefined1 *)(iVar2 + 2) = 0;
          *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
          uVar5 = *(uint *)(*(int *)(local_8 + 0x21f8) + 3);
          if (-1 < (int)uVar5) {
            FUN_006b3430(DAT_008075a8,uVar5);
          }
          thunk_FUN_005ab0a0();
        }
        FUN_006b5f80(DAT_008075a8,200,0x1f1,400,0x62);
        thunk_FUN_00540620(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                           *(BITMAPINFO **)(DAT_0081176c + 0x2c));
      }
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
      }
    }
    thunk_FUN_005c6d40();
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0xc0,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd258,0xc0);
  return;
}

