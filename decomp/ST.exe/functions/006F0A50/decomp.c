
int __cdecl
FUN_006f0a50(short *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7
            )

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if ((((param_1 == (short *)0x0) || (param_2 == (int *)0x0)) || (param_7 < 0)) || (5 < param_7))
    {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x279);
    }
    local_18 = param_3 + -1 + param_5;
    iVar4 = param_4 + -1 + param_6;
    if (param_3 <= local_18) {
      local_c = param_3 * 2;
      local_14 = iVar4;
      do {
        if (param_4 <= iVar4) {
          local_8 = param_4 * 2;
          iVar5 = param_4;
          local_10 = param_3;
          do {
            if ((((-1 < local_c) && (param_3 < *param_2)) &&
                ((-1 < local_8 && ((iVar5 < param_2[1] && (-1 < param_7)))))) && (param_7 < 6)) {
              iVar4 = (param_2[1] * param_7 + iVar5) * *param_2 + param_3;
              uVar2 = *(ushort *)((int)param_2 + (iVar4 * 3 + 6) * 2);
              if ((uVar2 == 0) || ((uVar2 & 0xf00) == 0)) {
                FUN_006f01a0(param_1,local_c,local_8,param_7);
                param_3 = local_10;
              }
              else {
                puVar1 = (uint *)((int)param_2 + iVar4 * 6 + 8);
                FUN_006eff90(param_1,local_c,local_8,param_7,*puVar1,(ushort)puVar1[1]);
                param_3 = local_10;
              }
            }
            iVar5 = iVar5 + 1;
            local_8 = local_8 + 2;
            iVar4 = local_14;
          } while (iVar5 <= local_14);
        }
        param_3 = param_3 + 1;
        local_c = local_c + 2;
      } while (param_3 <= local_18);
    }
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar5 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x28b,0,iVar4,&DAT_007a4ccc,
                             s_AuxTMapRefresh_007ef064);
  if (iVar5 == 0) {
    RaiseInternalException(iVar4,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x28d);
    return iVar4;
  }
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}

