
void FUN_005d4850(void)

{
  void *this;
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    if (DAT_0080877e != '\0') {
      FUN_006b7070(DAT_00811764);
    }
    thunk_FUN_005b6350(local_8,0x6948,0,0);
    *(undefined1 *)((int)local_8 + 0x21e6) = 1;
    *(undefined1 *)((int)local_8 + 0x21e5) = 1;
    *(undefined1 *)(local_8 + 0x879) = 1;
    *(undefined1 *)((int)local_8 + 0x21e7) = 1;
    *(undefined1 *)((int)local_8 + 0x21e2) = 1;
    *(undefined1 *)((int)local_8 + 0x21e1) = 1;
    (**(code **)(*local_8 + 8))();
    this = *(void **)(*(int *)((int)local_8 + 0x1a5b) + 0x2e6);
    if (this != (void *)0x0) {
      thunk_FUN_005b8c70(this,1,0,1);
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x998,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd258,0x998);
  return;
}

