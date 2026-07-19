
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepPlList */

void __thiscall SettMapMTy::PrepPlList(SettMapMTy *this,int *param_1)

{
  SettMapMTy SVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  uint uVar10;
  SettMapMTy *pSVar11;
  undefined4 unaff_ESI;
  uint uVar12;
  byte *pbVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  char *pcVar15;
  bool bVar16;
  InternalExceptionFrame local_b8;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_6e;
  char local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte *local_14;
  SettMapMTy *local_10;
  char *local_c;
  int local_8;
  
  this[0x211c] = DAT_008087c4._2_1_;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar11 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x1cb,0,iVar5,&DAT_007a4ccc
                               ,s_SettMapMTy__PrepPlList_007cd310);
    if (iVar7 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_settmobj_cpp_007cd258,0x1cb);
    return;
  }
  SVar1 = local_10[0x1e26];
  if ((((SVar1 == (SettMapMTy)0x5) || (SVar1 == (SettMapMTy)0xf)) || (SVar1 == (SettMapMTy)0xc)) ||
     (SVar1 == (SettMapMTy)0x10)) {
    local_8 = *(int *)(local_10 + 7999);
  }
  else {
    local_8 = *(int *)(local_10 + 0x1f43);
  }
  iVar5 = *(int *)(local_10 + 0x1f84);
  if (iVar5 != 0) {
    uVar12 = 0;
    if (0 < *(int *)(iVar5 + 0xc)) {
      bVar16 = *(int *)(iVar5 + 0xc) != 0;
      do {
        if (bVar16) {
          iVar5 = *(int *)(iVar5 + 8) * uVar12 + *(int *)(iVar5 + 0x1c);
        }
        else {
          iVar5 = 0;
        }
        if ((iVar5 != 0) && (*(byte **)(iVar5 + 0x50) != (byte *)0x0)) {
          FUN_006ae110(*(byte **)(iVar5 + 0x50));
        }
        iVar5 = *(int *)(pSVar11 + 0x1f84);
        uVar12 = uVar12 + 1;
        bVar16 = uVar12 < *(uint *)(iVar5 + 0xc);
      } while ((int)uVar12 < (int)*(uint *)(iVar5 + 0xc));
    }
    FUN_006ae110(*(byte **)(pSVar11 + 0x1f84));
  }
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  *(uint **)(pSVar11 + 0x1f84) = puVar6;
  if ((pSVar11[0x1e26] != (SettMapMTy)0xc) && (pSVar11[0x1e26] != (SettMapMTy)0x10)) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &DAT_008087e8;
    do {
      pcVar8 = local_c;
      cVar2 = local_c[1];
      if (cVar2 != -1) {
        puVar14 = &local_74;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        local_74._0_1_ = 1;
        local_74._1_1_ = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pcVar8 == '\x03')) {
          local_74._3_1_ = '\x01';
        }
        else {
          local_74._3_1_ = *pcVar8;
        }
        local_74._2_1_ = cVar2;
        switch(pSVar11[0x1e26]) {
        case (SettMapMTy)0x5:
        case (SettMapMTy)0xf:
          local_24 = thunk_FUN_0067e0e0(local_8,CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar2)) &
                                                0xff,0xffffffff);
          break;
        default:
          local_24 = thunk_FUN_0067dfd0(local_8,CONCAT12(uStack_6f,
                                                         CONCAT11(uStack_70,local_74._3_1_)) & 0xff,
                                        DAT_0080995c);
          break;
        case (SettMapMTy)0xc:
        case (SettMapMTy)0x10:
          local_24 = thunk_FUN_0067e200(local_8,CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar2)) &
                                                0xff,0xffffffff);
        }
        if (pcVar8[-0x21] == '\x01') {
          SVar1 = pSVar11[0x1e26];
          if (((SVar1 == (SettMapMTy)0x5) || (SVar1 == (SettMapMTy)0xc)) ||
             (SVar1 == (SettMapMTy)0x10)) {
            uStack_70 = 4;
            uVar12 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = (byte *)(pcVar8 + -0x20);
              bVar16 = local_24[3] != 0;
              do {
                if (bVar16) {
                  iVar5 = local_24[2] * uVar12 + local_24[7];
                }
                else {
                  iVar5 = 0;
                }
                pbVar9 = (byte *)(iVar5 + 0x4c);
                pbVar13 = local_14;
                do {
                  bVar3 = *pbVar9;
                  bVar16 = bVar3 < *pbVar13;
                  if (bVar3 != *pbVar13) {
LAB_005cd670:
                    iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar9[1];
                  bVar16 = bVar3 < pbVar13[1];
                  if (bVar3 != pbVar13[1]) goto LAB_005cd670;
                  pbVar9 = pbVar9 + 2;
                  pbVar13 = pbVar13 + 2;
                } while (bVar3 != 0);
                iVar5 = 0;
LAB_005cd675:
                pSVar11 = local_10;
                pcVar8 = local_c;
                if (iVar5 == 0) {
                  uStack_6f = (undefined1)uVar12;
                  break;
                }
                uVar12 = uVar12 + 1;
                bVar16 = uVar12 < local_24[3];
              } while ((int)uVar12 < (int)local_24[3]);
            }
          }
          else {
            uStack_70 = 1;
          }
        }
        else {
          uStack_70 = 1;
        }
        local_20 = *(undefined4 *)(pcVar8 + 3);
        local_2a = pcVar8[2];
        local_6e = DAT_0080877f;
        local_1c = *(undefined4 *)(pcVar8 + 7);
        local_18 = *(undefined4 *)(pcVar8 + 0xb);
        local_29 = 0;
        local_25 = 1;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pSVar11 + 0x1f84),&local_74);
      }
      local_c = pcVar8 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (pSVar11[0x1e26] == (SettMapMTy)0xc) {
      iVar5 = *(int *)(pSVar11 + 0x1f84);
      uVar10 = 0;
      uVar12 = *(uint *)(iVar5 + 0xc);
      if (0 < (int)uVar12) {
        bVar16 = uVar12 != 0;
        do {
          if (bVar16) {
            iVar7 = *(int *)(iVar5 + 8) * uVar10 + *(int *)(iVar5 + 0x1c);
          }
          else {
            iVar7 = 0;
          }
          if (((iVar7 != 0) && (*(char *)(iVar7 + 4) == '\x01')) &&
             ((DAT_0080874d == *(char *)(iVar7 + 2) && (DAT_0080874e == *(char *)(iVar7 + 3))))) {
            pcVar8 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar8 = (char *)&DAT_00807ddd;
            }
            AddPlayerList(pSVar11,DAT_0080877f,uVar10,(DAT_0080874f != '\0') + 2,pcVar8);
            break;
          }
          uVar10 = uVar10 + 1;
          bVar16 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
    else {
      iVar5 = *(int *)(pSVar11 + 0x1f84);
      uVar10 = 0;
      uVar12 = *(uint *)(iVar5 + 0xc);
      if (0 < (int)uVar12) {
        bVar16 = uVar12 != 0;
        do {
          if (bVar16) {
            iVar7 = *(int *)(iVar5 + 8) * uVar10 + *(int *)(iVar5 + 0x1c);
          }
          else {
            iVar7 = 0;
          }
          if (((iVar7 != 0) && (*(char *)(iVar7 + 4) == '\x01')) && (*(char *)(iVar7 + 2) != -1)) {
            DAT_0080874d = *(char *)(iVar7 + 2);
            *(undefined1 *)(iVar7 + 4) = 2;
            DAT_0080874e = *(char *)(iVar7 + 3);
            pcVar8 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar8 = (char *)&DAT_00807ddd;
            }
            uVar12 = 0xffffffff;
            goto code_r0x005cd7da;
          }
          uVar10 = uVar10 + 1;
          bVar16 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
  }
LAB_005cd7f2:
  SettMapTy::PaintSC((SettMapTy *)pSVar11);
  (**(code **)(*(int *)pSVar11 + 0x20))();
  g_currentExceptionFrame = local_b8.previous;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    pcVar15 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar15;
    if (cVar2 == '\0') break;
code_r0x005cd7da:
    pcVar15 = pcVar8;
    if (uVar12 == 0) break;
  }
  uVar12 = ~uVar12;
  pcVar8 = pcVar15 + -uVar12;
  pcVar15 = (char *)(iVar7 + 10);
  for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar15 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar15 = pcVar15 + 1;
  }
  goto LAB_005cd7f2;
}

