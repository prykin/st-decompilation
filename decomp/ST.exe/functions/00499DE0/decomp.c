
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall STGroupBoatC::DistributeTargets(STGroupBoatC *this,uint *param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  char cVar8;
  int iVar2;
  STBoatC *pSVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *piVar9;
  undefined4 extraout_ECX_00;
  ushort uVar10;
  undefined4 extraout_EDX;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  short sVar13;
  void *unaff_EDI;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  undefined4 *puVar16;
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
  uint *local_34;
  uint *local_30;
  short local_2a;
  short local_28;
  short local_26;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  short local_16;
  int local_14;
  byte *local_10;
  uint local_c;
  undefined1 local_5;
  
  uVar11 = 0;
  local_10 = (byte *)0x0;
  local_34 = (uint *)0x0;
  local_30 = (uint *)0x0;
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_60 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_60;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_10 != (byte *)0x0) {
        FUN_006ae110(local_10);
      }
      return 0;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5eb,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__DistributeTargets_007abf14);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x55a);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,param_1);
  local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  local_14 = *(int *)(local_10 + 0xc);
  if (0 < local_14) {
    do {
      iVar2 = local_14;
      FUN_006acc70((int)local_10,uVar11,&local_c);
      if ((short)local_c == -1) {
        FUN_006b0c70((int)local_10,uVar11);
        uVar11 = uVar11 - 1;
        local_14 = iVar2 + -1;
      }
      else {
        pSVar3 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0024),local_c,
                            CASE_1);
        if (pSVar3 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x564);
        }
        uVar4 = (*pSVar3->vtable->vfunc_2C)();
        switch(uVar4) {
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
          FUN_006b0c70((int)local_10,uVar11);
          uVar11 = uVar11 - 1;
          local_14 = local_14 + -1;
          STBoatC::CmdToObj(pSVar3,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) && (iVar2 = (*pSVar3->vtable->vfunc_2C)(), iVar2 != 0x17))
          {
            FUN_006b0c70((int)local_10,uVar11);
            uVar11 = uVar11 - 1;
            local_14 = local_14 + -1;
            iVar2 = thunk_FUN_00490d90((int)pSVar3);
            if (iVar2 == 0) {
              STBoatC::CmdToObj(pSVar3,CASE_3,&local_20);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < local_14);
  }
  iVar2 = local_14;
  uVar11 = 0;
  if (local_14 != 0) {
    iVar7 = this_00->field_020E;
    this_00->field_0212 = 0;
    uVar12 = 0;
    if (*(int *)(iVar7 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar7,uVar11,&local_1c);
        if (local_1c._2_2_ != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        iVar7 = this_00->field_020E;
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < *(uint *)(iVar7 + 0xc));
    }
    if (this_00->field_0212 == 0) {
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x58f)
      ;
    }
    uVar11 = 0;
    local_24 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70((int)local_10,uVar11,&local_c);
        if ((short)local_c != -1) {
          pSVar3 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0024),local_c,
                              CASE_1);
          iVar2 = (*pSVar3->vtable->vfunc_2C)();
          if (iVar2 == 9) {
            GetDepotForAttack(this_00,local_c,&local_5,&local_16,&local_2a,&local_28,&local_26);
            if (local_16 == -1) {
              puVar16 = &local_20;
              SVar14 = CASE_3;
              local_20 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
            else {
              local_44 = this_00->field_020A;
              local_3b = local_16;
              puVar16 = &local_48;
              local_40 = local_5;
              local_3f = 1;
              SVar14 = CASE_2;
              local_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            }
          }
          else {
            local_5c = this_00->field_0216 + 1;
            local_50 = 0;
            local_4c = 2;
            do {
              uVar11 = this_00->field_0031 * 0x41c64e6d + 0x3039;
              this_00->field_0031 = uVar11;
              local_54 = (uVar11 >> 0x10) % local_5c;
              iVar2 = 0;
              if (0 < (int)this_00->field_021A) {
                piVar5 = (int *)this_00->field_021E;
                piVar9 = piVar5;
                uVar11 = local_54;
                do {
                  if ((*piVar9 != -1) &&
                     (uVar10 = (short)uVar11 - (short)piVar9[1], uVar11 = (uint)uVar10,
                     (short)uVar10 < 1)) {
                    if (local_50 < piVar5[iVar2 * 2 + 1]) {
                      local_50 = piVar5[(short)iVar2 * 2 + 1];
                      local_58 = iVar2;
                    }
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  piVar9 = piVar9 + 2;
                } while (iVar2 < (int)this_00->field_021A);
              }
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            sVar13 = (short)local_58;
            FUN_006acc70(this_00->field_020E,(int)sVar13,&local_1c);
            local_48 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            local_40 = (undefined1)local_1c;
            local_44 = this_00->field_020A;
            local_3b = local_1c._2_2_;
            cVar8 = (char)((uint)local_1c >> 8);
            local_3f = (int)cVar8;
            local_39 = sVar13;
            pSVar3 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31(cVar8 >> 7,this_00->field_0024),local_c,CASE_1
                               );
            puVar16 = &local_48;
            SVar14 = CASE_2;
          }
          STBoatC::CmdToObj(pSVar3,SVar14,puVar16);
        }
        local_24 = local_24 + 1;
        uVar11 = local_24 & 0xffff;
      } while ((int)uVar11 < local_14);
    }
    if (this_00->field_020A == 1) {
      local_14 = *(int *)(this_00->field_0029 + 0xc);
      uVar11 = 0;
      local_24 = 0;
      puVar6 = local_34;
      if (0 < local_14) {
        do {
          FUN_006acc70(this_00->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            piVar5 = (int *)STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                                this_00->field_0024),local_c,CASE_1);
            if (piVar5 == (int *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x5c4);
            }
            uVar4 = (**(code **)(*piVar5 + 0x2c))();
            switch(uVar4) {
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
              iVar2 = (**(code **)(*piVar5 + 0x2c))();
              if (iVar2 == 0x17) {
                puVar15 = puVar6;
                if (puVar6 == (uint *)0x0) {
                  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  puVar15 = puVar6;
                  local_34 = puVar6;
                }
              }
              else {
                iVar2 = thunk_FUN_00490d90((int)piVar5);
                if (iVar2 == 0) break;
                puVar15 = local_30;
                if (local_30 == (uint *)0x0) {
                  local_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  puVar15 = local_30;
                }
              }
              Library::DKW::TBL::FUN_006ae1c0(puVar15,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar11 = local_24 & 0xffff;
        } while ((int)uVar11 < local_14);
      }
      puVar15 = local_30;
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)local_14 >> 8),this_00->field_0024),puVar6,
                 local_30);
      if (puVar6 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar6);
      }
      if (puVar15 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar15);
      }
    }
  }
  if (local_10 != (byte *)0x0) {
    FUN_006ae110(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

