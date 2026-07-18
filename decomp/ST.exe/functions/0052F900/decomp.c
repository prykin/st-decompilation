
void __thiscall FUN_0052f900(void *this,int param_1)

{
  code *pcVar1;
  void *this_00;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (param_1 != *(int *)((int)this + 0x5c)) {
    *(int *)((int)this + 0x5c) = param_1;
    puVar7 = (undefined4 *)((int)this + 0x18);
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
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
    iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar5 == 0) {
      iVar5 = 10;
      piVar6 = (int *)((int)local_8 + 0x1b5);
      do {
        if (*piVar6 != 0) {
          FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      piVar6 = (int *)((int)this_00 + 0x1ad);
      iVar5 = 2;
      do {
        if (*piVar6 != 0) {
          FUN_006e6080(this_00,2,*piVar6,(undefined4 *)((int)this_00 + 0x18));
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      switch(*(undefined1 *)((int)this_00 + 0x1a4)) {
      case 3:
      case 4:
      case 0xc:
      case 0xe:
        puVar7 = (undefined4 *)((int)this_00 + 0x18);
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
          uVar3 = 0x56;
        }
        *(undefined4 *)((int)this_00 + 0x28) = uVar3;
        if (*(int *)((int)this_00 + 0x1b5) != 0) {
          FUN_006e6080(this_00,2,*(int *)((int)this_00 + 0x1b5),(undefined4 *)((int)this_00 + 0x18))
          ;
        }
      }
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x156,0,iVar5,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c70a0,0x156);
  }
  return;
}

