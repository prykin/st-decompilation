
void thunk_FUN_00516300(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 == 0) {
    cVar1 = *(char *)(iStack_8 + 0x1a1);
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
      *(char *)(iStack_8 + 0x1a2) = cVar1;
      *(undefined4 *)(iStack_8 + 0x1ab) = *(undefined4 *)(iStack_8 + 0x1a3);
    }
    else {
      *(undefined1 *)(iStack_8 + 0x1a2) = 0;
      *(undefined4 *)(iStack_8 + 0x1ab) = 0;
    }
    *(undefined1 *)(iStack_8 + 0x1a1) = 7;
    *(undefined4 *)(iStack_8 + 0x1a7) = 0;
    *(undefined4 *)(iStack_8 + 0x1a3) = 0;
    *(undefined2 *)(iStack_8 + 0x1af) = 0;
    *(undefined2 *)(iStack_8 + 0x1b1) = 0;
    if (*(int *)(iStack_8 + 0x178) != 0) {
      *(undefined4 *)(iStack_8 + 0x28) = 0x4202;
      *(undefined2 *)(iStack_8 + 0x2c) = 0;
      *(undefined2 *)(iStack_8 + 0x2e) = 2;
      *(int *)(iStack_8 + 0x30) = *(int *)(iStack_8 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(iStack_8 + 0x18);
      }
    }
    if (*(uint *)(iStack_8 + 0x19c) != 0) {
      FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x19c));
    }
    thunk_FUN_00512be0(*(int *)(iStack_8 + 0x1d3));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x46e,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c383c,0x46e);
  return;
}

