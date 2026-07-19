
uint __thiscall STGroupBoatC::GrpPatrol(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  void *pvVar5;
  uint *puVar6;
  STBoatC *this_00;
  int iVar7;
  undefined4 extraout_ECX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 *puVar12;
  int unaff_EDI;
  STGroupBoatC *pSVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uStack_6c;
  uint auStack_68 [3];
  undefined4 uStack_5a;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  undefined4 uStack_44;
  uint uStack_40;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  int iStack_34;
  uint *puStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 *puStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_1c = *(int *)(*(int *)(this + 0x29) + 0xc);
  if ((param_1 != 0) && (param_1 != 1)) {
    if (0 < *(int *)(this + 0x23e)) {
      *(int *)(this + 0x23e) = *(int *)(this + 0x23e) + 1;
    }
    iVar3 = thunk_FUN_004a7e30(this,0);
    return -(uint)(iVar3 != 2) & 2;
  }
  pSVar13 = this + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar13 = 0;
    pSVar13 = pSVar13 + 4;
  }
  *(undefined4 *)(this + 0x65) = 0;
  if (*(byte **)(this + 0x226) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this + 0x226));
    *(undefined4 *)(this + 0x226) = 0;
  }
  if (*(byte **)(this + 0x22a) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this + 0x22a));
    *(undefined4 *)(this + 0x22a) = 0;
  }
  if (*(byte **)(this + 0x22e) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this + 0x22e));
    *(undefined4 *)(this + 0x22e) = 0;
  }
  *(undefined4 *)(this + 0x232) = 0xffffffff;
  *(undefined4 *)(this + 0x236) = 1;
  *(undefined4 *)(this + 0x23e) = 0;
  *(undefined4 *)(this + 0x23a) = 0;
  *(undefined4 *)(this + 0x242) = 0;
  *(undefined4 *)(this + 0x246) = *(undefined4 *)(this + 0x107);
  uStack_2c = *(uint *)(*(byte **)(this + 0x103) + 0xc);
  uStack_28 = uStack_2c;
  if ((int)uStack_2c < 1) {
    FUN_006ae110(*(byte **)(this + 0x103));
    *(undefined4 *)(this + 0x103) = 0;
    return 0;
  }
  uVar10 = 0;
  iVar3 = -30000;
  puStack_30 = (uint *)0x0;
  iStack_c = 30000;
  iStack_8 = 30000;
  puStack_24 = (undefined4 *)0xffff8ad0;
  if (0 < (int)uStack_2c) {
    do {
      if ((uVar10 < uStack_2c) &&
         (psVar4 = (short *)(*(int *)(*(int *)(this + 0x103) + 8) * uVar10 +
                            *(int *)(*(int *)(this + 0x103) + 0x1c)), psVar4 != (short *)0x0)) {
        iVar7 = (int)*psVar4;
        if (iVar7 < iStack_c) {
          iStack_c = iVar7;
        }
        if ((int)puStack_24 < iVar7) {
          puStack_24 = (undefined4 *)iVar7;
        }
        iVar7 = (int)psVar4[1];
        if (iVar7 < iStack_8) {
          iStack_8 = iVar7;
        }
        if (iVar3 < iVar7) {
          iVar3 = iVar7;
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_2c);
  }
  uStack_20 = 0;
  if (0 < iStack_1c) {
    do {
      FUN_006acc70(*(int *)(this + 0x29),uStack_20,&uStack_18);
      if ((short)uStack_18 != -1) {
        pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_ECX >> 8),this[0x24]),uStack_18,1
                                   );
        if (pvVar5 == (void *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x77d);
        }
        thunk_FUN_004162f0(pvVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&iStack_10,
                           (undefined2 *)&iStack_14);
        iVar7 = (int)param_1._2_2_;
        if (iVar7 < iStack_c) {
          iStack_c = iVar7;
        }
        if ((int)puStack_24 < iVar7) {
          puStack_24 = (undefined4 *)iVar7;
        }
        iVar7 = (int)(short)iStack_10;
        if (iVar7 < iStack_8) {
          iStack_8 = iVar7;
        }
        if (iVar3 < iVar7) {
          iVar3 = iVar7;
        }
      }
      uStack_20 = uStack_20 + 1;
    } while ((int)uStack_20 < iStack_1c);
  }
  iStack_c = iStack_c + -10;
  if (iStack_c < 0) {
    iStack_c = 0;
  }
  iVar7 = iStack_c;
  iStack_8 = iStack_8 + -10;
  if (iStack_8 < 0) {
    iStack_8 = 0;
  }
  iVar14 = (int)DAT_007fb278;
  iVar8 = (int)puStack_24 + 10;
  if (iVar14 <= iVar8) {
    iVar8 = iVar14 + -1;
  }
  iVar3 = iVar3 + 10;
  if (DAT_007fb27a <= iVar3) {
    iVar3 = DAT_007fb27a + -1;
  }
  uStack_2c = (iVar8 - iStack_c) + 1;
  uStack_20 = (iVar3 - iStack_8) + 1;
  iStack_34 = uStack_20 * uStack_2c;
  iStack_14 = 0;
  do {
    iStack_10 = 0;
    puVar11 = (undefined4 *)
              ((int)DAT_007fb280 +
              (iVar14 * iStack_8 + iStack_c + (int)DAT_007fb27e * (int)(short)iStack_14) * 2);
    puStack_24 = (undefined4 *)((int)DAT_007fb238 + (short)iStack_14 * iStack_34 * 2);
    if (0 < (int)uStack_20) {
      do {
        puVar12 = puVar11;
        puVar15 = puStack_24;
        for (uVar10 = (uStack_2c & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar10 = uStack_2c * 2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        iStack_10 = iStack_10 + 1;
        iVar14 = (int)DAT_007fb278;
        puStack_24 = (undefined4 *)((int)puStack_24 + uStack_2c * 2);
        puVar11 = (undefined4 *)((int)puVar11 + iVar14 * 2);
      } while ((int)(short)iStack_10 < (int)uStack_20);
    }
    iStack_14 = iStack_14 + 1;
  } while ((short)iStack_14 < 5);
  if (*(int *)(*(int *)(this + 0x103) + 0xc) == 0) {
    psVar4 = (short *)0x0;
  }
  else {
    psVar4 = *(short **)(*(int *)(this + 0x103) + 0x1c);
  }
  FUN_006ab090((int)DAT_007fb238,uStack_2c,uStack_20,5,*psVar4 - iStack_c,psVar4[1] - iStack_8,
               (int)psVar4[2],-1,-1,-1);
  uVar10 = 1;
  if (1 < (int)uStack_28) {
    iStack_34 = *(int *)(this + 0x103);
    uStack_2c = *(uint *)(iStack_34 + 0xc);
    do {
      if (uVar10 < uStack_2c) {
        psVar4 = (short *)(*(int *)(iStack_34 + 8) * uVar10 + *(int *)(iStack_34 + 0x1c));
      }
      else {
        psVar4 = (short *)0x0;
      }
      iVar7 = iStack_c;
      if (*(short *)((int)DAT_007fb238 +
                    (((psVar4[1] - iStack_8) * (int)DAT_007fb278 +
                      (int)psVar4[2] * (int)DAT_007fb27e + (int)*psVar4) - iStack_c) * 2) < 1) {
        puStack_30 = (uint *)0x1;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uStack_28);
  }
  uStack_20 = 0;
  if (0 < iStack_1c) {
    do {
      uVar10 = uStack_20;
      FUN_006acc70(*(int *)(this + 0x29),uStack_20,&uStack_18);
      if ((short)uStack_18 != -1) {
        pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                   (DAT_007fa174,
                                    CONCAT31((int3)((uint)extraout_EDX >> 8),this[0x24]),uStack_18,1
                                   );
        if (pvVar5 == (void *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7a7);
        }
        thunk_FUN_004162f0(pvVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&iStack_10,
                           (undefined2 *)&iStack_14);
        uVar10 = uStack_20;
        if (*(short *)((int)DAT_007fb238 +
                      ((((short)iStack_10 - iStack_8) * (int)DAT_007fb278 +
                        (int)DAT_007fb27e * (int)(short)iStack_14 + (int)param_1._2_2_) - iVar7) * 2
                      ) == 0) goto joined_r0x0049bc58;
      }
      uStack_20 = uVar10 + 1;
    } while ((int)uStack_20 < iStack_1c);
  }
  if (puStack_30 != (uint *)0x0) {
joined_r0x0049bc58:
    uStack_28 = uStack_28 - 1;
    if (-1 < (int)uStack_28) {
      FUN_006acc70(*(int *)(this + 0x103),uStack_28,(undefined4 *)&sStack_3c);
      uVar10 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
      puVar11 = DAT_007fb280;
      puVar12 = DAT_007fb238;
      for (uVar9 = (uVar10 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar10 = uVar10 * 2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                   (int)sStack_3c,(int)sStack_3a,(int)sStack_38,-1,-1,-1);
      uVar10 = 0;
      if (0 < iStack_1c) {
        do {
          FUN_006acc70(*(int *)(this + 0x29),uVar10,&uStack_18);
          if ((short)uStack_18 != -1) {
            pvVar5 = (void *)STAllPlayersC::GetObjPtr
                                       (DAT_007fa174,
                                        CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this[0x24]),
                                        uStack_18,1);
            if (pvVar5 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7bd);
            }
            thunk_FUN_004162f0(pvVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&iStack_10,
                               (undefined2 *)&iStack_14);
            if (*(short *)((int)DAT_007fb238 +
                          ((int)DAT_007fb27e * (int)(short)iStack_14 +
                           (int)DAT_007fb278 * (int)(short)iStack_10 + (int)param_1._2_2_) * 2) == 0
               ) {
              FUN_006b0c70(*(int *)(this + 0x103),uStack_28);
              break;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iStack_1c);
      }
      goto joined_r0x0049bc58;
    }
    if (*(int *)(*(byte **)(this + 0x103) + 0xc) == 0) {
      FUN_006ae110(*(byte **)(this + 0x103));
      *(undefined4 *)(this + 0x103) = 0;
      return 0;
    }
  }
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,*(uint *)(*(int *)(this + 0x103) + 0xc),6,1);
  iVar3 = *(int *)(this + 0x103);
  *(uint **)(this + 0x226) = puVar6;
  uVar10 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      FUN_006acc70(iVar3,uVar10,(undefined4 *)&sStack_3c);
      Library::DKW::TBL::FUN_006ae140(*(uint **)(this + 0x226),uVar10,(undefined4 *)&sStack_3c);
      iVar3 = *(int *)(this + 0x103);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(iVar3 + 0xc));
  }
  FUN_006ae110(*(byte **)(this + 0x103));
  *(undefined4 *)(this + 0x103) = 0;
  ReMakePatrolPoints(this,unaff_EDI);
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)*(ushort *)(this + 0x27),0x16,1);
  *(uint **)(this + 0x22e) = puVar6;
  uVar10 = 0;
  uStack_6c = 0;
  uStack_5a = 0;
  if (0 < iStack_1c) {
    do {
      FUN_006acc70(*(int *)(this + 0x29),uVar10,&uStack_18);
      if ((short)uStack_18 != -1) {
        auStack_68[0] = CONCAT22(auStack_68[0]._2_2_,(short)uStack_18);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this + 0x22e),&uStack_6c);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iStack_1c);
  }
  bVar2 = thunk_FUN_00430750(8);
  *(int *)(this + 0x23a) = ((*(int *)(this + 0x242) * 0xc9) / (int)(uint)bVar2) / 3;
  puStack_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  uVar10 = 0;
  uStack_44 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  iVar3 = *(int *)(this + 0x22e);
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      FUN_006acc70(iVar3,uVar10,&uStack_6c);
      if ((short)auStack_68[0] != -1) {
        this_00 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this[0x24]),
                             auStack_68[0],1);
        if (this_00 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7ed,0,0,&DAT_007a4ccc
                                     ,s_STGroupBoatC__GrpPatrol_NULL_val_007abf94);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            uVar10 = (*pcVar1)();
            return uVar10;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7ee);
        }
        Library::DKW::TBL::FUN_006ae1c0(puStack_30,auStack_68);
        uStack_40 = uVar10;
        STBoatC::CmdToObj(this_00,6,&uStack_44);
      }
      iVar3 = *(int *)(this + 0x22e);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(iVar3 + 0xc));
  }
  puVar6 = puStack_30;
  FUN_006acc70(*(int *)(this + 0x22a),*(uint *)(this + 0x232),(undefined4 *)&sStack_54);
  InitWay(this,(int)puVar6,(int)sStack_54,(int)sStack_52,(int)sStack_50);
  FUN_006ae110((byte *)puVar6);
  return 2;
}

