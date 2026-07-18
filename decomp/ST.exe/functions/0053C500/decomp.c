
void FUN_0053c500(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_48 [16];
  void *local_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar6);
  if (iVar2 == 0) {
    thunk_FUN_0043beb0(DAT_007fa174,6,(int *)((int)local_8 + 0x27a));
    iVar2 = *(int *)((int)local_8 + (uint)*(byte *)((int)local_8 + 0x279) * 4 + 0x27a);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar2 + 0xc);
    }
    iVar2 = *(int *)((int)local_8 + (uint)*(byte *)((int)local_8 + 0x278) * 4 + 0x27a);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 0xc);
    }
    thunk_FUN_0053f510(local_8,uVar3,uVar5);
    thunk_FUN_0053c620(local_8);
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_research_cpp_007c76c8,0x52,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c76c8,0x52);
  return;
}

