
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AddMDPairs */

undefined4 __thiscall STAllPlayersC::_AddMDPairs(STAllPlayersC *this,uint param_1,uint param_2)

{
  code *pcVar1;
  STAllPlayersC *pSVar2;
  byte bVar3;
  int iVar4;
  STFishC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  int *piVar10;
  undefined4 *puVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  STAllPlayersC_GetTOBJList_param_2Enum SVar13;
  STAllPlayersC_GetTOBJList_param_2Enum SVar14;
  InternalExceptionFrame local_d4;
  undefined4 local_90;
  short local_8a;
  short local_82;
  STAllPlayersC_GetTOBJList_param_2Enum local_6c [4];
  STAllPlayersC *local_5c;
  STAllPlayersC_GetTOBJList_param_2Enum local_58;
  undefined1 local_54 [4];
  uint local_50;
  int local_4c;
  uint local_48;
  STFishC *local_44;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  short local_38;
  short local_36;
  short local_34;
  undefined2 local_32;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  AnonShape_006ACC70_C8641025 *local_c;
  AnonShape_006ACC70_C8641025 *local_8;
  
  local_4c = 4;
  local_6c[0] = CASE_38;
  local_6c[1] = 0x39;
  local_6c[2] = 0x4f;
  local_6c[3] = 0x5e;
  local_5c = this;
  local_44 = (STFishC *)GetObjPtr(this,param_1,param_2,CASE_1);
  local_58 = (*local_44->vtable->vfunc_2C)();
  local_10 = 0;
  local_d4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d4;
  iVar4 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar6 = local_4c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_d4.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2454,0,iVar4,
                                 &DAT_007a4ccc,s_STAllPlayersC___AddMDPairs_007a80bc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2455);
    }
    return local_10;
  }
  if (0 < local_4c) {
    piVar10 = &g_playerRuntime[(char)param_1].field6_0xf;
    iVar4 = local_4c;
    do {
      if (*piVar10 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x23dd);
      }
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  pSVar5 = local_44;
  pSVar2 = local_5c;
  if ((local_58 == 0x3b) || (local_58 == 0x60)) {
    STFishC::sub_004162B0(local_44,&local_38,&local_36,&local_34);
    local_32 = *(undefined2 *)&pSVar5->field_0x32;
    uVar8 = (int)SHORT_007fb27c * (int)SHORT_007fb27a * (int)SHORT_007fb278;
    puVar11 = DAT_007fb280;
    puVar12 = DAT_007fb238;
    for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,(int)SHORT_007fb27c,
                 (int)local_38,(int)local_36,(int)local_34,-1,-1,-1);
    pSVar2 = local_5c;
    local_14 = 0;
    if (0 < iVar6) {
      do {
        iVar6 = local_14 * 4;
        local_c = (AnonShape_006ACC70_C8641025 *)
                  GetTOBJList(pSVar2,(char)param_1,local_6c[local_14],0,-1);
        local_48 = local_c->field_000C;
        if (local_48 != 0) {
          local_8 = *(AnonShape_006ACC70_C8641025 **)(iVar6 + 0x7f4e2f + (char)param_1 * 0xa62);
          local_18 = 0;
          if (0 < (int)local_48) {
            do {
              FUN_006acc70(local_c,local_18,&local_1c);
              pSVar5 = (STFishC *)GetObjPtr(pSVar2,param_1,local_1c,CASE_1);
              local_44 = pSVar5;
              iVar6 = (*pSVar5->vtable->vfunc_88)(local_54);
              if (0 < iVar6) {
                STFishC::sub_004162B0(pSVar5,&local_40,&local_3e,&local_3c);
                local_3a = *(undefined2 *)&pSVar5->field_0x32;
                local_30 = (int)*(short *)((int)DAT_007fb238 +
                                          ((local_3c + 1) * (int)SHORT_007fb27e +
                                           (int)local_3e * (int)SHORT_007fb278 + (int)local_40) * 2)
                ;
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->field_000C;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70(local_8,uVar9,&local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      Library::DKW::TBL::FUN_006ae140((uint *)local_8,uVar9,(undefined4 *)&local_40)
                      ;
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  Library::DKW::TBL::FUN_006ae1c0((uint *)local_8,(undefined4 *)&local_40);
                  local_10 = 1;
                }
              }
              local_18 = local_18 + 1;
            } while ((int)local_18 < (int)local_48);
          }
        }
        FUN_006ae110((byte *)local_c);
        local_14 = local_14 + 1;
      } while (local_14 < local_4c);
    }
  }
  else {
    local_14 = 0;
    SVar13 = local_58;
    if (0 < iVar6) {
      do {
        iVar6 = local_14;
        if (SVar13 == local_6c[local_14]) {
          iVar4 = thunk_FUN_004406c0((char)param_1);
          if ((char)iVar4 == '\x03') {
            SVar14 = 0x60;
          }
          else {
            SVar14 = 0x3b;
          }
          local_c = (AnonShape_006ACC70_C8641025 *)GetTOBJList(pSVar2,(char)param_1,SVar14,0,-1);
          pSVar5 = local_44;
          local_48 = local_c->field_000C;
          if (local_48 != 0) {
            STFishC::sub_004162B0(local_44,&local_40,&local_3e,&local_3c);
            local_3a = *(undefined2 *)&pSVar5->field_0x32;
            uVar8 = (int)SHORT_007fb27c * (int)SHORT_007fb27a * (int)SHORT_007fb278;
            puVar11 = DAT_007fb280;
            puVar12 = DAT_007fb238;
            for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,
                         (int)SHORT_007fb27c,(int)local_40,(int)local_3e,(int)local_3c,-1,-1,-1);
            local_18 = 0;
            local_8 = *(AnonShape_006ACC70_C8641025 **)
                       (local_14 * 4 + 0x7f4e2f + (char)param_1 * 0xa62);
            iVar6 = local_14;
            SVar13 = local_58;
            if (0 < (int)local_48) {
              do {
                FUN_006acc70(local_c,local_18,&local_1c);
                pSVar5 = (STFishC *)GetObjPtr(pSVar2,param_1,local_1c,CASE_1);
                local_44 = pSVar5;
                STFishC::sub_004162B0(pSVar5,&local_38,&local_36,&local_34);
                local_32 = *(undefined2 *)&pSVar5->field_0x32;
                local_30 = (int)*(short *)((int)DAT_007fb238 +
                                          ((local_34 + 1) * (int)SHORT_007fb27e +
                                           (int)SHORT_007fb278 * (int)local_36 + (int)local_38) * 2)
                ;
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->field_000C;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70(local_8,uVar9,&local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      Library::DKW::TBL::FUN_006ae140((uint *)local_8,uVar9,(undefined4 *)&local_40)
                      ;
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  Library::DKW::TBL::FUN_006ae1c0((uint *)local_8,(undefined4 *)&local_40);
                  local_10 = 1;
                }
                local_18 = local_18 + 1;
                iVar6 = local_14;
                SVar13 = local_58;
              } while ((int)local_18 < (int)local_48);
            }
          }
          FUN_006ae110((byte *)local_c);
        }
        local_14 = iVar6 + 1;
        if (local_4c <= iVar6 + 1) {
          g_currentExceptionFrame = local_d4.previous;
          return local_10;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_d4.previous;
  return local_10;
}

