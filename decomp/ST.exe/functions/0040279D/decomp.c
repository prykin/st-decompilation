
void thunk_FUN_0059c520(void)

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
  if (iVar2 == 0) {
    switch(*(undefined1 *)((int)pvStack_8 + 0x1a5f)) {
    case 2:
      thunk_FUN_0059c700();
      *(undefined1 *)((int)pvStack_8 + 0x1a62) = 1;
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 3:
      thunk_FUN_0059d240();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 4:
      thunk_FUN_0059c9f0();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 5:
      thunk_FUN_0059cee0();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 6:
      thunk_FUN_0059db20();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 7:
      thunk_FUN_0059e7f0();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 8:
      thunk_FUN_0059eb00();
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    case 9:
      thunk_FUN_0059f260();
      break;
    case 10:
      thunk_FUN_0059d720(pvStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x582,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7cbf70,0x582);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

