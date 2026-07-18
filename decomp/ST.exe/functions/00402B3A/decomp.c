
void __thiscall thunk_FUN_0053f780(void *this,int param_1)

{
  code *pcVar1;
  void *this_00;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x5c) = param_1;
    puVar6 = (undefined4 *)((int)this + 0x18);
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
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
    iVar5 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
    this_00 = pvStack_8;
    if (iVar5 == 0) {
      if (*(int *)((int)pvStack_8 + 0x180) != 0) {
        FUN_006e6080(pvStack_8,2,*(int *)((int)pvStack_8 + 0x180),
                     (undefined4 *)((int)pvStack_8 + 0x18));
      }
      if (*(int *)((int)this_00 + 0x19d) != 0) {
        FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x19d),(undefined4 *)((int)this_00 + 0x18));
      }
      piVar7 = (int *)((int)this_00 + 0x1a1);
      iVar5 = 5;
      do {
        if (*piVar7 != 0) {
          FUN_006e6080(this_00,2,*piVar7,(undefined4 *)((int)this_00 + 0x18));
        }
        piVar7 = piVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
        uVar3 = 0x56;
      }
      *(undefined4 *)((int)this_00 + 0x28) = uVar3;
      if (*(int *)((int)this_00 + 0x19d) != 0) {
        FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x19d),(undefined4 *)((int)this_00 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff,0,iVar5,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c7870,0x1ff);
  }
  return;
}

