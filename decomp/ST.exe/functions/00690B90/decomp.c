
undefined4 FUN_00690b90(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  int *piVar8;
  void *unaff_EDI;
  bool bVar9;
  undefined4 local_58;
  undefined4 local_54 [16];
  AiTactClassTy *local_14;
  byte *local_10;
  uint local_c;
  int local_8;
  
  uVar7 = 0;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar4 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    *(undefined4 *)(local_14 + 300) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 < 0x110) {
      if (uVar1 == 0x10f) {
        local_c = 0;
        local_10 = (byte *)AiTactClassTy::PrepareToSave(local_14,&local_c);
        STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(local_14 + 0x18),local_10,local_c);
        if (local_10 != (byte *)0x0) {
          FUN_006ab060(&local_10);
        }
      }
      else if (uVar1 == 0) {
        if (*(int *)(local_14 + 0x99) == 0) {
          *(undefined4 *)(local_14 + 0x99) = 1;
          thunk_FUN_00690a40((int)local_14);
        }
        else {
          thunk_FUN_00690ab0((int)local_14);
          AiTactClassTy::ExecClaim(local_14,(int)unaff_EDI);
        }
      }
      else if (uVar1 == 2) {
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_006a5e40(-6,DAT_007ed77c,0x7d56e0,0x45e);
        }
        AiTactClassTy::InitData(local_14,puVar2);
        if (puVar2[3] == 0) {
          *(undefined4 *)(local_14 + 0x1c) = DAT_00808754;
        }
        else {
          *(undefined4 *)(local_14 + 0x1c) = *(undefined4 *)(local_14 + 0x7e);
        }
        if (puVar2[3] == 0) {
          AiTactClassTy::InitDistrObj(local_14);
        }
      }
      else if (uVar1 == 3) {
        thunk_FUN_0068e010((int)local_14);
      }
    }
    else if (uVar1 == 0x111) {
      iVar4 = *(int *)(local_14 + 0xa5);
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
            *(AiTactClassTy **)(local_8 + 0x284) = local_14;
          }
          iVar4 = *(int *)(local_14 + 0xa5);
          uVar7 = uVar7 + 1;
          bVar9 = uVar7 < *(uint *)(iVar4 + 0xc);
        } while ((int)uVar7 < (int)*(uint *)(iVar4 + 0xc));
      }
    }
    else if (uVar1 == 0x5dd5) {
      AiTactClassTy::HelpOrganize(local_14,param_1);
    }
    FUN_006e5fd0();
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x4ad,0,iVar4,
                       (byte *)s_AiTactClassTy__GetMessage_error_m_007d58b8);
  if (iVar5 == 0) {
    FUN_006a5e40(iVar4,0,0x7d56e0,0x4ae);
    return 0xffff;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}

