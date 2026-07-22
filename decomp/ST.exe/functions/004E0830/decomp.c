
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __fastcall FUN_004e0830(TLOBaseTy *param_1)

{
  TLOBaseTy_field_05ACState TVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TLOBaseTyVTable *pTVar9;
  STResourceC *this;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  char playerId;
  undefined4 uVar19;
  undefined4 uVar20;

  if (param_1->field_04D0 == CASE_1) {
    if (*(int *)&param_1->field_01F5->field_0x1a4 == *(int *)&param_1->field_01F5->field_0x1a0) {
      iVar4 = param_1->field_04E8;
      if (iVar4 == 1) {
        if (param_1->field_04E4 == 0) {
          param_1->field_04E8 = 3;
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
switchD_004e08b2_caseD_39:
            pTVar9 = param_1->vtable;
            iVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
            (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2e9);
            break;
          case CASE_3B:
switchD_004e08b2_caseD_3b:
            pTVar9 = param_1->vtable;
            iVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
            (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2f6);
            break;
          case CASE_4F:
switchD_004e08b2_caseD_4f:
            pTVar9 = param_1->vtable;
            iVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
            (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff32) + 0x34f);
            break;
          case CASE_5E:
switchD_004e08b2_caseD_5e:
            (*param_1->vtable->vfunc_90)(3,0x3aa);
            break;
          case CASE_60:
            (*param_1->vtable->vfunc_90)(3,0x3b9);
          }
        }
        else {
          param_1->field_04E8 = 2;
LAB_004e0a1f:
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
        }
      }
      else if (iVar4 == 2) {
        if (param_1->field_04E4 == 0) {
          param_1->field_04E8 = 3;
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
            goto switchD_004e08b2_caseD_39;
          case CASE_3B:
            goto switchD_004e08b2_caseD_3b;
          case CASE_4F:
            goto switchD_004e08b2_caseD_4f;
          case CASE_52:
            pTVar9 = param_1->vtable;
            iVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
            (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35c);
            break;
          case CASE_5E:
            goto switchD_004e08b2_caseD_5e;
          case CASE_60:
            (*param_1->vtable->vfunc_90)(3,0x3b9);
          }
        }
        else {
          TVar1 = param_1->field_05AC;
          if (((TVar1 == CASE_3B) || (TVar1 == CASE_60)) || (TVar1 == CASE_52)) goto LAB_004e0a1f;
        }
      }
      else if (iVar4 == 3) {
        param_1->field_04E8 = 0;
        goto LAB_004e0a1f;
      }
    }
    if (param_1->field_04E4 == 0) {
      if (param_1->field_05AC == CASE_4F) {
        iVar4 = GetPlayerRaceId(*(char *)&param_1->field_0024);
        iVar5 = 0xe;
        if ((char)iVar4 != '\x02') goto LAB_004e0a4f;
      }
      else {
LAB_004e0a4f:
        iVar5 = 0xc;
      }
      if ((*(int *)(&param_1->field_01F5->field_0x18 + iVar5 * 0x24) ==
           *(int *)(&param_1->field_01F5->field_0x14 + iVar5 * 0x24)) && (param_1->field_04E8 == 0))
      {
        param_1->field_04D0 = CASE_0;
        TLOBaseTy::RotateSpr(param_1,1);
      }
    }
  }
  if ((param_1->field_05AC != CASE_52) && (param_1->field_05AC != CASE_5F))
  goto switchD_004e0aad_default;
  switch(param_1->field_04D0) {
  case CASE_2:
    iVar5 = param_1->field_05B4;
    iVar4 = iVar5 + 2;
    if (iVar5 < iVar4) {
      iVar2 = param_1->field_05B0;
      do {
        if (iVar2 < iVar2 + 2) {
          sVar11 = *(short *)&param_1->field_05B8 + 1;
          iVar6 = iVar2;
          do {
            sVar3 = (short)iVar6;
            if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               ((sVar10 = (short)iVar5, sVar10 < 0 ||
                ((((g_worldGrid.sizeY <= sVar10 || (sVar11 < 0)) || (g_worldGrid.sizeZ <= sVar11))
                 || (g_worldGrid.cells
                     [(int)sVar10 * (int)g_worldGrid.sizeX +
                      (int)g_worldGrid.planeStride * (int)sVar11 + (int)sVar3].objects[0] ==
                     (STWorldObject *)0x0)))))) {
              param_1->field_04F0 = iVar6;
              param_1->field_04EC = 1;
              param_1->field_04F4 = iVar5;
              param_1->field_04F8 = param_1->field_05B8 + 1;
              if (DAT_00800bcc == (void *)0x0) {
                thunk_FUN_004cf430();
              }
              thunk_FUN_004d0970(DAT_00800bcc,param_1->field_04F0,param_1->field_04F4,
                                 param_1->field_04F8);
              param_1->field_04D0 = CASE_3;
              param_1->field_04FC = param_1->field_05B0 * 0xc9 + 0xdc;
              param_1->field_0500 = param_1->field_05B4 * 0xc9 + 100;
              param_1->field_0504 = param_1->field_05B8 * 0xc9 + -0x28;
              thunk_FUN_004ec0f0((AnonShape_004EC0F0_C371FA68 *)param_1);
              TLOBaseTy::RotateSpr(param_1,0);
              if (param_1->field_05AC == CASE_52) {
                pTVar9 = param_1->vtable;
                iVar4 = GetPlayerRaceId(*(char *)&param_1->field_023D);
                (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35e);
                goto switchD_004e0aad_default;
              }
              if (param_1->field_05AC != CASE_5F) goto switchD_004e0aad_default;
              pTVar9 = param_1->vtable;
              uVar20 = 0x3b1;
              goto LAB_004e0f14;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2 + 2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    break;
  case CASE_3:
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (((int)param_1->field_01F5->field_020C <= iVar4) && (param_1->field_04DC != 0)) {
      param_1->field_0508 = 0;
      if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
        thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      }
      param_1->field_04D0 = CASE_4;
      param_1->field_0510 = 0;
      param_1->field_0514 = g_playSystem_00802A38->field_00E4;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_4:
    if (param_1->field_0510 < 0x1e) break;
    thunk_FUN_004d0a80(DAT_00800bcc,param_1->field_04F0,param_1->field_04F4,param_1->field_04F8);
    uVar20 = param_1->field_0018;
    uVar17 = param_1->field_04F8;
    uVar16 = param_1->field_04F4;
    uVar19 = 0x5a;
    uVar15 = param_1->field_04F0;
    pcVar18 = (char *)0x0;
    uVar14 = (undefined2)param_1->field_0504;
    uVar13 = (undefined2)param_1->field_0500;
    uVar12 = (undefined2)param_1->field_04FC;
    iVar4 = param_1->field_04E0;
    uVar8 = param_1->field_04DC;
    param_1->field_04EC = 0;
    uVar7 = GetPlayerRaceId(*(char *)&param_1->field_0024);
    thunk_FUN_005fd1b0(param_1->field_0024,uVar7 & 0xff,uVar8,iVar4,uVar12,uVar13,uVar14,uVar15,
                       uVar16,uVar17,pcVar18,uVar20,uVar19);
    if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      uVar8 = GetPlayerRaceId(*(char *)&param_1->field_0024);
      uVar8 = uVar8 & 0xff;
      if (uVar8 == 1) {
        pTVar9 = param_1->vtable;
        uVar20 = 0x6b;
LAB_004e0de2:
        (*pTVar9->vfunc_90)(6,uVar20);
      }
      else if (uVar8 == 2) {
        (*param_1->vtable->vfunc_90)(6,0x6c);
      }
      else if (uVar8 == 3) {
        pTVar9 = param_1->vtable;
        uVar20 = 0x6d;
        goto LAB_004e0de2;
      }
    }
    param_1->field_04D0 = CASE_5;
    thunk_FUN_004cbf70((int)param_1);
    TLOBaseTy::RotateSpr(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) {
joined_r0x004e0f0b:
      if (TVar1 == CASE_5F) {
        pTVar9 = param_1->vtable;
        uVar20 = 0x3b2;
LAB_004e0f14:
        (*pTVar9->vfunc_90)(3,uVar20);
      }
      break;
    }
    playerId = *(char *)&param_1->field_023D;
    pTVar9 = param_1->vtable;
    goto LAB_004e0e15;
  case CASE_5:
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar4 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_0;
      param_1->field_04DC = 0;
      param_1->field_0508 = 0;
      thunk_FUN_004cbf70((int)param_1);
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_6:
    if (((param_1->field_04FC != param_1->field_05B0 * 0xc9 + 0xdc) ||
        (param_1->field_0500 != param_1->field_05B4 * 0xc9 + 100)) ||
       (param_1->field_0504 != param_1->field_05B8 * 0xc9 + -0x28)) break;
    param_1->field_04D0 = CASE_5;
    TLOBaseTy::RotateSpr(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) goto joined_r0x004e0f0b;
    playerId = *(char *)&param_1->field_023D;
    pTVar9 = param_1->vtable;
LAB_004e0e15:
    iVar4 = GetPlayerRaceId(playerId);
    (*pTVar9->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35f);
  }
switchD_004e0aad_default:
  if ((param_1->field_05AC == 0x61) && (param_1->field_04E0 != 0)) {
    iVar4 = thunk_FUN_004e4180(param_1->field_0024);
    iVar5 = thunk_FUN_004e41c0(param_1->field_0024);
    if ((iVar5 < iVar4) &&
       (param_1->field_0528 + param_1->field_0524 <= g_playSystem_00802A38->field_00E4)) {
      param_1->field_0524 = g_playSystem_00802A38->field_00E4;
      if (DAT_007be8c4 <= param_1->field_0518) {
        thunk_FUN_004e1310((AnonShape_004E1310_4FD56DAE *)param_1);
      }
      iVar4 = param_1->field_04E0 + -5;
      param_1->field_04E0 = iVar4;
      if (iVar4 < 0) {
        param_1->field_04E0 = 0;
      }
      iVar4 = param_1->field_0518 + 5;
      param_1->field_0518 = iVar4;
      if (DAT_007be8c4 < iVar4) {
        param_1->field_0518 = DAT_007be8c4;
      }
      this = thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
      if (this != (STResourceC *)0x0) {
        STResourceC::SetResource(this,param_1->field_04E0,1);
      }
      if ((param_1->field_04E0 == 0) &&
         (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D)) {
        (*param_1->vtable->vfunc_90)(4,0x3bd);
      }
    }
  }
  return 0;
}

