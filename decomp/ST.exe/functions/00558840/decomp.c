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
  code *pcVar2;
  VisibleClassTy *this_00;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  DArrayTy *pDVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  undefined4 *puVar10;
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
    local_14->field_0108 = PTR_00802a38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar1 == MESS_SHARED_0108) {
        if (local_14->field_0114 != 0) {
          uVar4 = thunk_FUN_004ab050();
          uVar7 = this_00->field_0030 * this_00->field_0034;
          this_00->field_010C = uVar4;
          puVar10 = (undefined4 *)this_00->field_0050;
          for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          uVar8 = this_00->field_0030 * this_00->field_0034;
          puVar10 = (undefined4 *)this_00->field_004C;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          pDVar9 = this_00->field_0110;
          uVar7 = 0;
          if (0 < (int)pDVar9->count) {
            bVar11 = pDVar9->count != 0;
            do {
              if (bVar11) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar7) (runtime stride) */
                pcVar5 = (char *)(pDVar9->elementSize * uVar7 + (int)pDVar9->data);
              }
              else {
                pcVar5 = (char *)0x0;
              }
              if (*pcVar5 == '\0') {
                thunk_FUN_00558dc0(this_00,(int)*(short *)(pcVar5 + 2),(int)*(short *)(pcVar5 + 4),
                                   (undefined *)(int)pcVar5[6],(int *)(uint)(byte)pcVar5[1],
                                   (uint)(byte)pcVar5[7],*(int **)(pcVar5 + 8),0x4000);
              }
              pDVar9 = this_00->field_0110;
              uVar7 = uVar7 + 1;
              bVar11 = uVar7 < pDVar9->count;
            } while ((int)uVar7 < (int)pDVar9->count);
          }
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0114 != 0) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          VisHoleExec(local_14,unaff_EDI);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        local_8 = (ushort *)0x0;
        if (g_cMf32_00806754 != (cMf32 *)0x0) {
          local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad
                              (g_cMf32_00806754,PTR_s_VISIBILITY_0079aec4,0,0);
        }
        if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 10) == 0)) {
          InitData(this_00);
        }
        else {
          Visible::PrepareAfterSave((Visible *)this_00,local_8);
        }
        Init(this_00);
        if ((g_cMf32_00806754 != (cMf32 *)0x0) && (local_8 != (ushort *)0x0)) {
          cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        thunk_FUN_00558140((AnonShape_00558140_7CF35A3F *)local_14);
        if (this_00->field_0114 != 0) {
          FUN_00717870((AnonShape_00717870_6CEBD31A *)PTR_00807598);
        }
        thunk_FUN_00553270();
        g_visibleClass_00802A88 = (VisibleClassTy *)0x0;
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_c = 0;
      local_10 = (byte *)PrepareToSave(local_14,&local_c);
      STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != (byte *)0x0) {
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
  iVar6 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x186,0,iVar3,
                             "VisibleClassTy::GetMessage error mess->id == %lX",message->id);
  if (iVar6 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\visible.cpp",0x187);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

