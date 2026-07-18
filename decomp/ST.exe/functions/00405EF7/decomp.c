
void thunk_FUN_00533a10(char param_1,undefined1 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x4a6,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7c70a0,0x4a6);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == '\n') {
    *(undefined4 *)((int)pvStack_8 + 0x1a5) = 0x4271;
    *(undefined1 *)((int)pvStack_8 + 0x1ac) = param_2;
  }
  else if (param_1 == '\v') {
    *(undefined4 *)((int)pvStack_8 + 0x1a5) = 0x4270;
  }
  else {
    if (param_1 != '\f') {
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    *(undefined4 *)((int)pvStack_8 + 0x1a5) = 0x4276;
  }
  *(char *)((int)pvStack_8 + 0x1ab) = param_1;
  *(undefined4 *)((int)pvStack_8 + 0x1a0) = 0;
  *(undefined1 *)((int)pvStack_8 + 0x1a9) = 0;
  *(undefined1 *)((int)pvStack_8 + 0x1a4) = 0xb;
  thunk_FUN_0052fb00();
  if ((*(short *)((int)pvStack_8 + 0x172) == 2) || (*(short *)((int)pvStack_8 + 0x172) == 4)) {
    thunk_FUN_0052f2b0(pvStack_8,-1);
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  return;
}

