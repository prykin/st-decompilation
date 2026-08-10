#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::NoneMainMenu
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneMainMenu(MainMenuTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005B35FF RET | 005B38C9 RET | 005B3950 RET | 005B3996 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall MainMenuTy::NoneMainMenu(MainMenuTy *this)

{
  char cVar1;
  int iVar2;
  MainMenuTy *this_00;
  DWORD DVar4;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_54;
  MainMenuTy *local_10;
  uint *local_c;
  int local_8;

  local_8 = 1;
  local_10 = this;
  DVar4 = timeGetTime();
  this->field_0061 = DVar4;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\main_obj.cpp",0xd2,0,iVar4,"%s",
                               "MainMenuTy::NoneMainMenu");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\main_obj.cpp",0xd2);
    return;
  }
  LightPalette(local_10);
  AnimationMainMenu(this_00);
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = (uint *)&this_00->field_0x221;
      do {
        if ((*(char *)((int)puVar9 + -0x13f) != '\0') &&
           (puVar9[9] <= this_00->field_0061 - puVar9[10])) {
          puVar9[10] = this_00->field_0061;
          uVar5 = puVar9[-5];
          puVar9[-5] = uVar5 + 1;
          if ((int)puVar9[-4] <= (int)(uVar5 + 1)) {
            puVar9[-5] = 0;
          }
          if (puVar9[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar9[0xb],puVar9[-6],puVar9[-5],*puVar9,puVar9[1]);
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar8 = 0;
    uVar5 = (uint)this_00->field_009A;
    if (uVar5 != 0) {
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x56) != 0) {
          if (this_00->field_0061 - *(int *)((int)&this_00->field_0127 + iVar8 * 0x1fb) <
              *(uint *)((int)&this_00->field_0123 + iVar8 * 0x1fb)) {
            iVar8 = 0;
            local_8 = 0;
            if (uVar5 != 0) {
              pDVar6 = (DWORD *)&this_00->field_0x249;
              do {
                if (*(char *)((int)pDVar6 + -0x167) != '\0') {
                  *pDVar6 = this_00->field_0061;
                }
                iVar8 = iVar8 + 1;
                pDVar6 = (DWORD *)((int)pDVar6 + 0x1fb);
              } while (iVar8 < (int)(uint)this_00->field_009A);
            }
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar2 = *(int *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x85);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (iVar2 < *(int *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x89) + -1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((iVar2 == 0) &&
                 (uVar5 = *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x81),
                 uVar5 != 0xffffffff)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)&this_00->field_012B + iVar8 * 0x1fb),uVar5,0xfffffffe,
                           *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x99),
                           *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x9d));
              }
              *(int *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x85) =
                   *(int *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x85) + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar5 = *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x81);
              if (uVar5 != 0xffffffff) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)&this_00->field_012B + iVar8 * 0x1fb),uVar5,
                           *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x85),
                           *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x99),
                           *(uint *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x9d));
              }
              local_8 = 0;
            }
            else {
              iVar2 = *(int *)((int)&this_00->field_017C + iVar8 * 0x1fb);
              if (iVar2 < *(int *)(&this_00->field_0x180 + iVar8 * 0x1fb) + -3) {
                if (iVar2 == 0) {
                  uVar5 = *(uint *)((int)&this_00->field_0178 + iVar8 * 0x1fb);
                  if (uVar5 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_01BC + iVar8 * 0x1fb),uVar5,
                               0xfffffffe,*(uint *)((int)&this_00->field_0190 + iVar8 * 0x1fb),
                               *(uint *)((int)&this_00->field_0194 + iVar8 * 0x1fb));
                  }
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  if ((*(char *)((int)this_00->field_0066 + iVar8 * 0x1fb + 0x7c) != '\0') &&
                     (uVar5 = *(uint *)((int)&this_00->field_0209 + iVar8 * 0x1fb),
                     uVar5 != 0xffffffff)) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_024D + iVar8 * 0x1fb),uVar5,
                               0xfffffffe,*(uint *)(&this_00->field_0x221 + iVar8 * 0x1fb),
                               *(uint *)(&this_00->field_0x225 + iVar8 * 0x1fb));
                  }
                }
                *(int *)((int)&this_00->field_017C + iVar8 * 0x1fb) =
                     *(int *)((int)&this_00->field_017C + iVar8 * 0x1fb) + 1;
                uVar5 = *(uint *)((int)&this_00->field_0178 + iVar8 * 0x1fb);
                if (uVar5 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            (*(uint **)((int)&this_00->field_01BC + iVar8 * 0x1fb),uVar5,
                             *(uint *)((int)&this_00->field_017C + iVar8 * 0x1fb),
                             *(uint *)((int)&this_00->field_0190 + iVar8 * 0x1fb),
                             *(uint *)((int)&this_00->field_0194 + iVar8 * 0x1fb));
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        uVar5 = (uint)this_00->field_009A;
      } while (iVar8 < (int)uVar5);
    }
    if (((this_00->field_1EE3 != '\0') && (g_startSystem_0081176C->field_02E6 != nullptr)) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_009A != 0) {
        local_c = this_00->field_0066;
        puVar10 = (undefined4 *)&this_00->field_0xa3;
        iVar8 = 0x68ff;
        do {
          if (*local_c == 0) {
            uVar5 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,(uint)(this_00->field_1EDF != 0),
                               puVar10[0x17] + puVar10[-2],puVar10[0x18] + puVar10[-1],*puVar10,
                               puVar10[1],iVar8,iVar8 + 0x80);
            *local_c = uVar5;
          }
          local_c = local_c + 1;
          iVar2 = iVar8 + -0x68fe;
          puVar10 = (undefined4 *)((int)puVar10 + 0x1fb);
          iVar8 = iVar8 + 1;
        } while (iVar2 < (int)(uint)this_00->field_009A);
      }
      this_00->field_0065 = 1;
      if (this_00->field_1A6F != 0) {
        FUN_006e3db0((int)&this_00->field_0x1a5f);
        this_00->field_1A6F = 0;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    iVar8 = 0;
    if (this_00->field_009A != 0) {
      puVar9 = &this_00->field_0178;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar9 + -0x51) < *(uint *)((int)puVar9 + -0x55)) {
LAB_005b353c:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar9 + -0xbd) != '\0') {
            if (*puVar9 != 0xffffffff) {
              FUN_006b3af0((int *)puVar9[0x11],*puVar9);
            }
            if ((*(char *)((int)puVar9 + -0x96) != '\0') &&
               (STField<uint>(puVar9,0x91) != 0xffffffff)) {
              FUN_006b3af0(STField<int *>(puVar9,0xd5),STField<uint>(puVar9,0x91));
            }
            *(undefined1 *)((int)puVar9 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar9 + -0x8d)) {
            uVar5 = *(int *)((int)puVar9 + -0x8d) - 1;
            *(uint *)((int)puVar9 + -0x8d) = uVar5;
            if (*(uint *)((int)puVar9 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar9 + -0x4d),*(uint *)((int)puVar9 + -0x91),uVar5,
                         *(uint *)((int)puVar9 + -0x79),*(uint *)((int)puVar9 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)((int)puVar9 + 0x1fb);
      } while (iVar8 < (int)(uint)this_00->field_009A);
    }
    iVar8 = 0;
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != 0) {
        puVar9 = &this_00->field_00E7;
        do {
          if (*puVar9 != 0xffffffff) {
            FUN_006b3af0((int *)puVar9[0x11],*puVar9);
          }
          iVar8 = iVar8 + 1;
          puVar9 = (uint *)((int)puVar9 + 0x1fb);
        } while (iVar8 < (int)(uint)this_00->field_009A);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)((int)this_00->field_0066 + (uint)(byte)this_00->field_1A5A * 0x1fb + 0x6b) != 0)
      {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)
                   ((int)this_00->field_0066 + (uint)(byte)this_00->field_1A5A * 0x1fb + 0x5b));
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

