
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
MMsgTy::SetMessage(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  code *pcVar1;
  MMObjTy *this_00;
  MMObjTy MVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  MMObjTy *pMVar9;
  void *unaff_EDI;
  int *piVar10;
  uint uVar11;
  MMObjTy *pMVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMObjTy *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = local_c & 0xffffff00;
  if ((param_1 != 0) && (this[0x1ca9] == (MMsgTy)0x0)) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = (MMObjTy *)this;
    iVar3 = __setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_14 + 0x1cab);
      if (iVar3 != 0) {
        piVar10 = local_34;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar3;
        (**(code **)(**(int **)(this_00 + 0xc) + 0x18))(local_34);
      }
      this_00[0x1ca9] = (MMObjTy)0x1;
      pMVar9 = this_00 + 0x1cd0;
      pMVar12 = this_00 + 0x1a60;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pMVar12 = *(undefined4 *)pMVar9;
        pMVar9 = pMVar9 + 4;
        pMVar12 = pMVar12 + 4;
      }
      *(undefined2 *)pMVar12 = *(undefined2 *)pMVar9;
      pMVar12[2] = pMVar9[2];
      this_00[0x1a5f] = this_00[0x65];
      *(undefined4 *)(this_00 + 0x2d) = 0x21;
      pMVar9 = this_00 + 0x1c82;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pMVar9 = 0;
        pMVar9 = pMVar9 + 4;
      }
      *(undefined2 *)pMVar9 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        do {
          uVar11 = local_8 & 0xff;
          if (*(int *)(this_00 + uVar11 * 4 + 0x66) != 0) {
            FUN_006e6080(this_00,2,*(int *)(this_00 + uVar11 * 4 + 0x66),
                         (undefined4 *)(this_00 + 0x1d));
            *(ushort *)(this_00 + uVar11 * 2 + 0x1c82) =
                 (-(ushort)(*(int *)(this_00 + 0x31) != 0) & 2) - 1;
          }
          pMVar9 = this_00 + uVar11 * 0x1fb + 0xbc;
          pMVar12 = this_00 + uVar11 * 0x27 + 0x1a87;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pMVar12 = *(undefined4 *)pMVar9;
            pMVar9 = pMVar9 + 4;
            pMVar12 = pMVar12 + 4;
          }
          *(undefined2 *)pMVar12 = *(undefined2 *)pMVar9;
          pMVar12[2] = pMVar9[2];
          MVar2 = (MMObjTy)((char)local_8 + 1);
          local_8 = CONCAT31(local_8._1_3_,MVar2);
        } while ((byte)MVar2 < (byte)this_00[0x9a]);
      }
      *(UINT *)(this_00 + 0x1cd0) = param_1;
      if (param_6 == 0) {
        uVar5 = 0xffffffff;
        local_10 = *(int *)(this_00 + 0x1d88);
        uVar4 = 7;
        iVar16 = -1;
        iVar15 = -1;
        iVar13 = 1;
        uVar14 = 0xffffffff;
        uVar11 = 0xfffffffe;
        iVar8 = 0x39;
        iVar3 = 0x158;
        puVar7 = (uint *)FUN_006b0140(param_1,DAT_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar3,iVar8,uVar11,uVar14,
                            iVar13,iVar15,iVar16);
        (**(code **)(local_10 + 8))(puVar6,uVar4,uVar5);
      }
      else {
        uVar4 = FUN_006b0140(param_7,DAT_00807618);
        uVar5 = FUN_006b0140(param_1,DAT_00807618);
        wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,uVar5,uVar4,param_6);
        iVar3 = *(int *)(this_00 + 0x1d88);
        uVar5 = 0xffffffff;
        uVar4 = 7;
        puVar6 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),local_478,0x158,0x39,0xfffffffe,
                            0xffffffff,1,-1,-1);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
      }
      MVar2 = (MMObjTy)0x0;
      *(undefined4 *)(this_00 + 0x1d90) = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        do {
          uVar11 = local_8 & 0xff;
          MVar2 = (MMObjTy)((char)MVar2 + 1);
          local_8 = CONCAT31(local_8._1_3_,MVar2);
          *(undefined4 *)(this_00 + uVar11 * 0x1fb + 0xbc) = 0;
          this_00[uVar11 * 0x1fb + 0xe1] = (MMObjTy)0x1;
        } while ((byte)MVar2 < (byte)this_00[0x9a]);
      }
      if (param_2 == '\0') {
        *(undefined4 *)(this_00 + 0x4b2) = 0x24b8;
        this_00[0x4d7] = (MMObjTy)0x1;
        iVar3 = 8;
        if (param_3 == (undefined4 *)0x0) {
          pMVar9 = this_00 + 0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pMVar9 = 0;
            pMVar9 = pMVar9 + 4;
          }
        }
        else {
          pMVar9 = this_00 + 0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pMVar9 = *param_3;
            param_3 = param_3 + 1;
            pMVar9 = pMVar9 + 4;
          }
        }
        uVar5 = 0xffffffff;
        uVar4 = 7;
        iVar17 = -1;
        iVar3 = *(int *)(this_00 + 0x56a);
        iVar16 = -1;
        iVar15 = 1;
        uVar14 = 0xffffffff;
        uVar11 = 0xfffffffe;
        iVar13 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)FUN_006b0140(*(UINT *)(this_00 + 0x4b2),DAT_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar8,iVar13,uVar11,uVar14,
                            iVar15,iVar16,iVar17);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
        *(undefined4 *)(this_00 + 0x572) = 0;
      }
      else {
        if (param_2 == '\x01') {
          *(undefined4 *)(this_00 + 0x4b2) = 0x24b9;
          this_00[0x4d7] = (MMObjTy)0x1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            pMVar9 = this_00 + 0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = 0;
              pMVar9 = pMVar9 + 4;
            }
          }
          else {
            pMVar9 = this_00 + 0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = *param_3;
              param_3 = param_3 + 1;
              pMVar9 = pMVar9 + 4;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar17 = -1;
          iVar3 = *(int *)(this_00 + 0x56a);
          iVar16 = -1;
          iVar15 = 1;
          uVar14 = 0xffffffff;
          uVar11 = 0xfffffffe;
          iVar13 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)(this_00 + 0x4b2),DAT_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar8,iVar13,uVar11,uVar14,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)(this_00 + 0x572) = 0;
          *(undefined4 *)(this_00 + 0x2b7) = 0x24ba;
          this_00[0x2dc] = (MMObjTy)0x1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          *(undefined4 *)(this_00 + 0x6ad) = 0x24b9;
          this_00[0x6d2] = (MMObjTy)0x1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            pMVar9 = this_00 + 0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = 0;
              pMVar9 = pMVar9 + 4;
            }
          }
          else {
            pMVar9 = this_00 + 0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = *param_3;
              param_3 = param_3 + 1;
              pMVar9 = pMVar9 + 4;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar17 = -1;
          iVar3 = *(int *)(this_00 + 0x765);
          iVar16 = -1;
          iVar15 = 1;
          uVar14 = 0xffffffff;
          uVar11 = 0xfffffffe;
          iVar13 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)(this_00 + 0x6ad),DAT_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar8,iVar13,uVar11,uVar14,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)(this_00 + 0x76d) = 0;
          *(undefined4 *)(this_00 + 0x4b2) = 0x24ba;
          this_00[0x4d7] = (MMObjTy)0x1;
          iVar3 = 8;
          if (param_4 == (undefined4 *)0x0) {
            pMVar9 = this_00 + 0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = 0;
              pMVar9 = pMVar9 + 4;
            }
          }
          else {
            pMVar9 = this_00 + 0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pMVar9 = *param_4;
              param_4 = param_4 + 1;
              pMVar9 = pMVar9 + 4;
            }
          }
          uVar5 = 0xffffffff;
          uVar4 = 7;
          iVar17 = -1;
          iVar3 = *(int *)(this_00 + 0x56a);
          iVar16 = -1;
          iVar15 = 1;
          uVar14 = 0xffffffff;
          uVar11 = 0xfffffffe;
          iVar13 = 0x1e;
          iVar8 = 0x7d;
          puVar7 = (uint *)FUN_006b0140(*(UINT *)(this_00 + 0x4b2),DAT_00807618);
          puVar6 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar8,iVar13,uVar11,uVar14,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
          *(undefined4 *)(this_00 + 0x572) = 0;
          *(undefined4 *)(this_00 + 0x2b7) = 0x24bb;
          this_00[0x2dc] = (MMObjTy)0x1;
        }
        iVar3 = 8;
        if (param_5 == (undefined4 *)0x0) {
          pMVar9 = this_00 + 700;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pMVar9 = 0;
            pMVar9 = pMVar9 + 4;
          }
        }
        else {
          pMVar9 = this_00 + 700;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pMVar9 = *param_5;
            param_5 = param_5 + 1;
            pMVar9 = pMVar9 + 4;
          }
        }
        uVar5 = 0xffffffff;
        uVar4 = 7;
        iVar17 = -1;
        iVar3 = *(int *)(this_00 + 0x36f);
        iVar16 = -1;
        iVar15 = 1;
        uVar14 = 0xffffffff;
        uVar11 = 0xfffffffe;
        iVar13 = 0x1e;
        iVar8 = 0x7d;
        puVar7 = (uint *)FUN_006b0140(*(UINT *)(this_00 + 0x2b7),DAT_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar7,iVar8,iVar13,uVar11,uVar14,
                            iVar15,iVar16,iVar17);
        (**(code **)(iVar3 + 8))(puVar6,uVar4,uVar5);
        *(undefined4 *)(this_00 + 0x377) = 0;
      }
