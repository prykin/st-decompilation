#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\main_obj.cpp
   MainMenuTy::NoneMainMenu */

void __thiscall MainMenuTy::NoneMainMenu(MainMenuTy *this,void *param_1)

{
  char cVar1;
  code *pcVar2;
  MainMenuTy *this_00;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_54;
  MainMenuTy *local_10;
  int *local_c;
  int local_8;

  local_8 = 1;
  local_10 = this;
  DVar3 = timeGetTime();
  this->field_0061 = DVar3;
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
    iVar4 = 0;
    if (this_00->field_009A != 0) {
      puVar8 = (uint *)&this_00->field_0x221;
      do {
        if ((*(char *)((int)puVar8 + -0x13f) != '\0') &&
           (puVar8[9] <= this_00->field_0061 - puVar8[10])) {
          puVar8[10] = this_00->field_0061;
          uVar5 = puVar8[-5];
          puVar8[-5] = uVar5 + 1;
          if ((int)puVar8[-4] <= (int)(uVar5 + 1)) {
            puVar8[-5] = 0;
          }
          if (puVar8[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar8[0xb],puVar8[-6],puVar8[-5],*puVar8,puVar8[1]);
          }
        }
        iVar4 = iVar4 + 1;
        puVar8 = (uint *)((int)puVar8 + 0x1fb);
      } while (iVar4 < (int)(uint)this_00->field_009A);
    }
  }
  else if (cVar1 == '\x03') {
    iVar4 = 0;
    uVar5 = (uint)this_00->field_009A;
    if (uVar5 != 0) {
      do {
        if (*(int *)((int)&this_00->field_00BC + iVar4 * 0x1fb) != 0) {
          if (this_00->field_0061 - *(int *)((int)&this_00->field_0127 + iVar4 * 0x1fb) <
              *(uint *)((int)&this_00->field_0123 + iVar4 * 0x1fb)) {
            iVar4 = 0;
            local_8 = 0;
            if (uVar5 != 0) {
              pDVar6 = (DWORD *)&this_00->field_0x249;
              do {
                if (*(char *)((int)pDVar6 + -0x167) != '\0') {
                  *pDVar6 = this_00->field_0061;
                }
                iVar4 = iVar4 + 1;
                pDVar6 = (DWORD *)((int)pDVar6 + 0x1fb);
              } while (iVar4 < (int)(uint)this_00->field_009A);
            }
          }
          else {
            iVar7 = *(int *)((int)&this_00->field_00EB + iVar4 * 0x1fb);
            if (iVar7 < *(int *)(&this_00->field_0xef + iVar4 * 0x1fb) + -1) {
              if ((iVar7 == 0) &&
                 (uVar5 = *(uint *)((int)&this_00->field_00E7 + iVar4 * 0x1fb), uVar5 != 0xffffffff)
                 ) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)&this_00->field_012B + iVar4 * 0x1fb),uVar5,0xfffffffe,
                           *(uint *)((int)&this_00->field_00FF + iVar4 * 0x1fb),
                           *(uint *)((int)&this_00->field_0103 + iVar4 * 0x1fb));
              }
              *(int *)((int)&this_00->field_00EB + iVar4 * 0x1fb) =
                   *(int *)((int)&this_00->field_00EB + iVar4 * 0x1fb) + 1;
              uVar5 = *(uint *)((int)&this_00->field_00E7 + iVar4 * 0x1fb);
              if (uVar5 != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)&this_00->field_012B + iVar4 * 0x1fb),uVar5,
                           *(uint *)((int)&this_00->field_00EB + iVar4 * 0x1fb),
                           *(uint *)((int)&this_00->field_00FF + iVar4 * 0x1fb),
                           *(uint *)((int)&this_00->field_0103 + iVar4 * 0x1fb));
              }
              local_8 = 0;
            }
            else {
              iVar7 = *(int *)((int)&this_00->field_017C + iVar4 * 0x1fb);
              if (iVar7 < *(int *)(&this_00->field_0x180 + iVar4 * 0x1fb) + -3) {
                if (iVar7 == 0) {
                  uVar5 = *(uint *)((int)&this_00->field_0178 + iVar4 * 0x1fb);
                  if (uVar5 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_01BC + iVar4 * 0x1fb),uVar5,
                               0xfffffffe,*(uint *)((int)&this_00->field_0190 + iVar4 * 0x1fb),
                               *(uint *)((int)&this_00->field_0194 + iVar4 * 0x1fb));
                  }
                  if (((&this_00->field_00E2)[iVar4 * 0x1fb] != '\0') &&
                     (uVar5 = *(uint *)((int)&this_00->field_0209 + iVar4 * 0x1fb),
                     uVar5 != 0xffffffff)) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)&this_00->field_024D + iVar4 * 0x1fb),uVar5,
                               0xfffffffe,*(uint *)(&this_00->field_0x221 + iVar4 * 0x1fb),
                               *(uint *)(&this_00->field_0x225 + iVar4 * 0x1fb));
                  }
                }
                *(int *)((int)&this_00->field_017C + iVar4 * 0x1fb) =
                     *(int *)((int)&this_00->field_017C + iVar4 * 0x1fb) + 1;
                uVar5 = *(uint *)((int)&this_00->field_0178 + iVar4 * 0x1fb);
                if (uVar5 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            (*(uint **)((int)&this_00->field_01BC + iVar4 * 0x1fb),uVar5,
                             *(uint *)((int)&this_00->field_017C + iVar4 * 0x1fb),
                             *(uint *)((int)&this_00->field_0190 + iVar4 * 0x1fb),
                             *(uint *)((int)&this_00->field_0194 + iVar4 * 0x1fb));
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        uVar5 = (uint)this_00->field_009A;
      } while (iVar4 < (int)uVar5);
    }
    if (((this_00->field_1EE3 != '\0') && (g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0)) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_009A != 0) {
        local_c = &this_00->field_0066;
        puVar9 = (undefined4 *)&this_00->field_0xa3;
        iVar4 = 0x68ff;
        do {
          if (*local_c == 0) {
            iVar7 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,(uint)(this_00->field_1EDF != 0),
                               puVar9[0x17] + puVar9[-2],puVar9[0x18] + puVar9[-1],*puVar9,puVar9[1]
                               ,iVar4,iVar4 + 0x80);
            *local_c = iVar7;
          }
          local_c = local_c + 1;
          iVar7 = iVar4 + -0x68fe;
          puVar9 = (undefined4 *)((int)puVar9 + 0x1fb);
          iVar4 = iVar4 + 1;
        } while (iVar7 < (int)(uint)this_00->field_009A);
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
    iVar4 = 0;
    if (this_00->field_009A != 0) {
      puVar8 = &this_00->field_0178;
      do {
        if (this_00->field_0061 - *(int *)((int)puVar8 + -0x51) < *(uint *)((int)puVar8 + -0x55)) {
LAB_005b353c:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar8 + -0xbd) != '\0') {
            if (*puVar8 != 0xffffffff) {
              FUN_006b3af0((int *)puVar8[0x11],*puVar8);
            }
            if ((*(char *)((int)puVar8 + -0x96) != '\0') &&
               (*(uint *)((int)puVar8 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)puVar8 + 0xd5),*(uint *)((int)puVar8 + 0x91));
            }
            *(undefined1 *)((int)puVar8 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar8 + -0x8d)) {
            uVar5 = *(int *)((int)puVar8 + -0x8d) - 1;
            *(uint *)((int)puVar8 + -0x8d) = uVar5;
            if (*(uint *)((int)puVar8 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar8 + -0x4d),*(uint *)((int)puVar8 + -0x91),uVar5,
                         *(uint *)((int)puVar8 + -0x79),*(uint *)((int)puVar8 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar4 = iVar4 + 1;
        puVar8 = (uint *)((int)puVar8 + 0x1fb);
      } while (iVar4 < (int)(uint)this_00->field_009A);
    }
    iVar4 = 0;
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_009A != 0) {
        puVar8 = &this_00->field_00E7;
        do {
          if (*puVar8 != 0xffffffff) {
            FUN_006b3af0((int *)puVar8[0x11],*puVar8);
          }
          iVar4 = iVar4 + 1;
          puVar8 = (uint *)((int)puVar8 + 0x1fb);
        } while (iVar4 < (int)(uint)this_00->field_009A);
      }
      if (*(int *)((int)&this_00->field_00D1 + (uint)(byte)this_00->field_1A5A * 0x1fb) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)(byte)this_00->field_1A5A * 0x1fb));
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

