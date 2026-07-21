
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0067F2B0 -> 0067F030 @ 0067F316 | 00683C70 -> 0067F030 @ 00683E1A | 00683C70 ->
   0067F030 @ 00683E4B | 00683C70 -> 0067F030 @ 00683E7C | 00683C70 -> 0067F030 @ 00683F96 |
   0068CEC0 -> 0067F030 @ 0068CFF3 | 0068CEC0 -> 0067F030 @ 0068D023 | 0068CEC0 -> 0067F030 @
   0068D054 | 0068CEC0 -> 0067F030 @ 0068D15B */

undefined4 __cdecl FUN_0067f030(char *text,char *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  InternalExceptionFrame local_4c;
  uint local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0067ef60((byte *)text,(int *)&local_8);
    if ((iVar1 != 0) && (-1 < (int)local_8)) {
      local_8 = Library::DKW::TBL::FUN_006b6020((uint *)PTR_00848a18,local_8,param_2);
      if (param_3 != (uint *)0x0) {
        *param_3 = local_8;
      }
      g_currentExceptionFrame = local_4c.previous;
      uVar2 = thunk_FUN_0067ee40(local_8);
      return uVar2;
    }
  }
  else {
    g_currentExceptionFrame = local_4c.previous;
  }
  return 0;
}