LAB_005b8415:
      MMObjTy::CloseButtons(this_00);
      MVar2 = (MMObjTy)0x0;
      local_8 = local_8 & 0xffffff00;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        do {
          uVar11 = local_8 & 0xff;
          *(undefined4 *)(this_00 + uVar11 * 0x1fb + 0x127) = *(undefined4 *)(this_00 + 0x61);
          *(uint *)(this_00 + uVar11 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(this_00 + uVar11 * 0x27 + 0x1a87) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          MVar2 = (MMObjTy)((char)MVar2 + 1);
          local_8 = CONCAT31(local_8._1_3_,MVar2);
        } while ((byte)MVar2 < (byte)this_00[0x9a]);
      }
      if (this_00[0x65] == (MMObjTy)0x2) {
        this_00[0x65] = (MMObjTy)0x3;
        *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
        *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
        this_00[0x1ca8] = (MMObjTy)0x1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        this_00[0x1caa] = (MMObjTy)0x0;
      }
      else {
        this_00[0x65] = (MMObjTy)0x4;
        *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
        *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
        *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
        this_00[0x1ca8] = (MMObjTy)0x1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        this_00[0x1caa] = (MMObjTy)0x1;
        if (*(uint *)(this_00 + 0x1d8c) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_00 + 0x1dd0),*(uint *)(this_00 + 0x1d8c));
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00[0x9a] != (MMObjTy)0x0) {
          do {
            iVar3 = (local_8 & 0xff) * 0x1fb;
            if (*(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178) != 0xffffffff) {
              FUN_006b3af0(*(int **)(this_00 + iVar3 + 0x1bc),
                           *(uint *)(this_00 + (local_8 & 0xff) * 0x1fb + 0x178));
            }
            if ((this_00[iVar3 + 0xe2] != (MMObjTy)0x0) &&
               (*(uint *)(this_00 + iVar3 + 0x209) != 0xffffffff)) {
              FUN_006b3af0(*(int **)(this_00 + iVar3 + 0x24d),*(uint *)(this_00 + iVar3 + 0x209));
            }
            MVar2 = (MMObjTy)((char)local_8 + 1);
            local_8 = CONCAT31(local_8._1_3_,MVar2);
          } while ((byte)MVar2 < (byte)this_00[0x9a]);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e,0,iVar3,&DAT_007a4ccc
                               ,s_MMsgTy__SetMessage_007ccc8c);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e);
  }
  return 0;
}

