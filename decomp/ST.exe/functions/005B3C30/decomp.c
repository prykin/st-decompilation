
void FUN_005b3c30(void)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *this;
  void *unaff_EDI;
  int iVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  this = local_8;
  if (iVar2 == 0) {
    thunk_FUN_005b6480();
    iVar2 = 0;
    if (*(char *)((int)this + 0x9a) != '\0') {
      iVar5 = 0x96;
      piVar4 = (int *)((int)this + 0x123);
      do {
        DVar3 = timeGetTime();
        piVar4[1] = DVar3;
        *piVar4 = iVar5;
        *(undefined1 *)(piVar4 + -0x1a) = 1;
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x96;
        piVar4 = (int *)((int)piVar4 + 0x1fb);
        this = local_8;
      } while (iVar2 < (int)(uint)*(byte *)((int)local_8 + 0x9a));
    }
    *(undefined1 *)((int)this + 0x65) = 4;
    thunk_FUN_005b6730(this,2,'\x01',-1);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0xf7,0,iVar2,&DAT_007a4ccc);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar2,0,0x7cc8e8,0xf7);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

