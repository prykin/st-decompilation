
/* WARNING: Removing unreachable block (ram,0x00718b4d) */
/* WARNING: Removing unreachable block (ram,0x00718af4) */
/* WARNING: Removing unreachable block (ram,0x00718b21) */
/* WARNING: Removing unreachable block (ram,0x00718c09) */
/* WARNING: Removing unreachable block (ram,0x00718c35) */
/* WARNING: Removing unreachable block (ram,0x00718c61) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_00718a40(int param_1,int param_2,int param_3,uint param_4,byte param_5,byte param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  uint uVar11;
  ulonglong uVar12;
  InternalExceptionFrame local_70;
  float local_2c;
  float local_28;
  float local_24;
  byte local_20;
  byte bStack_1f;
  byte bStack_1e;
  float local_18;
  float local_14;
  uint local_10;
  int local_c;
  byte *local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = __setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x112,0,iVar3,&DAT_007a4ccc,
                               s_CreateReplColorTblHi_error__007f074c);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Palette_cpp_007f0718,0x113);
    return (undefined4 *)0x0;
  }
  if (param_7 == (undefined4 *)0x0) {
    param_7 = (undefined4 *)FUN_006aac70(0x10000);
  }
  puVar5 = param_7;
  for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (param_2 < param_3 + param_2) {
    local_14 = (float)param_5;
    local_c = (param_3 + param_2) - param_2;
    local_18 = (float)param_6;
    local_8 = (byte *)(param_1 + 2 + param_2 * 4);
    do {
      uVar2 = (ushort)(local_8[-2] >> 3);
      uVar4 = (uint)uVar2;
      if ((3 < (local_8[-2] & 7)) && (uVar2 < 0x1e)) {
        uVar4 = uVar4 + 1;
      }
      bStack_1f = local_8[-1];
      uVar10 = (uint)(ushort)(bStack_1f >> 3);
      if ((3 < (bStack_1f & 7)) && (bStack_1f >> 3 < 0x1e)) {
        uVar10 = uVar10 + 1;
      }
      bStack_1e = *local_8;
      uVar11 = (uint)(bStack_1e >> 3);
      if ((3 < (bStack_1e & 7)) && (bStack_1e >> 3 < 0x1e)) {
        uVar11 = uVar11 + 1;
      }
      local_20 = local_8[-2];
      FUN_00718130(&local_20,&local_2c);
      if (local_2c != _DAT_0079e280) {
        local_10 = param_4 & 0xff;
        local_2c = (float)local_10 * local_2c * (float)_DAT_0079b168;
      }
      local_28 = local_14 * local_28 * (float)_DAT_0079b168;
      local_24 = local_18 * local_24 * (float)_DAT_0079b168;
      uVar12 = FUN_007183c0(&local_20,&local_2c,&local_2c,&local_20);
      if ((int)uVar12 == 0) {
        uVar2 = (ushort)(local_20 >> 3);
        if ((3 < (local_20 & 7)) && (uVar2 < 0x1e)) {
          uVar2 = uVar2 + 1;
        }
        uVar9 = (ushort)(bStack_1f >> 3);
        if ((3 < (bStack_1f & 7)) && (uVar9 < 0x1e)) {
          uVar9 = uVar9 + 1;
        }
        bVar7 = bStack_1e >> 3;
        uVar8 = (ushort)bVar7;
        if ((3 < (bStack_1e & 7)) && (bVar7 < 0x1e)) {
          uVar8 = bVar7 + 1;
        }
        *(ushort *)((int)param_7 + ((uVar4 << 5 | uVar10) << 5 | uVar11) * 2) =
             (uVar2 << 5 | uVar9) << 5 | uVar8;
      }
      else {
        iVar3 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x10a,0,0,&DAT_007a4ccc,
                                   s_Bad_color___007f0778);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          puVar5 = (undefined4 *)(*pcVar1)();
          return puVar5;
        }
      }
      iVar3 = thunk_FUN_006a5210();
      if ((iVar3 == 0) &&
         (iVar3 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x10d,0,0,&DAT_007a4ccc,
                                     s_Memory_error___007f0768), iVar3 != 0)) {
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
      local_8 = local_8 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return param_7;
}

