
uint __fastcall thunk_FUN_00567060(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_54;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_10 = 0;
  FUN_007193f0();
  uVar3 = DAT_00807300 & 0xff;
  if (uVar3 == 2) {
    if (*(int *)(param_1 + 0xf8f) != 0) {
      bVar2 = FUN_00719650((MCIDEVICEID *)(param_1 + 0xf8f));
      return CONCAT31(extraout_var,bVar2);
    }
  }
  else if (((uVar3 == 4) || (uVar3 == 8)) && (*(int *)(param_1 + 0xf8b) != 0)) {
    uStack_c = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    do {
      IStack_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_54;
      iVar4 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        FUN_006c1f00(uStack_8 & 0xff,&uStack_c,(uint *)0x0);
      }
      g_currentExceptionFrame = IStack_54.previous;
      if (uStack_c == 1) {
        uStack_10 = 1;
      }
      bVar1 = (char)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar1);
    } while (bVar1 < 2);
    return uStack_10;
  }
  return 0;
}

