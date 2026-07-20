
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GoToRepair */

void __thiscall AiFltClassTy::GoToRepair(AiFltClassTy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined2 *puVar6;
  int *this_00;
  IMAGE_DOS_HEADER *pIVar7;
  uint *groupContent;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  uint local_24;
  int local_20;
  AiFltClassTy *local_1c;
  int local_18;
  uint local_14;
  uint *local_10;
  int local_c;
  uint *local_8;
  
  if ((this->field_0203 == 0) ||
     ((uint)(this->field_0207 + this->field_0203) <= (uint)this->field_0280)) {
    this->field_0207 = this->field_0280;
    local_1c = this;
    uVar4 = sub_0065D9C0(this);
    iVar5 = CONCAT22(extraout_var,uVar4);
    if ((0 < iVar5) &&
       (local_20 = iVar5,
       local_c = thunk_FUN_00661800((AnonShape_0065DA10_8B0AA883 *)this,extraout_EDX),
       (int)this->field_0179 < iVar5 - local_c)) {
      local_18 = thunk_FUN_0068f8f0(this->field_0284,this->field_007B);
      local_8 = (uint *)0x0;
      local_10 = (uint *)0x0;
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pAVar3 = local_1c;
      if (iVar5 == 0) {
        local_8 = thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)local_1c,extraout_EDX_00);
        if (local_8 != (uint *)0x0) {
          local_14 = 0;
          groupContent = local_10;
          if (0 < (int)local_8[3]) {
            do {
              if (local_14 < local_8[3]) {
                puVar6 = (undefined2 *)(local_8[2] * local_14 + local_8[7]);
              }
              else {
                puVar6 = (undefined2 *)0x0;
              }
              local_24 = CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6);
              this_00 = (int *)STAllPlayersC::GetObjPtr
                                         (g_sTAllPlayers_007FA174,
                                          CONCAT31((int3)(local_24 >> 8),pAVar3->field_0x24),
                                          local_24,CASE_1);
              if ((this_00 != (int *)0x0) && ((int)pAVar3->field_0179 < local_20 - local_c)) {
                iVar5 = (**(code **)(*this_00 + 0x2c))();
                pIVar7 = thunk_FUN_00674fb0(iVar5);
                if ((pAVar3->field_017F & (uint)pIVar7) != 0) {
                  if (pAVar3->field_0039 == 3) {
                    iVar5 = (**(code **)(*this_00 + 0xc4))();
                  }
                  else {
                    iVar5 = (**(code **)(*this_00 + 0x7c))();
                  }
                  if (iVar5 < pAVar3->field_0177) {
                    iVar5 = (**(code **)(*this_00 + 0x2c))();
                    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if (pAVar3->field_0039 == 3) {
LAB_00661a96:
                        bVar2 = false;
                      }
                      else if (*(int *)((int)this_00 + 0x361) == 5) {
                        bVar2 = true;
                      }
                      else {
                        iVar5 = thunk_FUN_004c93e0(this_00,5);
                        if (iVar5 < 1) goto LAB_00661a96;
                        bVar2 = true;
                      }
                      if (!bVar2) {
                        if ((local_18 != 0) || (pAVar3->field_0039 != 3)) {
                          if (pAVar3->field_0039 == 3) {
                            thunk_FUN_004d7270(this_00);
                          }
                          else {
                            thunk_FUN_004c7cc0(this_00,5,0,1,1,0xffffffff,0,0xff,(char *)0x0);
                          }
                        }
                        local_c = local_c + 1;
                      }
                    }
                    iVar5 = (**(code **)(*this_00 + 0x2c))();
                    if ((iVar5 < 1) || (0x28 < iVar5)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((bVar2) && (local_18 != 0)) {
                      if (groupContent == (uint *)0x0) {
                        groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,2,10);
                        local_10 = groupContent;
                      }
                      Library::DKW::TBL::FUN_006ae1c0(groupContent,&local_24);
                      local_c = local_c + 1;
                    }
                  }
                }
              }
              local_14 = local_14 + 1;
            } while ((int)local_14 < (int)local_8[3]);
          }
          FUN_006ae110((byte *)local_8);
          local_8 = (uint *)0x0;
          if (groupContent != (uint *)0x0) {
            if (groupContent[3] != 0) {
              thunk_FUN_0068fa00(pAVar3->field_0284,groupContent);
            }
            if (groupContent != (uint *)0x0) {
              FUN_006ae110((byte *)groupContent);
            }
          }
        }
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      if (local_8 != (uint *)0x0) {
        FUN_006ae110((byte *)local_8);
        local_8 = (uint *)0x0;
      }
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        local_10 = (uint *)0x0;
      }
      iVar8 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x6e9,0,iVar5,&DAT_007a4ccc,
                                 s_AiFltClassTy__GoToRepair_007d2c40);
      if (iVar8 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar5,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x6ea);
    }
  }
  return;
}

