
/* WARNING: Removing unreachable block (ram,0x006611f2) */

void __thiscall FUN_00660f70(void *this,uint *param_1,undefined2 param_2)

{
  Global_sub_004E80F0_param_2Enum GVar1;
  bool bVar2;
  STAllPlayersC *pSVar3;
  Global_sub_004E80F0_param_2Enum *pGVar4;
  STAllPlayersC *pSVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  short sVar9;
  undefined4 uVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  Global_sub_004E80F0_param_2Enum *pGVar11;
  Global_sub_004E80F0_param_2Enum local_6c;
  undefined2 local_68;
  undefined2 local_66;
  uint local_64;
  undefined2 local_60;
  undefined4 local_5e;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  char local_50;
  char local_4f [47];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  Global_sub_004E80F0_param_2Enum *local_8;
  
  if (((*(int *)((int)this + 0x284) != 0) && (*(int *)((int)this + 0x20b) != 0)) &&
     (DAT_007fa174 != (STAllPlayersC *)0x0)) {
    local_20 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
    sVar9 = *(short *)((int)this + 0x7b);
    local_c = 0;
    if ((-(uint)(sVar9 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar5 = DAT_007fa174;
      do {
        GVar1 = *local_8;
        if ((GVar1 == 0) || (((GVar1 == 0 || (0x28 < GVar1)) && (sVar9 != 1))))
        goto cf_continue_loop_0066137E;
        if ((((int)GVar1 < 1) || (0x28 < (int)GVar1)) || (pSVar5 == (STAllPlayersC *)0x0)) {
          if ((((int)GVar1 < 0x32) || (0x73 < (int)GVar1)) || (pSVar5 == (STAllPlayersC *)0x0)) {
            if ((((GVar1 == CASE_A3) || (GVar1 == CASE_A8)) ||
                ((GVar1 == CASE_B2 || (GVar1 == CASE_BE)))) && (pSVar5 != (STAllPlayersC *)0x0)) {
              pSVar5 = (STAllPlayersC *)thunk_FUN_004e80f0(*(int *)((int)this + 0x24),GVar1);
              pSVar3 = DAT_007fa174;
            }
            else {
              pSVar3 = pSVar5;
              if (((GVar1 != 0xdd) && (GVar1 != 0xde)) && ((GVar1 != 0xe2 && (GVar1 != 0xdc))))
              goto cf_continue_loop_0066137E;
            }
          }
          else {
            pSVar5 = (STAllPlayersC *)thunk_FUN_004e6c20(*(int *)((int)this + 0x24),GVar1);
            pSVar3 = DAT_007fa174;
          }
        }
        else {
          pSVar5 = (STAllPlayersC *)thunk_FUN_004e6a80(*(int *)((int)this + 0x24),GVar1);
          pSVar3 = DAT_007fa174;
        }
        bVar2 = pSVar5 == (STAllPlayersC *)0x0;
        pSVar5 = pSVar3;
        if (bVar2) goto cf_continue_loop_0066137E;
        if (*(char *)((int)this + 0xff) == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          if (*(short *)((int)this + 0x39) != 3) {
            if (iVar6 != 0) goto switchD_0066104e_caseD_9;
            iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          }
          if (iVar6 == 0) goto cf_continue_loop_0066137E;
        default:
          goto switchD_0066104e_caseD_9;
        case 0x39:
        case 0x5e:
          iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          break;
        case 0x3a:
          iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x13c);
          break;
        case 0x4f:
        case 0x61:
          iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          break;
        case 100:
          iVar6 = *(int *)(*(int *)((int)this + 0x284) + 0x140);
        }
        if (iVar6 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar9 = *(short *)((int)param_1 + 0xe);
            uVar10 = CONCAT22((short)((uint)local_8 >> 0x10),sVar9);
            if ((sVar9 < 0) ||
               ((((short)param_1[4] < 0 || (*(short *)((int)param_1 + 0x12) < 0)) ||
                (iVar6 = thunk_FUN_004ae0b0((int)sVar9,(int)(short)param_1[4],
                                            (int)*(short *)((int)param_1 + 0x12),*local_8,
                                            *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                            (int *)0x0,0,(int *)0x0), uVar10 = extraout_EDX,
                iVar6 == 0)))) {
              local_10 = 0;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (puVar7 = thunk_FUN_0065e360((int)this,uVar10,0x53), puVar7 != (uint *)0x0)) {
                if (((puVar7[3] != 0) && (DAT_007fa174 != (STAllPlayersC *)0x0)) &&
                   (uVar8 = STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                *(undefined1 *)((int)this + 0x24)),
                                       CONCAT22((short)(puVar7[7] >> 0x10),*(undefined2 *)puVar7[7])
                                       ,CASE_1), uVar8 != 0)) {
                  local_10 = uVar8;
                }
                FUN_006ae110((byte *)puVar7);
              }
              local_14 = (int)*(short *)((int)param_1 + 0xe);
              iVar6 = *(int *)((int)this + 0x284);
              local_18 = (int)(short)param_1[4];
              local_1c = (int)*(short *)((int)param_1 + 0x12);
              iVar6 = thunk_FUN_004b0d10(*(uint *)((int)this + 0x24),*local_8,&local_14,&local_18,
                                         &local_1c,(int)*(short *)(iVar6 + 0x82),
                                         (int)*(short *)(iVar6 + 0x84),(int)*(short *)(iVar6 + 0x86)
                                         ,local_10);
              if (iVar6 == 0) {
                return;
              }
              *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              *(undefined2 *)((int)param_1 + 0x12) = (undefined2)local_1c;
            }
            iVar6 = _GetEmbrGrpTobjGrpExch
                              (*(uint *)((int)this + 0x24),*local_8,
                               (uint)*(ushort *)((int)this + 0x7d));
            if (0 < iVar6) {
              return;
            }
          }
          pGVar4 = local_8;
          pGVar11 = &local_6c;
          for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pGVar11 = 0;
            pGVar11 = pGVar11 + 1;
          }
          uVar8 = param_1[3];
          *(undefined2 *)pGVar11 = 0;
          local_6c = *pGVar4;
          local_68 = param_2;
          if (local_20 == 0) {
            local_64 = 0;
          }
          else {
            local_64 = *(uint *)(local_20 + 0x65c);
            *(uint *)(local_20 + 0x65c) = local_64 + 1;
          }
          local_60 = *(undefined2 *)((int)this + 0x7d);
          local_56 = *(undefined2 *)((int)param_1 + 0xe);
          local_54 = (undefined2)param_1[4];
          local_52 = *(undefined2 *)((int)param_1 + 0x12);
          local_50 = (char)param_1[5];
          local_5e = 0;
          if (((local_50 < '\0') || ('\a' < local_50)) &&
             ((local_50 = *(char *)((int)this + 0x81), local_50 < '\0' || ('\a' < local_50)))) {
            local_50 = *(char *)((int)this + 0x24);
          }
          local_66 = (short)uVar8;
          Library::MSVCRT::_strncpy(local_4f,(char *)((int)param_1 + 0x15),0xe);
          iVar6 = AiTactClassTy::PrepareToSave
                            (*(AiTactClassTy **)((int)this + 0x284),&local_6c,
                             *(short *)((int)this + 0x7f));
          pSVar5 = DAT_007fa174;
          if (iVar6 == 0) {
            param_1[9] = local_64;
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

