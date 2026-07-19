
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpAttack */

undefined4 __thiscall STGroupBoatC::GrpAttack(STGroupBoatC *this,int param_1)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  STGroupBoatC *pSVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
  STGroupBoatC *pSVar15;
  bool bVar16;
  InternalExceptionFrame local_70;
  byte local_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 local_24;
  byte local_20;
  undefined3 uStack_1f;
  byte local_1c;
  undefined3 uStack_1b;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  STGroupBoatC *local_8;
  
  local_24 = 2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar12 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x701,0,iVar6,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpAttack_007abf58);
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x702);
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return uVar11;
  }
  if (param_1 == 1) {
    FUN_006ae110(*(byte **)&local_8->field_0x20e);
    *(undefined4 *)&pSVar12->field_0x20e = 0;
    *(undefined4 *)&pSVar12->field_0x212 = 0;
    FUN_006ab060((undefined4 *)&pSVar12->field_0x21e);
    param_1 = 0;
  }
  pSVar15 = local_8;
  if (param_1 == 0) {
    puVar13 = (undefined4 *)&pSVar12->field_0x89;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)&pSVar12->field_0x65 = 0;
    if (*(int *)&pSVar12->field_0xe7 == 0) {
      local_18 = *(int *)(*(int *)&local_8->field_0xef + 0xc);
      if (local_18 == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x68f);
      }
      if (*(byte **)&pSVar15->field_0x20e != (byte *)0x0) {
        FUN_006ae110(*(byte **)&pSVar15->field_0x20e);
        *(undefined4 *)&pSVar15->field_0x20e = 0;
        *(undefined4 *)&pSVar15->field_0x212 = 0;
      }
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      sVar5 = 0;
      *(uint **)&local_8->field_0x20e = puVar7;
      pSVar12 = local_8;
      if (0 < local_18) {
        uVar14 = 0;
        do {
          FUN_006acc70(*(int *)&pSVar12->field_0xef,uVar14,(undefined4 *)&local_2c);
          if ((local_2c < 8) &&
             ((((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8)) &&
               (piVar8 = (int *)STAllPlayersC::GetObjPtr
                                          (DAT_007fa174,
                                           CONCAT22(uStack_2a,CONCAT11(cStack_2b,local_2c)),
                                           CONCAT22(uStack_28,uStack_2a),(int)cStack_2b),
               pSVar12 = local_8, piVar8 != (int *)0x0)) &&
              ((iVar6 = (**(code **)(*piVar8 + 0xf8))(), pSVar12 = local_8, iVar6 == 1 &&
               (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)(char)local_8->field_0024),
               pSVar12 = local_8, iVar6 == 1)))))) {
            Library::DKW::TBL::FUN_006ae140
                      (*(uint **)&local_8->field_0x20e,uVar14,(undefined4 *)&local_2c);
            pSVar12 = local_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < local_18);
      }
      FUN_006ae110(*(byte **)&pSVar12->field_0xef);
      *(undefined4 *)&pSVar12->field_0xef = 0;
      if (*(int *)(*(int *)&pSVar12->field_0x20e + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x69d);
      }
    }
    pSVar12 = local_8;
    if (*(int *)&local_8->field_0xe7 == 1) {
      if (*(byte **)&local_8->field_0x20e != (byte *)0x0) {
        FUN_006ae110(*(byte **)&local_8->field_0x20e);
        *(undefined4 *)&pSVar12->field_0x20e = 0;
        *(undefined4 *)&pSVar12->field_0x212 = 0;
      }
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      *(uint **)&pSVar12->field_0x20e = puVar7;
      local_c = CONCAT22((short)((uint)puVar7 >> 0x10),*(short *)&pSVar12->field_0xf3);
      iVar6 = (int)*(short *)&pSVar12->field_0xf3;
      local_18 = 0;
      if (iVar6 < *(short *)&pSVar12->field_0xf9 + iVar6) {
        do {
          sVar5 = *(short *)&pSVar12->field_0xf5;
          local_14 = CONCAT22((short)((uint)iVar6 >> 0x10),sVar5);
          iVar6 = local_c;
          if ((int)sVar5 < (int)*(short *)&pSVar12->field_0xfb + (int)sVar5) {
            do {
              local_10 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&pSVar12->field_0xf7);
              iVar6 = (int)*(short *)&pSVar12->field_0xf7;
              if (iVar6 < *(short *)&pSVar12->field_0xfd + iVar6) {
                do {
                  sVar5 = (short)local_c;
                  if (((sVar5 < 0) || (DAT_007fb240 <= sVar5)) ||
                     ((sVar4 = (short)local_14, sVar4 < 0 ||
                      (((DAT_007fb242 <= sVar4 || ((short)local_10 < 0)) ||
                       (DAT_007fb244 <= (short)local_10)))))) {
                    piVar8 = (int *)0x0;
                  }
                  else {
                    piVar8 = *(int **)(DAT_007fb248 +
                                      ((int)DAT_007fb240 * (int)sVar4 +
                                      (int)sVar5 + DAT_007fb246 * iVar6) * 8);
                  }
                  if ((piVar8 == (int *)0x0) ||
                     (((iVar9 = piVar8[8], iVar9 != 0x14 && (iVar9 != 1000)) && (iVar9 != 0x3e9))))
                  {
LAB_0049af27:
                    pSVar12 = local_8;
                    if ((((sVar5 < 0) || (DAT_007fb240 <= sVar5)) ||
                        (sVar5 = (short)local_14, sVar5 < 0)) ||
                       (((DAT_007fb242 <= sVar5 || ((short)local_10 < 0)) ||
                        (DAT_007fb244 <= (short)local_10)))) {
                      piVar8 = (int *)0x0;
                    }
                    else {
                      piVar8 = *(int **)(DAT_007fb248 + 4 +
                                        ((int)DAT_007fb240 * (int)sVar5 +
                                        (int)(short)local_c + DAT_007fb246 * iVar6) * 8);
                    }
                    if (((piVar8 != (int *)0x0) && (piVar8[8] == 0x1ae)) &&
                       ((local_2c = *(byte *)(piVar8 + 9), local_2c < 8 &&
                        ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8))))
                       )) {
                      bVar1 = local_8->field_0024;
                      _local_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049b073:
                          iVar6 = 0;
                        }
                        else {
                          uVar10 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          uVar14 = (uint)bVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar6 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar6 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\x01')) {
                            iVar6 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) != '\x01'))
                            goto LAB_0049b073;
                            iVar6 = 2;
                          }
                        }
                        bVar16 = iVar6 < 0;
                      }
                      else {
                        bVar16 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,local_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x03';
                        iVar6 = (**(code **)(*piVar8 + 0xf8))();
                        if ((iVar6 == 1) &&
                           (iVar6 = (**(code **)(*piVar8 + 0xf4))((int)(char)pSVar12->field_0024),
                           iVar6 == 1)) {
                          local_18 = iVar6;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (*(uint **)&pSVar12->field_0x20e,(undefined4 *)&local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_2c = *(byte *)(piVar8 + 9);
                    if ((local_2c < 8) &&
                       ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8))))
                    {
                      bVar1 = local_8->field_0024;
                      _local_1c = CONCAT31(uStack_1b,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049aec9:
                          iVar9 = 0;
                        }
                        else {
                          uVar10 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          uVar14 = (uint)bVar1;
                          cVar2 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar14);
                          if ((cVar2 == '\0') &&
                             (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar9 = -2;
                          }
                          else if ((cVar2 == '\x01') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\0')) {
                            iVar9 = -1;
                          }
                          else if ((cVar2 == '\0') &&
                                  (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) == '\x01')) {
                            iVar9 = 1;
                          }
                          else {
                            if ((cVar2 != '\x01') ||
                               (*(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar10) != '\x01'))
                            goto LAB_0049aec9;
                            iVar9 = 2;
                          }
                        }
                        bVar16 = iVar9 < 0;
                      }
                      else {
                        bVar16 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,local_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)((int)piVar8 + 0x32);
                        cStack_2b = '\x01';
                        iVar9 = (**(code **)(*piVar8 + 0xf8))();
                        pSVar12 = local_8;
                        if ((iVar9 == 1) &&
                           (iVar9 = (**(code **)(*piVar8 + 0xf4))((int)(char)local_8->field_0024),
                           iVar9 == 1)) {
                          local_18 = iVar9;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (*(uint **)&pSVar12->field_0x20e,(undefined4 *)&local_2c);
                        }
                        sVar5 = (short)local_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  local_10 = local_10 + 1;
                  iVar6 = (int)(short)local_10;
                  pSVar12 = local_8;
                } while (iVar6 < (int)*(short *)&local_8->field_0xf7 +
                                 (int)*(short *)&local_8->field_0xfd);
              }
              local_14 = local_14 + 1;
              iVar6 = (int)(short)local_14;
            } while (iVar6 < (int)*(short *)&pSVar12->field_0xfb +
                             (int)*(short *)&pSVar12->field_0xf5);
          }
          local_c = local_c + 1;
          iVar6 = (int)(short)local_c;
        } while (iVar6 < (int)*(short *)&pSVar12->field_0xf3 + (int)*(short *)&pSVar12->field_0xf9);
      }
      if (local_18 == 0) {
        FUN_006ae110(*(byte **)&pSVar12->field_0x20e);
        *(undefined4 *)&pSVar12->field_0x20e = 0;
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6ce);
      }
    }
    *(int *)&pSVar12->field_0x20a = *(int *)&pSVar12->field_0xeb;
    pSVar15 = local_8;
    if (*(int *)&pSVar12->field_0xeb == 1) {
      sVar5 = 0;
      iVar6 = *(int *)(*(int *)&local_8->field_0x20e + 0xc);
      if (0 < iVar6) {
        do {
          FUN_006acc70(*(int *)&local_8->field_0x20e,(int)sVar5,(undefined4 *)&local_2c);
          if ((cStack_2b != '\x01') ||
             (uVar14 = STAllPlayersC::GetObjPtr
                                 (DAT_007fa174,CONCAT22(uStack_2a,CONCAT11(1,local_2c)),
                                  CONCAT22(uStack_28,uStack_2a),CASE_1),
             *(int *)(uVar14 + 0x20) != 0x14)) {
            FUN_006b0c70(*(int *)&local_8->field_0x20e,(int)sVar5);
            iVar6 = iVar6 + -1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < iVar6);
      }
      pSVar15 = local_8;
      if (*(int *)(*(int *)&local_8->field_0x20e + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x6e3);
      }
    }
    MakePVec(pSVar15);
    DistributeTargets(pSVar15,(uint *)pSVar15->field_0029);
    pSVar12 = local_8;
  }
  if ((param_1 == 2) && (*(int *)&pSVar12->field_0x212 == 0)) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_24;
}

