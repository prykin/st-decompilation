
void __thiscall STGroupBoatC::ReMakePatrolPoints(STGroupBoatC *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  uint *puVar3;
  short *psVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  int iStack_32;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  int iStack_26;
  undefined4 uStack_22;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  int iStack_14;
  STGroupBoatC *pSStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uVar1 = *(ushort *)(this + 0x27);
  if (uVar1 < 10) {
    *(undefined4 *)(this + 0x242) = 2;
  }
  else if (uVar1 < 0x28) {
    *(undefined4 *)(this + 0x242) = 4;
  }
  else if (uVar1 < 100) {
    *(undefined4 *)(this + 0x242) = 6;
  }
  else if (uVar1 < 0xf0) {
    *(undefined4 *)(this + 0x242) = 8;
  }
  else {
    *(undefined4 *)(this + 0x242) = 10;
  }
  pSStack_10 = this;
  puVar3 = Library::DKW::TBL::FUN_006ae290
                     ((uint *)0x0,*(uint *)(*(int *)(this + 0x226) + 0xc),0xe,1);
  iVar7 = *(int *)(this + 0x226);
  uVar9 = 0;
  if (0 < *(int *)(iVar7 + 0xc)) {
    do {
      FUN_006acc70(iVar7,uVar9,(undefined4 *)&sStack_1c);
      sStack_2c = sStack_1c;
      sStack_2a = sStack_1a;
      uStack_22 = 0;
      iStack_26 = 0;
      sStack_28 = sStack_18;
      Library::DKW::TBL::FUN_006ae140(puVar3,uVar9,(undefined4 *)&sStack_2c);
      iVar7 = *(int *)(this + 0x226);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(iVar7 + 0xc));
  }
  uVar9 = puVar3[3];
  if (1 < uVar9) {
    uStack_8 = 0;
    if (uVar9 != 1 && -1 < (int)(uVar9 - 1)) {
      uStack_c = 1;
      do {
        FUN_006acc70((int)puVar3,uStack_8,(undefined4 *)&sStack_2c);
        FUN_006acc70((int)puVar3,uStack_c,(undefined4 *)&sStack_3c);
        psVar4 = Library::DKW::WAY::FUN_006a9190
                           ((int)DAT_007fb280,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                            (short *)(int)sStack_2c,(short *)(int)sStack_2a,(short *)(int)sStack_28,
                            (short *)(int)sStack_3c,(short *)(int)sStack_3a,(short *)(int)sStack_38,
                            0,&iStack_14,(undefined4 *)0x0,(short *)0x0,0);
        if (psVar4 == (short *)0x0) {
          uVar9 = (int)DAT_007fb278 * (int)DAT_007fb27a * (int)DAT_007fb27c;
          puVar8 = DAT_007fb280;
          puVar10 = DAT_007fb238;
          for (uVar6 = (uVar9 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar9 = uVar9 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                       (int)sStack_2c,(int)sStack_2a,(int)sStack_28,(int)sStack_3c,(int)sStack_3a,
                       (int)sStack_38);
          iVar7 = *(short *)((int)DAT_007fb238 +
                            ((int)DAT_007fb27e * (int)sStack_38 + (int)DAT_007fb278 * (int)sStack_3a
                            + (int)sStack_3c) * 2) + -1;
          this = pSStack_10;
        }
        else {
          iVar7 = (int)psVar4[3];
          FUN_006a5e90((undefined4 *)psVar4);
        }
        uVar9 = uStack_c;
        iVar7 = iVar7 / 3;
        if (iVar7 < *(int *)(this + 0x242)) {
          FUN_006b0c70((int)puVar3,uStack_c);
          uStack_8 = uStack_8 - 1;
          uStack_c = uVar9 - 1;
        }
        else {
          iStack_32 = iVar7;
          iStack_26 = iVar7;
          Library::DKW::TBL::FUN_006ae140(puVar3,uStack_8,(undefined4 *)&sStack_2c);
          Library::DKW::TBL::FUN_006ae140(puVar3,uStack_c,(undefined4 *)&sStack_3c);
        }
        uStack_8 = uStack_8 + 1;
        uStack_c = uStack_c + 1;
      } while ((int)uStack_8 < (int)(puVar3[3] - 1));
    }
    if (*(uint *)(this + 0x232) != 0xffffffff) {
      FUN_006acc70(*(int *)(this + 0x22a),*(uint *)(this + 0x232),(undefined4 *)&sStack_4c);
      iVar7 = *(int *)(this + 0x226);
      uVar9 = 0;
      uStack_c = 0xffffffff;
      if (0 < *(int *)(iVar7 + 0xc)) {
        do {
          FUN_006acc70(iVar7,uVar9,(undefined4 *)&sStack_1c);
          if (((sStack_1c == sStack_4c) && (sStack_1a == sStack_4a)) && (sStack_18 == sStack_48)) {
            uStack_c = uVar9;
            if (uVar9 != 0xffffffff) goto LAB_004a77bb;
            break;
          }
          iVar7 = *(int *)(this + 0x226);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(iVar7 + 0xc));
      }
      iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x15ed,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ReMakePatrolPoints_007ac450);
      if (iVar7 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_004a77bb:
      *(undefined4 *)(this + 0x232) = 0xffffffff;
      uStack_8 = uStack_c;
      if (*(int *)(this + 0x236) == 1) {
        iVar7 = *(int *)(this + 0x226);
        if ((int)uStack_c < *(int *)(iVar7 + 0xc)) {
          do {
            FUN_006acc70(iVar7,uStack_8,(undefined4 *)&sStack_1c);
            uVar9 = 0;
            if (0 < (int)puVar3[3]) {
              do {
                FUN_006acc70((int)puVar3,uVar9,(undefined4 *)&sStack_2c);
                if (((sStack_1c == sStack_2c) && (sStack_1a == sStack_2a)) &&
                   (sStack_18 == sStack_28)) {
                  *(uint *)(this + 0x232) = uVar9;
                  break;
                }
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)puVar3[3]);
            }
            if (*(int *)(this + 0x232) != -1) break;
            iVar7 = *(int *)(this + 0x226);
            uStack_8 = uStack_8 + 1;
          } while ((int)uStack_8 < *(int *)(iVar7 + 0xc));
        }
        if (*(int *)(this + 0x232) != -1) goto LAB_004a792e;
        *(uint *)(this + 0x232) = puVar3[3] - 1;
      }
      else {
        for (; -1 < (int)uStack_8; uStack_8 = uStack_8 - 1) {
          FUN_006acc70(*(int *)(this + 0x226),uStack_8,(undefined4 *)&sStack_1c);
          uVar9 = 0;
          if (0 < (int)puVar3[3]) {
            do {
              FUN_006acc70((int)puVar3,uVar9,(undefined4 *)&sStack_2c);
              if (((sStack_1c == sStack_2c) && (sStack_1a == sStack_2a)) && (sStack_18 == sStack_28)
                 ) {
                *(uint *)(this + 0x232) = uVar9;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)puVar3[3]);
          }
          if (*(int *)(this + 0x232) != -1) break;
        }
        if (*(int *)(this + 0x232) != -1) goto LAB_004a792e;
        *(undefined4 *)(this + 0x232) = 0;
      }
      if ((*(int *)(this + 0x232) == -1) &&
         (iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x160e,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__ReMakePatrolPoints_007ac418),
         iVar7 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_004a792e;
    }
  }
  *(undefined4 *)(this + 0x232) = 0;
LAB_004a792e:
  if (*(byte **)(this + 0x22a) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this + 0x22a));
    *(undefined4 *)(this + 0x22a) = 0;
  }
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,puVar3[3],0xe,1);
  *(uint **)(this + 0x22a) = puVar5;
  uVar9 = 0;
  if (0 < (int)puVar3[3]) {
    do {
      FUN_006acc70((int)puVar3,uVar9,(undefined4 *)&sStack_2c);
      Library::DKW::TBL::FUN_006ae140(*(uint **)(this + 0x22a),uVar9,(undefined4 *)&sStack_2c);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)puVar3[3]);
  }
  FUN_006ae110((byte *)puVar3);
  return;
}

