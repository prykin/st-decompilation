
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_base.cpp
   TLOBaseTy::GetMessage */

int __thiscall TLOBaseTy::GetMessage(TLOBaseTy *this,int param_1)

{
  STSprGameObjC SVar1;
  STSprGameObjC SVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  code *pcVar13;
  STSprGameObjC *this_00;
  short sVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  STT3DSprC *pSVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined4 extraout_ECX;
  uint uVar24;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  int *piVar25;
  byte *pbVar26;
  void *unaff_EDI;
  STSprGameObjC *pSVar27;
  undefined4 *puVar28;
  int *piVar29;
  byte *pbVar30;
  bool bVar31;
  char cVar32;
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
  STSprGameObjC *local_80;
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
  STSprGameObjC *local_18;
  int local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = (STSprGameObjC *)this;
  iVar16 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar23 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0x6d9,0,iVar16,
                                s_TLOBaseTy__GetMessage_error_mess_007ac848,
                                *(undefined4 *)(param_1 + 0x10));
    if (iVar23 != 0) {
      pcVar13 = (code *)swi(3);
      iVar16 = (*pcVar13)();
      return iVar16;
    }
    RaiseInternalException(iVar16,0,s_E____titans_Artem_TLO_base_cpp_007ac820,0x6da);
    return iVar16;
  }
  STSprGameObjC::GetMessage(local_80,param_1);
  uVar17 = *(uint *)(param_1 + 0x10);
  if (uVar17 < 0x112) {
    if (uVar17 == 0x111) {
      iVar16 = *(int *)(this_00 + 0x5ac);
      if (iVar16 - 0x37U < 0x38) {
        switch(iVar16) {
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
          thunk_FUN_004dd500((int)this_00,(uint)(&BYTE_004bd2b1)[iVar16]);
        }
      }
      if (*(int *)(&DAT_00794d94 + *(int *)(this_00 + 0x235) * 4) == 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2e20((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar17 < 0x109) {
      if (uVar17 == 0x108) {
        iVar23 = 0;
        iVar16 = 0;
        do {
          piVar25 = (int *)(*(int *)(this_00 + 0x1f5) + iVar16);
          auStack_588[iVar23] = *(undefined4 *)(*(int *)(this_00 + 0x1f5) + 0x1c + iVar16);
          aiStack_6dc[iVar23] = piVar25[8];
          if (*piVar25 != 0) {
            cVar32 = (char)iVar23;
            iVar22 = thunk_FUN_004ac910(this_00 + 0x1d5,cVar32);
            aiStack_500[iVar23] = iVar22;
            iVar22 = thunk_FUN_004ac910(this_00 + 0x1d5,cVar32);
            uVar21 = thunk_FUN_004acdd0(this_00 + 0x1d5,cVar32,iVar22);
            auStack_698[iVar23] = uVar21;
          }
          iVar16 = iVar16 + 0x24;
          iVar23 = iVar23 + 1;
        } while (iVar16 < 0x264);
        if (*(int *)(this_00 + 0x5ff) != 0) {
          iVar23 = 0;
          iVar16 = 0;
          do {
            pvVar7 = *(void **)(this_00 + 0x5ff);
            iVar22 = *(int *)((int)pvVar7 + 0x20);
            piVar25 = (int *)(iVar22 + iVar16);
            auStack_610[iVar23] = *(undefined4 *)(iVar22 + 0x1c + iVar16);
            aiStack_544[iVar23] = piVar25[8];
            if (*piVar25 != 0) {
              cVar32 = (char)iVar23;
              iVar22 = thunk_FUN_004ac910(pvVar7,cVar32);
              pvVar7 = *(void **)(this_00 + 0x5ff);
              aiStack_5cc[iVar23] = iVar22;
              iVar22 = thunk_FUN_004ac910(pvVar7,cVar32);
              uVar21 = thunk_FUN_004acdd0(*(void **)(this_00 + 0x5ff),cVar32,iVar22);
              auStack_654[iVar23] = uVar21;
            }
            iVar16 = iVar16 + 0x24;
            iVar23 = iVar23 + 1;
          } while (iVar16 < 0x264);
        }
        RotateSpr((TLOBaseTy *)this_00,1);
        iVar23 = 0;
        iVar16 = 0;
        do {
          *(undefined4 *)(*(int *)(this_00 + 0x1f5) + 0x1c + iVar16) = auStack_588[iVar23];
          *(int *)(*(int *)(this_00 + 0x1f5) + 0x20 + iVar16) = aiStack_6dc[iVar23];
          iVar22 = *(int *)(*(int *)(this_00 + 0x1f5) + iVar16);
          if (iVar22 != 0) {
            *(undefined4 *)
             (((int *)(*(int *)(this_00 + 0x1f5) + iVar16))[1] + aiStack_500[iVar23] * 4) =
                 *(undefined4 *)(aiStack_500[iVar23] * 4 + 0x31 + iVar22);
            uVar21 = auStack_698[iVar23];
            iVar22 = thunk_FUN_004ac910(this_00 + 0x1d5,(char)iVar23);
            thunk_FUN_004ace00(this_00 + 0x1d5,(char)iVar23,iVar22,uVar21);
          }
          iVar16 = iVar16 + 0x24;
          iVar23 = iVar23 + 1;
        } while (iVar16 < 0x264);
        if (*(int *)(this_00 + 0x5ff) == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        iVar23 = 0;
        iVar16 = 0;
        do {
          *(undefined4 *)(*(int *)(*(int *)(this_00 + 0x5ff) + 0x20) + 0x1c + iVar16) =
               auStack_610[iVar23];
          *(int *)(*(int *)(*(int *)(this_00 + 0x5ff) + 0x20) + 0x20 + iVar16) = aiStack_544[iVar23]
          ;
          iVar22 = *(int *)(*(int *)(*(int *)(this_00 + 0x5ff) + 0x20) + iVar16);
          if (iVar22 != 0) {
            *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this_00 + 0x5ff) + 0x20) + iVar16 + 4) +
             aiStack_5cc[iVar23] * 4) = *(undefined4 *)(aiStack_5cc[iVar23] * 4 + 0x31 + iVar22);
            uVar21 = auStack_654[iVar23];
            iVar22 = thunk_FUN_004ac910(*(void **)(this_00 + 0x5ff),(char)iVar23);
            thunk_FUN_004ace00(*(void **)(this_00 + 0x5ff),(char)iVar23,iVar22,uVar21);
          }
          iVar16 = iVar16 + 0x24;
          iVar23 = iVar23 + 1;
        } while (iVar16 < 0x264);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar17 == 0) {
        if (*(int *)(this_00 + 0x4b4) != 0) {
          if ((*(int *)(this_00 + 0x245) == 0) && (*(int *)(this_00 + 0x361) == 0)) {
            bVar31 = true;
          }
          else {
            bVar31 = false;
          }
          if ((bVar31) && (*(int *)(this_00 + 0x249) != 6)) {
            uVar21 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            *(undefined4 *)(this_00 + 0x4bc) = 1;
            *(undefined4 *)(this_00 + 0x4b8) = uVar21;
            (**(code **)(*(int *)this_00 + 0x90))(3,0x360);
            SetState((TLOBaseTy *)this_00,6,1);
            thunk_FUN_004cc880(this_00,4);
          }
        }
        thunk_FUN_004cbad0((int)this_00);
        thunk_FUN_004b8c80((int *)this_00);
        if (*(int *)(this_00 + 0x5ff) != 0) {
          thunk_FUN_004cbe10((int *)this_00);
        }
        if (*(int *)(this_00 + 0x245) == 0) {
          if (*(int *)(this_00 + 0x261) != 0) {
            fireProc((TLOBaseTy *)this_00);
          }
          thunk_FUN_004c84c0((int *)this_00);
          switch(*(undefined4 *)(this_00 + 0x5ac)) {
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
        if (*(int *)(this_00 + 0x3dc) != 0) {
          thunk_FUN_004c6d00((int *)this_00);
        }
        teleNone((TLOBaseTy *)this_00);
        if ((*(int *)(this_00 + 0x410) != 0) &&
           ((uint)(*(int *)(this_00 + 0x41c) + *(int *)(this_00 + 0x418)) <=
            *(uint *)(DAT_00802a38 + 0xe4))) {
          *(undefined4 *)(this_00 + 0x410) = 0;
        }
        if ((*(int *)(this_00 + 0x420) != 0) &&
           ((uint)(*(int *)(this_00 + 0x428) + *(int *)(this_00 + 0x424)) <=
            *(uint *)(DAT_00802a38 + 0xe4))) {
          *(undefined4 *)(this_00 + 0x420) = 0;
        }
        if (*(int *)(this_00 + 0x4a0) != 0) {
          iVar16 = (**(code **)(*(int *)this_00 + 0x7c))();
          if (iVar16 < 100) {
            if (*(int *)(this_00 + 0x4a4) + 0x7dU <= *(uint *)(DAT_00802a38 + 0xe4)) {
              thunk_FUN_004b9bb0(this_00,(-(uint)(*(int *)(this_00 + 0x4a8) != 0) & 5) + 5,
                                 (short)*(undefined4 *)(this_00 + 0x4ac),0xffff);
              *(undefined4 *)(this_00 + 0x4a4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
          }
          else {
            *(undefined4 *)(this_00 + 0x4a0) = 0;
          }
        }
        thunk_FUN_004cc370((int *)this_00);
        if (*(int *)(this_00 + 0x4c0) == 0) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        pvVar7 = *(void **)(this_00 + 0x61f);
        if (pvVar7 == (void *)0x0) {
          puVar20 = thunk_FUN_00631fd0();
          *(undefined4 **)(this_00 + 0x61f) = puVar20;
          uVar21 = (**(code **)(*(int *)this_00 + 0x2c))();
          thunk_FUN_006324c0(*(void **)(this_00 + 0x61f),2,uVar21);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*(int *)(this_00 + 0x2c) == 0) {
          thunk_FUN_00636060(pvVar7,(int)*(short *)(this_00 + 0x41),(int)*(short *)(this_00 + 0x43),
                             *(short *)(this_00 + 0x45) + 0x14,(int)*(short *)(this_00 + 0x6c),100);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        thunk_FUN_00636060(pvVar7,(*(int *)(this_00 + 0x5b0) + 1) * 0xc9,
                           (*(int *)(this_00 + 0x5b4) + 1) * 0xc9,
                           *(int *)(this_00 + 0x5b8) * 200 + 0x78,(int)*(short *)(this_00 + 0x6c),
                           100);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar17 == 2) {
        iVar16 = *(int *)(param_1 + 0x14);
        if (this_00 == (STSprGameObjC *)0x0) {
          pSVar27 = (STSprGameObjC *)0x0;
        }
        else {
          pSVar27 = this_00 + 0x5ac;
        }
        puVar20 = (undefined4 *)(iVar16 + 0x14);
        for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
          *(undefined4 *)pSVar27 = *puVar20;
          puVar20 = puVar20 + 1;
          pSVar27 = pSVar27 + 4;
        }
        *(undefined2 *)pSVar27 = *(undefined2 *)puVar20;
        pSVar27[2] = *(STSprGameObjC *)((int)puVar20 + 2);
        *(undefined4 *)(this_00 + 0x231) = *(undefined4 *)(iVar16 + 0xc);
        *(int *)(this_00 + 0x235) = *(int *)(this_00 + 0x5ac) + -0x32;
        uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
        *(uint *)(this_00 + 0x239) = (uVar17 & 0xff) - 1;
        *(undefined4 *)(this_00 + 0x23d) = *(undefined4 *)(this_00 + 0x24);
        if (*(int *)(&DAT_00791f38 + *(int *)(this_00 + 0x235) * 4) == 2) {
          *(undefined **)(this_00 + 0x5fb) = &DAT_007aca60;
        }
        else if (*(int *)(&DAT_00791f38 + *(int *)(this_00 + 0x235) * 4) == 1) {
          *(undefined **)(this_00 + 0x5fb) = &DAT_007ace00;
        }
        else {
          *(undefined **)(this_00 + 0x5fb) = &DAT_007ac988;
        }
        *(undefined4 *)(this_00 + 0x4b4) = 0;
        *(undefined4 *)(this_00 + 0x4b0) = 0;
        *(undefined4 *)(this_00 + 0x255) =
             *(undefined4 *)(&DAT_007914e8 + *(int *)(this_00 + 0x235) * 4);
        *(undefined4 *)(this_00 + 0x454) = 0;
        *(undefined4 *)(this_00 + 0x458) = 0xff;
        if (*(int *)(this_00 + 0x2c) == 0) {
          *(undefined4 *)(this_00 + 0x60b) = 0xb4;
          *(undefined4 *)(this_00 + 0x60f) = 0x8c;
          *(undefined4 *)(this_00 + 0x613) = 0x5a;
          *(undefined4 *)(this_00 + 0x617) = 0x45;
        }
        else if (*(int *)(this_00 + 0x2c) == 1) {
          *(undefined4 *)(this_00 + 0x60b) = 0xf0;
          *(undefined4 *)(this_00 + 0x60f) = 0xbe;
          *(undefined4 *)(this_00 + 0x613) = 0x78;
          *(undefined4 *)(this_00 + 0x617) = 0x56;
        }
        else {
          *(undefined4 *)(this_00 + 0x617) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x613) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x60f) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x60b) = 0xffffffff;
        }
        thunk_FUN_00417a00(this_00,0);
        iVar16 = thunk_FUN_00417a20(this_00,*(short *)(this_00 + 0x5b0),*(short *)(this_00 + 0x5b4),
                                    *(short *)(this_00 + 0x5b8),1);
        if (iVar16 != 0) {
          RaiseInternalException(-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x290);
        }
        thunk_FUN_0041d900(this_00,*(short *)(this_00 + 0x5b0),*(short *)(this_00 + 0x5b4),
                           *(short *)(this_00 + 0x5b8));
        thunk_FUN_004b9920((int)this_00);
        switch(*(undefined4 *)(this_00 + 0x231)) {
        case 0:
        case 1:
        case 3:
          if ((100 < *(int *)(this_00 + 0x5db)) || (*(int *)(this_00 + 0x5db) < 0)) {
            *(undefined4 *)(this_00 + 0x5db) = 100;
          }
          if ((100 < *(int *)(this_00 + 0x5d7)) || (*(int *)(this_00 + 0x5d7) < 0)) {
            *(undefined4 *)(this_00 + 0x5d7) = 100;
          }
          uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]);
          *(int *)(this_00 + 0x241) =
               (*(int *)(&DAT_007e4178 + ((uVar17 & 0xff) + *(int *)(this_00 + 0x235) * 3) * 4) *
               *(int *)(this_00 + 0x5d7)) / 100;
          *(undefined4 *)(this_00 + 0x410) = 0;
          *(undefined4 *)(this_00 + 0x42c) = 0;
          *(undefined4 *)(this_00 + 0x4a0) = 0;
          *(undefined4 *)(this_00 + 0x4c0) = 0;
          iVar16 = *(int *)(this_00 + 0x5ac);
          if ((((iVar16 != 0x4d) || (*(int *)(this_00 + 0x4d0) == 2)) &&
              ((iVar16 != 0x4c || (*(int *)(this_00 + 0x4d0) == 2)))) &&
             ((iVar16 != 0x43 || (*(int *)(this_00 + 0x4d0) == 2)))) {
            iVar16 = (**(code **)(*(int *)this_00 + 0x2c))();
            thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar16 >> 8),this_00[0x24]),iVar16);
          }
          *(undefined4 *)(this_00 + 0x259) = 0;
          thunk_FUN_004c3020((int)this_00);
          thunk_FUN_004c71f0((int)this_00);
          thunk_FUN_004c6b50(this_00);
          thunk_FUN_004cc220((int)this_00);
          thunk_FUN_004cd390((int)this_00);
          thunk_FUN_004e9c00((int)this_00);
          switch(*(undefined4 *)(this_00 + 0x5ac)) {
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
          if (-1 < *(int *)(this_00 + 0x5bc)) {
            *(short *)(this_00 + 0x30) = (short)*(int *)(this_00 + 0x5bc);
          }
          thunk_FUN_00419c70((int *)this_00,*(int *)(this_00 + 0x231),
                             (uint)(*(int *)(this_00 + 0x231) == 0));
          if (*(int *)(&DAT_00794d94 + *(int *)(this_00 + 0x235) * 4) != 0) {
            thunk_FUN_004c2dd0((int)this_00);
          }
          SetState((TLOBaseTy *)this_00,0,1);
          if (*(int *)(this_00 + 0x245) == 0) {
            iVar16 = *(int *)(*(int *)(this_00 + 0x1f5) + 0x20c);
            iVar23 = *(int *)(*(int *)(this_00 + 0x1f5) + 0x208);
            if (iVar23 < iVar16) {
              uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)(this_00 + 0x1c) = uVar17;
              iVar23 = (uVar17 >> 0x10) % ((iVar16 - iVar23) + 1U) + iVar23;
              STT3DSprC::SetCurFase((STT3DSprC *)(this_00 + 0x1d5),'\x0e',iVar23);
              STT3DSprC::SetCurFase((STT3DSprC *)(this_00 + 0x1d5),'\r',iVar23);
            }
          }
          if ((*(int *)(&DAT_00792778 + *(int *)(this_00 + 0x235) * 4) == 0) ||
             (iVar16 = thunk_FUN_004e81b0(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),0),
             iVar16 == 0)) {
            puVar18 = (undefined *)0x5;
          }
          else {
            puVar18 = (undefined *)
                      thunk_FUN_004e81b0(*(int *)(this_00 + 0x24),*(int *)(this_00 + 0x235),0);
          }
          thunk_FUN_0041c3f0(this_00,puVar18);
          if ((*(int *)(this_00 + 0x231) == 1) && (local_14 = 0, DAT_008117bc != (undefined4 *)0x0))
          {
            local_64 = *(undefined2 *)(this_00 + 0x24);
            local_68 = CONCAT22(*(undefined2 *)(this_00 + 0x32),local_64);
            local_6c = 0x5dd0;
            iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)(this_00 + 0x5d3),&local_14);
            if ((iVar16 == 0) && (local_14 != 0)) {
              local_62 = *(undefined2 *)(local_14 + 0x32);
            }
            else {
              local_62 = 0xffff;
            }
            (**(code **)*DAT_008117bc)(local_7c);
          }
          uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]);
          if (*(int *)(this_00 + 0x241) !=
              *(int *)(&DAT_007e4178 + ((uVar17 & 0xff) + *(int *)(this_00 + 0x235) * 3) * 4)) {
            thunk_FUN_004cc840((int *)this_00);
          }
          if (*(uint *)(this_00 + 0x24) == (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
            thunk_FUN_004d8b70((char)*(uint *)(this_00 + 0x24));
          }
          if (((*(int *)(this_00 + 0x231) == 1) &&
              (*(uint *)(this_00 + 0x24) == (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d))) &&
             (uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]),
             *(int *)(&DAT_007952b8 + ((uVar17 & 0xff) + *(int *)(this_00 + 0x235) * 3) * 4) != 0))
          {
            iVar16 = *(int *)this_00;
            uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]);
            (**(code **)(iVar16 + 0x90))
                      (4,*(undefined4 *)
                          (&DAT_007952b8 + ((uVar17 & 0xff) + *(int *)(this_00 + 0x235) * 3) * 4));
          }
          if (((*(int *)(this_00 + 0x231) == 0) || (*(int *)(this_00 + 0x231) == 3)) &&
             (DAT_00811784 != (void *)0x0)) {
            uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
            thunk_FUN_005f23d0(DAT_00811784,*(int *)(this_00 + 0x5b0),*(int *)(this_00 + 0x5b4),
                               *(int *)(this_00 + 0x5b8),
                               CONCAT31((int3)((uint)extraout_ECX >> 8),this_00[0x2c]),
                               *(int *)(this_00 + 0x5ac),uVar17 & 0xff);
          }
          if (*(int *)(this_00 + 0x5df) != 0) {
            pSVar27 = this_00 + 0x1d5;
            *(int *)(this_00 + 0x4c8) = *(short *)(DAT_00806724 + 0x23) + -1;
            *(undefined4 *)(this_00 + 0x4cc) = *(undefined4 *)(DAT_00802a38 + 0xe4);
            thunk_FUN_004ace60(pSVar27,'\x0e');
            thunk_FUN_004ace60(pSVar27,'\r');
            thunk_FUN_004ace60(pSVar27,'\f');
            thunk_FUN_004ace60(pSVar27,'\v');
            thunk_FUN_004ace60(pSVar27,'\t');
            thunk_FUN_004ace60(pSVar27,'\b');
            thunk_FUN_004ace60(pSVar27,'\a');
            thunk_FUN_004ace30(pSVar27,*(uint *)(DAT_00806724 + 0x30 + *(int *)(this_00 + 0x4c8) * 4
                                                ),(int)*(short *)(DAT_00806724 + 0x2c));
            thunk_FUN_0041f630((int *)this_00);
            thunk_FUN_004cba30((int)this_00);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          break;
        case 2:
          local_c = *(int *)(param_1 + 0x14);
          puVar20 = (undefined4 *)(local_c + 0x57);
          puVar28 = (undefined4 *)
                    (-(uint)(this_00 != (STSprGameObjC *)0x0) & (uint)(this_00 + 0x231));
          for (iVar16 = 0xde; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar28 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar28 = puVar28 + 1;
          }
          *(undefined2 *)puVar28 = *(undefined2 *)puVar20;
          *(undefined1 *)((int)puVar28 + 2) = *(undefined1 *)((int)puVar20 + 2);
          *(undefined4 *)(this_00 + 0x231) = 2;
          if (*(int *)(this_00 + 0x3d8) != 0) {
            iVar16 = Library::DKW::LIB::FUN_006aac70(*(int *)(this_00 + 0x3d8) * 0x27);
            *(int *)(this_00 + 0x607) = iVar16;
          }
          if (*(int *)(this_00 + 0x3d4) != 0) {
            uVar24 = *(int *)(this_00 + 0x3d4) * 0x27;
            puVar20 = (undefined4 *)(*(int *)(local_c + 0x3d2) + local_c);
            puVar28 = *(undefined4 **)(this_00 + 0x607);
            for (uVar17 = uVar24 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar28 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar28 = puVar28 + 1;
            }
            for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
              *(undefined1 *)puVar28 = *(undefined1 *)puVar20;
              puVar20 = (undefined4 *)((int)puVar20 + 1);
              puVar28 = (undefined4 *)((int)puVar28 + 1);
            }
          }
          thunk_FUN_004c96e0((int)this_00);
          local_34 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x44);
          iVar16 = local_c;
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
          if (*(int *)(this_00 + 0x245) == 1) {
            if (*(int *)(this_00 + 0x5df) == 5) {
              local_30 = *(undefined4 *)(DAT_00806724 + 0x30 + *(int *)(this_00 + 0x4c8) * 4);
              local_2c = (int)*(short *)(DAT_00806724 + 0x2c);
            }
            else {
              local_34[5] = DAT_00806764;
              local_34[4] = DAT_00806774;
              local_34[6] = DAT_00806774;
            }
          }
          if (*(int *)(this_00 + 0x245) == 6) {
            local_34[5] = DAT_0080678c;
            local_34[4] = DAT_00806764;
          }
          STT3DSprC::RestoreSpr
                    ((STT3DSprC *)(this_00 + 0x1d5),(int *)&local_34,
                     (undefined4 *)(*(int *)(local_c + 0x3da) + local_c));
          if ((*(int *)(this_00 + 0x5f7) != 0) &&
             (*(int *)(&DAT_00790c2c + *(int *)(this_00 + 0x235) * 4) != 0)) {
            iVar23 = 1;
            uVar24 = 0xc;
            uVar17 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
            FUN_006ea190(*(void **)(this_00 + 0x211),uVar17,uVar24,iVar23);
          }
          if (*(int *)(iVar16 + 0x3de) != 0) {
            puVar20 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (puVar20 == (undefined4 *)0x0) {
              pSVar19 = (STT3DSprC *)0x0;
            }
            else {
              pSVar19 = (STT3DSprC *)thunk_FUN_004ab810(puVar20);
            }
            *(STT3DSprC **)(this_00 + 0x5ff) = pSVar19;
            iVar16 = STT3DSprC::Init(pSVar19,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
            if (iVar16 != 0) {
              RaiseInternalException
                        (iVar16,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x365);
            }
            puVar20 = local_34;
            for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar20 = 0;
              puVar20 = puVar20 + 1;
            }
            switch(*(undefined4 *)(this_00 + 0x5ac)) {
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
                      (*(STT3DSprC **)(this_00 + 0x5ff),(int *)&local_34,
                       (undefined4 *)(*(int *)(local_c + 0x3e2) + local_c));
            uVar24 = 10;
            iVar16 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
            uVar17 = thunk_FUN_004ad650(*(int *)(this_00 + 0x5ff));
            FUN_006ea340(*(void **)(this_00 + 0x211),uVar17,iVar16,uVar24);
            iVar16 = local_c;
          }
          if (*(int *)(iVar16 + 0x3ee) != 0) {
            puVar20 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
            if (puVar20 == (undefined4 *)0x0) {
              pSVar19 = (STT3DSprC *)0x0;
            }
            else {
              pSVar19 = (STT3DSprC *)thunk_FUN_004ab810(puVar20);
            }
            *(STT3DSprC **)(this_00 + 0x603) = pSVar19;
            iVar16 = STT3DSprC::Init(pSVar19,DAT_008073cc,*(uint *)(this_00 + 0x613),
                                     *(uint *)(this_00 + 0x617),0,*(uint *)(this_00 + 0x60b),
                                     *(uint *)(this_00 + 0x60f),0x11);
            if (iVar16 != 0) {
              RaiseInternalException
                        (iVar16,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x386);
            }
            puVar20 = local_34;
            for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar20 = 0;
              puVar20 = puVar20 + 1;
            }
            if (*(int *)(this_00 + 0x43c) == 1) {
              local_34[0xe] = DAT_00806764;
            }
            else {
              local_34[0xe] = DAT_0080678c;
            }
            local_30 = 0;
            local_1c = 0;
            local_28 = 0;
            STT3DSprC::RestoreSpr
                      (*(STT3DSprC **)(this_00 + 0x603),(int *)&local_34,
                       (undefined4 *)(*(int *)(local_c + 0x3f2) + local_c));
            if (((*(int *)(this_00 + 0x444) != 0) && (*(int *)(this_00 + 0x448) != 0)) &&
               (-1 < *(int *)(this_00 + 0x44c))) {
              STT3DSprC::UnLoadSequence((STT3DSprC *)(this_00 + 0x1d5),6);
              uVar24 = 6;
              iVar16 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
              uVar17 = thunk_FUN_004ad650(*(int *)(this_00 + 0x603));
              FUN_006ea340(*(void **)(this_00 + 0x211),uVar17,iVar16,uVar24);
            }
          }
          FUN_006ab060(&local_34);
          if ((*(int *)(this_00 + 0x46c) == 4) && (*(int *)(this_00 + 0x490) != 0)) {
            iVar16 = 0;
            uVar17 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
            FUN_006eabf0(*(void **)(this_00 + 0x211),uVar17,iVar16);
            if (*(int *)(this_00 + 0x5ff) != 0) {
              iVar16 = 0;
              uVar17 = thunk_FUN_004ad650(*(int *)(this_00 + 0x5ff));
              FUN_006eabf0(*(void **)(this_00 + 0x211),uVar17,iVar16);
            }
            if (*(int *)(this_00 + 0x603) != 0) {
              iVar16 = 0;
              uVar17 = thunk_FUN_004ad650(*(int *)(this_00 + 0x603));
              FUN_006eabf0(*(void **)(this_00 + 0x211),uVar17,iVar16);
            }
          }
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(*(int *)(local_c + 0x3ea) + local_c));
          thunk_FUN_00419cf0((int *)this_00,CONCAT22(extraout_var,*(undefined2 *)(this_00 + 0x32)),
                             CONCAT22(extraout_var,*(undefined2 *)(this_00 + 0x32)));
          if (*(int *)(this_00 + 0x251) != 0) {
            local_8 = *(byte **)(this_00 + 0x5b4);
            iVar16 = 2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)(this_00 + 0x235) * 4) != 1);
            if ((int)local_8 < (int)(local_8 + iVar16)) {
              do {
                iVar23 = *(int *)(this_00 + 0x5b0);
                if (iVar23 < iVar23 + iVar16) {
                  do {
                    iVar22 = thunk_FUN_004960d0((short)iVar23,(short)local_8,
                                                *(short *)(this_00 + 0x5b8));
                    if (iVar22 != 0) {
                      RaiseInternalException
                                (-5,DAT_007ed77c,s_E____titans_Artem_TLO_base_cpp_007ac820,0x3a5);
                    }
                    iVar23 = iVar23 + 1;
                  } while (iVar23 < *(int *)(this_00 + 0x5b0) + iVar16);
                }
                local_8 = local_8 + 1;
              } while ((int)local_8 < *(int *)(this_00 + 0x5b4) + iVar16);
              thunk_FUN_0041f630((int *)this_00);
              thunk_FUN_004cba30((int)this_00);
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
          }
          break;
        default:
          iVar16 = ReportDebugMessage(s_E____titans_Artem_TLO_base_cpp_007ac820,0x3ac,0,0,
                                      &DAT_007a4ccc,s_I_don_t_now_what_I_suppose_to_do_007ac87c);
          if (iVar16 != 0) {
            pcVar13 = (code *)swi(3);
            iVar16 = (*pcVar13)();
            return iVar16;
          }
        }
        thunk_FUN_0041f630((int *)this_00);
        thunk_FUN_004cba30((int)this_00);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar17 != 3) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004b9a40((int *)this_00);
      thunk_FUN_00419d30(this_00,*(int *)(this_00 + 0x458));
      thunk_FUN_0041d590((int)this_00);
      thunk_FUN_00417d30((int)this_00);
      thunk_FUN_004c3480();
      thunk_FUN_004167a0((int)this_00);
      thunk_FUN_004c7230((int)this_00);
      thunk_FUN_004cc330((int)this_00);
      thunk_FUN_004cd3b0((int)this_00);
      thunk_FUN_004dc150(this_00);
      if (*(int *)(&DAT_00791a10 + *(int *)(this_00 + 0x235) * 4) != 0) {
        thunk_FUN_004cbf30((int)this_00);
      }
      thunk_FUN_004ad310((int)(this_00 + 0x1d5));
      if (*(uint *)(this_00 + 0x24) != (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004d8b70((char)*(uint *)(this_00 + 0x24));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar17 == 0x10f) {
      uVar21 = *(undefined4 *)(this_00 + 0x2c);
      puVar20 = local_4bc;
      for (iVar16 = 0xfd; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar20 = 0;
        puVar20 = puVar20 + 1;
      }
      uVar8 = *(undefined4 *)(this_00 + 0x24);
      pSVar27 = (STSprGameObjC *)0x0;
      *(undefined2 *)puVar20 = 0;
      local_40 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_8 = (byte *)0x0;
      local_10 = (byte *)0x0;
      local_38 = (byte *)0x0;
      local_4bc[3] = 2;
      local_4bc[2] = 1;
      local_4bc[0] = 1000;
      if (this_00 != (STSprGameObjC *)0x0) {
        pSVar27 = this_00 + 0x5ac;
      }
      puVar20 = &local_4a8;
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar20 = *(undefined4 *)pSVar27;
        pSVar27 = pSVar27 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pSVar27;
      *(STSprGameObjC *)((int)puVar20 + 2) = pSVar27[2];
      if (this_00 == (STSprGameObjC *)0x0) {
        pSVar27 = (STSprGameObjC *)0x0;
      }
      else {
        pSVar27 = this_00 + 0x231;
      }
      puVar20 = &local_465;
      for (iVar16 = 0xde; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar20 = *(undefined4 *)pSVar27;
        pSVar27 = pSVar27 + 4;
        puVar20 = puVar20 + 1;
      }
      *(undefined2 *)puVar20 = *(undefined2 *)pSVar27;
      *(STSprGameObjC *)((int)puVar20 + 2) = pSVar27[2];
      local_ea = 0x3f6;
      local_4bc[1] = uVar8;
      local_4bc[4] = uVar21;
      local_40 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(this_00 + 0x1d5),&local_e6);
      local_e2 = *(int *)(this_00 + 0x3d4) * 0x27 + local_ea;
      if ((*(int *)(&DAT_00791a10 + *(int *)(this_00 + 0x235) * 4) != 0) &&
         (*(STT3DSprC **)(this_00 + 0x5ff) != (STT3DSprC *)0x0)) {
        local_3c = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)(this_00 + 0x5ff),&local_de);
      }
      local_da = local_e6 + local_e2;
      local_38 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_d6);
      local_d2 = local_de + local_da;
      if (*(STT3DSprC **)(this_00 + 0x603) != (STT3DSprC *)0x0) {
        local_8 = (byte *)STT3DSprC::SaveSpr(*(STT3DSprC **)(this_00 + 0x603),&local_ce);
        local_ca = local_d6 + local_d2;
      }
      local_18 = (STSprGameObjC *)
                 ((*(int *)(this_00 + 0x3d4) + 0x1a) * 0x27 + local_ce + local_d6 + local_de +
                 local_e6);
      local_10 = (byte *)Library::DKW::LIB::FUN_006aac10((uint)local_18);
      puVar20 = local_4bc;
      pbVar26 = local_10;
      for (iVar16 = 0xfd; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined4 *)pbVar26 = *puVar20;
        puVar20 = puVar20 + 1;
        pbVar26 = pbVar26 + 4;
      }
      *(undefined2 *)pbVar26 = *(undefined2 *)puVar20;
      iVar16 = *(int *)(this_00 + 0x3d4);
      pbVar26 = *(byte **)(this_00 + 0x607);
      pbVar30 = local_10 + local_ea;
      for (uVar17 = (uint)(iVar16 * 0x27) >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
        pbVar26 = pbVar26 + 4;
        pbVar30 = pbVar30 + 4;
      }
      for (uVar17 = iVar16 * 0x27 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pbVar30 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        pbVar30 = pbVar30 + 1;
      }
      pbVar26 = local_40;
      pbVar30 = local_10 + local_e2;
      for (uVar17 = local_e6 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
        pbVar26 = pbVar26 + 4;
        pbVar30 = pbVar30 + 4;
      }
      for (local_e6 = local_e6 & 3; local_e6 != 0; local_e6 = local_e6 - 1) {
        *pbVar30 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        pbVar30 = pbVar30 + 1;
      }
      if (local_de != 0) {
        pbVar26 = local_3c;
        pbVar30 = local_10 + local_da;
        for (uVar17 = local_de >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
          pbVar26 = pbVar26 + 4;
          pbVar30 = pbVar30 + 4;
        }
        for (local_de = local_de & 3; local_de != 0; local_de = local_de - 1) {
          *pbVar30 = *pbVar26;
          pbVar26 = pbVar26 + 1;
          pbVar30 = pbVar30 + 1;
        }
      }
      pbVar26 = local_38;
      pbVar30 = local_10 + local_d2;
      for (uVar17 = local_d6 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
        pbVar26 = pbVar26 + 4;
        pbVar30 = pbVar30 + 4;
      }
      for (local_d6 = local_d6 & 3; local_d6 != 0; local_d6 = local_d6 - 1) {
        *pbVar30 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        pbVar30 = pbVar30 + 1;
      }
      pbVar26 = local_8;
      pbVar30 = local_10 + local_ca;
      for (uVar17 = local_ce >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pbVar30 = *(undefined4 *)pbVar26;
        pbVar26 = pbVar26 + 4;
        pbVar30 = pbVar30 + 4;
      }
      for (local_ce = local_ce & 3; local_ce != 0; local_ce = local_ce - 1) {
        *pbVar30 = *pbVar26;
        pbVar26 = pbVar26 + 1;
        pbVar30 = pbVar30 + 1;
      }
      STPlaySystemC::SaveObjData
                (DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_10,(uint)local_18);
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
    if (uVar17 != 0x110) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    piVar25 = *(int **)(param_1 + 0x14);
    piVar29 = local_5c;
    for (iVar16 = 7; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar29 = *piVar25;
      piVar25 = piVar25 + 1;
      piVar29 = piVar29 + 1;
    }
    iVar16 = 0;
    if ((0x9a < local_5c[1]) &&
       (((local_5c[1] < 0x9f || (local_5c[1] == 0xa5)) &&
        (iVar23 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),0x68), iVar23 != 0)))) {
      thunk_FUN_004d6eb0(this_00,local_5c[0] / 2);
    }
    if (*(int *)(this_00 + 0x5ac) == 0x68) {
      thunk_FUN_004dc240();
    }
    iVar23 = local_c;
    if (local_5c[1] == 0x9a) {
      iVar23 = thunk_FUN_004e60d0(local_54,0x93);
      if ((*(int *)(this_00 + 0x4a0) == 0) || (*(int *)(this_00 + 0x4a8) < iVar23)) {
        *(int *)(this_00 + 0x4a8) = iVar23;
        *(int *)(this_00 + 0x4ac) = local_54;
      }
      *(undefined4 *)(this_00 + 0x4a0) = 1;
      *(undefined4 *)(this_00 + 0x4a4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_c = iVar23;
      (**(code **)(*(int *)this_00 + 200))(0);
    }
    if (*(int *)(this_00 + 0x410) != 0) {
      local_5c[0] = (*(int *)(this_00 + 0x414) * local_5c[0]) / 100;
    }
    if (*(int *)(this_00 + 0x4c0) != 0) {
      local_5c[0] = (*(int *)(this_00 + 0x4c0) * local_5c[0] * 0x32) / 10000;
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
        iVar23 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),0x67);
        iVar16 = 0;
        if (iVar23 == 1) {
          iVar16 = (local_5c[0] * 9) / 10 + (local_5c[0] * 9 >> 0x1f);
LAB_004bb547:
          iVar16 = local_5c[0] - (iVar16 - (iVar16 >> 0x1f));
        }
        else {
          if (iVar23 == 2) {
            iVar16 = (local_5c[0] * 0x11) / 0x14 + (local_5c[0] * 0x11 >> 0x1f);
            goto LAB_004bb547;
          }
          if (iVar23 == 3) {
            iVar16 = (local_5c[0] * 4) / 5 + (local_5c[0] * 4 >> 0x1f);
            goto LAB_004bb547;
          }
        }
        local_5c[0] = local_5c[0] - iVar16;
        local_c = iVar23;
      }
      uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
      uVar17 = uVar17 & 0xff;
      if (uVar17 == 1) {
        iVar16 = *(int *)(this_00 + 0x24);
        iVar23 = 4;
LAB_004bb58d:
        iVar23 = thunk_FUN_004e60d0(iVar16,iVar23);
        local_c = iVar23;
      }
      else {
        if (uVar17 == 2) {
          iVar16 = *(int *)(this_00 + 0x24);
          iVar23 = 0x81;
          goto LAB_004bb58d;
        }
        if (uVar17 == 3) {
          iVar16 = *(int *)(this_00 + 0x24);
          iVar23 = 0x65;
          goto LAB_004bb58d;
        }
      }
      iVar16 = 0;
      if (iVar23 == 1) {
        iVar16 = local_5c[0] * 8;
      }
      else if (iVar23 == 2) {
        iVar16 = local_5c[0] * 6;
      }
      else {
        if (iVar23 != 3) goto LAB_004bb5dd;
        iVar16 = local_5c[0] * 4;
      }
      iVar16 = local_5c[0] - iVar16 / 10;
      goto LAB_004bb5dd;
    }
    uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
    uVar17 = uVar17 & 0xff;
    if (uVar17 == 1) {
      iVar23 = *(int *)(this_00 + 0x24);
      iVar22 = 0x2d;
LAB_004bb4a1:
      iVar23 = thunk_FUN_004e60d0(iVar23,iVar22);
      local_c = iVar23;
    }
    else {
      if (uVar17 == 2) {
        iVar23 = *(int *)(this_00 + 0x24);
        iVar22 = 0x2d;
        goto LAB_004bb4a1;
      }
      if (uVar17 == 3) {
        iVar23 = *(int *)(this_00 + 0x24);
        iVar22 = 0x6a;
        goto LAB_004bb4a1;
      }
    }
    if (iVar23 == 1) {
      iVar16 = local_5c[0] - (local_5c[0] * 9) / 10;
    }
    local_5c[0] = local_5c[0] - iVar16;
