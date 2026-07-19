
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::GetMessage */

undefined4 __thiscall VisibleClassTy::GetMessage(VisibleClassTy *this,int param_1)

{
  code *pcVar1;
  VisibleClassTy *this_00;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  bool bVar9;
  InternalExceptionFrame local_58;
  VisibleClassTy *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar2 == 0) {
    local_14->field_0108 = DAT_00802a38->field_00E4;
    uVar6 = *(uint *)(param_1 + 0x10);
    if (uVar6 < 0x109) {
      if (uVar6 == 0x108) {
        if (local_14->field_0114 != 0) {
          uVar3 = thunk_FUN_004ab050();
          uVar6 = this_00->field_0030 * this_00->field_0034;
          this_00->field_010C = uVar3;
          puVar8 = (undefined4 *)this_00->field_0050;
          for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          uVar7 = this_00->field_0030 * this_00->field_0034;
          puVar8 = (undefined4 *)this_00->field_004C;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          iVar2 = this_00->field_0110;
          uVar6 = 0;
          if (0 < *(int *)(iVar2 + 0xc)) {
            bVar9 = *(int *)(iVar2 + 0xc) != 0;
            do {
              if (bVar9) {
                pcVar4 = (char *)(*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
              }
              else {
                pcVar4 = (char *)0x0;
              }
              if (*pcVar4 == '\0') {
                thunk_FUN_00558dc0(this_00,(int)*(short *)(pcVar4 + 2),(int)*(short *)(pcVar4 + 4),
                                   (undefined *)(int)pcVar4[6],(uint)(byte)pcVar4[1],
                                   (undefined *)(uint)(byte)pcVar4[7],*(int *)(pcVar4 + 8),0x4000);
              }
              iVar2 = this_00->field_0110;
              uVar6 = uVar6 + 1;
              bVar9 = uVar6 < *(uint *)(iVar2 + 0xc);
            } while ((int)uVar6 < (int)*(uint *)(iVar2 + 0xc));
          }
        }
      }
      else if (uVar6 == 0) {
        if (local_14->field_0114 != 0) {
          VisHoleExec(local_14,unaff_EDI);
        }
      }
      else if (uVar6 == 2) {
        local_8 = (ushort *)0x0;
        if (DAT_00806754 != (cMf32 *)0x0) {
          local_8 = mfAObjLoad(DAT_00806754,PTR_s_VISIBILITY_0079aec4,0,0);
        }
        if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
          InitData(this_00);
        }
        else {
          Visible::PrepareAfterSave((Visible *)this_00,(int)local_8);
        }
        Init(this_00);
        if ((DAT_00806754 != (cMf32 *)0x0) && (local_8 != (ushort *)0x0)) {
          cMf32::RecMemFree(DAT_00806754,(uint *)&local_8);
        }
      }
      else if (uVar6 == 3) {
        thunk_FUN_00558140((int)local_14);
        if (this_00->field_0114 != 0) {
          FUN_00717870(DAT_00807598);
        }
        thunk_FUN_00553270();
        DAT_00802a88 = 0;
      }
    }
    else if (uVar6 == 0x10f) {
      local_c = 0;
      local_10 = (byte *)PrepareToSave(local_14,&local_c);
      STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != (byte *)0x0) {
        FUN_006ab060(&local_10);
      }
    }
    else if (uVar6 == 0x111) {
      local_14->field_0104 = 0;
    }
    FUN_006e5fd0();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x186,0,iVar2,
                             s_VisibleClassTy__GetMessage_error_007c9380,
                             *(undefined4 *)(param_1 + 0x10));
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,s_E____titans_grig_visible_cpp_007c92cc,0x187);
    return 0xffff;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

