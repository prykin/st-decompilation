
undefined4 __thiscall FUN_005384a0(void *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_8 = this;
  uVar2 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x38) = uVar2;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 2) {
      thunk_FUN_005381b0();
    }
    else if (iVar3 == 3) {
      thunk_FUN_00538390();
    }
    else if (iVar3 == 5) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_8 + 0x60),0xffffffff,
                   *(uint *)((int)local_8 + 0x3c),*(uint *)((int)local_8 + 0x44));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    uVar2 = FUN_006e5fd0();
    return uVar2;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x52,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  FUN_006a5e40(iVar3,0,0x7c7390,0x52);
  return 0xffff;
}

