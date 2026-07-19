
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::GetFittingStr */

char * __thiscall
ccFntTy::GetFittingStr
          (ccFntTy *this,char *param_1,uint *param_2,uint *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  ccFntTy *this_00;
  uint *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  uint *puVar10;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_60;
  ccFntTy *local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  char *local_c;
  char local_5;
  
  local_18 = 0;
  local_5 = '\0';
  local_c = (char *)0x0;
  local_10 = (uint *)0x0;
  local_14 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_1c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x93f,0,iVar5,&DAT_007a4ccc,
                               s_ccFntTy__GetFittingStr_007f038c);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      pcVar7 = (char *)(*pcVar2)();
      return pcVar7;
    }
    if (local_5 != '\0') {
      *(char *)local_10 = local_5;
    }
    if ((local_c != (char *)0x0) && (local_c != param_1)) {
      FUN_006ab060(&local_c);
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x944);
    return (char *)0x0;
  }
  if ((param_2 == (uint *)0x0) || (param_4 < 1)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x912);
  }
  this_00 = local_1c;
  iVar5 = FUN_00711110(local_1c,param_2);
  if (param_4 < iVar5) {
    if (param_3 != (uint *)0x0) {
      local_18 = FUN_00711110(this_00,param_3);
    }
    if (param_4 < local_18) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x91d);
    }
    cVar1 = (char)*param_2;
    puVar10 = param_2;
    local_10 = param_2;
    while (cVar1 != '\0') {
      if (local_14 == 0) {
        iVar5 = FUN_0070cd90((char *)(this_00 + 0x9e),puVar10);
        if ((iVar5 == 0) && (*(int *)(this_00 + 0x7e) != 0)) {
          local_14 = 1;
        }
        puVar4 = puVar10;
        if (puVar10 != local_10) {
          uVar8 = *puVar10;
          *(undefined1 *)puVar10 = 0;
          iVar5 = FUN_00711110(this_00,param_2);
          *(char *)puVar10 = (char)uVar8;
          if (param_4 < iVar5 + local_18) break;
        }
      }
      else {
        local_14 = 0;
        puVar4 = local_10;
      }
      local_10 = puVar4;
      pcVar7 = (char *)((int)puVar10 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
      cVar1 = *pcVar7;
    }
    local_5 = (char)*local_10;
    *(undefined1 *)local_10 = 0;
    if (param_1 == (char *)0x0) {
      if (param_3 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0xffffffff;
        puVar10 = param_3;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          uVar9 = *puVar10;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while ((char)uVar9 != '\0');
        uVar8 = ~uVar8;
      }
      uVar9 = 0xffffffff;
      puVar10 = param_2;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        uVar3 = *puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while ((char)uVar3 != '\0');
      param_1 = (char *)Library::DKW::LIB::FUN_006aac10(~uVar9 + uVar8);
    }
    uVar8 = 0xffffffff;
    do {
      puVar10 = param_2;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      puVar10 = (uint *)((int)param_2 + 1);
      uVar9 = *param_2;
      param_2 = puVar10;
    } while ((char)uVar9 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = (char *)((int)puVar10 - uVar8);
    pcVar11 = param_1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (param_3 != (uint *)0x0) {
      uVar8 = 0xffffffff;
      do {
        puVar10 = param_3;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar10 = (uint *)((int)param_3 + 1);
        uVar9 = *param_3;
        param_3 = puVar10;
      } while ((char)uVar9 != '\0');
      uVar8 = ~uVar8;
      iVar5 = -1;
      pcVar7 = param_1;
      do {
        pcVar11 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = (char *)((int)puVar10 - uVar8);
      pcVar11 = pcVar11 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    *(char *)local_10 = local_5;
    local_c = param_1;
  }
  else {
    if (param_1 == (char *)0x0) {
      uVar8 = 0xffffffff;
      puVar10 = param_2;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        uVar9 = *puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while ((char)uVar9 != '\0');
      param_1 = (char *)Library::DKW::LIB::FUN_006aac10(~uVar8);
    }
    uVar8 = 0xffffffff;
    do {
      puVar10 = param_2;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      puVar10 = (uint *)((int)param_2 + 1);
      uVar9 = *param_2;
      param_2 = puVar10;
    } while ((char)uVar9 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = (char *)((int)puVar10 - uVar8);
    pcVar11 = param_1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; local_c = param_1, uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  g_currentExceptionFrame = local_60.previous;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_10;
  }
  return local_c;
}

