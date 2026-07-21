#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::GetMessage */

undefined4 __thiscall VisibleClassTy::GetMessage(VisibleClassTy *this,int param_1)

{
  code *pcVar1;
  VisibleClassTy *this_00;
  int errorCode;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
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
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (errorCode == 0) {
    local_14->field_0108 = PTR_00802a38->field_00E4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 < 0x109) {
      if (uVar5 == 0x108) {
        if (local_14->field_0114 != 0) {
          uVar2 = thunk_FUN_004ab050();
          uVar5 = this_00->field_0030 * this_00->field_0034;
          this_00->field_010C = uVar2;
          puVar8 = (undefined4 *)this_00->field_0050;
          for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          uVar6 = this_00->field_0030 * this_00->field_0034;
          puVar8 = (undefined4 *)this_00->field_004C;
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = 0;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          pDVar7 = this_00->field_0110;
          uVar5 = 0;
          if (0 < (int)pDVar7->count) {
            bVar9 = pDVar7->count != 0;
            do {
              if (bVar9) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar5) (runtime stride) */
                pcVar3 = (char *)(pDVar7->elementSize * uVar5 + (int)pDVar7->data);
              }
              else {
                pcVar3 = (char *)0x0;
              }
              if (*pcVar3 == '\0') {
                thunk_FUN_00558dc0(this_00,(int)*(short *)(pcVar3 + 2),(int)*(short *)(pcVar3 + 4),
                                   (undefined *)(int)pcVar3[6],(int *)(uint)(byte)pcVar3[1],
                                   (uint)(byte)pcVar3[7],*(int **)(pcVar3 + 8),0x4000);
              }
              pDVar7 = this_00->field_0110;
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < pDVar7->count;
            } while ((int)uVar5 < (int)pDVar7->count);
          }
        }
      }
      else if (uVar5 == 0) {
        if (local_14->field_0114 != 0) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          VisHoleExec(local_14,unaff_EDI);
        }
      }
      else if (uVar5 == 2) {
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
      else if (uVar5 == 3) {
        thunk_FUN_00558140((AnonShape_00558140_7CF35A3F *)local_14);
        if (this_00->field_0114 != 0) {
          FUN_00717870((AnonShape_00717870_6CEBD31A *)PTR_00807598);
        }
        thunk_FUN_00553270();
        g_visibleClass_00802A88 = (VisibleClassTy *)0x0;
      }
    }
    else if (uVar5 == 0x10f) {
      local_c = 0;
      local_10 = (byte *)PrepareToSave(local_14,&local_c);
      STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != (byte *)0x0) {
        FreeAndNull(&local_10);
      }
    }
    else if (uVar5 == 0x111) {
      local_14->field_0104 = 0;
    }
    FUN_006e5fd0();
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = ReportDebugMessage(s_E____titans_grig_visible_cpp_007c92cc,0x186,0,errorCode,
                             s_VisibleClassTy__GetMessage_error_007c9380,
                             *(undefined4 *)(param_1 + 0x10));
  if (iVar4 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_grig_visible_cpp_007c92cc,0x187);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

