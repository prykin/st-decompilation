
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::SepColorStrInSarr */

uint * __thiscall ccFntTy::SepColorStrInSarr(ccFntTy *this,uint *param_1,uint *param_2)

{
  char cVar1;
  ccFntTy cVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  ccFntTy *pcVar11;
  void *unaff_EDI;
  char *pcVar12;
  ccFntTy *pcVar13;
  InternalExceptionFrame local_68;
  char local_24 [12];
  ccFntTy *local_18;
  char *local_14;
  int local_10;
  uint *local_c;
  ccFntTy *local_8;
  
  uVar10 = 0;
  local_c = (uint *)0x0;
  local_8 = (ccFntTy *)0x0;
  local_10 = -1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x857,0,iVar4,&DAT_007a4ccc,
                               s_ccFntTy__SepColorStrInSarr_007f0304);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar3)();
      return puVar5;
    }
    if (local_8 != (ccFntTy *)0x0) {
      FUN_006ab060(&local_8);
    }
    if ((local_c != (uint *)0x0) && (local_c != param_1)) {
      FUN_006b5570((byte *)local_c);
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x85c);
    return (uint *)0x0;
  }
  if ((param_2 == (uint *)0x0) || (param_2[2] == 0)) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x83b);
  }
  puVar5 = param_1;
  if (param_1 == (uint *)0x0) {
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x14,0x14);
  }
  uVar8 = param_2[2];
  local_c = puVar5;
  if (0 < (int)uVar8) {
    if ((int)uVar8 < 1) {
      local_14 = (char *)0x0;
      goto LAB_00712a6e;
    }
    do {
      local_14 = *(char **)(param_2[5] + uVar10 * 4);
LAB_00712a6e:
      pcVar6 = local_14;
      if (local_14 != (char *)0x0) {
        if (0 < (int)uVar10) {
          if ((int)(uVar10 - 1) < (int)uVar8) {
            iVar4 = *(int *)((param_2[5] - 4) + uVar10 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (iVar4 != 0) {
            if ((int)(uVar10 - 1) < (int)uVar8) {
              puVar5 = *(uint **)((param_2[5] - 4) + uVar10 * 4);
            }
            else {
              puVar5 = (uint *)0x0;
            }
            local_10 = FUN_007112e0(local_18,puVar5);
          }
        }
        if (local_10 < 1) {
          if (param_2 != param_1) {
            Library::DKW::TBL::FUN_006b6020((int)local_c,uVar10,pcVar6);
          }
        }
        else {
          uVar8 = 0xffffffff;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          local_8 = (ccFntTy *)Library::DKW::LIB::FUN_006aac10(~uVar8 + 3);
          uVar8 = 0xffffffff;
          pcVar11 = local_18 + 0x9e;
          do {
            pcVar13 = pcVar11;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != (ccFntTy)0x0);
          uVar8 = ~uVar8;
          pcVar11 = pcVar13 + -uVar8;
          pcVar13 = local_8;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar6 = Library::MSVCRT::__itoa(local_10,local_24,0x10);
          uVar8 = 0xffffffff;
          do {
            pcVar12 = pcVar6;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar12;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar11 = local_8;
          do {
            pcVar13 = pcVar11;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != (ccFntTy)0x0);
          pcVar11 = (ccFntTy *)(pcVar12 + -uVar8);
          pcVar13 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar8 = 0xffffffff;
          pcVar6 = local_14;
          do {
            pcVar12 = pcVar6;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar12;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar11 = local_8;
          do {
            pcVar13 = pcVar11;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar13;
          } while (cVar2 != (ccFntTy)0x0);
          pcVar11 = (ccFntTy *)(pcVar12 + -uVar8);
          pcVar13 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          Library::DKW::TBL::FUN_006b6020((int)local_c,uVar10,(char *)local_8);
          FUN_006ab060(&local_8);
        }
      }
      uVar8 = param_2[2];
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar8);
  }
  g_currentExceptionFrame = local_68.previous;
  return local_c;
}

