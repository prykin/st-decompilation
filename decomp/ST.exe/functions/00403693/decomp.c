
void __thiscall MMsgTy::NoneMMsg(MMsgTy *this)

{
  MMObjTy MVar1;
  UINT UVar2;
  code *pcVar3;
  MMObjTy *this_00;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  MMObjTy *pMVar9;
  void *unaff_EDI;
  MMObjTy *pMVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [16];
  int aiStack_78 [8];
  int aiStack_58 [8];
  int aiStack_38 [8];
  MMObjTy *pMStack_18;
  int iStack_14;
  MMObjTy *pMStack_10;
  int iStack_c;
  MMObjTy *pMStack_8;
  
  iStack_c = 1;
  uStack_bc = DAT_00858df8;
  DAT_00858df8 = &uStack_bc;
  pMStack_18 = (MMObjTy *)this;
  iVar4 = __setjmp3(auStack_b8,0,unaff_EDI,unaff_ESI);
  this_00 = pMStack_18;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_bc;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0xe4,0,iVar4,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7ccb74,0xe4);
    return;
  }
  MVar1 = pMStack_18[0x65];
  if (MVar1 == (MMObjTy)0x1) {
    if ((*(int *)(pMStack_18 + 0x1cd0) != 0) &&
       (*(int *)(pMStack_18 + 0x1d90) < *(int *)(pMStack_18 + 0x1d94) + -3)) {
      if ((*(int *)(pMStack_18 + 0x1d90) == 0) && (*(uint *)(pMStack_18 + 0x1d8c) != 0xffffffff)) {
        FUN_006b34d0(*(uint **)(pMStack_18 + 0x1dd0),*(uint *)(pMStack_18 + 0x1d8c),0xfffffffe,
                     *(uint *)(pMStack_18 + 0x1da4),*(uint *)(pMStack_18 + 0x1da8));
      }
      *(int *)(this_00 + 0x1d90) = *(int *)(this_00 + 0x1d90) + 1;
      if (*(uint *)(this_00 + 0x1d8c) != 0xffffffff) {
        FUN_006b3730(*(uint **)(this_00 + 0x1dd0),*(uint *)(this_00 + 0x1d8c),
                     *(uint *)(this_00 + 0x1d90),*(uint *)(this_00 + 0x1da4),
                     *(uint *)(this_00 + 0x1da8));
      }
      thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
    }
  }
  else if (MVar1 == (MMObjTy)0x3) {
    if (*(int *)(pMStack_18 + 0x1cd0) != 0) {
      if (*(int *)(pMStack_18 + 0x1cff) < *(int *)(pMStack_18 + 0x1d03) + -1) {
        *(int *)(pMStack_18 + 0x1cff) = *(int *)(pMStack_18 + 0x1cff) + 1;
        if (*(uint *)(pMStack_18 + 0x1cfb) != 0xffffffff) {
          FUN_006b3730(*(uint **)(pMStack_18 + 0x1d3f),*(uint *)(pMStack_18 + 0x1cfb),
                       *(uint *)(pMStack_18 + 0x1cff),*(uint *)(pMStack_18 + 0x1d13),
                       *(uint *)(pMStack_18 + 0x1d17));
        }
        iStack_c = 0;
      }
      else if (*(int *)(pMStack_18 + 0x1d90) < *(int *)(pMStack_18 + 0x1d94) + -3) {
        if ((*(int *)(pMStack_18 + 0x1d90) == 0) && (*(uint *)(pMStack_18 + 0x1d8c) != 0xffffffff))
        {
          FUN_006b34d0(*(uint **)(pMStack_18 + 0x1dd0),*(uint *)(pMStack_18 + 0x1d8c),0xfffffffe,
                       *(uint *)(pMStack_18 + 0x1da4),*(uint *)(pMStack_18 + 0x1da8));
        }
        *(int *)(this_00 + 0x1d90) = *(int *)(this_00 + 0x1d90) + 1;
        if (*(uint *)(this_00 + 0x1d8c) != 0xffffffff) {
          FUN_006b3730(*(uint **)(this_00 + 0x1dd0),*(uint *)(this_00 + 0x1d8c),
                       *(uint *)(this_00 + 0x1d90),*(uint *)(this_00 + 0x1da4),
                       *(uint *)(this_00 + 0x1da8));
        }
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
      }
    }
    iVar4 = 0;
    if (this_00[0x9a] != (MMObjTy)0x0) {
      pMVar9 = this_00 + 0xff;
      do {
        if ((this_00[iVar4 + 0x1c9c] != (MMObjTy)0x0) && (*(int *)(pMVar9 + -0x43) != 0)) {
          if (*(uint *)(pMVar9 + 0x24) <= *(int *)(this_00 + 0x61) - *(uint *)(pMVar9 + 0x28)) {
            if ((int)*(uint *)(pMVar9 + -0x14) < (int)(*(uint *)(pMVar9 + -0x10) - 1)) {
              uVar5 = *(uint *)(pMVar9 + -0x14) + 1;
              *(uint *)(pMVar9 + -0x14) = uVar5;
              if (*(uint *)(pMVar9 + -0x18) != 0xffffffff) {
                FUN_006b3730(*(uint **)(pMVar9 + 0x2c),*(uint *)(pMVar9 + -0x18),uVar5,
                             *(uint *)pMVar9,*(uint *)(pMVar9 + 4));
              }
            }
            else {
              if (*(int *)(pMVar9 + 0x81) + -3 <= *(int *)(pMVar9 + 0x7d)) goto LAB_005b7ad9;
              if ((*(int *)(pMVar9 + 0x7d) == 0) && (*(uint *)(pMVar9 + 0x79) != 0xffffffff)) {
                FUN_006b34d0(*(uint **)(pMVar9 + 0xbd),*(uint *)(pMVar9 + 0x79),0xfffffffe,
                             *(uint *)(pMVar9 + 0x91),*(uint *)(pMVar9 + 0x95));
              }
              iVar8 = *(int *)(pMVar9 + 0x7d);
              *(uint *)(pMVar9 + 0x7d) = iVar8 + 1U;
              if (*(uint *)(pMVar9 + 0x79) != 0xffffffff) {
                FUN_006b3730(*(uint **)(pMVar9 + 0xbd),*(uint *)(pMVar9 + 0x79),iVar8 + 1U,
                             *(uint *)(pMVar9 + 0x91),*(uint *)(pMVar9 + 0x95));
              }
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
          iStack_c = 0;
        }
LAB_005b7ad9:
        iVar4 = iVar4 + 1;
        pMVar9 = pMVar9 + 0x1fb;
      } while (iVar4 < (int)(uint)(byte)this_00[0x9a]);
    }
    if (iStack_c != 0) {
      this_00[0x65] = (MMObjTy)0x1;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        pMStack_8 = this_00 + 0x66;
        pMStack_10 = this_00 + 0x1c82;
        pMVar9 = this_00 + 0xa7;
        iVar4 = 0x68ff;
        do {
          if ((*(int *)(pMVar9 + 0x15) != 0) && (*(int *)pMStack_8 == 0)) {
            if (this_00[0x1ca9] == (MMObjTy)0x0) {
              uVar5 = (uint)(-1 < *(short *)pMStack_10);
            }
            else {
              uVar5 = 1;
            }
            iVar8 = MMObjTy::CreateSprBut
                              (this_00,1,uVar5,*(int *)(pMVar9 + 0x58) + *(int *)(pMVar9 + -0xc),
                               *(int *)(pMVar9 + 0x5c) + *(int *)(pMVar9 + -8),
                               *(undefined4 *)(pMVar9 + -4),*(undefined4 *)pMVar9,iVar4,iVar4 + 0x80
                              );
            *(int *)pMStack_8 = iVar8;
          }
          pMStack_10 = pMStack_10 + 2;
          pMStack_8 = pMStack_8 + 4;
          pMVar9 = pMVar9 + 0x1fb;
          iVar8 = iVar4 + -0x68fe;
          iVar4 = iVar4 + 1;
        } while (iVar8 < (int)(uint)(byte)this_00[0x9a]);
      }
      if ((this_00[0x1ca9] == (MMObjTy)0x0) &&
         (aiStack_58[2] = *(int *)(this_00 + 0x1cab), aiStack_58[2] != 0)) {
        piVar11 = *(int **)(this_00 + 0xc);
        piVar12 = aiStack_58;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + 1;
        }
        aiStack_58[3] = 2;
        aiStack_58[4] = 0x693f;
        (**(code **)(*piVar11 + 0x18))(aiStack_58);
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
    }
  }
  else if (MVar1 == (MMObjTy)0x4) {
    if ((*(int *)(pMStack_18 + 0x1cd0) != 0) && (0 < *(int *)(pMStack_18 + 0x1cff))) {
      *(int *)(pMStack_18 + 0x1cff) = *(int *)(pMStack_18 + 0x1cff) + -1;
      if (*(uint *)(pMStack_18 + 0x1cfb) != 0xffffffff) {
        FUN_006b3730(*(uint **)(pMStack_18 + 0x1d3f),*(uint *)(pMStack_18 + 0x1cfb),
                     *(uint *)(pMStack_18 + 0x1cff),*(uint *)(pMStack_18 + 0x1d13),
                     *(uint *)(pMStack_18 + 0x1d17));
      }
      iStack_c = 0;
    }
    if (this_00[0x9a] != (MMObjTy)0x0) {
      pMVar9 = this_00 + 0x1c9c;
      iStack_14 = -0x1c9c - (int)this_00;
      pMVar10 = this_00 + 0xff;
      do {
        if (*pMVar9 != (MMObjTy)0x0) {
          if (*(uint *)(pMVar10 + 0x24) <= *(int *)(this_00 + 0x61) - *(uint *)(pMVar10 + 0x28)) {
            if ((int)*(uint *)(pMVar10 + -0x14) < 1) {
              if (this_00[0x1caa] == (MMObjTy)0x0) {
                *(undefined4 *)(pMVar10 + -0x43) = 0;
              }
              *pMVar9 = (MMObjTy)0x0;
              goto LAB_005b7655;
            }
            uVar5 = *(uint *)(pMVar10 + -0x14) - 1;
            *(uint *)(pMVar10 + -0x14) = uVar5;
            if (*(uint *)(pMVar10 + -0x18) != 0xffffffff) {
              FUN_006b3730(*(uint **)(pMVar10 + 0x2c),*(uint *)(pMVar10 + -0x18),uVar5,
                           *(uint *)pMVar10,*(uint *)(pMVar10 + 4));
            }
          }
          iStack_c = 0;
        }
LAB_005b7655:
        pMVar10 = pMVar10 + 0x1fb;
        pMVar9 = pMVar9 + 1;
      } while ((int)(pMVar9 + iStack_14) < (int)(uint)(byte)this_00[0x9a]);
    }
    if (iStack_c != 0) {
      this_00[0x65] = (MMObjTy)0x2;
      if (this_00[0x1ca9] != (MMObjTy)0x0) {
        if (this_00[0x1caa] != (MMObjTy)0x0) {
          *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
          *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
          *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
          this_00[0x1ca8] = (MMObjTy)0x1;
          this_00[0x65] = (MMObjTy)0x3;
          thunk_FUN_005b6730(this_00,5,'\0',-1);
          this_00[0x1caa] = (MMObjTy)0x0;
          DAT_00858df8 = (undefined4 *)uStack_bc;
          return;
        }
        MVar1 = this_00[0x1a5a];
        if ((MVar1 != (MMObjTy)0xff) && (*(int *)(this_00 + (uint)(byte)MVar1 * 0x1fb + 0xd1) != 0))
        {
          FUN_006e3b50((undefined4 *)(this_00 + (uint)(byte)MVar1 * 0x1fb + 0xc1));
        }
        iVar4 = *(int *)(this_00 + 0x1cab);
        if (iVar4 != 0) {
          piVar11 = aiStack_78;
          for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar11 = 0;
            piVar11 = piVar11 + 1;
          }
          aiStack_78[3] = 2;
          aiStack_78[4] = 0x693f;
          aiStack_78[2] = iVar4;
          (**(code **)(**(int **)(this_00 + 0xc) + 0x18))(aiStack_78);
        }
        if (this_00[0x1a5f] != (MMObjTy)0x0) {
          iStack_14 = 0;
          pMVar9 = this_00 + 0x1a60;
          pMVar10 = this_00 + 0x1cd0;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pMVar10 = *(undefined4 *)pMVar9;
            pMVar9 = pMVar9 + 4;
            pMVar10 = pMVar10 + 4;
          }
          *(undefined2 *)pMVar10 = *(undefined2 *)pMVar9;
          pMVar10[2] = pMVar9[2];
          if (this_00[0x9a] != (MMObjTy)0x0) {
            pMStack_8 = this_00 + 0xbc;
            pMStack_10 = this_00 + 0x1a87;
            do {
              pMVar9 = pMStack_10;
              pMVar10 = pMStack_8;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(UINT *)pMVar10 = *(UINT *)pMVar9;
                pMVar9 = pMVar9 + 4;
                pMVar10 = pMVar10 + 4;
              }
              *(undefined2 *)pMVar10 = *(undefined2 *)pMVar9;
              pMVar10[2] = pMVar9[2];
              if (*(UINT *)pMStack_8 != 0) {
                uVar18 = 0xffffffff;
                uVar17 = 7;
                iVar16 = -1;
                UVar2 = *(UINT *)(pMStack_8 + 0xb8);
                iVar15 = -1;
                iVar14 = 1;
                uVar13 = 0xffffffff;
                uVar5 = 0xfffffffe;
                iVar8 = 0x1e;
                iVar4 = 0x7d;
                puVar6 = (uint *)FUN_006b0140(*(UINT *)pMStack_8,DAT_00807618);
                puVar7 = ccFntTy::CreateTypeSSpr
                                   (*(ccFntTy **)(DAT_0081176c + 0x30),puVar6,iVar4,iVar8,uVar5,
                                    uVar13,iVar14,iVar15,iVar16);
                (**(code **)(UVar2 + 8))(puVar7,uVar17,uVar18);
                *(UINT *)(pMStack_8 + 0xc0) = 0;
              }
              iStack_14 = iStack_14 + 1;
              pMStack_10 = pMStack_10 + 0x27;
              pMStack_8 = pMStack_8 + 0x1fb;
            } while (iStack_14 < (int)(uint)(byte)this_00[0x9a]);
          }
          if ((this_00[0x1a5f] == (MMObjTy)0x3) || (this_00[0x1a5f] == (MMObjTy)0x1)) {
            *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
            *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
            *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
            this_00[0x1ca8] = (MMObjTy)0x1;
            this_00[0x65] = (MMObjTy)0x3;
          }
          this_00[0x1a5f] = (MMObjTy)0x0;
        }
        this_00[0x1ca9] = (MMObjTy)0x0;
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
      iVar4 = *(int *)(this_00 + 0x1cab);
      if (iVar4 != 0) {
        piVar11 = aiStack_38;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        aiStack_38[3] = 2;
        aiStack_38[4] = 0x693f;
        aiStack_38[2] = iVar4;
        (**(code **)(**(int **)(this_00 + 0xc) + 0x18))(aiStack_38);
      }
      MVar1 = this_00[0x1a5a];
      if ((MVar1 != (MMObjTy)0xff) && (*(int *)(this_00 + (uint)(byte)MVar1 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)(this_00 + (uint)(byte)MVar1 * 0x1fb + 0xc1));
        DAT_00858df8 = (undefined4 *)uStack_bc;
        return;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_bc;
  return;
}

