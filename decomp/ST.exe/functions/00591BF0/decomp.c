
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::NoneCampaign */

void __thiscall CampaignTy::NoneCampaign(CampaignTy *this,void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  CampaignTy *this_00;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 unaff_ESI;
  uint *puVar11;
  void *unaff_EDI;
  undefined4 local_284 [112];
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_1e;
  undefined2 local_1c;
  CampaignTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x117,0,iVar6,
                                &DAT_007a4ccc,s_CampaignTy__NoneCampaign_007cbe1c);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x117);
    return;
  }
  LightPalette(local_c);
  AnimationCampaign(this_00);
  cVar1 = *(char *)(this_00 + 1);
  if (cVar1 == '\x01') {
    iVar6 = 0;
    if (this_00[1].field_0x35 != '\0') {
      puVar11 = (uint *)&this_00[5].field_0x28;
      do {
        if (((*(int *)((int)puVar11 + -0x165) != 0) && (*(char *)((int)puVar11 + -0x13f) != '\0'))
           && (puVar11[9] <= this_00->field_0061 - puVar11[10])) {
          puVar11[10] = this_00->field_0061;
          uVar7 = puVar11[-5];
          puVar11[-5] = uVar7 + 1;
          if ((int)puVar11[-4] <= (int)(uVar7 + 1)) {
            puVar11[-5] = 0;
          }
          if (puVar11[-6] != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)puVar11[0xb],puVar11[-6],puVar11[-5],*puVar11,puVar11[1]);
          }
        }
        iVar6 = iVar6 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar6 < (int)(uint)(byte)this_00[1].field_0x35);
    }
  }
  else if (cVar1 == '\x03') {
    iVar6 = 0;
    uVar7 = (uint)(byte)this_00[1].field_0x35;
    if (uVar7 != 0) {
      do {
        if (*(int *)((int)this_00 + iVar6 * 0x1fb + 0xbc) != 0) {
          if ((uint)(this_00->field_0061 - *(int *)((int)this_00 + iVar6 * 0x1fb + 0x127)) <
              *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x123)) {
            iVar6 = 0;
            local_8 = 0;
            if (uVar7 != 0) {
              puVar8 = (undefined4 *)&this_00[5].field_0x50;
              do {
                if (*(char *)((int)puVar8 + -0x167) != '\0') {
                  *puVar8 = this_00->field_0061;
                }
                iVar6 = iVar6 + 1;
                puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
              } while (iVar6 < (int)(uint)(byte)this_00[1].field_0x35);
            }
          }
          else {
            iVar10 = *(int *)((int)this_00 + iVar6 * 0x1fb + 0xeb);
            if (iVar10 < *(int *)((int)this_00 + iVar6 * 0x1fb + 0xef) + -1) {
              if ((iVar10 == 0) &&
                 (uVar7 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xe7), uVar7 != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)this_00 + iVar6 * 0x1fb + 299),uVar7,0xfffffffe,
                           *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xff),
                           *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x103));
              }
              *(int *)((int)this_00 + iVar6 * 0x1fb + 0xeb) =
                   *(int *)((int)this_00 + iVar6 * 0x1fb + 0xeb) + 1;
              uVar7 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xe7);
              if (uVar7 != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)this_00 + iVar6 * 0x1fb + 299),uVar7,
                           *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xeb),
                           *(uint *)((int)this_00 + iVar6 * 0x1fb + 0xff),
                           *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x103));
              }
              local_8 = 0;
            }
            else {
              iVar10 = *(int *)((int)this_00 + iVar6 * 0x1fb + 0x17c);
              if (iVar10 < *(int *)((int)this_00 + iVar6 * 0x1fb + 0x180) + -3) {
                if (iVar10 == 0) {
                  uVar7 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x178);
                  if (uVar7 != 0xffffffff) {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)this_00 + iVar6 * 0x1fb + 0x1bc),uVar7,0xfffffffe,
                               *(uint *)((int)this_00 + iVar6 * 0x1fb + 400),
                               *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x194));
                  }
                  if ((*(char *)((int)this_00 + iVar6 * 0x1fb + 0xe2) != '\0') &&
                     (uVar7 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x209), uVar7 != 0xffffffff))
                  {
                    Library::DKW::DDX::FUN_006b34d0
                              (*(uint **)((int)this_00 + iVar6 * 0x1fb + 0x24d),uVar7,0xfffffffe,
                               *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x221),
                               *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x225));
                  }
                }
                *(int *)((int)this_00 + iVar6 * 0x1fb + 0x17c) =
                     *(int *)((int)this_00 + iVar6 * 0x1fb + 0x17c) + 1;
                uVar7 = *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x178);
                if (uVar7 != 0xffffffff) {
                  Library::DKW::DDX::FUN_006b3730
                            (*(uint **)((int)this_00 + iVar6 * 0x1fb + 0x1bc),uVar7,
                             *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x17c),
                             *(uint *)((int)this_00 + iVar6 * 0x1fb + 400),
                             *(uint *)((int)this_00 + iVar6 * 0x1fb + 0x194));
                }
                thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
                local_8 = 0;
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        uVar7 = (uint)(byte)this_00[1].field_0x35;
      } while (iVar6 < (int)uVar7);
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar10 = 1;
      puVar8 = local_80;
      for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = local_284;
      for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar8 = local_284 + 1;
      iVar6 = 3;
      piVar9 = (int *)&this_00[0xb].field_0x3a;
      do {
        iVar2 = piVar9[0x19];
        puVar8[-1] = iVar10;
        iVar3 = *piVar9;
        *puVar8 = 0;
        puVar8[2] = iVar2 + iVar3;
        puVar8[4] = piVar9[2];
        iVar10 = iVar10 + 1;
        puVar8[3] = piVar9[0x1a] + piVar9[1];
        puVar8[5] = piVar9[3];
        puVar8 = puVar8 + 0x1c;
        iVar6 = iVar6 + -1;
        piVar9 = (int *)((int)piVar9 + 0x1fb);
      } while (iVar6 != 0);
      local_70 = *(undefined4 *)&this_00->field_0x8;
      local_34 = (uint)DAT_0080874e;
      local_38 = local_284;
      local_6c = 2;
      local_4c = 2;
      local_80[0] = 1;
      local_68 = 0x68ff;
      local_48 = 0x697f;
      local_50 = local_70;
      (**(code **)(**(int **)&this_00->field_0xc + 8))(5,&this_00[1].field_0x1,0,local_80,0);
      iVar6 = *(int *)&this_00[0x42].field_0x51;
      if (*(int *)(iVar6 + 0x2e6) != 0) {
        puVar8 = &local_28;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0;
        local_1c = 1;
        local_1e = 1;
        local_28._2_2_ = 1;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar6 + 0x2e6),(int)&local_28);
      }
      *(undefined1 *)(this_00 + 1) = 1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    iVar6 = 0;
    if (this_00[1].field_0x35 != '\0') {
      puVar11 = (uint *)&this_00[3].field_0x49;
      do {
        if ((uint)(this_00->field_0061 - *(int *)((int)puVar11 + -0x51)) <
            *(uint *)((int)puVar11 + -0x55)) {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (*(char *)((int)puVar11 + -0xbd) != '\0') {
            if (*puVar11 != 0xffffffff) {
              FUN_006b3af0((int *)puVar11[0x11],*puVar11);
            }
            if ((*(char *)((int)puVar11 + -0x96) != '\0') &&
               (*(uint *)((int)puVar11 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)puVar11 + 0xd5),*(uint *)((int)puVar11 + 0x91));
            }
            *(undefined1 *)((int)puVar11 + -0xbd) = 0;
          }
          if (0 < *(int *)((int)puVar11 + -0x8d)) {
            uVar7 = *(int *)((int)puVar11 + -0x8d) - 1;
            *(uint *)((int)puVar11 + -0x8d) = uVar7;
            if (*(uint *)((int)puVar11 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)((int)puVar11 + -0x4d),*(uint *)((int)puVar11 + -0x91),uVar7,
                         *(uint *)((int)puVar11 + -0x79),*(uint *)((int)puVar11 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar6 = iVar6 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar6 < (int)(uint)(byte)this_00[1].field_0x35);
    }
    iVar6 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      cVar1 = this_00[1].field_0x35;
      *(undefined1 *)(this_00 + 1) = 2;
      if (cVar1 != '\0') {
        puVar11 = (uint *)&this_00[2].field_0x1d;
        do {
          if (*puVar11 != 0xffffffff) {
            FUN_006b3af0((int *)puVar11[0x11],*puVar11);
          }
          iVar6 = iVar6 + 1;
          puVar11 = (uint *)((int)puVar11 + 0x1fb);
        } while (iVar6 < (int)(uint)(byte)this_00[1].field_0x35);
      }
      if (*(int *)((int)this_00 + (uint)(byte)this_00[0x42].field_0x50 * 0x1fb + 0xd1) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)
                   ((int)this_00 + (uint)(byte)this_00[0x42].field_0x50 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

