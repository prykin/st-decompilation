
void FUN_00543830(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (-1 < (int)*(uint *)(local_8 + 0x4d6)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(local_8 + 0x4d6));
    }
    *(undefined4 *)(local_8 + 0x4d6) = 0xffffffff;
    if (*(int *)(local_8 + 0x4d2) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x4d2));
    }
    *(undefined4 *)(local_8 + 0x4e3) = 0;
    *(undefined4 *)(local_8 + 0x4e7) = 0;
    if (*(int *)(local_8 + 0x4eb) != 0) {
      FUN_00715ab0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x4eb));
      *(undefined4 *)(local_8 + 0x4eb) = 0;
    }
    if (*(int **)(local_8 + 0xad) != (int *)0x0) {
      FUN_006b8a30(*(int **)(local_8 + 0xad));
    }
    *(undefined4 *)(local_8 + 0xad) = 0;
    FUN_00715ab0();
    DAT_00802a30 = 0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x7d,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7d60,0x7e);
  return;
}

