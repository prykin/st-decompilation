
void thunk_FUN_0068f7e0(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  uint *puStack_8;
  
  puStack_8 = (uint *)0x0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = thunk_FUN_00676170(*(undefined4 *)(iStack_c + 0x24));
    puStack_8 = puVar3;
    thunk_FUN_0068f020((int)puVar3);
    thunk_FUN_0068f360((int)puVar3);
    if (puVar3 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar3);
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  if (puStack_8 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_8);
    puStack_8 = (uint *)0x0;
  }
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x2a8,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x2a9);
  return;
}

