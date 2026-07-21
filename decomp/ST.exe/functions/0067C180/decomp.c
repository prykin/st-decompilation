
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::Offensive */

void __thiscall AiPlrClassTy::Offensive(AiPlrClassTy *this,void *param_1)

{
  STFishC *pSVar1;
  code *pcVar2;
  AiPlrClassTy *this_00;
  undefined2 uVar3;
  int iVar4;
  DArrayTy *array;
  short *psVar5;
  int *piVar6;
  int iVar7;
  IMAGE_DOS_HEADER *pIVar8;
  undefined4 *puVar9;
  uint uVar10;
  DArrayTy *pDVar11;
  ushort *puVar12;
  uint uVar13;
  uint extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar14;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  short local_38 [6];
  undefined4 local_2c;
  IMAGE_DOS_HEADER *local_28;
  undefined2 local_24;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;
  
  local_c = (DArrayTy *)0x0;
  if ((((this->field_0676 != '\0') && (*(int *)&this->field_0x640 != 0xff)) &&
      (this->field_0695 != (DArrayTy *)0x0)) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_20 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_20;
    if (iVar4 == 0) {
      iVar4 = local_20->field_0681;
      if (local_20->field_0689 == 0) {
        if ((iVar4 == 0) || ((uint)(iVar4 * 3 + local_20->field_0685) <= (uint)local_20->field_06FE)
           ) {
          local_20->field_0685 = local_20->field_06FE;
          array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10,5);
          local_c = array;
          thunk_FUN_0067a240(this_00,&LAB_00403544,(uint *)array);
          uVar10 = array->count;
          uVar13 = 0;
          iVar4 = 0;
          bVar14 = uVar10 != 0;
          local_10 = 0;
          local_1c = 0;
          if (0 < (int)uVar10) {
            do {
              if (bVar14) {
                psVar5 = (short *)(array->elementSize * uVar13 + (int)array->data);
              }
              else {
                psVar5 = (short *)0x0;
              }
              if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
                iVar4 = iVar4 + psVar5[1];
                local_10 = local_10 + *(int *)(psVar5 + 2);
              }
              uVar10 = array->count;
              uVar13 = uVar13 + 1;
              bVar14 = uVar13 < uVar10;
              local_1c = iVar4;
            } while ((int)uVar13 < (int)uVar10);
          }
          if ((((this_00->field_0677 <= local_1c) && (0 < (int)uVar10)) && (0 < local_1c)) &&
             ((0 < local_10 &&
              (iVar4 = thunk_FUN_0042a990(this_00->field_0x640), local_18 = iVar4, iVar4 != 0)))) {
            bVar14 = *(int *)(iVar4 + 0xc) != 0;
            local_14 = 0;
            local_8 = 0;
            if (0 < *(int *)(iVar4 + 0xc)) {
              do {
                if (bVar14) {
                  piVar6 = (int *)(*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                }
                else {
                  piVar6 = (int *)0x0;
                }
                piVar6 = (int *)*piVar6;
                if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 != 0))
                {
                  iVar7 = (**(code **)(*piVar6 + 0x2c))();
                  pIVar8 = thunk_FUN_00674fb0(iVar7);
                  if ((((uint)pIVar8 & 3) != 0) || (((uint)pIVar8 & 0x630000) != 0)) {
                    iVar7 = (**(code **)(*piVar6 + 0xd4))();
                    local_14 = local_14 + iVar7;
                  }
                }
                local_8 = local_8 + 1;
                bVar14 = local_8 < *(uint *)(iVar4 + 0xc);
                array = local_c;
              } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
            }
            if (((this_00->field_0679 <= local_1c) || (local_14 < 1)) ||
               ((int)this_00->field_067B < (local_10 * 100) / local_14)) {
              local_8 = 0;
              *(undefined4 *)(this_00->field_06AD + 0xc) = 0;
              bVar14 = *(int *)(iVar4 + 0xc) != 0;
              if (0 < *(int *)(iVar4 + 0xc)) {
                do {
                  if (bVar14) {
                    puVar9 = (undefined4 *)(*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                  }
                  else {
                    puVar9 = (undefined4 *)0x0;
                  }
                  pSVar1 = (STFishC *)*puVar9;
                  if ((pSVar1 != (STFishC *)0x0) &&
                     (iVar7 = (*pSVar1->vtable->vfunc_F8)(), iVar7 != 0)) {
                    puVar9 = &local_3c;
                    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *puVar9 = 0;
                      puVar9 = puVar9 + 1;
                    }
                    local_3c._0_2_ = (undefined2)local_8;
                    local_3c._2_2_ = (*pSVar1->vtable->vfunc_2C)();
                    thunk_FUN_0067bda0(local_38,pSVar1);
                    local_2c = (*pSVar1->vtable->vfunc_D4)();
                    local_28 = thunk_FUN_00674fb0((int)local_3c._2_2_);
                    uVar10 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                    local_24 = (undefined2)uVar10;
                    Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_06AD,&local_3c);
                    iVar4 = local_18;
                  }
                  local_8 = local_8 + 1;
                  bVar14 = local_8 < *(uint *)(iVar4 + 0xc);
                  array = local_c;
                } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
              }
              thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD,&LAB_004026fd);
              thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)array,&LAB_004029b4);
              thunk_FUN_0067bfd0(this_00,(AnonNested_005F5B80_0169_794156D7 *)array,
                                 this_00->field_06AD);
              this_00->field_0689 = 1;
            }
          }
