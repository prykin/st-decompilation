
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
  int iVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_main_obj_cpp_007cc8e8,0xd2,0,iVar4,&DAT_007a4ccc,
                               s_MainMenuTy__NoneMainMenu_007cc980);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_main_obj_cpp_007cc8e8,0xd2);
    return;
  }
  LightPalette(local_10);
  AnimationMainMenu(this_00);
  cVar1 = this_00->field_0x65;
  if (cVar1 == '\x01') {
    iVar4 = 0;
    if (this_00->field_0x9a != '\0') {
      puVar7 = (uint *)&this_00[1].field_0xa1;
      do {
        if ((*(char *)((int)puVar7 + -0x13f) != '\0') &&
           (puVar7[9] <= this_00->field_0061 - puVar7[10])) {
          puVar7[10] = this_00->field_0061;
          uVar5 = puVar7[-5];
          puVar7[-5] = uVar5 + 1;
          if ((int)puVar7[-4] <= (int)(uVar5 + 1)) {
            puVar7[-5] = 0;
          }
          if (puVar7[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar7[0xb],puVar7[-6],puVar7[-5],*puVar7,puVar7[1]);
          }
        }
        iVar4 = iVar4 + 1;
        puVar7 = (uint *)((int)puVar7 + 0x1fb);
      } while (iVar4 < (int)(uint)(byte)this_00->field_0x9a);
    }
  }
  else if (cVar1 == '\x03') {
    iVar4 = 0;
    uVar5 = (uint)(byte)this_00->field_0x9a;
    if (uVar5 != 0) {
      do {
        if (*(int *)((int)this_00 + iVar4 * 0x1fb + 0xbc) != 0) {
          if ((uint)(this_00->field_0061 - *(int *)((int)this_00 + iVar4 * 0x1fb + 0x127)) <
              *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x123)) {
            iVar4 = 0;
            local_8 = 0;
            if (uVar5 != 0) {
              puVar8 = (undefined4 *)&this_00[1].field_0xc9;
              do {
                if (*(char *)((int)puVar8 + -0x167) != '\0') {
                  *puVar8 = this_00->field_0061;
                }
                iVar4 = iVar4 + 1;
                puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
              } while (iVar4 < (int)(uint)(byte)this_00->field_0x9a);
            }
          }
          else {
            iVar6 = *(int *)((int)this_00 + iVar4 * 0x1fb + 0xeb);
            if (iVar6 < *(int *)((int)this_00 + iVar4 * 0x1fb + 0xef) + -1) {
              if ((iVar6 == 0) &&
                 (uVar5 = *(uint *)((int)this_00 + iVar4 * 0x1fb + 0xe7), uVar5 != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)this_00 + iVar4 * 0x1fb + 299),uVar5,0xfffffffe,
                           *(uint *)((int)this_00 + iVar4 * 0x1fb + 0xff),
                           *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x103));
              }
              *(int *)((int)this_00 + iVar4 * 0x1fb + 0xeb) =
                   *(int *)((int)this_00 + iVar4 * 0x1fb + 0xeb) + 1;
              uVar5 = *(uint *)((int)this_00 + iVar4 * 0x1fb + 0xe7);
              if (uVar5 != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)this_00 + iVar4 * 0x1fb + 299),uVar5,
                           *(uint *)((int)this_00 + iVar4 * 0x1fb + 0xeb),
                           *(uint *)((int)this_00 + iVar4 * 0x1fb + 0xff),
                           *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x103));
              }
              local_8 = 0;
            }
            else {
              iVar6 = *(int *)((int)this_00 + iVar4 * 0x1fb + 0x17c);
              if (iVar6 < *(int *)((int)this_00 + iVar4 * 0x1fb + 0x180) + -3) {
                if (iVar6 == 0) {
                  uVar5 = *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x178);
                  if (uVar5 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)this_00 + iVar4 * 0x1fb + 0x1bc),uVar5,0xfffffffe,
                               *(uint *)((int)this_00 + iVar4 * 0x1fb + 400),
                               *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x194));
                  }
                  if ((*(char *)((int)this_00 + iVar4 * 0x1fb + 0xe2) != '\0') &&
                     (uVar5 = *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x209), uVar5 != 0xffffffff))
                  {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)this_00 + iVar4 * 0x1fb + 0x24d),uVar5,0xfffffffe,
                               *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x221),
                               *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x225));
                  }
                }
                *(int *)((int)this_00 + iVar4 * 0x1fb + 0x17c) =
                     *(int *)((int)this_00 + iVar4 * 0x1fb + 0x17c) + 1;
                uVar5 = *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x178);
                if (uVar5 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            (*(uint **)((int)this_00 + iVar4 * 0x1fb + 0x1bc),uVar5,
                             *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x17c),
                             *(uint *)((int)this_00 + iVar4 * 0x1fb + 400),
                             *(uint *)((int)this_00 + iVar4 * 0x1fb + 0x194));
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        uVar5 = (uint)(byte)this_00->field_0x9a;
      } while (iVar4 < (int)uVar5);
    }
    if (((this_00[0x14].field_0xe3 != '\0') && (*(int *)(DAT_0081176c + 0x2e6) != 0)) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_00->field_0x9a != '\0') {
        local_c = (int *)&this_00->field_0x66;
        puVar8 = (undefined4 *)&this_00->field_0xa3;
        iVar4 = 0x68ff;
        do {
          if (*local_c == 0) {
            iVar6 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,(uint)(*(int *)&this_00[0x14].field_0xdf != 0),
                               puVar8[0x17] + puVar8[-2],puVar8[0x18] + puVar8[-1],*puVar8,puVar8[1]
                               ,iVar4,iVar4 + 0x80);
            *local_c = iVar6;
          }
          local_c = local_c + 1;
          iVar6 = iVar4 + -0x68fe;
          puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
          iVar4 = iVar4 + 1;
        } while (iVar6 < (int)(uint)(byte)this_00->field_0x9a);
      }
      iVar4 = *(int *)&this_00[0x11].field_0xef;
      this_00->field_0x65 = 1;
      if (iVar4 != 0) {
        FUN_006e3db0((int)&this_00[0x11].field_0xdf);
        *(undefined4 *)&this_00[0x11].field_0xef = 0;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    iVar4 = 0;
    if (this_00->field_0x9a != '\0') {
      puVar7 = (uint *)&this_00->field_0x178;
      do {
        if ((uint)(this_00->field_0061 - *(int *)((int)puVar7 + -0x51)) <
            *(uint *)((int)puVar7 + -0x55)) {
LAB_005b353c:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar7 + -0xbd) != '\0') {
            if (*puVar7 != 0xffffffff) {
              FUN_006b3af0((int *)puVar7[0x11],*puVar7);
            }
            if ((*(char *)((int)puVar7 + -0x96) != '\0') &&
               (*(uint *)((int)puVar7 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)puVar7 + 0xd5),*(uint *)((int)puVar7 + 0x91));
            }
            *(undefined1 *)((int)puVar7 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar7 + -0x8d)) {
            uVar5 = *(int *)((int)puVar7 + -0x8d) - 1;
            *(uint *)((int)puVar7 + -0x8d) = uVar5;
            if (*(uint *)((int)puVar7 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar7 + -0x4d),*(uint *)((int)puVar7 + -0x91),uVar5,
                         *(uint *)((int)puVar7 + -0x79),*(uint *)((int)puVar7 + -0x75));
            }
            goto LAB_005b353c;
          }
        }
        iVar4 = iVar4 + 1;
        puVar7 = (uint *)((int)puVar7 + 0x1fb);
      } while (iVar4 < (int)(uint)(byte)this_00->field_0x9a);
    }
    iVar4 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0x65 = 2;
      if (this_00->field_0x9a != '\0') {
        puVar7 = (uint *)&this_00->field_0xe7;
        do {
          if (*puVar7 != 0xffffffff) {
            FUN_006b3af0((int *)puVar7[0x11],*puVar7);
          }
          iVar4 = iVar4 + 1;
          puVar7 = (uint *)((int)puVar7 + 0x1fb);
        } while (iVar4 < (int)(uint)(byte)this_00->field_0x9a);
      }
      if (*(int *)((int)this_00 + (uint)(byte)this_00[0x11].field_0xda * 0x1fb + 0xd1) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)
                   ((int)this_00 + (uint)(byte)this_00[0x11].field_0xda * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