LAB_004bb5dd:
    if (200 < iVar16) {
      iVar16 = 200;
    }
    local_5c[0] = local_5c[0] - iVar16;
    if (local_5c[0] < 0) {
      local_5c[0] = 0;
    }
    thunk_FUN_004b9bb0(this_00,local_5c[0],(short)local_54,local_50);
    if (*(int *)(this_00 + 0x245) == 1) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((DAT_008117bc != (undefined4 *)0x0) && (local_5c[0] != 0)) {
      local_68 = CONCAT22(*(undefined2 *)(this_00 + 0x32),*(undefined2 *)(this_00 + 0x24));
      local_62 = local_50;
      local_6c = 0x5dd5;
      local_64 = (undefined2)local_54;
      (**(code **)*DAT_008117bc)(local_7c);
    }
    if (DAT_00811798 != (void *)0x0) {
      thunk_FUN_0061f8b0(DAT_00811798,*(int *)(this_00 + 0x5b0),*(int *)(this_00 + 0x5b4),
                         *(uint *)(this_00 + 0x24));
    }
    *(undefined4 *)(this_00 + 0x454) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (*(int *)(this_00 + 0x458) == 0xfe) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    *(int *)(this_00 + 0x458) = local_54;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (uVar17 < 0x129) {
    if (uVar17 == 0x128) {
      iVar16 = *(int *)(this_00 + 0x245);
      piVar25 = *(int **)(param_1 + 0x14);
      piVar29 = local_5c;
      for (iVar23 = 7; iVar23 != 0; iVar23 = iVar23 + -1) {
        *piVar29 = *piVar25;
        piVar25 = piVar25 + 1;
        piVar29 = piVar29 + 1;
      }
      if ((iVar16 != 1) && (iVar16 != 6)) {
        *(undefined4 *)(this_00 + 0x241) = 0;
        *(undefined4 *)(this_00 + 0x5d7) = 0;
        *(int *)(this_00 + 0x5df) = local_44;
        if ((local_44 == 2) || (local_44 == 5)) {
          iVar16 = 1;
        }
        else {
          iVar16 = 0;
        }
        SetState((TLOBaseTy *)this_00,1,iVar16);
        if ((*(int *)(this_00 + 0x5df) == 0) || (*(int *)(this_00 + 0x5df) == 4)) {
          uVar24 = (uint)(*(int *)(this_00 + 0x24d) == 4);
          uVar17 = thunk_FUN_004406c0((char)this_00[0x24]);
          thunk_FUN_0062b830((int)*(short *)(this_00 + 0x41),(int)*(short *)(this_00 + 0x43),
                             (int)*(short *)(this_00 + 0x45),*(undefined4 *)(this_00 + 0x5ac),
                             (int *)this_00,0xffffffff,0xffffffff,uVar17 & 0xff,uVar24);
        }
        if ((*(int *)(this_00 + 0x5df) == 2) || (*(int *)(this_00 + 0x5df) == 5)) {
          *(undefined4 *)(this_00 + 0x454) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          if (*(int *)(this_00 + 0x458) != 0xfe) {
            *(int *)(this_00 + 0x458) = local_54;
          }
        }
        else {
          if ((local_54 != 0xfe) && (DAT_008117bc != (undefined4 *)0x0)) {
            local_62 = local_50;
            local_6c = 0x5dd1;
            local_68 = CONCAT22(*(undefined2 *)(this_00 + 0x32),*(undefined2 *)(this_00 + 0x24));
            local_64 = (short)local_54;
            (**(code **)*DAT_008117bc)(local_7c);
          }
          local_68 = *(undefined4 *)(this_00 + 8);
          local_74 = *(undefined4 *)(*(int *)(this_00 + 0xc) + 0x14);
          local_70 = 0;
          local_6c = 10;
          FUN_006e60a0(this_00,local_7c);
        }
      }
      if (DAT_008117bc == (undefined4 *)0x0) {
        local_6c = 0x5dd5;
        local_68 = CONCAT22(*(undefined2 *)(this_00 + 0x32),*(undefined2 *)(this_00 + 0x24));
        local_62 = 0xffff;
        local_64 = (short)local_54;
        (*(code *)*puRam00000000)(local_7c);
      }
      if (DAT_00811798 != (void *)0x0) {
        thunk_FUN_0061f8b0(DAT_00811798,*(int *)(this_00 + 0x5b0),*(int *)(this_00 + 0x5b4),
                           *(uint *)(this_00 + 0x24));
      }
      *(undefined4 *)(this_00 + 0x454) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (*(int *)(this_00 + 0x458) == 0xfe) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      *(int *)(this_00 + 0x458) = local_54;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (uVar17 != 0x121) {
      if (uVar17 == 0x122) {
        piVar25 = *(int **)(param_1 + 0x14);
        if (*piVar25 != *(int *)(this_00 + 0x24)) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        *(undefined4 *)(this_00 + 0x410) = 1;
        *(int *)(this_00 + 0x414) = piVar25[2];
        *(undefined4 *)(this_00 + 0x418) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *(int *)(this_00 + 0x41c) = piVar25[1];
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (uVar17 != 0x123) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)(this_00 + 0x5ac) == 0x4d) {
        thunk_FUN_004debd0(this_00,*(int *)(param_1 + 0x14));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)(this_00 + 0x5ac) != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar16 = *(int *)(param_1 + 0x14);
      *(int *)(this_00 + 0x4d0) = iVar16;
      if (iVar16 < 0) {
        *(undefined4 *)(this_00 + 0x4d0) = 0;
      }
      if (5000 < *(int *)(this_00 + 0x4d0)) {
        *(undefined4 *)(this_00 + 0x4d0) = 5000;
      }
      *(undefined4 *)(this_00 + 0x4d4) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (*(int *)(this_00 + 0x5ac) != 0x73) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)(this_00 + 0x4d0) != 0) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004c2d40((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    local_18 = *(STSprGameObjC **)(param_1 + 0x14);
    if ((7 < *(uint *)local_18) ||
       ((DAT_00802a38 != (STPlaySystemC *)0x0 &&
        (7 < (byte)(&DAT_008087e9)[*(uint *)local_18 * 0x51])))) goto LAB_004bbcb2;
    SVar1 = *local_18;
    SVar2 = this_00[0x24];
    local_14 = CONCAT31(local_14._1_3_,SVar1);
    local_8 = (byte *)CONCAT31(local_8._1_3_,SVar2);
    if (DAT_00808a8f == '\0') {
      if (SVar1 == SVar2) {
LAB_004bbc2b:
        iVar16 = 0;
      }
      else {
        uVar17 = (uint)(byte)SVar1;
        uVar24 = (uint)(byte)SVar2;
        cVar32 = *(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar24);
        if ((cVar32 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar24 * 8 + uVar17) == '\0')) {
          iVar16 = -2;
        }
        else if ((cVar32 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar24 * 8 + uVar17) == '\0')
                ) {
          iVar16 = -1;
        }
        else if ((cVar32 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar24 * 8 + uVar17) == '\x01')
                ) {
          iVar16 = 1;
        }
        else {
          if ((cVar32 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar24 * 8 + uVar17) != '\x01'))
          goto LAB_004bbc2b;
          iVar16 = 2;
        }
      }
      bVar31 = iVar16 < 0;
    }
    else {
      bVar31 = (&DAT_008087ea)[(uint)(byte)SVar2 * 0x51] !=
               (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51];
    }
    if ((bVar31) && (iVar16 = FUN_006b0fd0(0x800f90), iVar16 != 0)) {
      *(undefined4 *)(this_00 + 0x420) = 1;
      *(uint *)(this_00 + 0x265) = *(uint *)(this_00 + 0x265) & 0xfffffffd;
      *(undefined4 *)(this_00 + 0x26d) = 0;
      *(undefined4 *)(this_00 + 0x424) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      *(uint *)(this_00 + 0x428) = *(uint *)(local_18 + 4);
      *(undefined4 *)(param_1 + 0x18) = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
LAB_004bbcb2:
    *(undefined4 *)(param_1 + 0x18) = 0;
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  if (uVar17 != 0x4401) {
    if (uVar17 != 0x440f) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004cba30((int)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  }
  iVar16 = *(int *)(param_1 + 0x14);
  bVar3 = *(byte *)(iVar16 + 0xe);
  switch(bVar3) {
  case 8:
    if ((*(int *)(this_00 + 0x245) == 4) && (*(int *)(this_00 + 0x3dc) != 0)) {
      if (*(int *)(this_00 + 0x249) != -1) {
        *(undefined4 *)(this_00 + 0x249) = 0xffffffff;
      }
      iVar16 = thunk_FUN_004ea620((int)this_00);
      if (iVar16 != 0) {
        *(undefined4 *)(this_00 + 0x3fc) = 1;
        *(undefined4 *)(this_00 + 0x400) = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 9:
    iVar23 = *(int *)(this_00 + 0x5ac);
    if (iVar23 == 0x33) {
      bVar3 = **(byte **)(iVar16 + 0x17);
      if ((bVar3 != 0) && (bVar3 != 1)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004e2190(this_00,(uint)bVar3);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar23 != 0x3c) && (iVar23 != 0x53)) {
      thunk_FUN_004c91a0(this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (*(int *)(this_00 + 0x24) == *(int *)(this_00 + 0x23d)) {
LAB_004bc117:
      bVar31 = true;
    }
    else {
      uVar17 = thunk_FUN_004406c0((char)*(int *)(this_00 + 0x23d));
      iVar16 = *(int *)(this_00 + 0x235);
      uVar24 = thunk_FUN_004406c0((char)this_00[0x24]);
      if ((&DAT_007e1984)[(uVar24 & 0xff) + (iVar16 * 3 + (uVar17 & 0xff)) * 3] != '\0')
      goto LAB_004bc117;
      bVar31 = false;
    }
    if (bVar31) {
      thunk_FUN_004db0a0(*(int *)(this_00 + 0x24));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x14:
    iVar22 = **(int **)(iVar16 + 0x17);
    if (iVar22 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb240 <= iVar22) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar23 = (*(int **)(iVar16 + 0x17))[1];
    if (iVar23 < 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb242 <= iVar23) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(*(undefined4 *)(this_00 + 0x5ac)) {
    case 0x32:
    case 0x33:
    case 0x37:
    case 0x40:
    case 0x49:
    case 0x5c:
    case 0x6c:
      *(undefined4 *)(this_00 + 0x42c) = 1;
      *(undefined4 *)(this_00 + 0x430) = **(undefined4 **)(iVar16 + 0x17);
      *(undefined4 *)(this_00 + 0x434) = *(undefined4 *)(*(int *)(iVar16 + 0x17) + 4);
      *(undefined4 *)(this_00 + 0x438) = 2;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (*(int *)(this_00 + 0x245) != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar16 = *(int *)(this_00 + 0x5b8);
    goto LAB_004bc4c0;
  case 0x15:
    if (*(int *)(this_00 + 0x245) != 4) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (DAT_007fb240 <= (short)(ushort)**(byte **)(iVar16 + 0x17)) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    iVar23 = *(int *)(this_00 + 0x5b4);
    iVar16 = 4 - (uint)**(byte **)(iVar16 + 0x17);
    iVar22 = *(int *)(this_00 + 0x5b0);
LAB_004bc4c0:
    thunk_FUN_004c6c70(this_00,iVar22,iVar23,iVar16);
    if (*(int *)(this_00 + 0x249) != -1) {
      *(undefined4 *)(this_00 + 0x249) = 0xffffffff;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x16:
    pcVar12 = *(char **)(iVar16 + 0x17);
    if (*(int *)(&DAT_00792778 + *(int *)(this_00 + 0x235) * 4) != 0) {
      if (*pcVar12 == '\a') {
        *(uint *)(this_00 + 0x265) = *(uint *)(this_00 + 0x265) & 0xfffffffd;
        *(undefined4 *)(this_00 + 0x26d) = 0;
      }
      else if (*(int *)(this_00 + 0x261) != 0) {
        if (*(int *)(&DAT_00792a90 + *(int *)(this_00 + 0x235) * 8) == 1) {
          if (*pcVar12 == '\0') {
            uVar21 = *(undefined4 *)(pcVar12 + 1);
            *(uint *)(this_00 + 0x265) = *(uint *)(this_00 + 0x265) | 2;
            *(undefined4 *)(this_00 + 0x26d) = uVar21;
          }
        }
        else if ((((*(int *)(&DAT_00792a90 + *(int *)(this_00 + 0x235) * 8) == 2) &&
                  (bVar3 = pcVar12[5], (short)(ushort)bVar3 < DAT_007fb240)) &&
                 (bVar4 = pcVar12[6], (short)(ushort)bVar4 < DAT_007fb242)) &&
                (bVar5 = pcVar12[7], (short)(ushort)bVar5 < DAT_007fb240)) {
          if (*(int *)(this_00 + 0x5ac) == 0x70) {
            thunk_FUN_004d8e70(this_00,(uint)bVar3,(uint)bVar4,(uint)bVar5);
          }
          else {
            *(uint *)(this_00 + 0x265) = *(uint *)(this_00 + 0x265) | 2;
            *(uint *)(this_00 + 0x2a5) = (uint)bVar3;
            *(uint *)(this_00 + 0x2a9) = (uint)bVar4;
            *(uint *)(this_00 + 0x2ad) = (uint)bVar5;
          }
        }
      }
      if (*(uint *)(this_00 + 0x24) == (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
        iVar16 = *(int *)(this_00 + 0x5ac);
        if (iVar16 == 0x3e) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x23f);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x3f) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x248);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x51) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x28a);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x46) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x305);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x47) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x30e);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x4a) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x324);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x4b) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x32d);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x66) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x3dc);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x67) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x3e3);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x6b) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x3fe);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x70) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x419);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 == 0x71) {
          (**(code **)(*(int *)this_00 + 0x90))(4,0x420);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    break;
  case 0x17:
    pcVar12 = *(char **)(iVar16 + 0x17);
    iVar16 = *(int *)(this_00 + 0x5ac);
    if (iVar16 == 0x4c) {
      cVar32 = *pcVar12;
      if (cVar32 == '\x06') {
        *(undefined4 *)(this_00 + 0x4e0) = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar32 == '\a') {
        *(undefined4 *)(this_00 + 0x4e0) = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar32 != '\b') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      iVar16 = *(int *)(this_00 + 0x4d0);
      if (iVar16 != 0) {
        if (iVar16 == 1) {
          *(undefined4 *)(this_00 + 0x4d4) = 2;
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 != 2) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
    }
    else {
      if (iVar16 != 0x43) {
        if (((iVar16 == 0x36) || (iVar16 == 0x5d)) && (*pcVar12 == '\v')) {
          iVar16 = thunk_FUN_004e60d0(*(int *)(this_00 + 0x24),
                                      *(int *)(&DAT_00798fb0 + *(int *)(this_00 + 0x239) * 4));
          if (iVar16 != 0) {
            thunk_FUN_004e4e90(this_00,*(int *)(pcVar12 + 1),*(int *)(pcVar12 + 5));
          }
          if (*(uint *)(this_00 + 0x24) != (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]);
          uVar17 = uVar17 & 0xff;
          if (uVar17 == 1) {
            (**(code **)(*(int *)this_00 + 0x90))(4,0x210);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (uVar17 != 2) {
            if (uVar17 != 3) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            (**(code **)(*(int *)this_00 + 0x90))(4,0x39f);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          (**(code **)(*(int *)this_00 + 0x90))(4,0x2d8);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if ((iVar16 == 0x3c) || (iVar16 == 0x53)) {
          if (*pcVar12 == '\f') {
            if (*(int *)((int)&DAT_007f582e + *(int *)(this_00 + 0x24) * 0xa62) != 0) {
              g_currentExceptionFrame = local_c4.previous;
              return 0;
            }
            uVar17 = *(int *)(this_00 + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this_00 + 0x1c) = uVar17;
            thunk_FUN_004db020(*(int *)(this_00 + 0x24),uVar17 >> 0x10);
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*pcVar12 != '\r') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004db0f0(*(int *)(this_00 + 0x24));
          if (*(uint *)(this_00 + 0x24) != (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
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
        if (iVar16 == 0x70) {
          if (*pcVar12 != '\x12') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)(this_00 + 0x4f0) != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)(this_00 + 0x4ec) < 100) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          *(undefined4 *)(this_00 + 0x4d0) = 1;
          *(undefined4 *)(this_00 + 0x261) = 1;
          *(uint *)(this_00 + 0x265) = *(uint *)(this_00 + 0x265) | 2;
          *(undefined4 *)(this_00 + 0x2a5) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x2a9) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x2ad) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x4ec) = 0;
          *(undefined4 *)(this_00 + 0x4d8) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (iVar16 != 0x6d) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        if (*pcVar12 == '\x19') {
          iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)(pcVar12 + 0x1d),(int *)&local_18);
          if (iVar16 != 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          iVar16 = thunk_FUN_004dbb10(this_00,(int)local_18);
          if (iVar16 == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if ((*(int *)(this_00 + 0x4d0) != 0) || (iVar16 = 100, *(int *)(this_00 + 0x4d4) != 0)) {
            iVar16 = 0x32;
          }
          thunk_FUN_004dbb60(this_00,(int *)local_18,iVar16);
        }
        else {
          if (*pcVar12 != '\x1a') {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (1 < *(uint *)(pcVar12 + 0x1d)) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          if (*(int *)(this_00 + *(uint *)(pcVar12 + 0x1d) * 4 + 0x4d0) == 0) {
            g_currentExceptionFrame = local_c4.previous;
            return 0;
          }
          thunk_FUN_004dbe00(this_00,*(int *)(this_00 + *(uint *)(pcVar12 + 0x1d) * 4 + 0x4d0));
        }
        if (*(uint *)(this_00 + 0x24) != (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
        (**(code **)(*(int *)this_00 + 0x90))(4,0x40b);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      cVar32 = *pcVar12;
      if (cVar32 == '\x06') {
        *(undefined4 *)(this_00 + 0x4e0) = 1;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar32 == '\a') {
        *(undefined4 *)(this_00 + 0x4e0) = 0;
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (cVar32 != '\t') {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if ((*(int *)(this_00 + 0x4d0) != 0) && (*(int *)(this_00 + 0x4d0) != 2)) {
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    if (4999 < *(int *)(this_00 + 0x4d8)) {
      *(undefined4 *)(this_00 + 0x4d4) = 1;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1a:
    pcVar12 = *(char **)(iVar16 + 0x17);
    if (*pcVar12 == '\x02') {
      thunk_FUN_004ea530(this_00,(short)*(undefined4 *)(pcVar12 + 1),
                         (short)*(undefined4 *)(pcVar12 + 5),(short)*(undefined4 *)(pcVar12 + 9));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1e:
    pbVar26 = *(byte **)(iVar16 + 0x17);
    if (*pbVar26 == 0) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if (8 < *pbVar26) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((*(uint *)(this_00 + 0x24) == (uint)*(byte *)(*(int *)(this_00 + 0x10) + 0x112d)) &&
       ((iVar16 = *(int *)(this_00 + 0x5ac), iVar16 == 0x35 || ((0x53 < iVar16 && (iVar16 < 0x5b))))
       )) {
      uVar17 = thunk_FUN_004406c0((char)this_00[0x23d]);
      uVar17 = uVar17 & 0xff;
      if (uVar17 == 1) {
        iVar16 = *(int *)this_00;
        uVar21 = 0x208;
LAB_004bbfe9:
        (**(code **)(iVar16 + 0x90))(4,uVar21);
      }
      else if (uVar17 == 2) {
        (**(code **)(*(int *)this_00 + 0x90))(4,0x2d0);
      }
      else if (uVar17 == 3) {
        iVar16 = *(int *)this_00;
        uVar21 = 0x38b;
        goto LAB_004bbfe9;
      }
    }
    iVar16 = thunk_FUN_004c7860(this_00,(uint)*pbVar26,*(uint *)(pbVar26 + 1),
                                (int)*(short *)(pbVar26 + 5),0,1);
    if (iVar16 != 0) {
      thunk_FUN_004c7cc0(this_00,(uint)*pbVar26,*(uint *)(pbVar26 + 1),(int)*(short *)(pbVar26 + 5),
                         (uint)(*pbVar26 != 2),*(undefined4 *)(pbVar26 + 7),0,0xff,(char *)0x0);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x1f:
    if ((*(int *)(this_00 + 0x5ac) == 0x3a) && (**(char **)(iVar16 + 0x17) == '\x02')) {
      thunk_FUN_004d9b20((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((*(int *)(this_00 + 0x5ac) == 100) && (**(char **)(iVar16 + 0x17) == '\x02')) {
      thunk_FUN_004e4670((int)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x20:
    pbVar26 = *(byte **)(iVar16 + 0x17);
    if ((*(int *)(this_00 + 0x5ac) == 0x52) || (*(int *)(this_00 + 0x5ac) == 0x5f)) {
      if (*pbVar26 == 1) {
        thunk_FUN_004ebab0(this_00,(uint)*(ushort *)(pbVar26 + 1),*(int *)(pbVar26 + 3));
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      thunk_FUN_004eb6d0(this_00,(uint)*pbVar26,(uint)*(ushort *)(pbVar26 + 1),*(int *)(pbVar26 + 3)
                         ,(uint)*(ushort *)(pbVar26 + 7));
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x22:
    iVar16 = thunk_FUN_004e8030(*(int *)(this_00 + 0x5ac));
    if (iVar16 == 3) {
      thunk_FUN_004d7270((int *)this_00);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    thunk_FUN_004c7cc0(this_00,5,0,0,0,0xffffffff,0,0xff,(char *)0x0);
    g_currentExceptionFrame = local_c4.previous;
    return 0;
  case 0x23:
    puVar9 = *(uint **)(iVar16 + 0x17);
    uVar17 = puVar9[1];
    if (((((-1 < (int)uVar17) && ((int)uVar17 < (int)DAT_007fb240)) &&
         (uVar24 = puVar9[2], -1 < (int)uVar24)) &&
        (((int)uVar24 < (int)DAT_007fb242 && (uVar10 = puVar9[3], -1 < (int)uVar10)))) &&
       (((int)uVar10 < (int)DAT_007fb240 && ((uVar11 = *puVar9, 0x31 < uVar11 && (uVar11 < 0x74)))))
       ) {
      if (*(int *)(this_00 + 0x5ac) == 0x53) {
        thunk_FUN_004cdfd0(this_00,uVar11,uVar17,uVar24,uVar10);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      if (*(int *)(this_00 + 0x5ac) == 0x6c) {
        thunk_FUN_004e99e0(this_00,uVar17,uVar24,uVar10);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    break;
  case 0x27:
    iVar23 = *(int *)(this_00 + 0x5ac);
    if (iVar23 == 0x50) {
      thunk_FUN_004b6e30(this_00,(uint)**(byte **)(iVar16 + 0x17),
                         (uint)(*(byte **)(iVar16 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar23 == 0x34) && (**(char **)(iVar16 + 0x17) == '\x02')) {
      thunk_FUN_004de1e0(this_00,(uint)(byte)(*(char **)(iVar16 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    if ((iVar23 == 0x5b) && (**(char **)(iVar16 + 0x17) == '\x02')) {
      thunk_FUN_004de300(this_00,(uint)(byte)(*(char **)(iVar16 + 0x17))[1]);
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x28:
    if (**(char **)(iVar16 + 0x17) == '\0') {
      if ((*(int *)(this_00 + 0x245) == 0) || (*(int *)(this_00 + 0x245) == 5)) {
        SetState((TLOBaseTy *)this_00,2,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
    }
    else if (*(int *)(this_00 + 0x245) == 4) {
      iVar16 = thunk_FUN_004c7070(this_00,1);
      if (iVar16 != 0) {
        SetState((TLOBaseTy *)this_00,3,1);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      local_8 = (byte *)0x0;
      iVar16 = *(int *)(this_00 + 0x5b8) + -2;
      if (-1 < iVar16) {
        sVar15 = *(short *)(this_00 + 0x5b0);
        local_14 = CONCAT22((short)(bVar3 - 8 >> 0x10),sVar15);
        sVar6 = *(short *)(this_00 + 0x5b4);
        do {
          sVar14 = (short)iVar16;
          if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar6 < 0)) ||
              ((DAT_007fb242 <= sVar6 || (sVar14 < 0)))) || (DAT_007fb244 <= sVar14)) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar14 + (int)DAT_007fb240 * (int)sVar6 +
                             (int)sVar15) * 8);
          }
          if (iVar23 == 0) {
            if (((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
               ((sVar6 < 0 ||
                (((DAT_007fb242 <= sVar6 || (sVar14 < 0)) || (DAT_007fb244 <= sVar14)))))) {
              sVar14 = -1;
            }
            else {
              sVar14 = *(short *)(DAT_007fb280 +
                                 ((int)DAT_007fb27e * (int)sVar14 + (int)DAT_007fb278 * (int)sVar6 +
                                 (int)sVar15) * 2);
            }
            if (sVar14 == -1) {
              local_8 = (byte *)0x1;
              thunk_FUN_004c6c70(this_00,*(undefined4 *)(this_00 + 0x5b0),
                                 *(undefined4 *)(this_00 + 0x5b4),iVar16 + 1);
              break;
            }
          }
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
      }
      if (local_8 == (byte *)0x0) {
        sVar15 = *(short *)(this_00 + 0x5b0);
        sVar6 = *(short *)(this_00 + 0x5b4);
        if (((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
           ((sVar6 < 0 || ((DAT_007fb242 <= sVar6 || (DAT_007fb244 < 1)))))) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(DAT_007fb248 + ((int)DAT_007fb240 * (int)sVar6 + (int)sVar15) * 8);
        }
        bVar31 = false;
        if (iVar16 == 0) {
          if ((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) || (sVar6 < 0)) ||
             ((DAT_007fb242 <= sVar6 || (DAT_007fb244 < 1)))) {
            sVar15 = -1;
          }
          else {
            sVar15 = *(short *)(DAT_007fb280 + ((int)DAT_007fb278 * (int)sVar6 + (int)sVar15) * 2);
          }
          if (sVar15 == 0) {
            thunk_FUN_004c6c70(this_00,*(undefined4 *)(this_00 + 0x5b0),
                               *(undefined4 *)(this_00 + 0x5b4),0);
            bVar31 = true;
          }
        }
        if (!bVar31) {
          g_currentExceptionFrame = local_c4.previous;
          return 0;
        }
      }
      *(undefined4 *)(this_00 + 0x249) = 3;
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    break;
  case 0x2a:
    if (*(int *)(this_00 + 0x5ac) != 0x6d) {
      g_currentExceptionFrame = local_c4.previous;
      return 0;
    }
    switch(**(undefined1 **)(iVar16 + 0x17)) {
    case 0:
      if (*(int *)(this_00 + 0x4d0) != 0) {
        thunk_FUN_004dbcc0(this_00,0,*(int *)(this_00 + 0x4e0) + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 1:
      if (*(int *)(this_00 + 0x4d0) != 0) {
        thunk_FUN_004dbcc0(this_00,0,*(int *)(this_00 + 0x4e0) + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 2:
      if (*(int *)(this_00 + 0x4d4) != 0) {
        thunk_FUN_004dbcc0(this_00,1,*(int *)(this_00 + 0x4e4) + -5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 3:
      if (*(int *)(this_00 + 0x4d4) != 0) {
        thunk_FUN_004dbcc0(this_00,1,*(int *)(this_00 + 0x4e4) + 5);
        g_currentExceptionFrame = local_c4.previous;
        return 0;
      }
      break;
    case 4:
      iVar16 = 0;
      goto LAB_004bd06b;
    case 5:
      iVar16 = 1;
LAB_004bd06b:
      thunk_FUN_004dbf30(this_00,iVar16);
    }
  }
  g_currentExceptionFrame = local_c4.previous;
  return 0;
}

