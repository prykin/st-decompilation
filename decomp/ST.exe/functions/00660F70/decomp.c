
/* WARNING: Removing unreachable block (ram,0x006611f2) */

void __thiscall FUN_00660f70(void *this,uint *param_1,undefined2 param_2)

{
  Global_sub_004E80F0_param_2Enum GVar1;
  bool bVar2;
  STAllPlayersC *pSVar3;
  uint uVar4;
  Global_sub_004E80F0_param_2Enum *pGVar5;
  STAllPlayersC *pSVar6;
  int iVar7;
  DArrayTy *array;
  STGameObjC *pSVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  AnonShape_0068EB30_4F4B480A *pAVar11;
  AnonShape_0068EB30_4F4B480A local_6c;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  STGameObjC *local_10;
  int local_c;
  Global_sub_004E80F0_param_2Enum *local_8;
  
  if (((*(int *)((int)this + 0x284) != 0) && (*(int *)((int)this + 0x20b) != 0)) &&
     (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    local_20 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
    sVar9 = *(short *)((int)this + 0x7b);
    local_c = 0;
    if ((-(uint)(sVar9 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar6 = g_sTAllPlayers_007FA174;
      do {
        GVar1 = *local_8;
        if ((GVar1 == 0) || (((GVar1 == 0 || (0x28 < GVar1)) && (sVar9 != 1))))
        goto cf_continue_loop_0066137E;
        if ((((int)GVar1 < 1) || (0x28 < (int)GVar1)) || (pSVar6 == (STAllPlayersC *)0x0)) {
          if ((((int)GVar1 < 0x32) || (0x73 < (int)GVar1)) || (pSVar6 == (STAllPlayersC *)0x0)) {
            if ((((GVar1 == CASE_A3) || (GVar1 == CASE_A8)) ||
                ((GVar1 == CASE_B2 || (GVar1 == CASE_BE)))) && (pSVar6 != (STAllPlayersC *)0x0)) {
              pSVar6 = (STAllPlayersC *)thunk_FUN_004e80f0(*(int *)((int)this + 0x24),GVar1);
              pSVar3 = g_sTAllPlayers_007FA174;
            }
            else {
              pSVar3 = pSVar6;
              if (((GVar1 != 0xdd) && (GVar1 != 0xde)) && ((GVar1 != 0xe2 && (GVar1 != 0xdc))))
              goto cf_continue_loop_0066137E;
            }
          }
          else {
            pSVar6 = (STAllPlayersC *)thunk_FUN_004e6c20(*(int *)((int)this + 0x24),GVar1);
            pSVar3 = g_sTAllPlayers_007FA174;
          }
        }
        else {
          pSVar6 = (STAllPlayersC *)thunk_FUN_004e6a80(*(int *)((int)this + 0x24),GVar1);
          pSVar3 = g_sTAllPlayers_007FA174;
        }
        bVar2 = pSVar6 == (STAllPlayersC *)0x0;
        pSVar6 = pSVar3;
        if (bVar2) goto cf_continue_loop_0066137E;
        if (*(char *)((int)this + 0xff) == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          if (*(short *)((int)this + 0x39) != 3) {
            if (iVar7 != 0) goto switchD_0066104e_caseD_9;
            iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          }
          if (iVar7 == 0) goto cf_continue_loop_0066137E;
        default:
          goto switchD_0066104e_caseD_9;
        case 0x39:
        case 0x5e:
          iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          break;
        case 0x3a:
          iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x13c);
          break;
        case 0x4f:
        case 0x61:
          iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          break;
        case 100:
          iVar7 = *(int *)(*(int *)((int)this + 0x284) + 0x140);
        }
        if (iVar7 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar9 = *(short *)((int)param_1 + 0xe);
            uVar10 = CONCAT22((short)((uint)local_8 >> 0x10),sVar9);
            if ((sVar9 < 0) ||
               ((((short)param_1[4] < 0 || (*(short *)((int)param_1 + 0x12) < 0)) ||
                (iVar7 = thunk_FUN_004ae0b0((int)sVar9,(int)(short)param_1[4],
                                            (int)*(short *)((int)param_1 + 0x12),*local_8,
                                            *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                            (int *)0x0,0,(int *)0x0), uVar10 = extraout_EDX,
                iVar7 == 0)))) {
              local_10 = (STGameObjC *)0x0;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (array = (DArrayTy *)thunk_FUN_0065e360(this,uVar10,0x53), array != (DArrayTy *)0x0
                 )) {
                if (((array->count != 0) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) &&
                   (pSVar8 = STAllPlayersC::GetObjPtr
                                       (g_sTAllPlayers_007FA174,
                                        CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                 *(undefined1 *)((int)this + 0x24)),
                                        CONCAT22((short)((uint)array->data >> 0x10),
                                                 *(undefined2 *)array->data),CASE_1),
                   pSVar8 != (STGameObjC *)0x0)) {
                  local_10 = pSVar8;
                }
                DArrayDestroy(array);
              }
              local_14 = (int)*(short *)((int)param_1 + 0xe);
              iVar7 = *(int *)((int)this + 0x284);
              local_18 = (int)(short)param_1[4];
              local_1c = (int)*(short *)((int)param_1 + 0x12);
              iVar7 = thunk_FUN_004b0d10(*(uint *)((int)this + 0x24),*local_8,&local_14,&local_18,
                                         &local_1c,(int)*(short *)(iVar7 + 0x82),
                                         (int)*(short *)(iVar7 + 0x84),(int)*(short *)(iVar7 + 0x86)
                                         ,(int)local_10);
              if (iVar7 == 0) {
                return;
              }
              *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              *(undefined2 *)((int)param_1 + 0x12) = (undefined2)local_1c;
            }
            iVar7 = _GetEmbrGrpTobjGrpExch
                              (*(uint *)((int)this + 0x24),*local_8,
                               (uint)*(ushort *)((int)this + 0x7d));
            if (0 < iVar7) {
              return;
            }
          }
          pGVar5 = local_8;
          pAVar11 = &local_6c;
          for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)pAVar11 = 0;
            pAVar11 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar11->field_0003 + 1);
          }
          uVar4 = param_1[3];
          *(undefined2 *)pAVar11 = 0;
          local_6c._0_4_ = *pGVar5;
          local_6c._4_2_ = param_2;
          if (local_20 == (AiPlrClassTy *)0x0) {
            local_6c._8_4_ = 0;
          }
          else {
            local_6c._8_4_ = *(undefined4 *)&local_20->field_0x65c;
            *(uint *)&local_20->field_0x65c = local_6c._8_4_ + 1;
          }
          local_6c._12_2_ = *(undefined2 *)((int)this + 0x7d);
          local_6c._22_2_ = *(undefined2 *)((int)param_1 + 0xe);
          local_6c._24_2_ = *(undefined2 *)(param_1 + 4);
          local_6c._26_2_ = *(undefined2 *)((int)param_1 + 0x12);
          local_6c._28_1_ = SUB41(param_1[5],0);
          local_6c._14_4_ = 0;
          if ((((char)local_6c._28_1_ < '\0') || ('\a' < (char)local_6c._28_1_)) &&
             ((local_6c._28_1_ = *(char *)((int)this + 0x81), (char)local_6c._28_1_ < '\0' ||
              ('\a' < (char)local_6c._28_1_)))) {
            local_6c._28_1_ = *(char *)((int)this + 0x24);
          }
          local_6c.field_0006 = (short)uVar4;
          Library::MSVCRT::_strncpy(&local_6c.field_0x1d,(char *)((int)param_1 + 0x15),0xe);
          iVar7 = AiTactClassTy::PrepareToSave
                            (*(AiTactClassTy **)((int)this + 0x284),&local_6c,
                             *(short *)((int)this + 0x7f));
          pSVar6 = g_sTAllPlayers_007FA174;
          if (iVar7 == 0) {
            param_1[9] = local_6c._8_4_;
            return;
          }
        }
cf_continue_loop_0066137E:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar9 = *(short *)((int)this + 0x7b);
        if ((int)((-(uint)(sVar9 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

