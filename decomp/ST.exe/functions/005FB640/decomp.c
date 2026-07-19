
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_cont.cpp
   STContainerC::GetMessage */

undefined4 __thiscall STContainerC::GetMessage(STContainerC *this,int param_1)

{
  STContainerC SVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  STContainerC *this_00;
  int iVar7;
  undefined4 uVar8;
  void *this_01;
  uint uVar9;
  int iVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar11;
  undefined4 unaff_ESI;
  STContainerC *pSVar12;
  undefined4 *puVar13;
  void *unaff_EDI;
  STContainerC *pSVar14;
  STContainerC *pSVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  STContainerC *local_8;
  
  local_8 = this;
  iVar7 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar7 != 0xffff) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    iVar7 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar7 == 0) {
      uVar9 = *(uint *)(param_1 + 0x10);
      if (0x110 < uVar9) {
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
          local_8[0x315] = *(STContainerC *)(iVar7 + 0x18);
          if (((local_8[0x24e] != (STContainerC)0x0) && (*(short *)(local_8 + 0x2ab) != -1)) &&
             ((this_01 = *(void **)(local_8 + 0x2ad), this_01 != (void *)0x0 ||
              (this_01 = (void *)STAllPlayersC::GetObjPtr
                                           (DAT_007fa174,
                                            CONCAT31((int3)((uint)param_1 >> 8),local_8[0x2a3]),
                                            CONCAT22((short)(uVar9 - 0x112 >> 0x10),
                                                     *(short *)(local_8 + 0x2ab)),CASE_1),
              this_01 != (void *)0x0)))) {
            thunk_FUN_00492510(this_01,*(int *)(this_00 + 0x18));
            (**(code **)(*(int *)this_00 + 0xac))(*(undefined4 *)((int)this_01 + 0x18));
          }
          switch(*(undefined4 *)(iVar7 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005fbd82_caseD_2;
          case 3:
            uVar18 = 0;
            this_00[0x30e] = *(STContainerC *)(iVar7 + 8);
            *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            iVar7 = *(int *)(this_00 + 0x2c6);
            this_00[0x30d] = (STContainerC)0x1;
            *(undefined4 *)(this_00 + 0x23a) = 5;
            iVar10 = *(int *)(this_00 + 0x2c2);
            *(int *)(this_00 + 0x2e0) = DAT_00802a38->field_00E4 + 0x15;
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
            this_00[0x30e] = *(STContainerC *)(iVar7 + 8);
            *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
            this_00[0x30d] = (STContainerC)0x1;
            if (-1 < (int)*(uint *)(this_00 + 0x2d6)) {
              FUN_006eab60(*(void **)(this_00 + 0x211),*(uint *)(this_00 + 0x2d6));
            }
            thunk_FUN_005fc3e0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case 0x129:
          goto switchD_005fbd08_caseD_129;
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
        this_00[0x30e] = *(STContainerC *)(puVar13 + 2);
        *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(puVar13 + 3);
        this_00[0x30d] = (STContainerC)0x1;
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
        local_14 = (byte *)thunk_FUN_005fcad0(local_8,&local_10);
        STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_14,local_10);
        FUN_006ab060(&local_14);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar9 == 3) {
        iVar7 = thunk_FUN_00495ff0(*(short *)(local_8 + 0x242),*(short *)(local_8 + 0x244),
                                   *(short *)(local_8 + 0x246),0,(int)local_8);
        if (iVar7 == 0) {
          this_00[0x252] = (STContainerC)((char)this_00[0x252] + -1);
        }
        thunk_FUN_004ad310((int)(this_00 + 0x1d5));
        if (this_00[0x2e4] == (STContainerC)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (DAT_007fa174 == (STAllPlayersC *)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar11 = extraout_var;
        if (this_00[0x250] != (STContainerC)0x3) {
          thunk_FUN_005f0d90((int)this_00);
          uVar11 = extraout_var_00;
        }
        STAllPlayersC::UnRegisterContainer
                  (DAT_007fa174,CONCAT22(uVar11,*(undefined2 *)(this_00 + 0x32)),(uint)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar9 == 0) {
        if (*(int *)(local_8 + 0x23a) == 6) {
          thunk_FUN_005fc3e0(local_8);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar8 = thunk_FUN_005ee6e0((int *)local_8);
        this_00[0x2de] = SUB41(uVar8,0);
        if (SUB41(uVar8,0) == (STContainerC)0x0) {
          if (*(int *)(this_00 + 0x23a) != 6) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        *(undefined4 *)(this_00 + 0x2be) = *(undefined4 *)(this_00 + 0x277);
        *(undefined4 *)(this_00 + 0x2c2) = *(undefined4 *)(this_00 + 0x27b);
        *(undefined4 *)(this_00 + 0x2c6) = *(undefined4 *)(this_00 + 0x27f);
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < *(int *)(this_00 + 0x2d2)) &&
           (iVar7 = thunk_FUN_005f0ba0((int)this_00), iVar7 != 0)) {
          *(undefined4 *)(this_00 + 0x2d2) = 0xffffffff;
        }
        thunk_FUN_005eeff0(this_00,0);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar9 != 2) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      pSVar15 = *(STContainerC **)(param_1 + 0x14);
      if (*(int *)(pSVar15 + 0xc) != 2) {
        pSVar12 = pSVar15;
        pSVar14 = local_8 + 0x326;
        for (iVar7 = 0x55; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)pSVar14 = *(undefined4 *)pSVar12;
          pSVar12 = pSVar12 + 4;
          pSVar14 = pSVar14 + 4;
        }
        *pSVar14 = *pSVar12;
        if (*(int *)(pSVar15 + 0xc) == 0) {
          *(int *)(local_8 + 0x46f) = (int)*(short *)(local_8 + 0x34e);
          *(int *)(local_8 + 0x473) = (int)*(short *)(local_8 + 0x350);
          *(int *)(local_8 + 0x477) = (int)*(short *)(local_8 + 0x352);
          *(short *)(local_8 + 0x34e) = *(short *)(local_8 + 0x34e) * 0xc9 + 100;
          *(short *)(local_8 + 0x350) = *(short *)(local_8 + 0x350) * 0xc9 + 100;
          *(short *)(local_8 + 0x352) = *(short *)(local_8 + 0x352) * 200 + 100;
        }
        iVar7 = thunk_FUN_005fc4a0(local_8);
        if (iVar7 == 0) {
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if ((((*(int *)(this_00 + 0x358) != 0) && (*(short *)(this_00 + 0x342) == 1)) &&
            (iVar7 = FUN_006e62d0(DAT_00802a38,*(int *)(this_00 + 0x358),&local_18), iVar7 != -4))
           && (*(void **)(this_00 + 0x211) != (void *)0x0)) {
          FUN_006ea460(*(void **)(this_00 + 0x211),*(uint *)(this_00 + 0x1ed),
                       *(int *)(local_18 + 0x1ed));
        }
        if (DAT_007fa174 != (STAllPlayersC *)0x0) {
          iVar7 = STAllPlayersC::RegisterContainer(DAT_007fa174,0xffff,this_00);
          if (iVar7 != 0) {
            thunk_FUN_005fc3e0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00[0x2e4] = (STContainerC)0x1;
          thunk_FUN_005fceb0((int)this_00);
        }
        if (*(uint *)(this_00 + 0x342) >> 0x10 != 3) {
          if (*(uint *)(this_00 + 0x342) >> 0x10 != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          *(int *)(this_00 + 0x2d2) = *(short *)(DAT_00806724 + 0x23) + -1;
          *(undefined4 *)(this_00 + 0x2b5) = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_006377b0(*(uint *)(this_00 + 0x1ed),1,(int)*(short *)(this_00 + 0x34e),
                           (int)*(short *)(this_00 + 0x350),(int)*(short *)(this_00 + 0x352),0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar7 = thunk_FUN_005fcc00(local_8,(undefined4 *)pSVar15);
      if (iVar7 < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (this_00[0x252] != (STContainerC)0x0) {
        sVar2 = *(short *)(this_00 + 0x242);
        sVar3 = *(short *)(this_00 + 0x244);
        local_1c = (int)sVar3;
        sVar4 = *(short *)(this_00 + 0x246);
        local_c = 1;
        if ((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) ||
            ((sVar3 < 0 || ((DAT_007fb242 <= sVar3 || (sVar4 < 0)))))) || (DAT_007fb244 <= sVar4)) {
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
          this_00[0x252] = (STContainerC)((char)this_00[0x252] + '\x01');
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) {
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        SVar1 = this_00[0x252];
        this_00[0x252] = (STContainerC)((char)SVar1 - 1U);
        if (1 < (byte)((char)SVar1 - 1U)) {
          sVar2 = *(short *)(this_00 + 0x248);
          sVar3 = *(short *)(this_00 + 0x24a);
          local_c = (uint)sVar3;
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
            this_00[0x252] = (STContainerC)((char)this_00[0x252] + '\x01');
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) {
            thunk_FUN_005fc3e0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00[0x252] = (STContainerC)((char)this_00[0x252] + -1);
        }
      }
      thunk_FUN_005ef5f0((int)this_00);
      thunk_FUN_005eeff0(this_00,0);
      if (DAT_007fa174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar7 = STAllPlayersC::RegisterContainer(DAT_007fa174,*(ushort *)(this_00 + 0x32),this_00);
      if (iVar7 == 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      thunk_FUN_005fc3e0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar10 = ReportDebugMessage(s_E____titans_nick_to_cont_cpp_007ce8e0,0x139,0,iVar7,&DAT_007a4ccc,
                                s_STContainerC__GetMessage_007ce904);
    if (iVar10 != 0) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    RaiseInternalException(iVar7,0,s_E____titans_nick_to_cont_cpp_007ce8e0,0x13b);
  }
  return 0xffff;
switchD_005fbd82_caseD_2:
  iVar10 = (**(code **)(*(int *)this_00 + 0x124))(20000);
  if (iVar10 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(iVar7 + 0x18) == 4) {
    FUN_006e9d40(*(void **)(this_00 + 0x211),*(uint **)(this_00 + 0x1ed),8);
  }
  this_00[0x30e] = *(STContainerC *)(iVar7 + 8);
  *(undefined2 *)(this_00 + 0x30f) = *(undefined2 *)(iVar7 + 0xc);
  *(undefined4 *)(this_00 + 0x23a) = 5;
  this_00[0x30d] = (STContainerC)0x1;
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005fbd08_caseD_129:
  if (*(int *)(local_8 + 0x23a) != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  uVar9 = CONCAT22((short)((uint)param_1 >> 0x10),*(short *)(local_8 + 0x2ab));
  if (*(short *)(local_8 + 0x2ab) == -1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8[0x24f] == (STContainerC)0x0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  local_c = *(uint *)(local_8 + 0x2ad);
  if (local_c == 0) {
    local_c = STAllPlayersC::GetObjPtr
                        (DAT_007fa174,CONCAT31((int3)(uVar9 >> 8),local_8[0x2a3]),uVar9,CASE_1);
  }
  if (local_c != 0) {
    *(int *)(this_00 + 0x277) = (int)*(short *)(local_c + 0x41);
    *(int *)(this_00 + 0x27b) = (int)*(short *)(local_c + 0x43);
    *(int *)(this_00 + 0x27f) = *(short *)(local_c + 0x45) + 5;
    *(int *)(this_00 + 0x2ba) = (int)*(short *)(local_c + 0x6c) / 0xf;
    puVar13 = (undefined4 *)(local_c + 0x34);
    pSVar15 = this_00 + 0x34;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pSVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      pSVar15 = pSVar15 + 4;
    }
    *(undefined2 *)pSVar15 = *(undefined2 *)puVar13;
    pSVar15[2] = *(STContainerC *)((int)puVar13 + 2);
    *(undefined4 *)(this_00 + 0x76) = 0;
    *(undefined2 *)(this_00 + 0x6e) = *(undefined2 *)(local_c + 0x6e);
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

