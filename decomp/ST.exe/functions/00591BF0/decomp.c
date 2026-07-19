
/* Recovered from embedded debug metadata:
   E:\__titans\Start\camp_obj.cpp
   CampaignTy::NoneCampaign */

void __thiscall CampaignTy::NoneCampaign(CampaignTy *this,void *param_1)

{
  CampaignTy CVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  CampaignTy *this_00;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 unaff_ESI;
  CampaignTy *pCVar10;
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
  *(DWORD *)(this + 0x61) = DVar5;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x117,0,iVar6,&DAT_007a4ccc
                               ,s_CampaignTy__NoneCampaign_007cbe1c);
    if (iVar9 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_camp_obj_cpp_007cbcd4,0x117);
    return;
  }
  LightPalette(local_c);
  AnimationCampaign(this_00);
  CVar1 = this_00[0x65];
  if (CVar1 == (CampaignTy)0x1) {
    iVar6 = 0;
    if (this_00[0x9a] != (CampaignTy)0x0) {
      pCVar10 = this_00 + 0x221;
      do {
        if (((*(int *)(pCVar10 + -0x165) != 0) && (pCVar10[-0x13f] != (CampaignTy)0x0)) &&
           (*(uint *)(pCVar10 + 0x24) <= *(uint *)(this_00 + 0x61) - *(uint *)(pCVar10 + 0x28))) {
          *(uint *)(pCVar10 + 0x28) = *(uint *)(this_00 + 0x61);
          uVar7 = *(uint *)(pCVar10 + -0x14);
          *(uint *)(pCVar10 + -0x14) = uVar7 + 1;
          if ((int)*(uint *)(pCVar10 + -0x10) <= (int)(uVar7 + 1)) {
            *(uint *)(pCVar10 + -0x14) = 0;
          }
          if (*(uint *)(pCVar10 + -0x18) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)(pCVar10 + 0x2c),*(uint *)(pCVar10 + -0x18),
                       *(uint *)(pCVar10 + -0x14),*(uint *)pCVar10,*(uint *)(pCVar10 + 4));
          }
        }
        iVar6 = iVar6 + 1;
        pCVar10 = pCVar10 + 0x1fb;
      } while (iVar6 < (int)(uint)(byte)this_00[0x9a]);
    }
  }
  else if (CVar1 == (CampaignTy)0x3) {
    iVar6 = 0;
    uVar7 = (uint)(byte)this_00[0x9a];
    if (uVar7 != 0) {
      do {
        if (*(int *)(this_00 + iVar6 * 0x1fb + 0xbc) != 0) {
          if ((uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + iVar6 * 0x1fb + 0x127)) <
              *(uint *)(this_00 + iVar6 * 0x1fb + 0x123)) {
            iVar6 = 0;
            local_8 = 0;
            if (uVar7 != 0) {
              pCVar10 = this_00 + 0x249;
              do {
                if (pCVar10[-0x167] != (CampaignTy)0x0) {
                  *(undefined4 *)pCVar10 = *(undefined4 *)(this_00 + 0x61);
                }
                iVar6 = iVar6 + 1;
                pCVar10 = pCVar10 + 0x1fb;
              } while (iVar6 < (int)(uint)(byte)this_00[0x9a]);
            }
          }
          else if (*(int *)(this_00 + iVar6 * 0x1fb + 0xeb) <
                   *(int *)(this_00 + iVar6 * 0x1fb + 0xef) + -1) {
            if ((*(int *)(this_00 + iVar6 * 0x1fb + 0xeb) == 0) &&
               (*(uint *)(this_00 + iVar6 * 0x1fb + 0xe7) != 0xffffffff)) {
              Library::DKW::DDX::FUN_006b34d0
                        (*(uint **)(this_00 + iVar6 * 0x1fb + 299),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0xe7),0xfffffffe,
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0xff),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0x103));
            }
            *(int *)(this_00 + iVar6 * 0x1fb + 0xeb) = *(int *)(this_00 + iVar6 * 0x1fb + 0xeb) + 1;
            if (*(uint *)(this_00 + iVar6 * 0x1fb + 0xe7) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(this_00 + iVar6 * 0x1fb + 299),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0xe7),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0xeb),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0xff),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0x103));
            }
            local_8 = 0;
          }
          else if (*(int *)(this_00 + iVar6 * 0x1fb + 0x17c) <
                   *(int *)(this_00 + iVar6 * 0x1fb + 0x180) + -3) {
            if (*(int *)(this_00 + iVar6 * 0x1fb + 0x17c) == 0) {
              if (*(uint *)(this_00 + iVar6 * 0x1fb + 0x178) != 0xffffffff) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)(this_00 + iVar6 * 0x1fb + 0x1bc),
                           *(uint *)(this_00 + iVar6 * 0x1fb + 0x178),0xfffffffe,
                           *(uint *)(this_00 + iVar6 * 0x1fb + 400),
                           *(uint *)(this_00 + iVar6 * 0x1fb + 0x194));
              }
              if ((this_00[iVar6 * 0x1fb + 0xe2] != (CampaignTy)0x0) &&
                 (*(uint *)(this_00 + iVar6 * 0x1fb + 0x209) != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)(this_00 + iVar6 * 0x1fb + 0x24d),
                           *(uint *)(this_00 + iVar6 * 0x1fb + 0x209),0xfffffffe,
                           *(uint *)(this_00 + iVar6 * 0x1fb + 0x221),
                           *(uint *)(this_00 + iVar6 * 0x1fb + 0x225));
              }
            }
            *(int *)(this_00 + iVar6 * 0x1fb + 0x17c) =
                 *(int *)(this_00 + iVar6 * 0x1fb + 0x17c) + 1;
            if (*(uint *)(this_00 + iVar6 * 0x1fb + 0x178) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(this_00 + iVar6 * 0x1fb + 0x1bc),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0x178),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0x17c),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 400),
                         *(uint *)(this_00 + iVar6 * 0x1fb + 0x194));
            }
            thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            local_8 = 0;
          }
        }
        iVar6 = iVar6 + 1;
        uVar7 = (uint)(byte)this_00[0x9a];
      } while (iVar6 < (int)uVar7);
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      iVar9 = 1;
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
      pCVar10 = this_00 + 0x491;
      do {
        iVar2 = *(int *)(pCVar10 + 100);
        puVar8[-1] = iVar9;
        iVar3 = *(int *)pCVar10;
        *puVar8 = 0;
        puVar8[2] = iVar2 + iVar3;
        puVar8[4] = *(int *)(pCVar10 + 8);
        iVar9 = iVar9 + 1;
        puVar8[3] = *(int *)(pCVar10 + 0x68) + *(int *)(pCVar10 + 4);
        puVar8[5] = *(int *)(pCVar10 + 0xc);
        puVar8 = puVar8 + 0x1c;
        iVar6 = iVar6 + -1;
        pCVar10 = pCVar10 + 0x1fb;
      } while (iVar6 != 0);
      local_70 = *(undefined4 *)(this_00 + 8);
      local_34 = (uint)DAT_0080874e;
      local_38 = local_284;
      local_6c = 2;
      local_4c = 2;
      local_80[0] = 1;
      local_68 = 0x68ff;
      local_48 = 0x697f;
      local_50 = local_70;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,this_00 + 0x66,0,local_80,0);
      iVar6 = *(int *)(this_00 + 0x1a5b);
      if (*(int *)(iVar6 + 0x2e6) != 0) {
        puVar8 = &local_28;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0;
        local_1c = 1;
        local_1e = 1;
        local_28._2_2_ = 1;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar6 + 0x2e6),(int)&local_28);
      }
      this_00[0x65] = (CampaignTy)0x1;
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
  }
  else if (CVar1 == (CampaignTy)0x4) {
    iVar6 = 0;
    if (this_00[0x9a] != (CampaignTy)0x0) {
      pCVar10 = this_00 + 0x178;
      do {
        if ((uint)(*(int *)(this_00 + 0x61) - *(int *)(pCVar10 + -0x51)) <
            *(uint *)(pCVar10 + -0x55)) {
LAB_00591d08:
          local_8 = 0;
        }
        else {
          if (pCVar10[-0xbd] != (CampaignTy)0x0) {
            if (*(uint *)pCVar10 != 0xffffffff) {
              FUN_006b3af0(*(int **)(pCVar10 + 0x44),*(uint *)pCVar10);
            }
            if ((pCVar10[-0x96] != (CampaignTy)0x0) && (*(uint *)(pCVar10 + 0x91) != 0xffffffff)) {
              FUN_006b3af0(*(int **)(pCVar10 + 0xd5),*(uint *)(pCVar10 + 0x91));
            }
            pCVar10[-0xbd] = (CampaignTy)0x0;
          }
          if (0 < *(int *)(pCVar10 + -0x8d)) {
            uVar7 = *(int *)(pCVar10 + -0x8d) - 1;
            *(uint *)(pCVar10 + -0x8d) = uVar7;
            if (*(uint *)(pCVar10 + -0x91) != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        (*(uint **)(pCVar10 + -0x4d),*(uint *)(pCVar10 + -0x91),uVar7,
                         *(uint *)(pCVar10 + -0x79),*(uint *)(pCVar10 + -0x75));
            }
            goto LAB_00591d08;
          }
        }
        iVar6 = iVar6 + 1;
        pCVar10 = pCVar10 + 0x1fb;
      } while (iVar6 < (int)(uint)(byte)this_00[0x9a]);
    }
    iVar6 = 0;
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00[0x65] = (CampaignTy)0x2;
      if (this_00[0x9a] != (CampaignTy)0x0) {
        pCVar10 = this_00 + 0xe7;
        do {
          if (*(uint *)pCVar10 != 0xffffffff) {
            FUN_006b3af0(*(int **)(pCVar10 + 0x44),*(uint *)pCVar10);
          }
          iVar6 = iVar6 + 1;
          pCVar10 = pCVar10 + 0x1fb;
        } while (iVar6 < (int)(uint)(byte)this_00[0x9a]);
      }
      if (*(int *)(this_00 + (uint)(byte)this_00[0x1a5a] * 0x1fb + 0xd1) != 0) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(this_00 + (uint)(byte)this_00[0x1a5a] * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

