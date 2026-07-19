
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::GetMessage */

int __thiscall TLOBaseTy::GetMessage(TLOBaseTy *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  code *pcVar12;
  undefined3 uVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  TLOBaseTy *this_00;
  short sVar17;
  short sVar18;
  int iVar19;
  uint uVar20;
  undefined *puVar21;
  STT3DSprC *pSVar22;
  undefined4 uVar23;
  int iVar24;
  TLOBaseTyVTable *pTVar25;
  int iVar26;
  undefined4 extraout_ECX;
  int *piVar27;
  uint uVar28;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  undefined4 *puVar29;
  byte *pbVar30;
  void *unaff_EDI;
  undefined4 *puVar31;
  int *piVar32;
  byte *pbVar33;
  bool bVar34;
  char cVar35;
  int aiStack_6dc [17];
  undefined4 auStack_698 [17];
  undefined4 auStack_654 [17];
  undefined4 auStack_610 [17];
  int aiStack_5cc [17];
  undefined4 auStack_588 [17];
  int aiStack_544 [17];
  int aiStack_500 [17];
  undefined4 local_4bc [5];
  undefined4 local_4a8;
  undefined4 local_465;
  int local_ea;
  uint local_e6;
  int local_e2;
  uint local_de;
  int local_da;
  uint local_d6;
  int local_d2;
  uint local_ce;
  int local_ca;
  InternalExceptionFrame local_c4;
  TLOBaseTy *local_80;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  int local_5c [2];
  int local_54;
  undefined2 local_50;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = this;
  iVar19 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar19 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar26 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0x6d9,0,iVar19,
                                s_TLOBaseTy__GetMessage_error_mess_007ac848,
                                *(undefined4 *)(param_1 + 0x10));
    if (iVar26 != 0) {
      pcVar12 = (code *)swi(3);
      iVar19 = (*pcVar12)();
      return iVar19;
    }
    RaiseInternalException(iVar19,0,s_E____titans_Artem_TLO_base_cpp_007ac820,0x6da);
    return iVar19;
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_80,param_1);
  uVar20 = *(uint *)(param_1 + 0x10);
  if (uVar20 < 0x112) {
    if (uVar20 == 0x111) {
      iVar19 = *(int *)&this_00->field_0x5ac;
      if (iVar19 - 0x37U < 0x38) {
        switch(iVar19) {
        case 0x37:
        case 0x6c:
          thunk_FUN_004e8d40((int *)this_00);
          break;
        case 0x38:
        case 0x39:
        case 0x4f:
        case 0x5e:
        case 0x61:
          thunk_FUN_004e0220((int)this_00);
          break;
        case 0x53:
          thunk_FUN_004cd790((int)this_00);
          break;
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004ce6e0(this_00);
          break;
        case 0x69:
          thunk_FUN_004dcbc0((int)this_00);
          break;
        case 0x6a:
          thunk_FUN_004c5e30((int)this_00);
          break;
        case 0x6e:
          thunk_FUN_004dd500((int)this_00,(uint)(&BYTE_004bd2b1)[iVar19]);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)&this_00->field_0x235 * 4) == 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2e20((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar20 < 0x109) {
      if (uVar20 == 0x108) {
        iVar26 = 0;
        iVar19 = 0;
        do {
          piVar27 = (int *)(*(int *)&this_00->field_0x1f5 + iVar19);
          auStack_588[iVar26] = *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar19);
          aiStack_6dc[iVar26] = piVar27[8];
          if (*piVar27 != 0) {
            cVar35 = (char)iVar26;
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,cVar35);
            aiStack_500[iVar26] = iVar24;
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,cVar35);
            uVar23 = thunk_FUN_004acdd0(&this_00->field_01D5,cVar35,iVar24);
            auStack_698[iVar26] = uVar23;
          }
          iVar19 = iVar19 + 0x24;
          iVar26 = iVar26 + 1;
        } while (iVar19 < 0x264);
        if (this_00->field_05FF != 0) {
          iVar26 = 0;
          iVar19 = 0;
          do {
            pvVar5 = (void *)this_00->field_05FF;
            iVar24 = *(int *)((int)pvVar5 + 0x20);
            piVar27 = (int *)(iVar24 + iVar19);
            auStack_610[iVar26] = *(undefined4 *)(iVar24 + 0x1c + iVar19);
            aiStack_544[iVar26] = piVar27[8];
            if (*piVar27 != 0) {
              cVar35 = (char)iVar26;
              iVar24 = thunk_FUN_004ac910(pvVar5,cVar35);
              pvVar5 = (void *)this_00->field_05FF;
              aiStack_5cc[iVar26] = iVar24;
              iVar24 = thunk_FUN_004ac910(pvVar5,cVar35);
              uVar23 = thunk_FUN_004acdd0((void *)this_00->field_05FF,cVar35,iVar24);
              auStack_654[iVar26] = uVar23;
            }
            iVar19 = iVar19 + 0x24;
            iVar26 = iVar26 + 1;
          } while (iVar19 < 0x264);
        }
        RotateSpr(this_00,1);
        iVar26 = 0;
        iVar19 = 0;
        do {
          *(undefined4 *)(*(int *)&this_00->field_0x1f5 + 0x1c + iVar19) = auStack_588[iVar26];
          *(int *)(*(int *)&this_00->field_0x1f5 + 0x20 + iVar19) = aiStack_6dc[iVar26];
          piVar27 = (int *)(*(int *)&this_00->field_0x1f5 + iVar19);
          iVar24 = *piVar27;
          if (iVar24 != 0) {
            *(undefined4 *)(piVar27[1] + aiStack_500[iVar26] * 4) =
                 *(undefined4 *)(aiStack_500[iVar26] * 4 + 0x31 + iVar24);
            uVar23 = auStack_698[iVar26];
            iVar24 = thunk_FUN_004ac910(&this_00->field_01D5,(char)iVar26);
            thunk_FUN_004ace00(&this_00->field_01D5,(char)iVar26,iVar24,uVar23);
          }
          iVar19 = iVar19 + 0x24;
          iVar26 = iVar26 + 1;
        } while (iVar19 < 0x264);
        if (this_00->field_05FF == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        iVar26 = 0;
        iVar19 = 0;
        do {
          *(undefined4 *)(*(int *)(this_00->field_05FF + 0x20) + 0x1c + iVar19) =
               auStack_610[iVar26];
          *(int *)(*(int *)(this_00->field_05FF + 0x20) + 0x20 + iVar19) = aiStack_544[iVar26];
          iVar24 = *(int *)(this_00->field_05FF + 0x20);
          iVar6 = *(int *)(iVar24 + iVar19);
          if (iVar6 != 0) {
            *(undefined4 *)(*(int *)(iVar24 + iVar19 + 4) + aiStack_5cc[iVar26] * 4) =
                 *(undefined4 *)(aiStack_5cc[iVar26] * 4 + 0x31 + iVar6);
            uVar23 = auStack_654[iVar26];
            iVar24 = thunk_FUN_004ac910((void *)this_00->field_05FF,(char)iVar26);
            thunk_FUN_004ace00((void *)this_00->field_05FF,(char)iVar26,iVar24,uVar23);
          }
          iVar19 = iVar19 + 0x24;
          iVar26 = iVar26 + 1;
        } while (iVar19 < 0x264);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar20 == 0) {
        if (*(int *)&this_00->field_0x4b4 != 0) {
          if ((this_00->field_0245 == 0) && (*(int *)&this_00->field_0x361 == 0)) {
            bVar34 = true;
          }
          else {
            bVar34 = false;
          }
          if ((bVar34) && (this_00->field_0249 != 6)) {
            uVar23 = DAT_00802a38->field_00E4;
            *(undefined4 *)&this_00->field_0x4bc = 1;
            *(undefined4 *)&this_00->field_0x4b8 = uVar23;
            (*this_00->vtable->slot_90)(3,0x360);
            SetState(this_00,6,1);
            thunk_FUN_004cc880(this_00,4);
          }
        }
        thunk_FUN_004cbad0((int)this_00);
        thunk_FUN_004b8c80((int *)this_00);
        if (this_00->field_05FF != 0) {
          thunk_FUN_004cbe10((int *)this_00);
        }
        if (this_00->field_0245 == 0) {
          if (*(int *)&this_00->field_0x261 != 0) {
            fireProc(this_00);
          }
          thunk_FUN_004c84c0((int *)this_00);
          switch(*(undefined4 *)&this_00->field_0x5ac) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004cf410();
            break;
          case 0x33:
            thunk_FUN_004e27e0((int)this_00);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004ddd50((int *)this_00);
            break;
          case 0x36:
          case 0x5d:
            thunk_FUN_004e4b10((int)this_00);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e9050((int)this_00);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0830((int *)this_00);
            break;
          case 0x3a:
            thunk_FUN_004d9820((int *)this_00);
            break;
          case 0x41:
            thunk_FUN_004e3910((int *)this_00);
            break;
          case 0x43:
            thunk_FUN_004df3b0((int *)this_00);
            break;
          case 0x45:
            thunk_FUN_004ea870((int *)this_00);
            break;
          case 0x48:
            thunk_FUN_004dfb00((int)this_00);
            break;
          case 0x4c:
            thunk_FUN_004dc760((int *)this_00);
            break;
          case 0x4d:
            thunk_FUN_004dec10((int *)this_00);
            break;
          case 0x4e:
            thunk_FUN_004d9c60();
            break;
          case 99:
            thunk_FUN_004b7aa0((int)this_00);
            break;
          case 100:
            thunk_FUN_004e46f0((int *)this_00);
            break;
          case 0x68:
            thunk_FUN_004dc260((int)this_00);
            break;
          case 0x69:
            thunk_FUN_004dcbf0((int)this_00);
            break;
          case 0x6a:
            thunk_FUN_004c5eb0((int)this_00);
            break;
          case 0x6e:
            thunk_FUN_004dd570((int)this_00);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004eccf0((int)this_00);
            break;
          case 0x70:
            thunk_FUN_004d8f80((int)this_00);
            break;
          case 0x72:
            thunk_FUN_004ece80();
          }
        }
        if (*(int *)&this_00->field_0x3dc != 0) {
          thunk_FUN_004c6d00((int *)this_00);
        }
        teleNone(this_00);
        if ((*(int *)&this_00->field_0x410 != 0) &&
           ((uint)(*(int *)&this_00->field_0x41c + *(int *)&this_00->field_0x418) <=
            (uint)DAT_00802a38->field_00E4)) {
          *(undefined4 *)&this_00->field_0x410 = 0;
        }
        if ((*(int *)&this_00->field_0x420 != 0) &&
           ((uint)(*(int *)&this_00->field_0x428 + *(int *)&this_00->field_0x424) <=
            (uint)DAT_00802a38->field_00E4)) {
          *(undefined4 *)&this_00->field_0x420 = 0;
        }
        if (*(int *)&this_00->field_0x4a0 != 0) {
          iVar19 = (*this_00->vtable->slot_7C)();
          if (iVar19 < 100) {
            if (*(int *)&this_00->field_0x4a4 + 0x7dU <= (uint)DAT_00802a38->field_00E4) {
              thunk_FUN_004b9bb0(this_00,(-(uint)(*(int *)&this_00->field_0x4a8 != 0) & 5) + 5,
                                 (short)*(undefined4 *)&this_00->field_0x4ac,0xffff);
              *(undefined4 *)&this_00->field_0x4a4 = DAT_00802a38->field_00E4;
            }
          }
          else {
            *(undefined4 *)&this_00->field_0x4a0 = 0;
          }
        }
        thunk_FUN_004cc370((int *)this_00);
        if (*(int *)&this_00->field_0x4c0 == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        pvVar5 = (void *)this_00->field_061F;
        if (pvVar5 == (void *)0x0) {
          puVar31 = thunk_FUN_00631fd0();
          this_00->field_061F = puVar31;
          uVar23 = (*this_00->vtable->slot_2C)();
          thunk_FUN_006324c0((void *)this_00->field_061F,CASE_2,uVar23);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*(int *)&this_00->field_0x2c == 0) {
          thunk_FUN_00636060(pvVar5,(int)*(short *)&this_00->field_0x41,
                             (int)*(short *)&this_00->field_0x43,
                             *(short *)&this_00->field_0x45 + 0x14,
                             (int)*(short *)&this_00->field_0x6c,100);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        thunk_FUN_00636060(pvVar5,(*(int *)&this_00->field_0x5b0 + 1) * 0xc9,
                           (*(int *)&this_00->field_0x5b4 + 1) * 0xc9,
                           *(int *)&this_00->field_0x5b8 * 200 + 0x78,
                           (int)*(short *)&this_00->field_0x6c,100);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar20 == 2) {
        iVar19 = *(int *)(param_1 + 0x14);
        if (this_00 == (TLOBaseTy *)0x0) {
          puVar31 = (undefined4 *)0x0;
        }
        else {
          puVar31 = (undefined4 *)&this_00->field_0x5ac;
        }
        puVar29 = (undefined4 *)(iVar19 + 0x14);
        for (iVar26 = 0x10; iVar26 != 0; iVar26 = iVar26 + -1) {
          *puVar31 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar31 = puVar31 + 1;
        }
        *(undefined2 *)puVar31 = *(undefined2 *)puVar29;
        *(undefined1 *)((int)puVar31 + 2) = *(undefined1 *)((int)puVar29 + 2);
        *(undefined4 *)&this_00->field_0x231 = *(undefined4 *)(iVar19 + 0xc);
        *(int *)&this_00->field_0x235 = *(int *)&this_00->field_0x5ac + -0x32;
        uVar20 = thunk_FUN_004406c0(this_00->field_0x24);
        *(uint *)&this_00->field_0x239 = (uVar20 & 0xff) - 1;
        uVar13 = *(undefined3 *)&this_00->field_0x25;
        this_00->field_023D = this_00->field_0x24;
        *(undefined3 *)&this_00->field_0x23e = uVar13;
        if (*(int *)(&DAT_00791f38 + *(int *)&this_00->field_0x235 * 4) == 2) {
          *(undefined **)&this_00->field_0x5fb = &DAT_007aca60;
        }
        else if (*(int *)(&DAT_00791f38 + *(int *)&this_00->field_0x235 * 4) == 1) {
          *(undefined **)&this_00->field_0x5fb = &DAT_007ace00;
        }
        else {
          *(undefined **)&this_00->field_0x5fb = &DAT_007ac988;
        }
        *(undefined4 *)&this_00->field_0x4b4 = 0;
        *(undefined4 *)&this_00->field_0x4b0 = 0;
        *(undefined4 *)&this_00->field_0x255 =
             *(undefined4 *)(&DAT_007914e8 + *(int *)&this_00->field_0x235 * 4);
        *(undefined4 *)&this_00->field_0x454 = 0;
        *(undefined4 *)&this_00->field_0x458 = 0xff;
        if (*(int *)&this_00->field_0x2c == 0) {
          *(undefined4 *)&this_00->field_0x60b = 0xb4;
          *(undefined4 *)&this_00->field_0x60f = 0x8c;
          *(undefined4 *)&this_00->field_0x613 = 0x5a;
          *(undefined4 *)&this_00->field_0x617 = 0x45;
        }
        else if (*(int *)&this_00->field_0x2c == 1) {
          *(undefined4 *)&this_00->field_0x60b = 0xf0;
          *(undefined4 *)&this_00->field_0x60f = 0xbe;
          *(undefined4 *)&this_00->field_0x613 = 0x78;
          *(undefined4 *)&this_00->field_0x617 = 0x56;
        }
        else {
          *(undefined4 *)&this_00->field_0x617 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x613 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x60f = 0xffffffff;
          *(undefined4 *)&this_00->field_0x60b = 0xffffffff;
        }
        thunk_FUN_00417a00(this_00,0);
        iVar19 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x5b0,
                                    *(short *)&this_00->field_0x5b4,*(short *)&this_00->field_0x5b8,
                                    1);
        if (iVar19 != 0) {
          RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x290);
        }
        thunk_FUN_0041d900(this_00,*(short *)&this_00->field_0x5b0,*(short *)&this_00->field_0x5b4,
                           *(short *)&this_00->field_0x5b8);
        thunk_FUN_004b9920((int)this_00);
        switch(*(undefined4 *)&this_00->field_0x231) {
        case 0:
        case 1:
        case 3:
          if ((100 < *(int *)&this_00->field_0x5db) || (*(int *)&this_00->field_0x5db < 0)) {
            *(undefined4 *)&this_00->field_0x5db = 100;
          }
          if ((100 < *(int *)&this_00->field_0x5d7) || (*(int *)&this_00->field_0x5d7 < 0)) {
            *(undefined4 *)&this_00->field_0x5d7 = 100;
          }
          uVar20 = thunk_FUN_004406c0(this_00->field_023D);
          *(int *)&this_00->field_0x241 =
               (*(int *)(&DAT_007e4178 + ((uVar20 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4)
               * *(int *)&this_00->field_0x5d7) / 100;
          *(undefined4 *)&this_00->field_0x410 = 0;
          *(undefined4 *)&this_00->field_0x42c = 0;
          *(undefined4 *)&this_00->field_0x4a0 = 0;
          *(undefined4 *)&this_00->field_0x4c0 = 0;
          iVar19 = *(int *)&this_00->field_0x5ac;
          if ((((iVar19 != 0x4d) || (*(int *)&this_00->field_0x4d0 == 2)) &&
              ((iVar19 != 0x4c || (*(int *)&this_00->field_0x4d0 == 2)))) &&
             ((iVar19 != 0x43 || (*(int *)&this_00->field_0x4d0 == 2)))) {
            iVar19 = (*this_00->vtable->slot_2C)();
            thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar19 >> 8),this_00->field_0x24),iVar19);
          }
          *(undefined4 *)&this_00->field_0x259 = 0;
          thunk_FUN_004c3020((int)this_00);
          thunk_FUN_004c71f0((int)this_00);
          thunk_FUN_004c6b50(this_00);
          thunk_FUN_004cc220((int)this_00);
          thunk_FUN_004cd390((int)this_00);
          thunk_FUN_004e9c00((int)this_00);
          switch(*(undefined4 *)&this_00->field_0x5ac) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004ce700((int)this_00);
            break;
          case 0x33:
            thunk_FUN_004e1e30((int)this_00);
            break;
          case 0x34:
          case 0x5b:
            thunk_FUN_004dd850((int)this_00);
            break;
          case 0x36:
          case 0x3d:
          case 0x5d:
            thunk_FUN_004e4aa0((int *)this_00);
            break;
          case 0x37:
          case 0x6c:
            thunk_FUN_004e8cc0((int *)this_00);
            break;
          case 0x38:
          case 0x39:
          case 0x3b:
          case 0x4f:
          case 0x52:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x61:
            thunk_FUN_004e0040((int)this_00);
            break;
          case 0x3a:
            thunk_FUN_004d9790((int)this_00);
            break;
          case 0x41:
            thunk_FUN_004e3880((int)this_00);
            break;
          case 0x43:
            thunk_FUN_004df2b0((int)this_00);
            break;
          case 0x44:
            thunk_FUN_004de7b0((int)this_00);
            break;
          case 0x45:
            thunk_FUN_004ea7a0((int)this_00);
            break;
          case 0x48:
            thunk_FUN_004df8c0((int)this_00);
            break;
          case 0x4c:
            thunk_FUN_004dc660((int)this_00);
            break;
          case 0x4d:
            thunk_FUN_004deba0((int)this_00);
            break;
          case 0x4e:
            thunk_FUN_004d9bb0((int)this_00);
            break;
          case 0x50:
            thunk_FUN_004b6d20((int)this_00);
            break;
          case 0x53:
            thunk_FUN_004cd6b0((int)this_00);
            break;
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
            thunk_FUN_004ce640(this_00);
          case 0x35:
            thunk_FUN_004e2a90((int)this_00);
            break;
          case 99:
            thunk_FUN_004b7a60((int)this_00);
            break;
          case 100:
            thunk_FUN_004e4630((int)this_00);
            break;
          case 0x68:
            thunk_FUN_004dc1e0((int)this_00);
            break;
          case 0x69:
            thunk_FUN_004dcb70((int)this_00);
            break;
          case 0x6a:
            thunk_FUN_004c5de0((int)this_00);
            break;
          case 0x6d:
            thunk_FUN_004dba20((int)this_00);
            break;
          case 0x6e:
            thunk_FUN_004dd460((int)this_00);
            break;
          case 0x6f:
          case 0x73:
            thunk_FUN_004ecc70(this_00);
            break;
          case 0x70:
            thunk_FUN_004d8d00((int)this_00);
            break;
          case 0x72:
            thunk_FUN_004ecdd0((int)this_00);
          }
          if (-1 < *(int *)&this_00->field_0x5bc) {
            *(short *)&this_00->field_0x30 = (short)*(int *)&this_00->field_0x5bc;
          }
          thunk_FUN_00419c70((int *)this_00,*(int *)&this_00->field_0x231,
                             (uint)(*(int *)&this_00->field_0x231 == 0));
          if (*(int *)(&DAT_00794d94 + *(int *)&this_00->field_0x235 * 4) != 0) {
            thunk_FUN_004c2dd0((int)this_00);
          }
          SetState(this_00,0,1);
          if (this_00->field_0245 == 0) {
            iVar19 = *(int *)(*(int *)&this_00->field_0x1f5 + 0x20c);
            iVar26 = *(int *)(*(int *)&this_00->field_0x1f5 + 0x208);
            if (iVar26 < iVar19) {
              uVar20 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
              *(uint *)&this_00->field_0x1c = uVar20;
              iVar26 = (uVar20 >> 0x10) % ((iVar19 - iVar26) + 1U) + iVar26;
              STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\x0e',iVar26);
              STT3DSprC::SetCurFase((STT3DSprC *)&this_00->field_01D5,'\r',iVar26);
            }
          }
          if ((*(int *)(&DAT_00792778 + *(int *)&this_00->field_0x235 * 4) == 0) ||
             (iVar19 = thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,*(int *)&this_00->field_0x235
                                          ,0), iVar19 == 0)) {
            puVar21 = (undefined *)0x5;
          }
          else {
            puVar21 = (undefined *)
                      thunk_FUN_004e81b0(*(int *)&this_00->field_0x24,*(int *)&this_00->field_0x235,
                                         0);
          }
          thunk_FUN_0041c3f0(this_00,puVar21);
          if ((*(int *)&this_00->field_0x231 == 1) &&
             (local_14 = 0, DAT_008117bc != (undefined4 *)0x0)) {
            local_64 = *(undefined2 *)&this_00->field_0x24;
            local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,local_64);
            local_6c = 0x5dd0;
            iVar19 = FUN_006e62d0(DAT_00802a38,*(int *)&this_00->field_0x5d3,&local_14);
            if ((iVar19 == 0) && (local_14 != 0)) {
              local_62 = *(undefined2 *)(local_14 + 0x32);
            }
            else {
              local_62 = 0xffff;
            }
            (**(code **)*DAT_008117bc)(local_7c);
          }
          uVar20 = thunk_FUN_004406c0(this_00->field_023D);
          if (*(int *)&this_00->field_0x241 !=
              *(int *)(&DAT_007e4178 + ((uVar20 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4)) {
            thunk_FUN_004cc840((int *)this_00);
          }
          if (*(uint *)&this_00->field_0x24 ==
              (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
          }
          if (((*(int *)&this_00->field_0x231 == 1) &&
              (*(uint *)&this_00->field_0x24 ==
               (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d))) &&
             (uVar20 = thunk_FUN_004406c0(this_00->field_023D),
             *(int *)(&DAT_007952b8 + ((uVar20 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4) !=
             0)) {
            pTVar25 = this_00->vtable;
            uVar20 = thunk_FUN_004406c0(this_00->field_023D);
            (*pTVar25->slot_90)(4,*(undefined4 *)
                                   (&DAT_007952b8 +
                                   ((uVar20 & 0xff) + *(int *)&this_00->field_0x235 * 3) * 4));
          }
          if (((*(int *)&this_00->field_0x231 == 0) || (*(int *)&this_00->field_0x231 == 3)) &&
             (DAT_00811784 != (void *)0x0)) {
            uVar20 = thunk_FUN_004406c0(this_00->field_0x24);
            thunk_FUN_005f23d0(DAT_00811784,*(int *)&this_00->field_0x5b0,
                               *(int *)&this_00->field_0x5b4,*(int *)&this_00->field_0x5b8,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0x2c),
                               *(int *)&this_00->field_0x5ac,uVar20 & 0xff);
          }
          if (*(int *)&this_00->field_0x5df != 0) {
            puVar31 = &this_00->field_01D5;
            *(int *)&this_00->field_0x4c8 = *(short *)(DAT_00806724 + 0x23) + -1;
            *(undefined4 *)&this_00->field_0x4cc = DAT_00802a38->field_00E4;
            thunk_FUN_004ace60(puVar31,'\x0e');
            thunk_FUN_004ace60(puVar31,'\r');
            thunk_FUN_004ace60(puVar31,'\f');
            thunk_FUN_004ace60(puVar31,'\v');
            thunk_FUN_004ace60(puVar31,'\t');
            thunk_FUN_004ace60(puVar31,'\b');
            thunk_FUN_004ace60(puVar31,'\a');
            thunk_FUN_004ace30(puVar31,*(uint *)(DAT_00806724 + 0x30 +
                                                *(int *)&this_00->field_0x4c8 * 4),
                               (int)*(short *)(DAT_00806724 + 0x2c));
            thunk_FUN_0041f630((int *)this_00);
            thunk_FUN_004cba30((int)this_00);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          break;
        case 2:
          local_c = *(int *)(param_1 + 0x14);
          puVar31 = (undefined4 *)(local_c + 0x57);
          puVar29 = (undefined4 *)
                    (-(uint)(this_00 != (TLOBaseTy *)0x0) & (uint)&this_00->field_0x231);
          for (iVar19 = 0xde; iVar19 != 0; iVar19 = iVar19 + -1) {
            *puVar29 = *puVar31;
            puVar31 = puVar31 + 1;
            puVar29 = puVar29 + 1;
          }
          *(undefined2 *)puVar29 = *(undefined2 *)puVar31;
          *(undefined1 *)((int)puVar29 + 2) = *(undefined1 *)((int)puVar31 + 2);
          *(undefined4 *)&this_00->field_0x231 = 2;
          if (*(int *)&this_00->field_0x3d8 != 0) {
            iVar19 = Library::DKW::LIB::FUN_006aac70(*(int *)&this_00->field_0x3d8 * 0x27);
            this_00->field_0607 = iVar19;
          }
          if (*(int *)&this_00->field_0x3d4 != 0) {
            uVar28 = *(int *)&this_00->field_0x3d4 * 0x27;
            puVar31 = (undefined4 *)(*(int *)(local_c + 0x3d2) + local_c);
            puVar29 = (undefined4 *)this_00->field_0607;
            for (uVar20 = uVar28 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *puVar29 = *puVar31;
              puVar31 = puVar31 + 1;
              puVar29 = puVar29 + 1;
            }
            for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
              *(undefined1 *)puVar29 = *(undefined1 *)puVar31;
              puVar31 = (undefined4 *)((int)puVar31 + 1);
              puVar29 = (undefined4 *)((int)puVar29 + 1);
            }
          }
          thunk_FUN_004c96e0((int)this_00);
          local_34 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
          iVar19 = local_c;
          local_28 = DAT_008073cc;
          local_30 = 0;
          local_1c = 0;
          local_24 = DAT_008032b8;
          local_20 = 0;
          local_34[1] = DAT_00806774;
          local_34[2] = DAT_00806774;
          *local_34 = DAT_00806774;
          local_34[0xf] = DAT_00806774;
          local_34[0x10] = DAT_0080678c;
          local_34[0xe] = DAT_0080678c;
          local_34[0xd] = DAT_0080678c;
          local_34[0xc] = DAT_0080678c;
          local_34[0xb] = DAT_0080678c;
          local_34[10] = 0;
          local_34[9] = DAT_0080678c;
          local_34[8] = DAT_0080678c;
          local_34[7] = DAT_0080678c;
          if (this_00->field_0245 == 1) {
            if (*(int *)&this_00->field_0x5df == 5) {
              local_30 = *(undefined4 *)(DAT_00806724 + 0x30 + *(int *)&this_00->field_0x4c8 * 4);
              local_2c = (int)*(short *)(DAT_00806724 + 0x2c);
            }
            else {
              local_34[5] = DAT_00806764;
              local_34[4] = DAT_00806774;
              local_34[6] = DAT_00806774;
            }
          }
          if (this_00->field_0245 == 6) {
            local_34[5] = DAT_0080678c;
            local_34[4] = DAT_00806764;
          }
          STT3DSprC::RestoreSpr
                    ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                     (undefined4 *)(*(int *)(local_c + 0x3da) + local_c));
          if ((this_00->field_05F7 != 0) &&
             (*(int *)(&DAT_00790c2c + *(int *)&this_00->field_0x235 * 4) != 0)) {
            iVar26 = 1;
            uVar28 = 0xc;
            uVar20 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            FUN_006ea190(*(void **)&this_00->field_0x211,uVar20,uVar28,iVar26);
          }
          if (*(int *)(iVar19 + 0x3de) != 0) {
            puVar31 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (puVar31 == (undefined4 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(puVar31);
            }
            this_00->field_05FF = pSVar22;
            iVar19 = STT3DSprC::Init(pSVar22,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
            if (iVar19 != 0) {
              RaiseInternalException
                        (iVar19,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x365);
            }
            puVar31 = local_34;
            for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar31 = 0;
              puVar31 = puVar31 + 1;
            }
            switch(*(undefined4 *)&this_00->field_0x5ac) {
            case 0x32:
            case 0x40:
            case 0x49:
            case 0x5c:
              local_34[0xe] = DAT_0080677c;
              local_34[0xc] = DAT_0080677c;
              local_34[0xd] = DAT_0080677c;
              break;
            case 0x45:
            case 0x4e:
            case 0x52:
            case 0x5f:
            case 0x69:
            case 0x70:
            case 0x72:
              local_34[0xe] = DAT_00806774;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)this_00->field_05FF,(int *)&local_34,
                       (undefined4 *)(*(int *)(local_c + 0x3e2) + local_c));
            uVar28 = 10;
            iVar19 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            uVar20 = thunk_FUN_004ad650(this_00->field_05FF);
            FUN_006ea340(*(void **)&this_00->field_0x211,uVar20,iVar19,uVar28);
            iVar19 = local_c;
          }
          if (*(int *)(iVar19 + 0x3ee) != 0) {
            puVar31 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (puVar31 == (undefined4 *)0x0) {
              pSVar22 = (STT3DSprC *)0x0;
            }
            else {
              pSVar22 = (STT3DSprC *)thunk_FUN_004ab810(puVar31);
            }
            this_00->field_0603 = pSVar22;
            iVar19 = STT3DSprC::Init(pSVar22,DAT_008073cc,*(uint *)&this_00->field_0x613,
                                     *(uint *)&this_00->field_0x617,0,*(uint *)&this_00->field_0x60b
                                     ,*(uint *)&this_00->field_0x60f,0x11);
            if (iVar19 != 0) {
              RaiseInternalException
                        (iVar19,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x386);
            }
            puVar31 = local_34;
            for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
              *puVar31 = 0;
              puVar31 = puVar31 + 1;
            }
            if (*(int *)&this_00->field_0x43c == 1) {
              local_34[0xe] = DAT_00806764;
            }
            else {
              local_34[0xe] = DAT_0080678c;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)this_00->field_0603,(int *)&local_34,
                       (undefined4 *)(*(int *)(local_c + 0x3f2) + local_c));
            if (((*(int *)&this_00->field_0x444 != 0) && (*(int *)&this_00->field_0x448 != 0)) &&
               (-1 < *(int *)&this_00->field_0x44c)) {
              STT3DSprC::UnLoadSequence((STT3DSprC *)&this_00->field_01D5,6);
              uVar28 = 6;
              iVar19 = thunk_FUN_004ad650((int)&this_00->field_01D5);
              uVar20 = thunk_FUN_004ad650(this_00->field_0603);
              FUN_006ea340(*(void **)&this_00->field_0x211,uVar20,iVar19,uVar28);
            }
          }
          FUN_006ab060(&local_34);
          if ((*(int *)&this_00->field_0x46c == 4) && (*(int *)&this_00->field_0x490 != 0)) {
            iVar19 = 0;
            uVar20 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            FUN_006eabf0(*(void **)&this_00->field_0x211,uVar20,iVar19);
            if (this_00->field_05FF != 0) {
              iVar19 = 0;
              uVar20 = thunk_FUN_004ad650(this_00->field_05FF);
              FUN_006eabf0(*(void **)&this_00->field_0x211,uVar20,iVar19);
            }
            if (this_00->field_0603 != 0) {
              iVar19 = 0;
              uVar20 = thunk_FUN_004ad650(this_00->field_0603);
              FUN_006eabf0(*(void **)&this_00->field_0x211,uVar20,iVar19);
            }
          }
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(local_c + 0x3ea) + local_c));
          uVar23 = CONCAT22(extraout_var,*(undefined2 *)&this_00->field_0x32);
          thunk_FUN_00419cf0((int *)this_00,uVar23,uVar23);
          if (this_00->field_0251 != 0) {
            local_8 = *(byte **)&this_00->field_0x5b4;
            iVar19 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)&this_00->field_0x235 * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar19)) {
              do {
                iVar26 = *(int *)&this_00->field_0x5b0;
                if (iVar26 < iVar26 + iVar19) {
                  do {
                    iVar24 = thunk_FUN_004960d0((short)iVar26,(short)local_8,
                                                *(short *)&this_00->field_0x5b8);
                    if (iVar24 != 0) {
                      RaiseInternalException
                                (-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x3a5);
                    }
                    iVar26 = iVar26 + 1;
                  } while (iVar26 < *(int *)&this_00->field_0x5b0 + iVar19);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < *(int *)&this_00->field_0x5b4 + iVar19);
              thunk_FUN_0041f630((int *)this_00);
              thunk_FUN_004cba30((int)this_00);
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
          }
          break;
        default:
          iVar19 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0x3ac,0,0,
                                      &DAT_007a4ccc,s_I_don_t_now_what_I_suppose_to_do_007ac87c);
          if (iVar19 != 0) {
            pcVar12 = (code *)swi(3);
            iVar19 = (*pcVar12)();
            return iVar19;
          }
        }
        thunk_FUN_0041f630((int *)this_00);
        thunk_FUN_004cba30((int)this_00);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar20 != 3) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004b9a40((int *)this_00);
      thunk_FUN_00419d30(this_00,*(int *)&this_00->field_0x458);
      thunk_FUN_0041d590((int)this_00);
      thunk_FUN_00417d30((int)this_00);
      thunk_FUN_004c3480();
      thunk_FUN_004167a0((int)this_00);
      thunk_FUN_004c7230((int)this_00);
      thunk_FUN_004cc330((int)this_00);
      thunk_FUN_004cd3b0((int)this_00);
      thunk_FUN_004dc150(this_00);
      if (*(int *)(&DAT_00791a10 + *(int *)&this_00->field_0x235 * 4) != 0) {
        thunk_FUN_004cbf30((int)this_00);
      }
      thunk_FUN_004ad310((int)&this_00->field_01D5);
      if (*(uint *)&this_00->field_0x24 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004d8b70((char)*(uint *)&this_00->field_0x24);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar20 == 0x10f) {
      uVar23 = *(undefined4 *)&this_00->field_0x2c;
      puVar31 = local_4bc;
      for (iVar19 = 0xfd; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar31 = 0;
        puVar31 = puVar31 + 1;
      }
      uVar7 = *(undefined4 *)&this_00->field_0x24;
      puVar29 = (undefined4 *)0x0;
      *(undefined2 *)puVar31 = 0;
      local_40 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_8 = (byte *)0x0;
      local_10 = (byte *)0x0;
      local_38 = (byte *)0x0;
      local_4bc[3] = 2;
      local_4bc[2] = 1;
      local_4bc[0] = 1000;
      if (this_00 != (TLOBaseTy *)0x0) {
        puVar29 = (undefined4 *)&this_00->field_0x5ac;
      }
      puVar31 = &local_4a8;
      for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar31 = *puVar29;
        puVar29 = puVar29 + 1;
        puVar31 = puVar31 + 1;
      }
      *(undefined2 *)puVar31 = *(undefined2 *)puVar29;
      *(undefined1 *)((int)puVar31 + 2) = *(undefined1 *)((int)puVar29 + 2);
      if (this_00 == (TLOBaseTy *)0x0) {
        puVar31 = (undefined4 *)0x0;
      }
      else {
        puVar31 = (undefined4 *)&this_00->field_0x231;
      }
      puVar29 = &local_465;
      for (iVar19 = 0xde; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar29 = *puVar31;
        puVar31 = puVar31 + 1;
        puVar29 = puVar29 + 1;
      }
      *(undefined2 *)puVar29 = *(undefined2 *)puVar31;
      *(undefined1 *)((int)puVar29 + 2) = *(undefined1 *)((int)puVar31 + 2);
      local_ea = 0x3f6;
      local_4bc[1] = uVar7;
      local_4bc[4] = uVar23;
      local_40 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_e6);
      local_e2 = *(int *)&this_00->field_0x3d4 * 0x27 + local_ea;
      if ((*(int *)(&DAT_00791a10 + *(int *)&this_00->field_0x235 * 4) != 0) &&
         ((STT3DSprC *)this_00->field_05FF != (STT3DSprC *)0x0)) {
        local_3c = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)this_00->field_05FF,&local_de);
      }
      local_da = local_e6 + local_e2;
      local_38 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_d6);
      local_d2 = local_de + local_da;
      if ((STT3DSprC *)this_00->field_0603 != (STT3DSprC *)0x0) {
        local_8 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)this_00->field_0603,&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (uint *)((*(int *)&this_00->field_0x3d4 + 0x1a) * 0x27 + local_ce + local_d6 +
                          local_de + local_e6);
      local_10 = (byte *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
      puVar31 = local_4bc;
      pbVar30 = local_10;
      for (iVar19 = 0xfd; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pbVar30 = *puVar31;
        puVar31 = puVar31 + 1;
        pbVar30 = pbVar30 + 4;
      }
      *(undefined2 *)pbVar30 = *(undefined2 *)puVar31;
      uVar28 = *(int *)&this_00->field_0x3d4 * 0x27;
      pbVar30 = (byte *)this_00->field_0607;
      pbVar33 = local_10 + local_ea;
      for (uVar20 = uVar28 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pbVar33 = *(undefined4 *)pbVar30;
        pbVar30 = pbVar30 + 4;
        pbVar33 = pbVar33 + 4;
      }
      for (uVar28 = uVar28 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
        *pbVar33 = *pbVar30;
        pbVar30 = pbVar30 + 1;
        pbVar33 = pbVar33 + 1;
      }
      pbVar30 = local_40;
      pbVar33 = local_10 + local_e2;
      for (uVar20 = local_e6 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pbVar33 = *(undefined4 *)pbVar30;
        pbVar30 = pbVar30 + 4;
        pbVar33 = pbVar33 + 4;
      }
      for (local_e6 = local_e6 & 3; local_e6 != 0; local_e6 = local_e6 - 1) {
        *pbVar33 = *pbVar30;
        pbVar30 = pbVar30 + 1;
        pbVar33 = pbVar33 + 1;
      }
      if (local_de != 0) {
        pbVar30 = local_3c;
        pbVar33 = local_10 + local_da;
        for (uVar20 = local_de >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pbVar33 = *(undefined4 *)pbVar30;
          pbVar30 = pbVar30 + 4;
          pbVar33 = pbVar33 + 4;
        }
        for (local_de = local_de & 3; local_de != 0; local_de = local_de - 1) {
          *pbVar33 = *pbVar30;
          pbVar30 = pbVar30 + 1;
          pbVar33 = pbVar33 + 1;
        }
      }
      pbVar30 = local_38;
      pbVar33 = local_10 + local_d2;
      for (uVar20 = local_d6 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pbVar33 = *(undefined4 *)pbVar30;
        pbVar30 = pbVar30 + 4;
        pbVar33 = pbVar33 + 4;
      }
      for (local_d6 = local_d6 & 3; local_d6 != 0; local_d6 = local_d6 - 1) {
        *pbVar33 = *pbVar30;
        pbVar30 = pbVar30 + 1;
        pbVar33 = pbVar33 + 1;
      }
      pbVar30 = local_8;
      pbVar33 = local_10 + local_ca;
      for (uVar20 = local_ce >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pbVar33 = *(undefined4 *)pbVar30;
        pbVar30 = pbVar30 + 4;
        pbVar33 = pbVar33 + 4;
      }
      for (local_ce = local_ce & 3; local_ce != 0; local_ce = local_ce - 1) {
        *pbVar33 = *pbVar30;
        pbVar30 = pbVar30 + 1;
        pbVar33 = pbVar33 + 1;
      }
      STPlaySystemC::SaveObjData
                (DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_10,(uint)local_18);
      if (local_40 != (byte *)0x0) {
        FUN_006ab060(&local_40);
      }
      if (local_3c != (byte *)0x0) {
        FUN_006ab060(&local_3c);
      }
      if (local_10 != (byte *)0x0) {
        FUN_006ab060(&local_10);
      }
      if (local_38 != (byte *)0x0) {
        FUN_006ab060(&local_38);
      }
      if (local_8 == (byte *)0x0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      FUN_006ab060(&local_8);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar20 != 0x110) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    piVar27 = *(int **)(param_1 + 0x14);
    piVar32 = local_5c;
    for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
      *piVar32 = *piVar27;
      piVar27 = piVar27 + 1;
      piVar32 = piVar32 + 1;
    }
    iVar19 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar26 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x68), iVar26 != 0)))) {
      thunk_FUN_004d6eb0(this_00,local_5c[0] / 2);
    }
    if (*(int *)&this_00->field_0x5ac == 0x68) {
      thunk_FUN_004dc240();
    }
    iVar26 = local_c;
    if (local_5c[1] == 0x9a) {
      iVar26 = thunk_FUN_004e60d0(local_54,0x93);
      if ((*(int *)&this_00->field_0x4a0 == 0) || (*(int *)&this_00->field_0x4a8 < iVar26)) {
        *(int *)&this_00->field_0x4a8 = iVar26;
        *(int *)&this_00->field_0x4ac = local_54;
      }
      *(undefined4 *)&this_00->field_0x4a0 = 1;
      *(undefined4 *)&this_00->field_0x4a4 = DAT_00802a38->field_00E4;
      local_c = iVar26;
      (*this_00->vtable->slot_C8)(0);
    }
    if (*(int *)&this_00->field_0x410 != 0) {
      local_5c[0] = (*(int *)&this_00->field_0x414 * local_5c[0]) / 100;
    }
    if (*(int *)&this_00->field_0x4c0 != 0) {
      local_5c[0] = (*(int *)&this_00->field_0x4c0 * local_5c[0] * 0x32) / 10000;
    }
    if (local_5c[1] == 0x65) goto LAB_004bb5dd;
    if (local_5c[1] != 0x42) {
      switch(local_5c[1]) {
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa4:
      case 0xa5:
      case 0xb0:
      case 0xb2:
      case 0xb6:
      case 0xb7:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbf:
        iVar26 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,0x67);
        iVar19 = 0;
        if (iVar26 == 1) {
          iVar19 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar19 = local_5c[0] - (iVar19 - (iVar19 >> 0x1f));
        }
        else {
          if (iVar26 == 2) {
            iVar19 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (iVar26 == 3) {
            iVar19 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = local_5c[0] - iVar19;
        local_c = iVar26;
      }
      uVar20 = thunk_FUN_004406c0(this_00->field_0x24);
      uVar20 = uVar20 & 0xff;
      if (uVar20 == 1) {
        iVar19 = *(int *)&this_00->field_0x24;
        iVar26 = 4;
LAB_004bb58d:
        iVar26 = thunk_FUN_004e60d0(iVar19,iVar26);
        local_c = iVar26;
      }
      else {
        if (uVar20 == 2) {
          iVar19 = *(int *)&this_00->field_0x24;
          iVar26 = 0x81;
          goto LAB_004bb58d;
        }
        if (uVar20 == 3) {
          iVar19 = *(int *)&this_00->field_0x24;
          iVar26 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar19 = 0;
      if (iVar26 == 1) {
        iVar19 = local_5c[0] * 8;
      }
      else if (iVar26 == 2) {
        iVar19 = local_5c[0] * 6;
      }
      else {
        if (iVar26 != 3) goto LAB_004bb5dd;
        iVar19 = local_5c[0] * 4;
      }
      iVar19 = local_5c[0] - iVar19 / 10;
      goto LAB_004bb5dd;
    }
    uVar20 = thunk_FUN_004406c0(this_00->field_0x24);
    uVar20 = uVar20 & 0xff;
    if (uVar20 == 1) {
      iVar26 = *(int *)&this_00->field_0x24;
      iVar24 = 0x2d;
LAB_004bb4a1:
      iVar26 = thunk_FUN_004e60d0(iVar26,iVar24);
      local_c = iVar26;
    }
    else {
      if (uVar20 == 2) {
        iVar26 = *(int *)&this_00->field_0x24;
        iVar24 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (uVar20 == 3) {
        iVar26 = *(int *)&this_00->field_0x24;
        iVar24 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (iVar26 == 1) {
      iVar19 = local_5c[0] - (local_5c[0] * 9) / 10;
    }
    local_5c[0] = local_5c[0] - iVar19;
LAB_004bb5dd:
    if (200 < iVar19) {
      iVar19 = 200;
    }
    local_5c[0] = local_5c[0] - iVar19;
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    thunk_FUN_004b9bb0(this_00,local_5c[0],(short)local_54,local_50);
    if (this_00->field_0245 == 1) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (local_5c[0] != 0)) {
      local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,*(undefined2 *)&this_00->field_0x24);
      local_62 = local_50;
      local_6c = 0x5dd5;
      local_64 = (undefined2)local_54;
      (**(code **)*DAT_008117bc)(local_7c);
    }
    if (DAT_00811798 != (void *)0x0) {
      thunk_FUN_0061f8b0(DAT_00811798,*(int *)&this_00->field_0x5b0,*(int *)&this_00->field_0x5b4,
                         *(uint *)&this_00->field_0x24);
    }
    *(undefined4 *)&this_00->field_0x454 = DAT_00802a38->field_00E4;
    if (*(int *)&this_00->field_0x458 == 0xfe) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    *(int *)&this_00->field_0x458 = local_54;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (uVar20 < 0x129) {
    if (uVar20 == 0x128) {
      iVar19 = this_00->field_0245;
      piVar27 = *(int **)(param_1 + 0x14);
      piVar32 = local_5c;
      for (iVar26 = 7; iVar26 != 0; iVar26 = iVar26 + -1) {
        *piVar32 = *piVar27;
        piVar27 = piVar27 + 1;
        piVar32 = piVar32 + 1;
      }
      if ((iVar19 != 1) && (iVar19 != 6)) {
        *(undefined4 *)&this_00->field_0x241 = 0;
        *(undefined4 *)&this_00->field_0x5d7 = 0;
        *(int *)&this_00->field_0x5df = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar19 = 1;
        }
        else {
          iVar19 = 0;
        }
        SetState(this_00,1,iVar19);
        if ((*(int *)&this_00->field_0x5df == 0) || (*(int *)&this_00->field_0x5df == 4)) {
          uVar28 = (uint)(this_00->field_024D == 4);
          uVar20 = thunk_FUN_004406c0(this_00->field_0x24);
          thunk_FUN_0062b830((int)*(short *)&this_00->field_0x41,(int)*(short *)&this_00->field_0x43
                             ,(int)*(short *)&this_00->field_0x45,
                             *(undefined4 *)&this_00->field_0x5ac,(int *)this_00,0xffffffff,
                             0xffffffff,uVar20 & 0xff,uVar28);
        }
        if ((*(int *)&this_00->field_0x5df == 2) || (*(int *)&this_00->field_0x5df == 5)) {
          *(undefined4 *)&this_00->field_0x454 = DAT_00802a38->field_00E4;
          if (*(int *)&this_00->field_0x458 != 0xfe) {
            *(int *)&this_00->field_0x458 = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (DAT_008117bc != (undefined4 *)0x0)) {
            local_62 = local_50;
            local_6c = 0x5dd1;
            local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,
                                *(undefined2 *)&this_00->field_0x24);
            local_64 = (short)local_54;
            (**(code **)*DAT_008117bc)(local_7c);
          }
          local_68 = *(undefined4 *)&this_00->field_0x8;
          local_74 = *(undefined4 *)(*(int *)&this_00->field_0xc + 0x14);
          local_70 = 0;
          local_6c = 10;
          FUN_006e60a0(this_00,local_7c);
        }
      }
      if (DAT_008117bc == (undefined4 *)0x0) {
        local_6c = 0x5dd5;
        local_68 = CONCAT22(*(undefined2 *)&this_00->field_0x32,*(undefined2 *)&this_00->field_0x24)
        ;
        local_62 = 0xffff;
        local_64 = (short)local_54;
        (*(code *)*puRam00000000)(local_7c);
      }
      if (DAT_00811798 != (void *)0x0) {
        thunk_FUN_0061f8b0(DAT_00811798,*(int *)&this_00->field_0x5b0,*(int *)&this_00->field_0x5b4,
                           *(uint *)&this_00->field_0x24);
      }
      *(undefined4 *)&this_00->field_0x454 = DAT_00802a38->field_00E4;
      if (*(int *)&this_00->field_0x458 == 0xfe) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      *(int *)&this_00->field_0x458 = local_54;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar20 != 0x121) {
      if (uVar20 == 0x122) {
        piVar27 = *(int **)(param_1 + 0x14);
        if (*piVar27 != *(int *)&this_00->field_0x24) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        *(undefined4 *)&this_00->field_0x410 = 1;
        *(int *)&this_00->field_0x414 = piVar27[2];
        *(undefined4 *)&this_00->field_0x418 = DAT_00802a38->field_00E4;
        *(int *)&this_00->field_0x41c = piVar27[1];
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar20 != 0x123) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x5ac == 0x4d) {
        thunk_FUN_004debd0(this_00,*(int *)(param_1 + 0x14));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x5ac != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar19 = *(int *)(param_1 + 0x14);
      *(int *)&this_00->field_0x4d0 = iVar19;
      if (iVar19 < 0) {
        *(undefined4 *)&this_00->field_0x4d0 = 0;
      }
      if (5000 < *(int *)&this_00->field_0x4d0) {
        *(undefined4 *)&this_00->field_0x4d0 = 5000;
      }
      *(undefined4 *)&this_00->field_0x4d4 = DAT_00802a38->field_00E4;
      if (*(int *)&this_00->field_0x5ac != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x4d0 != 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2d40((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    local_18 = *(uint **)(param_1 + 0x14);
    if ((7 < *local_18) ||
       ((DAT_00802a38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[*local_18 * 0x51]))))
    goto LAB_004bbcb2;
    bVar2 = (byte)*local_18;
    bVar1 = this_00->field_0x24;
    local_14 = CONCAT31(local_14._1_3_,bVar2);
    local_8 = (byte *)CONCAT31(local_8._1_3_,bVar1);
    if (DAT_00808a8f == '\0') {
      if (bVar2 == bVar1) {
LAB_004bbc2b:
        iVar19 = 0;
      }
      else {
        uVar20 = (uint)bVar2;
        uVar28 = (uint)bVar1;
        cVar35 = *(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar28);
        if ((cVar35 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar28 * 8 + uVar20) == '\0')) {
          iVar19 = -2;
        }
        else if ((cVar35 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar28 * 8 + uVar20) == '\0')
                ) {
          iVar19 = -1;
        }
        else if ((cVar35 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar28 * 8 + uVar20) == '\x01')
                ) {
          iVar19 = 1;
        }
        else {
          if ((cVar35 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar28 * 8 + uVar20) != '\x01'))
          goto LAB_004bbc2b;
          iVar19 = 2;
        }
      }
      bVar34 = iVar19 < 0;
    }
    else {
      bVar34 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
    }
    if ((bVar34) && (iVar19 = FUN_006b0fd0(0x800f90), iVar19 != 0)) {
      *(undefined4 *)&this_00->field_0x420 = 1;
      *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 & 0xfffffffd;
      *(undefined4 *)&this_00->field_0x26d = 0;
      *(undefined4 *)&this_00->field_0x424 = DAT_00802a38->field_00E4;
      *(uint *)&this_00->field_0x428 = local_18[1];
      *(undefined4 *)(param_1 + 0x18) = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
LAB_004bbcb2:
    *(undefined4 *)(param_1 + 0x18) = 0;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (uVar20 != 0x4401) {
    if (uVar20 != 0x440f) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004cba30((int)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  iVar19 = *(int *)(param_1 + 0x14);
  bVar2 = *(byte *)(iVar19 + 0xe);
  switch(bVar2) {
  case 8:
    if ((this_00->field_0245 == 4) && (*(int *)&this_00->field_0x3dc != 0)) {
      if (this_00->field_0249 != -1) {
        this_00->field_0249 = 0xffffffff;
      }
      iVar19 = thunk_FUN_004ea620((int)this_00);
      if (iVar19 != 0) {
        *(undefined4 *)&this_00->field_0x3fc = 1;
        *(undefined4 *)&this_00->field_0x400 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 9:
    iVar26 = *(int *)&this_00->field_0x5ac;
    if (iVar26 == 0x33) {
      bVar2 = **(byte **)(iVar19 + 0x17);
      if ((bVar2 != 0) && (bVar2 != 1)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004e2190(this_00,(uint)bVar2);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar26 != 0x3c) && (iVar26 != 0x53)) {
      thunk_FUN_004c91a0(this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (*(int *)&this_00->field_0x24 == *(int *)&this_00->field_023D) {
LAB_004bc117:
      bVar34 = true;
    }
    else {
      uVar20 = thunk_FUN_004406c0((char)*(int *)&this_00->field_023D);
      iVar19 = *(int *)&this_00->field_0x235;
      uVar28 = thunk_FUN_004406c0(this_00->field_0x24);
      if ((&DAT_007e1984)[(uVar28 & 0xff) + (iVar19 * 3 + (uVar20 & 0xff)) * 3] != '\0')
      goto LAB_004bc117;
      bVar34 = false;
    }
    if (bVar34) {
      thunk_FUN_004db0a0(*(int *)&this_00->field_0x24);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x14:
    iVar24 = **(int **)(iVar19 + 0x17);
    if (iVar24 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb240 <= iVar24) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar26 = (*(int **)(iVar19 + 0x17))[1];
    if (iVar26 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb242 <= iVar26) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(*(undefined4 *)&this_00->field_0x5ac) {
    case 0x32:
    case 0x33:
    case 0x37:
    case 0x40:
    case 0x49:
    case 0x5c:
    case 0x6c:
      *(undefined4 *)&this_00->field_0x42c = 1;
      *(undefined4 *)&this_00->field_0x430 = **(undefined4 **)(iVar19 + 0x17);
      *(undefined4 *)&this_00->field_0x434 = *(undefined4 *)(*(int *)(iVar19 + 0x17) + 4);
      *(undefined4 *)&this_00->field_0x438 = 2;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (this_00->field_0245 != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar19 = *(int *)&this_00->field_0x5b8;
    goto LAB_004bc4c0;
  case 0x15:
    if (this_00->field_0245 != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb240 <= (short)(ushort)**(byte **)(iVar19 + 0x17)) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar26 = *(int *)&this_00->field_0x5b4;
    iVar19 = 4 - (uint)**(byte **)(iVar19 + 0x17);
    iVar24 = *(int *)&this_00->field_0x5b0;
LAB_004bc4c0:
    thunk_FUN_004c6c70(this_00,iVar24,iVar26,iVar19);
    if (this_00->field_0249 != -1) {
      this_00->field_0249 = 0xffffffff;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x16:
    pcVar11 = *(char **)(iVar19 + 0x17);
    if (*(int *)(&DAT_00792778 + *(int *)&this_00->field_0x235 * 4) != 0) {
      if (*pcVar11 == '\a') {
        *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 & 0xfffffffd;
        *(undefined4 *)&this_00->field_0x26d = 0;
      }
      else if (*(int *)&this_00->field_0x261 != 0) {
        if (*(int *)(&DAT_00792a90 + *(int *)&this_00->field_0x235 * 8) == 1) {
          if (*pcVar11 == '\0') {
            cVar35 = pcVar11[1];
            cVar14 = pcVar11[2];
            cVar15 = pcVar11[3];
            cVar16 = pcVar11[4];
            *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
            this_00->field_0x26d = cVar35;
            this_00->field_0x26e = cVar14;
            this_00->field_0x26f = cVar15;
            this_00->field_0x270 = cVar16;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + *(int *)&this_00->field_0x235 * 8) == 2) &&
                  (bVar2 = pcVar11[5], (short)(ushort)bVar2 < DAT_007fb240)) &&
                 (bVar1 = pcVar11[6], (short)(ushort)bVar1 < DAT_007fb242)) &&
                (bVar3 = pcVar11[7], (short)(ushort)bVar3 < DAT_007fb240)) {
          if (*(int *)&this_00->field_0x5ac == 0x70) {
            thunk_FUN_004d8e70(this_00,(uint)bVar2,(uint)bVar1,(uint)bVar3);
          }
          else {
            *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
            *(uint *)&this_00->field_0x2a5 = (uint)bVar2;
            *(uint *)&this_00->field_0x2a9 = (uint)bVar1;
            *(uint *)&this_00->field_0x2ad = (uint)bVar3;
          }
        }
      }
      if (*(uint *)&this_00->field_0x24 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
        iVar19 = *(int *)&this_00->field_0x5ac;
        if (iVar19 == 0x3e) {
          (*this_00->vtable->slot_90)(4,0x23f);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x3f) {
          (*this_00->vtable->slot_90)(4,0x248);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x51) {
          (*this_00->vtable->slot_90)(4,0x28a);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x46) {
          (*this_00->vtable->slot_90)(4,0x305);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x47) {
          (*this_00->vtable->slot_90)(4,0x30e);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x4a) {
          (*this_00->vtable->slot_90)(4,0x324);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x4b) {
          (*this_00->vtable->slot_90)(4,0x32d);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x66) {
          (*this_00->vtable->slot_90)(4,0x3dc);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x67) {
          (*this_00->vtable->slot_90)(4,0x3e3);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x6b) {
          (*this_00->vtable->slot_90)(4,0x3fe);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x70) {
          (*this_00->vtable->slot_90)(4,0x419);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x71) {
          (*this_00->vtable->slot_90)(4,0x420);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar11 = *(char **)(iVar19 + 0x17);
    iVar19 = *(int *)&this_00->field_0x5ac;
    if (iVar19 == 0x4c) {
      cVar35 = *pcVar11;
      if (cVar35 == '\x06') {
        *(undefined4 *)&this_00->field_0x4e0 = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar35 == '\a') {
        *(undefined4 *)&this_00->field_0x4e0 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar35 != '\b') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar19 = *(int *)&this_00->field_0x4d0;
      if (iVar19 != 0) {
        if (iVar19 == 1) {
          *(undefined4 *)&this_00->field_0x4d4 = 2;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 != 2) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    else {
      if (iVar19 != 0x43) {
        if (((iVar19 == 0x36) || (iVar19 == 0x5d)) && (*pcVar11 == '\v')) {
          iVar19 = thunk_FUN_004e60d0(*(int *)&this_00->field_0x24,
                                      *(int *)(&DAT_00798fb0 + *(int *)&this_00->field_0x239 * 4));
          if (iVar19 != 0) {
            thunk_FUN_004e4e90(this_00,*(int *)(pcVar11 + 1),*(int *)(pcVar11 + 5));
          }
          if (*(uint *)&this_00->field_0x24 !=
              (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          uVar20 = thunk_FUN_004406c0(this_00->field_023D);
          uVar20 = uVar20 & 0xff;
          if (uVar20 == 1) {
            (*this_00->vtable->slot_90)(4,0x210);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (uVar20 != 2) {
            if (uVar20 != 3) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            (*this_00->vtable->slot_90)(4,0x39f);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          (*this_00->vtable->slot_90)(4,0x2d8);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if ((iVar19 == 0x3c) || (iVar19 == 0x53)) {
          if (*pcVar11 == '\f') {
            if (*(int *)((int)&DAT_007f582e + *(int *)&this_00->field_0x24 * 0xa62) != 0) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            uVar20 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&this_00->field_0x1c = uVar20;
            thunk_FUN_004db020(*(int *)&this_00->field_0x24,uVar20 >> 0x10);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*pcVar11 != '\r') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004db0f0(*(int *)&this_00->field_0x24);
          if (*(uint *)&this_00->field_0x24 !=
              (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (DAT_00801698 == (int *)0x0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          (**(code **)(*DAT_00801698 + 0x1c))(1);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 == 0x70) {
          if (*pcVar11 != '\x12') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)&this_00->field_0x4f0 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)&this_00->field_0x4ec < 100) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          *(undefined4 *)&this_00->field_0x4d0 = 1;
          *(undefined4 *)&this_00->field_0x261 = 1;
          *(uint *)&this_00->field_0x265 = *(uint *)&this_00->field_0x265 | 2;
          *(undefined4 *)&this_00->field_0x2a5 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x2a9 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x2ad = 0xffffffff;
          *(undefined4 *)&this_00->field_0x4ec = 0;
          *(undefined4 *)&this_00->field_0x4d8 = DAT_00802a38->field_00E4;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar19 != 0x6d) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*pcVar11 == '\x19') {
          iVar19 = FUN_006e62d0(DAT_00802a38,*(int *)(pcVar11 + 0x1d),(int *)&local_18);
          if (iVar19 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          iVar19 = thunk_FUN_004dbb10(this_00,(int)local_18);
          if (iVar19 == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((*(int *)&this_00->field_0x4d0 != 0) ||
             (iVar19 = 100, *(int *)&this_00->field_0x4d4 != 0)) {
            iVar19 = 0x32;
          }
          thunk_FUN_004dbb60(this_00,(int *)local_18,iVar19);
        }
        else {
          if (*pcVar11 != '\x1a') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (1 < *(uint *)(pcVar11 + 0x1d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)(&this_00->field_0x4d0 + *(uint *)(pcVar11 + 0x1d) * 4) == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004dbe00(this_00,*(int *)(&this_00->field_0x4d0 + *(uint *)(pcVar11 + 0x1d) * 4)
                            );
        }
        if (*(uint *)&this_00->field_0x24 != (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d))
        {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        (*this_00->vtable->slot_90)(4,0x40b);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      cVar35 = *pcVar11;
      if (cVar35 == '\x06') {
        *(undefined4 *)&this_00->field_0x4e0 = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar35 == '\a') {
        *(undefined4 *)&this_00->field_0x4e0 = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar35 != '\t') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if ((*(int *)&this_00->field_0x4d0 != 0) && (*(int *)&this_00->field_0x4d0 != 2)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    if (4999 < *(int *)&this_00->field_0x4d8) {
      *(undefined4 *)&this_00->field_0x4d4 = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1a:
    pcVar11 = *(char **)(iVar19 + 0x17);
    if (*pcVar11 == '\x02') {
      thunk_FUN_004ea530(this_00,(short)*(undefined4 *)(pcVar11 + 1),
                         (short)*(undefined4 *)(pcVar11 + 5),(short)*(undefined4 *)(pcVar11 + 9));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1e:
    pbVar30 = *(byte **)(iVar19 + 0x17);
    if (*pbVar30 == 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (8 < *pbVar30) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((*(uint *)&this_00->field_0x24 == (uint)*(byte *)(*(int *)&this_00->field_0x10 + 0x112d)) &&
       ((iVar19 = *(int *)&this_00->field_0x5ac, iVar19 == 0x35 ||
        ((0x53 < iVar19 && (iVar19 < 0x5b)))))) {
      uVar20 = thunk_FUN_004406c0(this_00->field_023D);
      uVar20 = uVar20 & 0xff;
      if (uVar20 == 1) {
        pTVar25 = this_00->vtable;
        uVar23 = 0x208;
LAB_004bbfe9:
        (*pTVar25->slot_90)(4,uVar23);
      }
      else if (uVar20 == 2) {
        (*this_00->vtable->slot_90)(4,0x2d0);
      }
      else if (uVar20 == 3) {
        pTVar25 = this_00->vtable;
        uVar23 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    iVar19 = thunk_FUN_004c7860(this_00,(uint)*pbVar30,*(uint *)(pbVar30 + 1),
                                (int)*(short *)(pbVar30 + 5),0,1);
    if (iVar19 != 0) {
      thunk_FUN_004c7cc0(this_00,(uint)*pbVar30,*(uint *)(pbVar30 + 1),(int)*(short *)(pbVar30 + 5),
                         (uint)(*pbVar30 != 2),*(undefined4 *)(pbVar30 + 7),0,0xff,(char *)0x0);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1f:
    if ((*(int *)&this_00->field_0x5ac == 0x3a) && (**(char **)(iVar19 + 0x17) == '\x02')) {
      thunk_FUN_004d9b20((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((*(int *)&this_00->field_0x5ac == 100) && (**(char **)(iVar19 + 0x17) == '\x02')) {
      thunk_FUN_004e4670((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x20:
    pbVar30 = *(byte **)(iVar19 + 0x17);
    if ((*(int *)&this_00->field_0x5ac == 0x52) || (*(int *)&this_00->field_0x5ac == 0x5f)) {
      if (*pbVar30 == 1) {
        thunk_FUN_004ebab0(this_00,(uint)*(ushort *)(pbVar30 + 1),*(int *)(pbVar30 + 3));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004eb6d0(this_00,(uint)*pbVar30,(uint)*(ushort *)(pbVar30 + 1),*(int *)(pbVar30 + 3)
                         ,(uint)*(ushort *)(pbVar30 + 7));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x22:
    iVar19 = thunk_FUN_004e8030(*(int *)&this_00->field_0x5ac);
    if (iVar19 == 3) {
      thunk_FUN_004d7270((int *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004c7cc0(this_00,5,0,0,0,0xffffffff,0,0xff,(char *)0x0);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  case 0x23:
    puVar8 = *(uint **)(iVar19 + 0x17);
    uVar20 = puVar8[1];
    if (((((-1 < (int)uVar20) && ((int)uVar20 < (int)DAT_007fb240)) &&
         (uVar28 = puVar8[2], -1 < (int)uVar28)) &&
        (((int)uVar28 < (int)DAT_007fb242 && (uVar9 = puVar8[3], -1 < (int)uVar9)))) &&
       (((int)uVar9 < (int)DAT_007fb240 && ((uVar10 = *puVar8, 0x31 < uVar10 && (uVar10 < 0x74))))))
    {
      if (*(int *)&this_00->field_0x5ac == 0x53) {
        thunk_FUN_004cdfd0(this_00,uVar10,uVar20,uVar28,uVar9);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)&this_00->field_0x5ac == 0x6c) {
        thunk_FUN_004e99e0(this_00,uVar20,uVar28,uVar9);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 0x27:
    iVar26 = *(int *)&this_00->field_0x5ac;
    if (iVar26 == 0x50) {
      thunk_FUN_004b6e30(this_00,(uint)**(byte **)(iVar19 + 0x17),
                         (uint)(*(byte **)(iVar19 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar26 == 0x34) && (**(char **)(iVar19 + 0x17) == '\x02')) {
      thunk_FUN_004de1e0(this_00,(uint)(byte)(*(char **)(iVar19 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar26 == 0x5b) && (**(char **)(iVar19 + 0x17) == '\x02')) {
      thunk_FUN_004de300(this_00,(uint)(byte)(*(char **)(iVar19 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(iVar19 + 0x17) == '\0') {
      if ((this_00->field_0245 == 0) || (this_00->field_0245 == 5)) {
        SetState(this_00,2,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    else if (this_00->field_0245 == 4) {
      iVar19 = thunk_FUN_004c7070(this_00,1);
      if (iVar19 != 0) {
        SetState(this_00,3,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      local_8 = (byte *)0x0;
      iVar19 = *(int *)&this_00->field_0x5b8 + -2;
      if (-1 < iVar19) {
        sVar18 = *(short *)&this_00->field_0x5b0;
        local_14 = CONCAT22((short)(bVar2 - 8 >> 0x10),sVar18);
        sVar4 = *(short *)&this_00->field_0x5b4;
        do {
          sVar17 = (short)iVar19;
          if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar4 < 0)) ||
              ((DAT_007fb242 <= sVar4 || (sVar17 < 0)))) || (DAT_007fb244 <= sVar17)) {
            iVar26 = 0;
          }
          else {
            iVar26 = *(int *)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar17 + (int)DAT_007fb240 * (int)sVar4 +
                             (int)sVar18) * 8);
          }
          if (iVar26 == 0) {
            if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
               ((sVar4 < 0 ||
                (((DAT_007fb242 <= sVar4 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17)))))) {
              sVar17 = -1;
            }
            else {
              sVar17 = *(short *)(DAT_007fb280 +
                                 ((int)DAT_007fb27e * (int)sVar17 + (int)DAT_007fb278 * (int)sVar4 +
                                 (int)sVar18) * 2);
            }
            if (sVar17 == -1) {
              local_8 = (byte *)0x1;
              thunk_FUN_004c6c70(this_00,*(undefined4 *)&this_00->field_0x5b0,
                                 *(undefined4 *)&this_00->field_0x5b4,iVar19 + 1);
              break;
            }
          }
          iVar19 = iVar19 + -1;
        } while (-1 < iVar19);
      }
      if (local_8 == (byte *)0x0) {
        sVar18 = *(short *)&this_00->field_0x5b0;
        sVar4 = *(short *)&this_00->field_0x5b4;
        if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
           ((sVar4 < 0 || ((DAT_007fb242 <= sVar4 || (DAT_007fb244 < 1)))))) {
          iVar19 = 0;
        }
        else {
          iVar19 = *(int *)(DAT_007fb248 + ((int)DAT_007fb240 * (int)sVar4 + (int)sVar18) * 8);
        }
        bVar34 = false;
        if (iVar19 == 0) {
          if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar4 < 0)) ||
             ((DAT_007fb242 <= sVar4 || (DAT_007fb244 < 1)))) {
            sVar18 = -1;
          }
          else {
            sVar18 = *(short *)(DAT_007fb280 + ((int)DAT_007fb278 * (int)sVar4 + (int)sVar18) * 2);
          }
          if (sVar18 == 0) {
            thunk_FUN_004c6c70(this_00,*(undefined4 *)&this_00->field_0x5b0,
                               *(undefined4 *)&this_00->field_0x5b4,0);
            bVar34 = true;
          }
        }
        if (!bVar34) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
      this_00->field_0249 = 3;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x2a:
    if (*(int *)&this_00->field_0x5ac != 0x6d) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(**(undefined1 **)(iVar19 + 0x17)) {
    case 0:
      if (*(int *)&this_00->field_0x4d0 != 0) {
        thunk_FUN_004dbcc0(this_00,0,*(int *)&this_00->field_0x4e0 + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 1:
      if (*(int *)&this_00->field_0x4d0 != 0) {
        thunk_FUN_004dbcc0(this_00,0,*(int *)&this_00->field_0x4e0 + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 2:
      if (*(int *)&this_00->field_0x4d4 != 0) {
        thunk_FUN_004dbcc0(this_00,1,*(int *)&this_00->field_0x4e4 + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 3:
      if (*(int *)&this_00->field_0x4d4 != 0) {
        thunk_FUN_004dbcc0(this_00,1,*(int *)&this_00->field_0x4e4 + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 4:
      iVar19 = 0;
      goto LAB_004bd06b;
    case 5:
      iVar19 = 1;
LAB_004bd06b:
      thunk_FUN_004dbf30(this_00,iVar19);
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return 0;
}