LAB_0067c61b:
          if (array != (DArrayTy *)0x0) {
            DArrayDestroy(array);
          }
          g_currentExceptionFrame = local_80.previous;
          return;
        }
      }
      else {
        uVar10 = extraout_EDX;
        if ((iVar4 == 0) ||
           (uVar10 = local_20->field_0685 + iVar4, uVar10 <= (uint)local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          thunk_FUN_0067be20((int)local_20,uVar10,(DArrayTy *)local_20->field_06AD);
          iVar4 = thunk_FUN_0067bd50((AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD);
          pDVar11 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10,5);
          local_c = pDVar11;
          thunk_FUN_0067a240(this_00,&LAB_00403544,(uint *)pDVar11);
          iVar4 = iVar4 + pDVar11->count;
          if (iVar4 == 0) {
            thunk_FUN_0067c110((AnonReceiver_006799B0 *)this_00);
            array = local_c;
          }
          else {
            array = local_c;
            if (0 < (int)pDVar11->count) {
              if (*(int *)(this_00->field_06AD + 0xc) < iVar4) {
                iVar4 = thunk_FUN_0042a990(this_00->field_0x640);
                local_18 = iVar4;
                if (iVar4 != 0) {
                  local_8 = 0;
                  if (0 < *(int *)(iVar4 + 0xc)) {
                    bVar14 = *(int *)(iVar4 + 0xc) != 0;
                    do {
                      uVar10 = local_8;
                      if (bVar14) {
                        puVar9 = (undefined4 *)
                                 (*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                      }
                      else {
                        puVar9 = (undefined4 *)0x0;
                      }
                      pSVar1 = (STFishC *)*puVar9;
                      if (((pSVar1 != (STFishC *)0x0) &&
                          (iVar7 = (*pSVar1->vtable->vfunc_F8)(), iVar4 = local_18, iVar7 != 0)) &&
                         (puVar12 = thunk_FUN_0067bd00((AnonShape_00413AF0_B6B4EE9A *)
                                                       this_00->field_06AD,uVar10), iVar4 = local_18
                         , puVar12 == (ushort *)0x0)) {
                        uVar3 = (undefined2)local_8;
                        puVar9 = &local_3c;
                        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                          *puVar9 = 0;
                          puVar9 = puVar9 + 1;
                        }
                        local_3c._0_2_ = uVar3;
                        local_3c._2_2_ = (*pSVar1->vtable->vfunc_2C)();
                        thunk_FUN_0067bda0(local_38,pSVar1);
                        local_2c = (*pSVar1->vtable->vfunc_D4)();
                        local_28 = thunk_FUN_00674fb0((int)local_3c._2_2_);
                        uVar10 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                        local_24 = (undefined2)uVar10;
                        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_06AD,&local_3c);
                        iVar4 = local_18;
                        uVar10 = local_8;
                      }
                      local_8 = uVar10 + 1;
                      bVar14 = local_8 < *(uint *)(iVar4 + 0xc);
                    } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
                  }
                }
                thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD,&LAB_004026fd)
                ;
              }
              if (*(int *)(this_00->field_06AD + 0xc) == 0) {
                thunk_FUN_0067c110((AnonReceiver_006799B0 *)this_00);
                array = local_c;
              }
              else {
                thunk_FUN_0067bfd0(this_00,(AnonNested_005F5B80_0169_794156D7 *)local_c,
                                   this_00->field_06AD);
                array = local_c;
              }
            }
          }
          goto LAB_0067c61b;
        }
      }
    }
    else {
      g_currentExceptionFrame = local_80.previous;
      iVar7 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x570,0,iVar4,&DAT_007a4ccc,
                                 s_AiPlrClassTy__Offensive_007d2f2c);
      if (iVar7 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c != (DArrayTy *)0x0) {
        DArrayDestroy(local_c);
        local_c = (DArrayTy *)0x0;
      }
      RaiseInternalException(iVar4,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x573);
    }
  }
  return;
}

