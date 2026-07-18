
void __thiscall thunk_FUN_0053ea50(void *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x5c) = param_1;
    puVar5 = (undefined4 *)((int)this + 0x18);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    sVar2 = (short)*(undefined4 *)((int)this + 0x174);
    *(undefined4 *)((int)this + 0x28) = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)((int)this + 0x2e) = sVar2;
    uStack_4c = DAT_00858df8;
    DAT_00858df8 = &uStack_4c;
    pvStack_8 = this;
    iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      if (*(int *)((int)pvStack_8 + 0x17c) != 0) {
        FUN_006e6080(pvStack_8,2,*(int *)((int)pvStack_8 + 0x17c),
                     (undefined4 *)((int)pvStack_8 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x134,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c7870,0x134);
  }
  return;
}

