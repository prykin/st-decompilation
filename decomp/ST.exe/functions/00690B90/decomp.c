
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetMessage */

undefined4 __thiscall AiTactClassTy::GetMessage(AiTactClassTy *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  AiTactClassTy *this_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  bool bVar9;
  InternalExceptionFrame local_58;
  AiTactClassTy *local_14;
  byte *local_10;
  uint local_c;
  int local_8;
  
  uVar7 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar4 == 0) {
    local_14->field_012C = DAT_00802a38->field_00E4;
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < 0x110) {
      if (uVar1 == 0x10f) {
        local_c = 0;
        local_10 = (byte *)PrepareToSave(local_14,&local_c);
        STPlaySystemC::SaveObjData
                  (DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_10,local_c);
        if (local_10 != (byte *)0x0) {
          FUN_006ab060(&local_10);
        }
      }
      else if (uVar1 == 0) {
        if (*(int *)&local_14->field_0x99 == 0) {
          *(undefined4 *)&local_14->field_0x99 = 1;
          thunk_FUN_00690a40((int)local_14);
        }
        else {
          thunk_FUN_00690ab0((int)local_14);
          ExecClaim(this_00,(int)unaff_EDI);
        }
      }
      else if (uVar1 == 2) {
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          RaiseInternalException(-6,DAT_007ed77c,s_E____titans_ai_ai_tact_cpp_007d56e0,0x45e);
        }
        InitData(this_00,puVar2);
        if (puVar2[3] == 0) {
          *(undefined4 *)&this_00->field_0x1c = DAT_00808754;
        }
        else {
          *(undefined4 *)&this_00->field_0x1c = *(undefined4 *)&this_00->field_0x7e;
        }
        if (puVar2[3] == 0) {
          InitDistrObj(this_00);
        }
      }
      else if (uVar1 == 3) {
        thunk_FUN_0068e010((int)local_14);
      }
    }
    else if (uVar1 == 0x111) {
      iVar4 = *(int *)&local_14->field_0xa5;
      if (0 < *(int *)(iVar4 + 0xc)) {
        bVar9 = *(int *)(iVar4 + 0xc) != 0;
        do {
          if (bVar9) {
            piVar8 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
          }
          else {
            piVar8 = (int *)0x0;
          }
          local_8 = 0;
          if (((*piVar8 == 0) || (iVar4 = FUN_006e62d0(DAT_00802a38,*piVar8,&local_8), iVar4 != 0))
             || (local_8 == 0)) {
            piVar8[1] = 0;
            *piVar8 = 0;
          }
          else {
            piVar8[1] = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          iVar4 = *(int *)&this_00->field_0xa5;
          uVar7 = uVar7 + 1;
          bVar9 = uVar7 < *(uint *)(iVar4 + 0xc);
        } while ((int)uVar7 < (int)*(uint *)(iVar4 + 0xc));
      }
    }
    else if (uVar1 == 0x5dd5) {
      HelpOrganize(local_14,param_1);
    }
    FUN_006e5fd0();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage(s_E____titans_ai_ai_tact_cpp_007d56e0,0x4ad,0,iVar4,
                             s_AiTactClassTy__GetMessage_error_m_007d58b8,
                             *(undefined4 *)(param_1 + 0x10),*(undefined4 *)&local_14->field_0x18);
  if (iVar5 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_tact_cpp_007d56e0,0x4ae);
    return 0xffff;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

