#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401D48|00558840; family_names=VisibleClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall VisibleClassTy::GetMessage(VisibleClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  VisibleClassTy *this_00;
  int iVar3;
  VisibleClassTy_field_0110Element *element_0110;
  int iVar5;
  uint uVar6;
  uint uVar7;
  VisibleClassTy_field_0110DArray *pVVar8;
  ushort *puVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_58;
  VisibleClassTy *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    local_14->field_0108 = g_playSystem_00802A38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar1 == MESS_SHARED_0108) {
        if (local_14->field_0114 != 0) {
          iVar3 = thunk_FUN_004ab050();
          uVar6 = this_00->field_0030 * this_00->field_0034;
          this_00->field_010C = iVar3;
          puVar9 = this_00->field_0050;
          for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar9[0] = 0;
            puVar9[1] = 0;
            puVar9 = puVar9 + 2;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0;
            puVar9 = (ushort *)((int)puVar9 + 1);
          }
          uVar7 = this_00->field_0030 * this_00->field_0034;
          pbVar10 = this_00->field_004C;
          memset(pbVar10, 0, uVar7); /* compiler bulk-zero initialization */
          pVVar8 = this_00->field_0110;
          uVar6 = 0;
          if (0 < (int)pVVar8->count) {
            bVar11 = pVVar8->count != 0;
            do {
              if (bVar11) {
                element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar8, uVar6);
              }
              else {
                element_0110 = nullptr;
              }
              if (element_0110->field_0000 == '\0') {
                sub_00558DC0(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,
                             (undefined *)(int)element_0110->field_0006,(int *)(uint)(byte)element_0110->field_0001,
                             (uint)(byte)element_0110->field_0007,element_0110->field_0008,0x4000);
              }
              pVVar8 = this_00->field_0110;
              uVar6 = uVar6 + 1;
              bVar11 = uVar6 < pVVar8->count;
            } while ((int)uVar6 < (int)pVVar8->count);
          }
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0114 != 0) {
          VisHoleExec(local_14);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        local_8 = nullptr;
        if (g_cMf32_00806754 != nullptr) {
          local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad
                              (g_cMf32_00806754,PTR_s_VISIBILITY_0079aec4,0,0);
        }
        if ((local_8 == nullptr) || (*(int *)(local_8 + 10) == 0)) {
          InitData(this_00);
        }
        else {
          Visible::PrepareAfterSave((Visible *)this_00,local_8);
        }
        Init(this_00);
        if ((g_cMf32_00806754 != nullptr) && (local_8 != nullptr)) {
          cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        sub_00558140(local_14);
        if (this_00->field_0114 != 0) {
          ST3DSMAPContext::sub_00717870(g_sT3DSMAPContext_00807598);
        }
        thunk_FUN_00553270();
        g_visibleClass_00802A88 = nullptr;
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_c = 0;
      local_10 = PrepareToSave(local_14,&local_c);
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != nullptr) {
        FreeAndNull(&local_10);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      local_14->field_0104 = 0;
    }
    FUN_006e5fd0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x186,0,iVar3,
                             "VisibleClassTy::GetMessage error mess->id == %lX",message->id);
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\visible.cpp",0x187);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

