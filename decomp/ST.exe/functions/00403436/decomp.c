
void __thiscall CursorClassTy::DoneCursor(CursorClassTy *this)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  CursorClassTy *pCStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pCStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pCVar2 = pCStack_8;
  if (iVar3 == 0) {
    if (-1 < (int)*(uint *)(pCStack_8 + 0x4d6)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pCStack_8 + 0x4d6));
    }
    *(undefined4 *)(pCVar2 + 0x4d6) = 0xffffffff;
    if (*(int *)(pCVar2 + 0x4d2) != 0) {
      FUN_006ab060((undefined4 *)(pCVar2 + 0x4d2));
    }
    *(undefined4 *)(pCVar2 + 0x4e3) = 0;
    *(undefined4 *)(pCVar2 + 0x4e7) = 0;
    if (*(SpriteClassTy **)(pCVar2 + 0x4eb) != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite(*(SpriteClassTy **)(pCVar2 + 0x4eb));
      FUN_0072e2b0(*(undefined4 **)(pCVar2 + 0x4eb));
      *(undefined4 *)(pCVar2 + 0x4eb) = 0;
    }
    if (*(int **)(pCVar2 + 0xad) != (int *)0x0) {
      FUN_006b8a30(*(int **)(pCVar2 + 0xad));
    }
    *(undefined4 *)(pCVar2 + 0xad) = 0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)(pCVar2 + 0x18));
    DAT_00802a30 = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0x7d,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7d60,0x7e);
  return;
}

