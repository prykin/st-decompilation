
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  int *piVar1;
  code *pcVar2;
  STGroupBoatC *this_00;
  dword dVar3;
  char cVar10;
  int iVar4;
  STBoatC *pSVar5;
  undefined4 uVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  int iVar9;
  undefined4 extraout_ECX;
  int *piVar11;
  undefined4 extraout_ECX_00;
  ushort uVar12;
  undefined4 extraout_EDX;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  short sVar15;
  void *unaff_EDI;
  STBoatC_CmdToObj_param_1Enum SVar16;
  DArrayTy *pDVar17;
  undefined4 *puVar18;
  InternalExceptionFrame local_a4;
  STGroupBoatC *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3f;
  short local_3b;
  short local_39;
  DArrayTy *local_34;
  DArrayTy *local_30;
  short local_2a;
  short local_28;
  short local_26;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [2];
  short sStack_1a;
  short local_16;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  undefined1 local_5;
  
  uVar13 = 0;
  local_10 = (DArrayTy *)0x0;
  local_34 = (DArrayTy *)0x0;
  local_30 = (DArrayTy *)0x0;
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_60 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_60;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    if (iVar4 == -0x5001fff7) {
      if (local_10 != (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
      }
      return 0;
    }
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5eb,0,iVar4,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeTargets_007abf14);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar4,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x55a
              );
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,param_1);
  local_20 = PTR_00802a38->field_00E4;
  local_14 = local_10->count;
  if (0 < (int)local_14) {
    do {
      dVar3 = local_14;
      DArrayGetElement(local_10,uVar13,&local_c);
      if ((short)local_c == -1) {
        FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_10,uVar13);
        uVar13 = uVar13 - 1;
        local_14 = dVar3 - 1;
      }
      else {
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0024),local_c,
                            CASE_1);
        if (pSVar5 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x564);
        }
        uVar6 = (*pSVar5->vtable->vfunc_2C)();
        switch(uVar6) {
        case 7:
        case 8:
        case 0xc:
        case 0x13:
        case 0x14:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x24:
        case 0x25:
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_10,uVar13);
          uVar13 = uVar13 - 1;
          local_14 = local_14 - 1;
          STBoatC::CmdToObj(pSVar5,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) && (iVar4 = (*pSVar5->vtable->vfunc_2C)(), iVar4 != 0x17))
          {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_10,uVar13);
            uVar13 = uVar13 - 1;
            local_14 = local_14 - 1;
            iVar4 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar4 == 0) {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_20);
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_14);
  }
  dVar3 = local_14;
  uVar13 = 0;
  if (local_14 != 0) {
    pDVar8 = (DArrayTy *)this_00->field_020E;
    this_00->field_0212 = 0;
    uVar14 = 0;
    if (pDVar8->count != 0) {
      do {
        DArrayGetElement(pDVar8,uVar13,local_1c);
        if (sStack_1a != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        pDVar8 = (DArrayTy *)this_00->field_020E;
        uVar14 = uVar14 + 1;
        uVar13 = uVar14 & 0xffff;
      } while (uVar13 < pDVar8->count);
    }
    if (this_00->field_0212 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0x58f);
    }
    uVar13 = 0;
    local_24 = 0;
    if (0 < (int)dVar3) {
      do {
        DArrayGetElement(local_10,uVar13,&local_c);
        if ((short)local_c != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0024),local_c,
                              CASE_1);
          iVar4 = (*pSVar5->vtable->vfunc_2C)();
          if (iVar4 == 9) {
            GetDepotForAttack(this_00,local_c,&local_5,&local_16,&local_2a,&local_28,&local_26);
            if (local_16 == -1) {
              puVar18 = &local_20;
              SVar16 = CASE_3;
              local_20 = PTR_00802a38->field_00E4;
            }
            else {
              local_44 = this_00->field_020A;
              local_3b = local_16;
              puVar18 = &local_48;
              local_40 = local_5;
              local_3f = 1;
              SVar16 = CASE_2;
              local_48 = PTR_00802a38->field_00E4;
            }
          }
          else {
            local_5c = this_00->field_0216 + 1;
            local_50 = 0;
            local_4c = 2;
            do {
              uVar13 = this_00->field_0031 * 0x41c64e6d + 0x3039;
              this_00->field_0031 = uVar13;
              local_54 = (uVar13 >> 0x10) % local_5c;
              iVar4 = 0;
              if (0 < (int)this_00->field_021A) {
                piVar1 = (int *)this_00->field_021E;
                piVar11 = piVar1;
                uVar13 = local_54;
                do {
                  if ((*piVar11 != -1) &&
                     (uVar12 = (short)uVar13 - (short)piVar11[1], uVar13 = (uint)uVar12,
                     (short)uVar12 < 1)) {
                    if (local_50 < piVar1[iVar4 * 2 + 1]) {
                      local_50 = piVar1[(short)iVar4 * 2 + 1];
                      local_58 = iVar4;
                    }
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  piVar11 = piVar11 + 2;
                } while (iVar4 < (int)this_00->field_021A);
              }
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            sVar15 = (short)local_58;
            DArrayGetElement((DArrayTy *)this_00->field_020E,(int)sVar15,local_1c);
            local_48 = PTR_00802a38->field_00E4;
            local_40 = (undefined1)_local_1c;
            local_44 = this_00->field_020A;
            local_3b = sStack_1a;
            cVar10 = (char)((uint)_local_1c >> 8);
            local_3f = (int)cVar10;
            local_39 = sVar15;
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,CONCAT31(cVar10 >> 7,this_00->field_0024),
                                local_c,CASE_1);
            puVar18 = &local_48;
            SVar16 = CASE_2;
          }
          STBoatC::CmdToObj(pSVar5,SVar16,puVar18);
        }
        local_24 = local_24 + 1;
        uVar13 = local_24 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (this_00->field_020A == 1) {
      local_14 = *(dword *)(this_00->field_0029 + 0xc);
      uVar13 = 0;
      local_24 = 0;
      pDVar8 = local_34;
      if (0 < (int)local_14) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar13,&local_c);
          if ((short)local_c != -1) {
            pSVar7 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0024),
                                local_c,CASE_1);
            if (pSVar7 == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5c4);
            }
            uVar6 = (*pSVar7->vtable->vfunc_2C)();
            switch(uVar6) {
            case 7:
            case 8:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x24:
            case 0x25:
              break;
            default:
              iVar4 = (*pSVar7->vtable->vfunc_2C)();
              if (iVar4 == 0x17) {
                pDVar17 = pDVar8;
                if (pDVar8 == (DArrayTy *)0x0) {
                  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  pDVar17 = pDVar8;
                  local_34 = pDVar8;
                }
              }
              else {
                iVar4 = thunk_FUN_00490d90((int)pSVar7);
                if (iVar4 == 0) break;
                pDVar17 = local_30;
                if (local_30 == (DArrayTy *)0x0) {
                  local_30 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  pDVar17 = local_30;
                }
              }
              Library::DKW::TBL::FUN_006ae1c0(&pDVar17->flags,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar13 = local_24 & 0xffff;
        } while ((int)uVar13 < (int)local_14);
      }
      pDVar17 = local_30;
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_14 >> 8),this_00->field_0024),
                 &pDVar8->flags,&local_30->flags);
      if (pDVar8 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar8);
      }
      if (pDVar17 != (DArrayTy *)0x0) {
        DArrayDestroy(pDVar17);
      }
    }
  }
  if (local_10 != (DArrayTy *)0x0) {
    DArrayDestroy(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

