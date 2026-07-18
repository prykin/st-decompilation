
void FUN_0059b740(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  void *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    thunk_FUN_005b6480();
    thunk_FUN_005b6730(local_8,0xc,'\x01',-1);
    thunk_FUN_0059f670();
    *(undefined1 *)((int)local_8 + 0x65) = 4;
    *(undefined1 *)((int)local_8 + 0x1a5f) = 0;
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x4a9,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbf70,0x4a9);
  return;
}

