
uint __fastcall FUN_00567060(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  FUN_007193f0();
  uVar3 = DAT_00807300 & 0xff;
  if (uVar3 == 2) {
    if (*(int *)(param_1 + 0xf8f) != 0) {
      bVar2 = FUN_00719650((MCIDEVICEID *)(param_1 + 0xf8f));
      return CONCAT31(extraout_var,bVar2);
    }
  }
  else if (((uVar3 == 4) || (uVar3 == 8)) && (*(int *)(param_1 + 0xf8b) != 0)) {
    local_c = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      local_54.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_54;
      iVar4 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        FUN_006c1f00(local_8 & 0xff,&local_c,(uint *)0x0);
      }
      g_currentExceptionFrame = local_54.previous;
      if (local_c == 1) {
        local_10 = 1;
      }
      bVar1 = (char)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar1);
    } while (bVar1 < 2);
    return local_10;
  }
  return 0;
}

