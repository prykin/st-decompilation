
void FUN_005916f0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  iVar3 = local_8;
  if (iVar2 == 0) {
    thunk_FUN_005b6220();
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    thunk_FUN_00568bc0(&DAT_00807658,1);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      FUN_006f20e0((uint *)(DAT_0081176c + 0x2c));
    }
    if (*(int *)(*(int *)(iVar3 + 0x1a5b) + 0x2e6) != 0) {
      thunk_FUN_005b6ff0();
      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    puVar4 = (undefined4 *)(iVar3 + 0x1b13);
    iVar3 = 3;
    do {
      iVar2 = 0xf;
      do {
        if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
          FUN_006c4a70((undefined4 *)*puVar4);
          *puVar4 = 0;
        }
        if (puVar4[-0x2d] != 0) {
          FUN_006f20e0(puVar4 + -0x2d);
        }
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 4;
    puVar4 = (undefined4 *)(local_8 + 0x1bd7);
    do {
      if ((undefined4 *)*puVar4 != (undefined4 *)0x0) {
        FUN_006c4a70((undefined4 *)*puVar4);
        *puVar4 = 0;
      }
      if (puVar4[-4] != 0) {
        FUN_006f20e0(puVar4 + -4);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(local_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(local_8 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x9d,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbcd4,0x9d);
  return;
}

