
void __thiscall FUN_00511c70(void *this,int param_1)

{
  code *pcVar1;
  void *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x5c) = param_1;
    puVar6 = (undefined4 *)((int)this + 0x18);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    sVar2 = (short)*(undefined4 *)((int)this + 0x174);
    *(undefined4 *)((int)this + 0x28) = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)((int)this + 0x2e) = sVar2;
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar4 == 0) {
      if (*(int *)((int)local_8 + 0x17c) != 0) {
        FUN_006e6080(local_8,2,*(int *)((int)local_8 + 0x17c),(undefined4 *)((int)local_8 + 0x18));
      }
      piVar5 = (int *)((int)this_00 + 0x180);
      iVar4 = 7;
      do {
        if (*piVar5 != 0) {
          FUN_006e6080(this_00,2,*piVar5,(undefined4 *)((int)this_00 + 0x18));
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(int *)((int)this_00 + 0x19c) != 0) {
        FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x19c),(undefined4 *)((int)this_00 + 0x18));
        puVar6 = (undefined4 *)((int)this_00 + 0x18);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0xf2,0,iVar4,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c383c,0xf2);
  }
  return;
}

