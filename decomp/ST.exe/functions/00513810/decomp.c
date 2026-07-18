
void __fastcall FUN_00513810(void *param_1)

{
  char cVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  undefined4 local_8;
  
  if (*(char *)((int)param_1 + 0x1a1) != *(char *)((int)param_1 + 0x1a2)) {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    local_c = param_1;
    iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    this = local_c;
    if (iVar3 == 0) {
      if (*(int *)((int)local_c + 0x178) != 0) {
        *(undefined4 *)((int)local_c + 0x28) = 0x4202;
        *(undefined2 *)((int)local_c + 0x2c) = 0;
        *(undefined2 *)((int)local_c + 0x2e) = 2;
        *(int *)((int)local_c + 0x30) = *(int *)((int)local_c + 0x178);
        if (DAT_00802a30 != (undefined4 *)0x0) {
          (**(code **)*DAT_00802a30)((int)local_c + 0x18);
        }
      }
      cVar1 = *(char *)((int)this + 0x1a2);
      if (cVar1 != '\0') {
        if (cVar1 == '\x06') {
          thunk_FUN_00516480(*(uint *)((int)this + 0x1ab),'\0');
          thunk_FUN_005134b0((int)this);
          DAT_00858df8 = (undefined4 *)local_50;
          return;
        }
        if (cVar1 != '\n') {
          DAT_00858df8 = (undefined4 *)local_50;
          return;
        }
      }
      *(char *)((int)this + 0x1a1) = cVar1;
      *(undefined4 *)((int)this + 0x1a3) = local_8;
      FUN_006b55f0(*(undefined4 **)((int)this + 0x68),0,0x21,0x16,*(int *)((int)this + 0x1dc),0,0x21
                   ,0x16,0x1b8,0x118);
      thunk_FUN_005123a0();
      if (*(char *)((int)this + 0x1a2) == '\0') {
        local_8 = *(undefined4 *)((int)this + 0x1b7);
      }
      else {
        local_8 = *(undefined4 *)((int)this + 0x1bf);
      }
      if (*(int *)((int)this + 0x19c) != 0) {
        puVar5 = (undefined4 *)((int)this + 0x18);
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)((int)this + 0x28) = 0x22;
        *(short *)((int)this + 0x2c) = (short)local_8;
        *(undefined2 *)((int)this + 0x30) = 1;
        *(undefined2 *)((int)this + 0x32) = 1;
        FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x19c),(undefined4 *)((int)this + 0x18));
      }
      DAT_00858df8 = (undefined4 *)local_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x2b3);
  }
  return;
}

