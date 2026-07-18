
void FUN_00543990(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    FUN_00715ab0();
    if (param_1 != 7) {
      iVar2 = 0x21;
      cVar4 = -0x7f;
      puVar5 = DAT_00811640;
    }
    else {
      iVar2 = 0;
      cVar4 = '\a';
      puVar5 = (undefined4 *)0x0;
    }
    FUN_007158a0(DAT_008075a8,0,cVar4,puVar5,iVar2,(uint)(param_1 != 7));
    *(undefined2 *)(local_8 + 0x494) = 0x58;
    thunk_FUN_0054bf40(0,*(undefined4 *)(local_8 + 0x34),*(undefined4 *)(local_8 + 0x38));
    if (*(uint *)(local_8 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x60),*(uint *)(local_8 + 0x1c));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x8c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7d60,0x8d);
  return;
}

