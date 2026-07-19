
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_artf.cpp
   STArtiafactC::GetMessage */

undefined4 __thiscall STArtiafactC::GetMessage(STArtiafactC *this,int param_1)

{
  STArtiafactC SVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  STArtiafactC *this_00;
  int iVar7;
  undefined4 uVar8;
  void *this_01;
  uint uVar9;
  int iVar10;
  undefined2 extraout_var_00;
  undefined3 uVar11;
  undefined3 extraout_var;
  undefined4 unaff_ESI;
  STArtiafactC *pSVar12;
  undefined4 *puVar13;
  void *unaff_EDI;
  STArtiafactC *pSVar14;
  STArtiafactC *pSVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  InternalExceptionFrame local_60;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  STArtiafactC *local_8;
  
  local_8 = this;
  iVar7 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar7 != 0xffff) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    iVar7 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar7 == 0) {
      uVar9 = *(uint *)(param_1 + 0x10);
      if (0x110 < uVar9) {
        uVar11 = (undefined3)((uint)param_1 >> 8);
        switch(uVar9) {
        case 0x112:
          if (*(int *)(local_8 + 0x2d6) < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad5e0((int)(local_8 + 0x1d5));
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case 0x113:
          if (*(int *)(local_8 + 0x2d6) < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          (*(code *)**(undefined4 **)(local_8 + 0x1d5))();
          g_currentExceptionFrame = local_60.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case 0x128:
          iVar7 = *(int *)(param_1 + 0x14);
          local_8[0x315] = *(STArtiafactC *)(iVar7 + 0x18);
          if (((local_8[0x24e] != (STArtiafactC)0x0) && (*(short *)(local_8 + 0x2ab) != -1)) &&
             ((this_01 = *(void **)(local_8 + 0x2ad), this_01 != (void *)0x0 ||
              (this_01 = (void *)thunk_FUN_0042b620(CONCAT31(uVar11,local_8[0x2a3]),
                                                    CONCAT22((short)(uVar9 - 0x112 >> 0x10),
                                                             *(short *)(local_8 + 0x2ab)),1),
              this_01 != (void *)0x0)))) {
            thunk_FUN_00492510(this_01,*(int *)(this_00 + 0x18));
            (**(code **)(*(int *)this_00 + 0xac))(*(undefined4 *)((int)this_01 + 0x18));
          }
          switch(*(undefined4 *)(iVar7 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005eb627_caseD_2;
          case 3:
            uVar18 = 0;
            this_00[0x30e] = *(STArtiafactC *)(iVar7 + 8);
            *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            iVar7 = *(int *)(this_00 + 0x2c6);
            this_00[0x30d] = (STArtiafactC)0x1;
            *(undefined4 *)(this_00 + 0x23a) = 5;
            iVar10 = *(int *)(this_00 + 0x2c2);
            *(int *)(this_00 + 0x2e0) = *(int *)(DAT_00802a38 + 0xe4) + 0x15;
            iVar17 = *(int *)(this_00 + 0x2be);
            iVar16 = 1;
            uVar9 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
            thunk_FUN_006377b0(uVar9,iVar16,iVar17,iVar10,iVar7,uVar18);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          case 5:
            *(undefined4 *)(this_00 + 0x2d2) = 0;
            *(undefined4 *)(this_00 + 0x2b5) = 3;
            *(undefined4 *)(this_00 + 0x23a) = 5;
            g_currentExceptionFrame = local_60.previous;
            return 0;
          default:
            this_00[0x30e] = *(STArtiafactC *)(iVar7 + 8);
            *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            this_00[0x30d] = (STArtiafactC)0x1;
            if (-1 < *(int *)(this_00 + 0x2d6)) {
              thunk_FUN_004ad430((int)(this_00 + 0x1d5));
            }
            thunk_FUN_005ebcb0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case 0x129:
          goto switchD_005eb5ad_caseD_129;
        }
      }
      if (uVar9 == 0x110) {
        puVar13 = *(undefined4 **)(param_1 + 0x14);
        if (*(int *)(local_8 + 0x23a) == 5) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (*(int *)(local_8 + 0x23a) == 6) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        iVar7 = (**(code **)(*(int *)local_8 + 0x124))(*puVar13);
        if (iVar7 == 0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(1);
        this_00[0x30e] = *(STArtiafactC *)(puVar13 + 2);
        *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(puVar13 + 3);
        this_00[0x30d] = (STArtiafactC)0x1;
        *(undefined4 *)(this_00 + 0x23a) = 5;
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (3 < uVar9) {
        if (uVar9 == 0x108) {
          thunk_FUN_005ef5f0((int)local_8);
          thunk_FUN_005eeff0(this_00,0);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (uVar9 != 0x10f) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        local_10 = (byte *)thunk_FUN_005ec370(local_8,&local_c);
        STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_10,local_c);
        FUN_006ab060(&local_10);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar9 == 3) {
        iVar7 = thunk_FUN_00495ff0(*(short *)(local_8 + 0x242),*(short *)(local_8 + 0x244),
                                   *(short *)(local_8 + 0x246),0,(int)local_8);
        if (iVar7 == 0) {
          this_00[0x252] = (STArtiafactC)((char)this_00[0x252] + -1);
        }
        thunk_FUN_004ad310((int)(this_00 + 0x1d5));
        if (this_00[0x2e4] == (STArtiafactC)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005f0d00((int)this_00);
        STAllPlayersC::UnRegisterArtefact
                  (DAT_007fa174,CONCAT22(extraout_var_00,*(undefined2 *)(this_00 + 0x32)),
                   (uint)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar9 != 0) {
        if (uVar9 != 2) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        pSVar15 = *(STArtiafactC **)(param_1 + 0x14);
        if (*(int *)(pSVar15 + 0xc) == 2) {
          iVar7 = thunk_FUN_005ec4a0(local_8,(undefined4 *)pSVar15);
          if (iVar7 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          if (this_00[0x252] != (STArtiafactC)0x0) {
            sVar2 = *(short *)(this_00 + 0x242);
            sVar3 = *(short *)(this_00 + 0x244);
            local_18 = (int)sVar3;
            sVar4 = *(short *)(this_00 + 0x246);
            local_1c = 1;
            if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
                ((DAT_007fb242 <= sVar3 || (sVar4 < 0)))) || (DAT_007fb244 <= sVar4)) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar3 +
                              (int)sVar2) * 8);
            }
            bVar6 = true;
            if ((iVar7 == 0) &&
               (iVar7 = DumpClassC::WritePtr(sVar2,sVar3,sVar4,0,(int)this_00), iVar7 == 0)) {
              this_00[0x252] = (STArtiafactC)((char)this_00[0x252] + '\x01');
            }
            else {
              bVar6 = false;
            }
            if (!bVar6) {
              thunk_FUN_005ebcb0(this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
            SVar1 = this_00[0x252];
            this_00[0x252] = (STArtiafactC)((char)SVar1 - 1U);
            if (1 < (byte)((char)SVar1 - 1U)) {
              sVar2 = *(short *)(this_00 + 0x248);
              sVar3 = *(short *)(this_00 + 0x24a);
              local_18 = (int)sVar3;
              sVar4 = *(short *)(this_00 + 0x24c);
              local_1c = 1;
              if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
                 (((DAT_007fb242 <= sVar3 || (sVar4 < 0)) || (DAT_007fb244 <= sVar4)))) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)DAT_007fb246 * (int)sVar4 + (int)DAT_007fb240 * (int)sVar3 +
                                (int)sVar2) * 8);
              }
              bVar6 = true;
              if ((iVar7 == 0) &&
                 (iVar7 = DumpClassC::WritePtr(sVar2,sVar3,sVar4,0,(int)this_00), iVar7 == 0)) {
                this_00[0x252] = (STArtiafactC)((char)this_00[0x252] + '\x01');
              }
              else {
                bVar6 = false;
              }
              if (!bVar6) {
                thunk_FUN_005ebcb0(this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              this_00[0x252] = (STArtiafactC)((char)this_00[0x252] + -1);
            }
          }
          if ((DAT_007fa174 != (STAllPlayersC *)0x0) &&
             (iVar7 = STAllPlayersC::RegisterArtefact
                                (DAT_007fa174,*(ushort *)(this_00 + 0x32),this_00), iVar7 != 0)) {
            thunk_FUN_005ebcb0(this_00);
          }
          thunk_FUN_005ef5f0((int)this_00);
          thunk_FUN_005eeff0(this_00,0);
          if (this_00[0x2b9] == (STArtiafactC)0x0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad460(this_00 + 0x1d5,0);
          this_00[0x2b9] = (STArtiafactC)0x1;
          this_00[0x2de] = (STArtiafactC)0x0;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        pSVar12 = pSVar15;
        pSVar14 = local_8 + 0x326;
        for (iVar7 = 0x54; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pSVar14 = *(undefined4 *)pSVar12;
          pSVar12 = pSVar12 + 4;
          pSVar14 = pSVar14 + 4;
        }
        *pSVar14 = *pSVar12;
        if (*(int *)(pSVar15 + 0xc) == 0) {
          *(int *)(local_8 + 0x46b) = (int)*(short *)(local_8 + 0x34a);
          *(int *)(local_8 + 0x46f) = (int)*(short *)(local_8 + 0x34c);
          *(int *)(local_8 + 0x473) = (int)*(short *)(local_8 + 0x34e);
          *(short *)(local_8 + 0x34a) = *(short *)(local_8 + 0x34a) * 0xc9 + 100;
          *(short *)(local_8 + 0x34c) = *(short *)(local_8 + 0x34c) * 0xc9 + 100;
          *(short *)(local_8 + 0x34e) = *(short *)(local_8 + 0x34e) * 200 + 100;
        }
        iVar7 = thunk_FUN_005ebd80(local_8);
        if (iVar7 == 0) {
          thunk_FUN_005ebcb0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          iVar7 = STAllPlayersC::RegisterArtefact(DAT_007fa174,0xffff,this_00);
          if (iVar7 != 0) {
            thunk_FUN_005ebcb0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00[0x2e4] = (STArtiafactC)0x1;
          thunk_FUN_005ec6a0((int)this_00);
        }
        if (*(int *)(this_00 + 0x346) != 3) {
          if (*(int *)(this_00 + 0x346) != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          *(int *)(this_00 + 0x2d2) = *(short *)(DAT_00806724 + 0x23) + -1;
          *(undefined4 *)(this_00 + 0x2b5) = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_006377b0(*(uint *)(this_00 + 0x1ed),1,(int)*(short *)(this_00 + 0x34a),
                           (int)*(short *)(this_00 + 0x34c),(int)*(short *)(this_00 + 0x34e),0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (*(int *)(local_8 + 0x23a) == 6) {
        thunk_FUN_005ebcb0(local_8);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      uVar8 = thunk_FUN_005ee6e0((int *)local_8);
      this_00[0x2de] = SUB41(uVar8,0);
      if (SUB41(uVar8,0) != (STArtiafactC)0x0) {
        *(undefined4 *)(this_00 + 0x2be) = *(undefined4 *)(this_00 + 0x277);
        *(undefined4 *)(this_00 + 0x2c2) = *(undefined4 *)(this_00 + 0x27b);
        *(undefined4 *)(this_00 + 0x2c6) = *(undefined4 *)(this_00 + 0x27f);
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < *(int *)(this_00 + 0x2d2)) &&
           (iVar7 = thunk_FUN_005f0ba0((int)this_00), iVar7 != 0)) {
          *(undefined4 *)(this_00 + 0x2d2) = 0xffffffff;
        }
        thunk_FUN_005eeff0(this_00,0);
        if (this_00[800] == (STArtiafactC)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005f0310(this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (*(int *)(this_00 + 0x23a) != 6) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      thunk_FUN_005ebcb0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar10 = ReportDebugMessage(s_E____titans_nick_to_artf_cpp_007ce4ec,0x1b2,0,iVar7,&DAT_007a4ccc,
                                s_STArtiafactC__GetMessage_007ce510);
    if (iVar10 != 0) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    RaiseInternalException(iVar7,0,s_E____titans_nick_to_artf_cpp_007ce4ec,0x1b4);
  }
  return 0xffff;
switchD_005eb627_caseD_2:
  iVar10 = (**(code **)(*(int *)this_00 + 0x124))(20000);
  if (iVar10 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(iVar7 + 0x18) == 4) {
    FUN_006e9d40(*(void **)(this_00 + 0x211),*(uint **)(this_00 + 0x1ed),8);
  }
  this_00[0x30e] = *(STArtiafactC *)(iVar7 + 8);
  *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
  *(undefined4 *)(this_00 + 0x23a) = 5;
  this_00[0x30d] = (STArtiafactC)0x1;
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005eb5ad_caseD_129:
  if (*(int *)(local_8 + 0x23a) != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar7 = *(int *)(local_8 + 0x2a7);
  if (iVar7 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8[0x24f] == (STArtiafactC)0x0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if ((*(short *)(local_8 + 0x2ab) == -1) &&
     (iVar7 = FUN_006e62d0(DAT_00802a38,iVar7,&local_14), uVar11 = extraout_var, iVar7 != -4)) {
    iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)(local_14 + 0x32));
    *(undefined2 *)(this_00 + 0x2ab) = *(undefined2 *)(local_14 + 0x32);
  }
  if (*(short *)(this_00 + 0x2ab) == -1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  uVar9 = *(uint *)(this_00 + 0x2ad);
  if ((uVar9 != 0) ||
     (uVar9 = thunk_FUN_0042b620(CONCAT31(uVar11,this_00[0x2a3]),
                                 CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)(this_00 + 0x2ab)),
                                 1), uVar9 != 0)) {
    *(int *)(this_00 + 0x277) = (int)*(short *)(uVar9 + 0x41);
    *(int *)(this_00 + 0x27b) = (int)*(short *)(uVar9 + 0x43);
    *(int *)(this_00 + 0x27f) = (int)*(short *)(uVar9 + 0x45);
    *(int *)(this_00 + 0x2ba) = (int)*(short *)(uVar9 + 0x6c) / 0xf;
    puVar13 = (undefined4 *)(uVar9 + 0x34);
    pSVar15 = this_00 + 0x34;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      pSVar15 = pSVar15 + 4;
    }
    *(undefined2 *)pSVar15 = *(undefined2 *)puVar13;
    pSVar15[2] = *(STArtiafactC *)((int)puVar13 + 2);
    *(undefined4 *)(this_00 + 0x76) = 0;
    *(undefined2 *)(this_00 + 0x6e) = 0x2f;
    *(undefined4 *)(this_00 + 0x2be) = *(undefined4 *)(this_00 + 0x277);
    *(undefined4 *)(this_00 + 0x2c2) = *(undefined4 *)(this_00 + 0x27b);
    *(undefined4 *)(this_00 + 0x2c6) = *(undefined4 *)(this_00 + 0x27f);
  }
  thunk_FUN_005ef5f0((int)this_00);
  iVar7 = (**(code **)(*(int *)this_00 + 0xd8))();
  if (iVar7 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0xffff;
}

