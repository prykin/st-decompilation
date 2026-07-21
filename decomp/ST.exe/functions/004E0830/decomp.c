
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __fastcall FUN_004e0830(TLOBaseTy *param_1)

{
  TLOBaseTy_field_05ACState TVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TLOBaseTyVTable *pTVar8;
  STResourceC *this;
  short sVar9;
  short sVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  char playerId;
  undefined4 uVar20;
  undefined4 uVar21;

  if (param_1->field_04D0 == CASE_1) {
    if (*(int *)&param_1->field_01F5->field_0x1a4 == *(int *)&param_1->field_01F5->field_0x1a0) {
      iVar4 = *(int *)&param_1->field_0x4e8;
      if (iVar4 == 1) {
        if (*(int *)&param_1->field_0x4e4 == 0) {
          *(undefined4 *)&param_1->field_0x4e8 = 3;
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
switchD_004e08b2_caseD_39:
            pTVar8 = param_1->vtable;
            iVar4 = GetPlayerRaceId(param_1->field_023D);
            (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2e9);
            break;
          case CASE_3B:
switchD_004e08b2_caseD_3b:
            pTVar8 = param_1->vtable;
            iVar4 = GetPlayerRaceId(param_1->field_023D);
            (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3a) + 0x2f6);
            break;
          case CASE_4F:
switchD_004e08b2_caseD_4f:
            pTVar8 = param_1->vtable;
            iVar4 = GetPlayerRaceId(param_1->field_023D);
            (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff32) + 0x34f);
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
          *(undefined4 *)&param_1->field_0x4e8 = 2;
LAB_004e0a1f:
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
        }
      }
      else if (iVar4 == 2) {
        if (*(int *)&param_1->field_0x4e4 == 0) {
          *(undefined4 *)&param_1->field_0x4e8 = 3;
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
            goto switchD_004e08b2_caseD_39;
          case CASE_3B:
            goto switchD_004e08b2_caseD_3b;
          case CASE_4F:
            goto switchD_004e08b2_caseD_4f;
          case CASE_52:
            pTVar8 = param_1->vtable;
            iVar4 = GetPlayerRaceId(param_1->field_023D);
            (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35c);
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
        *(undefined4 *)&param_1->field_0x4e8 = 0;
        goto LAB_004e0a1f;
      }
    }
    if (*(int *)&param_1->field_0x4e4 == 0) {
      if (param_1->field_05AC == CASE_4F) {
        iVar4 = GetPlayerRaceId(param_1->field_0x24);
        iVar5 = 0xe;
        if ((char)iVar4 != '\x02') goto LAB_004e0a4f;
      }
      else {
LAB_004e0a4f:
        iVar5 = 0xc;
      }
      if ((*(int *)(&param_1->field_01F5->field_0x18 + iVar5 * 0x24) ==
           *(int *)(&param_1->field_01F5->field_0x14 + iVar5 * 0x24)) &&
         (*(int *)&param_1->field_0x4e8 == 0)) {
        param_1->field_04D0 = CASE_0;
        TLOBaseTy::RotateSpr(param_1,1);
      }
    }
  }
  if ((param_1->field_05AC != CASE_52) && (param_1->field_05AC != CASE_5F))
  goto switchD_004e0aad_default;
  switch(param_1->field_04D0) {
  case CASE_2:
    iVar5 = *(int *)&param_1->field_0x5b4;
    iVar4 = iVar5 + 2;
    if (iVar5 < iVar4) {
      iVar2 = *(int *)&param_1->field_0x5b0;
      do {
        if (iVar2 < iVar2 + 2) {
          sVar10 = *(short *)&param_1->field_0x5b8 + 1;
          iVar6 = iVar2;
          do {
            sVar3 = (short)iVar6;
            if (((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               ((sVar9 = (short)iVar5, sVar9 < 0 ||
                ((((g_worldGrid.sizeY <= sVar9 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)) ||
                 (g_worldGrid.cells
                  [(int)sVar9 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar10
                   + (int)sVar3].objects[0] == (STWorldObject *)0x0)))))) {
              *(int *)&param_1->field_0x4f0 = iVar6;
              *(undefined4 *)&param_1->field_0x4ec = 1;
              *(int *)&param_1->field_0x4f4 = iVar5;
              *(int *)&param_1->field_0x4f8 = *(int *)&param_1->field_0x5b8 + 1;
              if (DAT_00800bcc == (void *)0x0) {
                thunk_FUN_004cf430();
              }
              thunk_FUN_004d0970(DAT_00800bcc,*(undefined4 *)&param_1->field_0x4f0,
                                 *(undefined4 *)&param_1->field_0x4f4,
                                 *(undefined4 *)&param_1->field_0x4f8);
              param_1->field_04D0 = CASE_3;
              *(int *)&param_1->field_0x4fc = *(int *)&param_1->field_0x5b0 * 0xc9 + 0xdc;
              *(int *)&param_1->field_0x500 = *(int *)&param_1->field_0x5b4 * 0xc9 + 100;
              *(int *)&param_1->field_0x504 = *(int *)&param_1->field_0x5b8 * 0xc9 + -0x28;
              thunk_FUN_004ec0f0((AnonShape_004EC0F0_C371FA68 *)param_1);
              TLOBaseTy::RotateSpr(param_1,0);
              if (param_1->field_05AC == CASE_52) {
                pTVar8 = param_1->vtable;
                iVar4 = GetPlayerRaceId(param_1->field_023D);
                (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35e);
                goto switchD_004e0aad_default;
              }
              if (param_1->field_05AC != CASE_5F) goto switchD_004e0aad_default;
              pTVar8 = param_1->vtable;
              uVar21 = 0x3b1;
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
    if (((int)param_1->field_01F5->field_020C <= iVar4) && (*(int *)&param_1->field_0x4dc != 0)) {
      *(undefined4 *)&param_1->field_0x508 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
        thunk_FUN_0052af50(0,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
      }
      param_1->field_04D0 = CASE_4;
      *(undefined4 *)&param_1->field_0x510 = 0;
      *(undefined4 *)&param_1->field_0x514 = PTR_00802a38->field_00E4;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_4:
    if (*(int *)&param_1->field_0x510 < 0x1e) break;
    thunk_FUN_004d0a80(DAT_00800bcc,*(int *)&param_1->field_0x4f0,*(int *)&param_1->field_0x4f4,
                       *(int *)&param_1->field_0x4f8);
    uVar21 = *(undefined4 *)&param_1->field_0x18;
    uVar18 = *(undefined4 *)&param_1->field_0x4f8;
    uVar17 = *(undefined4 *)&param_1->field_0x4f4;
    uVar20 = 0x5a;
    uVar16 = *(undefined4 *)&param_1->field_0x4f0;
    pcVar19 = (char *)0x0;
    uVar15 = (undefined2)*(undefined4 *)&param_1->field_0x504;
    uVar14 = (undefined2)*(undefined4 *)&param_1->field_0x500;
    uVar13 = (undefined2)*(undefined4 *)&param_1->field_0x4fc;
    uVar12 = *(undefined4 *)&param_1->field_0x4e0;
    uVar11 = *(undefined4 *)&param_1->field_0x4dc;
    *(undefined4 *)&param_1->field_0x4ec = 0;
    uVar7 = GetPlayerRaceId(param_1->field_0x24);
    thunk_FUN_005fd1b0(*(undefined4 *)&param_1->field_0x24,uVar7 & 0xff,uVar11,uVar12,uVar13,uVar14,
                       uVar15,uVar16,uVar17,uVar18,pcVar19,uVar21,uVar20);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
      thunk_FUN_0052af50(0,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
      uVar7 = GetPlayerRaceId(param_1->field_0x24);
      uVar7 = uVar7 & 0xff;
      if (uVar7 == 1) {
        pTVar8 = param_1->vtable;
        uVar21 = 0x6b;
LAB_004e0de2:
        (*pTVar8->vfunc_90)(6,uVar21);
      }
      else if (uVar7 == 2) {
        (*param_1->vtable->vfunc_90)(6,0x6c);
      }
      else if (uVar7 == 3) {
        pTVar8 = param_1->vtable;
        uVar21 = 0x6d;
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
        pTVar8 = param_1->vtable;
        uVar21 = 0x3b2;
LAB_004e0f14:
        (*pTVar8->vfunc_90)(3,uVar21);
      }
      break;
    }
    playerId = param_1->field_023D;
    pTVar8 = param_1->vtable;
    goto LAB_004e0e15;
  case CASE_5:
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar4 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_0;
      *(undefined4 *)&param_1->field_0x4dc = 0;
      *(undefined4 *)&param_1->field_0x508 = 0;
      thunk_FUN_004cbf70((int)param_1);
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_6:
    if (((*(int *)&param_1->field_0x4fc != *(int *)&param_1->field_0x5b0 * 0xc9 + 0xdc) ||
        (*(int *)&param_1->field_0x500 != *(int *)&param_1->field_0x5b4 * 0xc9 + 100)) ||
       (*(int *)&param_1->field_0x504 != *(int *)&param_1->field_0x5b8 * 0xc9 + -0x28)) break;
    param_1->field_04D0 = CASE_5;
    TLOBaseTy::RotateSpr(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) goto joined_r0x004e0f0b;
    playerId = param_1->field_023D;
    pTVar8 = param_1->vtable;
LAB_004e0e15:
    iVar4 = GetPlayerRaceId(playerId);
    (*pTVar8->vfunc_90)(3,(-(uint)((char)iVar4 != '\x02') & 0xffffff3b) + 0x35f);
  }
switchD_004e0aad_default:
  if ((param_1->field_05AC == 0x61) && (*(int *)&param_1->field_0x4e0 != 0)) {
    iVar4 = thunk_FUN_004e4180(*(int *)&param_1->field_0x24);
    iVar5 = thunk_FUN_004e41c0(*(int *)&param_1->field_0x24);
    if ((iVar5 < iVar4) &&
       ((uint)(*(int *)&param_1->field_0x528 + *(int *)&param_1->field_0x524) <=
        (uint)PTR_00802a38->field_00E4)) {
      *(undefined4 *)&param_1->field_0x524 = PTR_00802a38->field_00E4;
      if (DAT_007be8c4 <= *(int *)&param_1->field_0x518) {
        thunk_FUN_004e1310((AnonShape_004E1310_4FD56DAE *)param_1);
      }
      iVar4 = *(int *)&param_1->field_0x4e0 + -5;
      *(int *)&param_1->field_0x4e0 = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)&param_1->field_0x4e0 = 0;
      }
      iVar4 = *(int *)&param_1->field_0x518 + 5;
      *(int *)&param_1->field_0x518 = iVar4;
      if (DAT_007be8c4 < iVar4) {
        *(int *)&param_1->field_0x518 = DAT_007be8c4;
      }
      this = thunk_FUN_004d85e0(*(int *)&param_1->field_0x5b0,*(int *)&param_1->field_0x5b4,
                                *(int *)&param_1->field_0x5b8);
      if (this != (STResourceC *)0x0) {
        STResourceC::SetResource(this,*(int *)&param_1->field_0x4e0,1);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)&param_1->field_0x4e0 == 0) &&
         (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d))) {
        (*param_1->vtable->vfunc_90)(4,0x3bd);
      }
    }
  }
  return 0;
}

