
void __fastcall FUN_00550250(void *param_1)

{
  code *pcVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined1 *puVar4;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  if ((*(int *)((int)param_1 + 0x3d) != 0) && (*(short *)(*(int *)((int)param_1 + 0x3d) + 5) != 0))
  {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    local_c = param_1;
    iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    this = local_c;
    if (iVar2 == 0) {
      local_8 = 0;
      puVar4 = (undefined1 *)(*(int *)((int)local_c + 0x3d) + 7);
      if (*(short *)(*(int *)((int)local_c + 0x3d) + 5) != 0) {
        do {
          iVar2 = *(int *)(puVar4 + 0x13);
          iVar3 = *(int *)(puVar4 + 0xf);
          thunk_FUN_005501d0(this,puVar4);
          local_8 = local_8 + 1;
          puVar4 = puVar4 + iVar2 + iVar3 + 0x1b;
        } while (local_8 < *(ushort *)(*(int *)((int)this + 0x3d) + 5));
      }
      *(undefined2 *)(*(int *)((int)this + 0x3d) + 5) = 0;
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x819,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c8430,0x81a);
  }
  return;
}

