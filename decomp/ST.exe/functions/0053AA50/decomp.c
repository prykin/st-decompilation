
void __thiscall FUN_0053aa50(void *this,int param_1)

{
  code *pcVar1;
  void *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  int local_c;
  int *local_8;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x5c) = param_1;
    puVar5 = (undefined4 *)((int)this + 0x18);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    sVar2 = (short)*(undefined4 *)((int)this + 0x174);
    *(undefined4 *)((int)this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)((int)this + 0x2e) = sVar2;
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    local_10 = this;
    iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    this_00 = local_10;
    if (iVar4 == 0) {
      if (*(int *)((int)local_10 + 0x17c) != 0) {
        FUN_006e6080(local_10,2,*(int *)((int)local_10 + 0x17c),(undefined4 *)((int)local_10 + 0x18)
                    );
      }
      piVar6 = (int *)((int)this_00 + 0x181);
      local_c = 8;
      do {
        iVar4 = 2;
        local_8 = piVar6;
        do {
          if (*piVar6 != 0) {
            FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
          }
          piVar6 = piVar6 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        piVar6 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = piVar6;
      if (*(int *)((int)this_00 + 0x1c5) != 0) {
        FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x1c5),(undefined4 *)((int)this_00 + 0x18));
      }
      if (*(int *)((int)this_00 + 0x1c1) != 0) {
        FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x1c1),(undefined4 *)((int)this_00 + 0x18));
      }
      DAT_00858df8 = (undefined4 *)local_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0xfe,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c7574,0xfe);
  }
  return;
}

