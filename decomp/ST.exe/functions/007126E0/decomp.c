
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::FormIndentSarr */

uint * __thiscall
ccFntTy::FormIndentSarr
          (ccFntTy *this,int param_1,uint *param_2,uint *param_3,int param_4,int param_5,
          uint param_6,char *param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  ccFntTy *pcVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  int local_24;
  uint *local_20;
  int local_1c;
  ccFntTy *local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_10 = 0;
  if ((((param_1 != 0) && (param_2 != (uint *)0x0)) && (param_3 != (uint *)0x0)) && (0 < param_4)) {
    uVar2 = *(uint *)(param_1 + 8);
    if (param_6 == 0xffffffff) {
      param_6 = uVar2;
    }
    if ((param_5 < (int)uVar2) && (param_6 != 0)) {
      if ((int)uVar2 < (int)(param_6 + param_5)) {
        param_6 = uVar2 - param_5;
      }
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      local_18 = this;
      iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar5 == 0) {
        local_8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,param_6,*(uint *)(param_1 + 0x10));
        puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,param_6,*(uint *)(param_1 + 0x10));
        local_24 = param_6 + param_5;
        local_1c = param_5;
        local_20 = puVar6;
        if (param_5 < local_24) {
          do {
            if (param_5 < *(int *)(param_1 + 8)) {
              puVar7 = *(uint **)(*(int *)(param_1 + 0x14) + param_5 * 4);
            }
            else {
              puVar7 = (uint *)0x0;
            }
            local_1c = param_5;
            if (puVar7 == (uint *)0x0) break;
            cVar1 = (char)*puVar7;
            local_14 = puVar7;
            pcVar4 = local_18;
            while (local_1c = param_5, local_18 = pcVar4, cVar1 != '\0') {
              if (local_10 == 0) {
                iVar5 = FUN_0070cd90(&pcVar4->field_0x9e,puVar7);
                if ((iVar5 != 0) || (pcVar4->field_007E == 0)) goto LAB_007128c7;
                local_10 = 1;
              }
              else {
                local_10 = 0;
                iVar5 = FUN_0070cdc0((byte *)puVar7);
                if (iVar5 < 0) {
LAB_007128c7:
                  puVar8 = FUN_0070ce00(param_3,(char *)puVar7);
                  if (puVar8 != (uint *)0x0) {
                    uVar2 = *puVar7;
                    *(undefined1 *)puVar7 = 0;
                    Library::DKW::TBL::FUN_006b5aa0((int)puVar6,(char *)local_14);
                    *(char *)puVar7 = (char)uVar2;
                    local_14 = (uint *)((int)puVar7 + 1);
                    if (param_7 != (char *)0x0) {
                      Library::DKW::TBL::FUN_00752d50((int)puVar6,0,param_7);
                    }
                    puVar8 = FormSarr(local_18,(int)puVar6,param_2,param_4,0,0xffffffff,param_8);
                    local_c = puVar8;
                    if (puVar6 != (uint *)0x0) {
                      uVar2 = puVar6[2];
                      while (uVar2 != 0) {
                        FUN_006b7830((int)puVar6,0);
                        uVar2 = puVar6[2];
                      }
                    }
                    tSArrCat((int)local_8,(int)puVar8);
                    if (puVar8 != (uint *)0x0) {
                      FUN_006b5570((byte *)puVar8);
                      local_c = (uint *)0x0;
                    }
                  }
                }
              }
              puVar7 = (uint *)((int)puVar7 + 1);
              param_5 = local_1c;
              pcVar4 = local_18;
              cVar1 = *(char *)puVar7;
            }
            if (local_14 != puVar7) {
              Library::DKW::TBL::FUN_006b5aa0((int)puVar6,(char *)local_14);
            }
            param_5 = param_5 + 1;
            local_1c = param_5;
          } while (param_5 < local_24);
        }
        if (0 < (int)puVar6[2]) {
          if (param_7 != (char *)0x0) {
            Library::DKW::TBL::FUN_00752d50((int)puVar6,0,param_7);
          }
          puVar7 = FormSarr(local_18,(int)puVar6,param_2,param_4,0,0xffffffff,param_8);
          local_c = puVar7;
          if (puVar6 != (uint *)0x0) {
            uVar2 = puVar6[2];
            while (uVar2 != 0) {
              FUN_006b7830((int)puVar6,0);
              uVar2 = puVar6[2];
            }
          }
          tSArrCat((int)local_8,(int)puVar7);
          if (puVar7 != (uint *)0x0) {
            FUN_006b5570((byte *)puVar7);
            local_c = (uint *)0x0;
          }
        }
        if (puVar6 != (uint *)0x0) {
          FUN_006b5570((byte *)puVar6);
        }
        g_currentExceptionFrame = local_68.previous;
        return local_8;
      }
      g_currentExceptionFrame = local_68.previous;
      iVar9 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x81f,0,iVar5,&DAT_007a4ccc,
                                 s_ccFntTy__FormIndentSarr_007f02ec);
      if (iVar9 != 0) {
        pcVar3 = (code *)swi(3);
        puVar6 = (uint *)(*pcVar3)();
        return puVar6;
      }
      if (local_8 != (uint *)0x0) {
        FUN_006b5570((byte *)local_8);
      }
      if (local_20 != (uint *)0x0) {
        FUN_006b5570((byte *)local_20);
      }
      if (local_c != (uint *)0x0) {
        FUN_006b5570((byte *)local_c);
      }
      RaiseInternalException(iVar5,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x825);
    }
  }
  return (uint *)0x0;
}

