
undefined4 __thiscall FUN_004fa400(void *this,int param_1)

{
  code *pcVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (param_1 == *(int *)((int)this + 0x130)) {
    return 0;
  }
  *(int *)((int)this + 0x130) = param_1;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    thunk_FUN_004fa570(local_8,1,param_1);
    thunk_FUN_004fa570(this_00,0,param_1);
    piVar5 = (int *)((int)this_00 + 0x9a4);
    iVar2 = 7;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this_00,2,*piVar5,(undefined4 *)((int)this_00 + 0x18));
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar5 = (int *)((int)this_00 + 0x9c0);
    iVar2 = 2;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this_00,2,*piVar5,(undefined4 *)((int)this_00 + 0x18));
      }
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return 1;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x42b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c1bd8,0x42b);
  return 1;
}

