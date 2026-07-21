
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SetNewDeep */

void __thiscall CPanelTy::SetNewDeep(CPanelTy *this,byte param_1,undefined1 param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  AnonShape_006B5B10_E0D06CF1 *pAVar11;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  AnonShape_006B5B10_E0D06CF1 *local_c;
  undefined1 local_5;
  
  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (param_1 == 0) {
        if (this->field_0B80 == '\0') {
          return;
        }
        if (this->field_0B63 == '\0') {
          return;
        }
        if (this->field_0B63 == '\x03') {
          return;
        }
      }
      else {
        if (this->field_0C6E == '\0') {
          return;
        }
        cVar1 = this->field_0C51;
        if (cVar1 == '\0') {
          return;
        }
        if (cVar1 == '\x03') {
          return;
        }
        if (cVar1 == '\x04') {
          return;
        }
      }
      local_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_58;
      local_10 = this;
      iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pCVar4 = local_10;
      if (iVar5 == 0) {
        pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)(uint)param_1;
        bVar10 = *(byte *)((int)&pAVar11[0x2a].field_0008 + (int)local_10);
        local_c = pAVar11;
        if (bVar10 != 0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar7 = (uint)(byte)local_10->field_02A8;
              if ((&local_10->field_0xb8d)[uVar7] == '\0') {
                uVar7 = uVar7 + 5;
              }
              uVar9 = (uint)(byte)local_10->field_02A8;
              pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            local_10->field_02A2,uVar7);
              iVar5 = (5 - uVar9) * 0xb;
              pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)pCVar4->field_018C;
            }
            else {
              uVar7 = (uint)bVar10;
              if ((&local_10->field_0xc7b)[uVar7] == '\0') {
                iVar5 = uVar7 + 0x14;
              }
              else {
                iVar5 = uVar7 + 0x19;
              }
              uVar9 = (uint)*(byte *)((int)&pAVar11[0x2a].field_0008 + (int)local_10);
              pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                            local_10->field_02A2,iVar5);
              pAVar11 = (AnonShape_006B5B10_E0D06CF1 *)pCVar4->field_0194;
              iVar5 = uVar9 * 0xb + 0x87;
            }
            DibPut(pAVar11,iVar5,uVar9 * 0xb + 0xb,'\x06',pbVar6);
            bVar10 = (-(param_1 != 0) & 2U) + 3;
            _local_14 = CONCAT31(uStack_13,bVar10);
            pAVar11 = local_c;
            if (bVar10 < 0xb) {
              uVar7 = (uint)bVar10;
              if (-1 < (int)(&pCVar4->field_0148)[uVar7]) {
                Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,(&pCVar4->field_0148)[uVar7],0xffffffff,
                           (&pCVar4->field_003C)[uVar7],*(uint *)(&pCVar4->field_0x94 + uVar7 * 4));
                pAVar11 = local_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              cVar1 = (&local_10->field_0xb8d)[(byte)local_10->field_02A8];
              local_c = (AnonShape_006B5B10_E0D06CF1 *)local_10->field_0188;
            }
            else {
              cVar1 = (&local_10->field_0xc7b)[bVar10];
              local_c = (AnonShape_006B5B10_E0D06CF1 *)local_10->field_0198;
            }
            pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02A2
                                          ,(-(uint)(cVar1 != '\0') & 0xfffffffe) + 2);
            DibPut(local_c,7,
                   (uint)*(byte *)((int)&pAVar11[0x2a].field_0008 + (int)pCVar4) * 0x1d + 6,'\x01',
                   pbVar6);
            bVar10 = (-(param_1 != 0) & 4U) + 2;
            _local_14 = CONCAT31(uStack_13,bVar10);
            if (bVar10 < 0xb) {
              uVar7 = (uint)bVar10;
              if (-1 < (int)(&pCVar4->field_0148)[uVar7]) {
                Library::DKW::DDX::FUN_006b3640
                          (DAT_008075a8,(&pCVar4->field_0148)[uVar7],0xffffffff,
                           (&pCVar4->field_003C)[uVar7],*(uint *)(&pCVar4->field_0x94 + uVar7 * 4));
              }
            }
          }
        }
        ((undefined1 *)((int)&pAVar11[0x2a].field_0004 + 2))[(int)pCVar4] = 0;
        *(undefined1 *)((int)&pAVar11[0x2a].field_0008 + (int)pCVar4) = param_2;
        *(undefined4 *)(&pCVar4->field_0x2aa + (int)pAVar11 * 4) = 0;
        thunk_FUN_005252c0(0xb4);
        local_5 = param_2;
        thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_5,0,0xffffffff);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      g_currentExceptionFrame = local_58.previous;
      iVar8 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1fb,0,iVar5,
                                 &DAT_007a4ccc,s_CPanelTy__SetNewDeep_007c24ec);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1fb);
    }
  }
  return;
}

