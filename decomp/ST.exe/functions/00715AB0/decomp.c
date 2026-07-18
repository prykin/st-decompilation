
undefined4 FUN_00715ab0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    if ((*(int **)(local_8 + 0x48) != (int *)0x0) && (*(uint *)(local_8 + 4) != 0xffffffff)) {
      FUN_006b3bb0(*(int **)(local_8 + 0x48),*(uint *)(local_8 + 4));
    }
    if (*(int *)(local_8 + 0x61) == 0) {
      switch(*(undefined1 *)(local_8 + 0x4c)) {
      case 7:
      case 0x81:
        if (*(int *)(local_8 + 0x51) != 0) {
          FUN_00725e30((int *)(local_8 + 0x51));
        }
        break;
      case 8:
        if (*(int *)(local_8 + 0x59) != 0) {
          FUN_00726260((undefined4 *)(local_8 + 0x59));
        }
        break;
      case 0x1e:
        if (*(int *)(local_8 + 0x55) != 0) {
          FUN_00726bd0((int *)(local_8 + 0x55));
        }
      }
    }
    else {
      *(undefined4 *)(local_8 + 0x51) = 0;
      *(undefined4 *)(local_8 + 0x55) = 0;
      *(undefined4 *)(local_8 + 0x59) = 0;
    }
    *(undefined4 *)(local_8 + 0x61) = 0;
    *(undefined4 *)(local_8 + 4) = 0xffffffff;
    *(undefined4 *)(local_8 + 0x48) = 0;
    *(undefined4 *)(local_8 + 0x4d) = 0;
    *(undefined1 *)(local_8 + 0x65) = 0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0x76,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7f0454,0x78);
  return 0xfffffc18;
}

