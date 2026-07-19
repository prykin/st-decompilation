
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_00718d50(int param_1,uint param_2,int param_3,uint param_4,byte param_5,uint param_6,
            undefined4 *param_7)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint extraout_ECX;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  undefined4 *local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_7 == (undefined4 *)0x0) {
      local_c = Library::DKW::LIB::FUN_006aac10(param_3 * 4);
    }
    else {
      local_c = param_7;
    }
    iVar3 = 0;
    if (0 < param_3) {
      local_10 = param_6 & 0xff;
      local_14 = (float)param_5;
      local_18 = (float)local_10;
      pbVar7 = (byte *)(param_1 + 2 + param_2 * 4);
      do {
        local_8 = pbVar7[-2];
        local_7 = pbVar7[-1];
        local_6 = *pbVar7;
        FUN_00718130(&local_8,&local_24);
        uVar6 = extraout_ECX;
        if (local_24 != _DAT_0079e280) {
          uVar6 = param_4 & 0xff;
          local_24 = (float)uVar6 * local_24 * (float)_DAT_0079b168;
          local_10 = uVar6;
        }
        local_20 = local_14 * local_20 * (float)_DAT_0079b168;
        local_1c = local_18 * local_1c * (float)_DAT_0079b168;
        if ((_DAT_0079e250 < local_24) && (local_24 != _DAT_0079e280)) {
          local_24 = 360.0;
        }
        if (_DAT_0079dfd0 < local_20) {
          local_20 = 1.0;
        }
        if (_DAT_0079dfd0 < local_1c) {
          local_1c = 1.0;
        }
        FUN_007183c0(uVar6,&local_8,&local_24,&local_8);
        iVar4 = (-(uint)(param_7 != (undefined4 *)0x0) & param_2) + iVar3;
        iVar3 = iVar3 + 1;
        pbVar1 = (byte *)(local_c + iVar4);
        pbVar7 = pbVar7 + 4;
        *pbVar1 = local_8;
        pbVar1[1] = local_7;
        pbVar1[2] = local_6;
      } while (iVar3 < param_3);
    }
    g_currentExceptionFrame = local_68.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_68.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x136,0,iVar3,&DAT_007a4ccc,
                             s_ChangePalette_Error__007f0784);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    puVar5 = (undefined4 *)(*pcVar2)();
    return puVar5;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_Palette_cpp_007f0718,0x137);
  return (undefined4 *)0x0;
}

