
/* WARNING: Removing unreachable block (ram,0x006611f2) */

void __thiscall FUN_00660f70(void *this,uint *param_1,undefined2 param_2)

{
  bool bVar1;
  STAllPlayersC *pSVar2;
  STAllPlayersC *pSVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint *puVar9;
  uint local_6c;
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
  uint *local_8;
  
  if (((*(int *)((int)this + 0x284) != 0) && (*(int *)((int)this + 0x20b) != 0)) &&
     (DAT_007fa174 != (STAllPlayersC *)0x0)) {
    local_20 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
    sVar7 = *(short *)((int)this + 0x7b);
    local_c = 0;
    if ((-(uint)(sVar7 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar3 = DAT_007fa174;
      do {
        uVar6 = *local_8;
        if ((uVar6 == 0) || (((uVar6 == 0 || (0x28 < uVar6)) && (sVar7 != 1)))) goto LAB_0066137e;
        if ((((int)uVar6 < 1) || (0x28 < (int)uVar6)) || (pSVar3 == (STAllPlayersC *)0x0)) {
          if ((((int)uVar6 < 0x32) || (0x73 < (int)uVar6)) || (pSVar3 == (STAllPlayersC *)0x0)) {
            if ((((uVar6 == 0xa3) || (uVar6 == 0xa8)) || ((uVar6 == 0xb2 || (uVar6 == 0xbe)))) &&
               (pSVar3 != (STAllPlayersC *)0x0)) {
              pSVar3 = (STAllPlayersC *)thunk_FUN_004e80f0(*(int *)((int)this + 0x24),uVar6);
              pSVar2 = DAT_007fa174;
            }
            else {
              pSVar2 = pSVar3;
              if (((uVar6 != 0xdd) && (uVar6 != 0xde)) && ((uVar6 != 0xe2 && (uVar6 != 0xdc))))
              goto LAB_0066137e;
            }
          }
          else {
            pSVar3 = (STAllPlayersC *)thunk_FUN_004e6c20(*(int *)((int)this + 0x24),uVar6);
            pSVar2 = DAT_007fa174;
          }
        }
        else {
          pSVar3 = (STAllPlayersC *)thunk_FUN_004e6a80(*(int *)((int)this + 0x24),uVar6);
          pSVar2 = DAT_007fa174;
        }
        bVar1 = pSVar3 == (STAllPlayersC *)0x0;
        pSVar3 = pSVar2;
        if (bVar1) goto LAB_0066137e;
        if (*(char *)((int)this + 0xff) == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          if (*(short *)((int)this + 0x39) != 3) {
            if (iVar4 != 0) goto switchD_0066104e_caseD_9;
            iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          }
          if (iVar4 == 0) goto LAB_0066137e;
        default:
          goto switchD_0066104e_caseD_9;
        case 0x39:
        case 0x5e:
          iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          break;
        case 0x3a:
          iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x13c);
          break;
        case 0x4f:
        case 0x61:
          iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          break;
        case 100:
          iVar4 = *(int *)(*(int *)((int)this + 0x284) + 0x140);
        }
        if (iVar4 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar7 = *(short *)((int)param_1 + 0xe);
            uVar8 = CONCAT22((short)((uint)local_8 >> 0x10),sVar7);
            if ((sVar7 < 0) ||
               ((((short)param_1[4] < 0 || (*(short *)((int)param_1 + 0x12) < 0)) ||
                (iVar4 = thunk_FUN_004ae0b0((int)sVar7,(int)(short)param_1[4],
                                            (int)*(short *)((int)param_1 + 0x12),*local_8,
                                            *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                            (int *)0x0,0,(int *)0x0), uVar8 = extraout_EDX,
                iVar4 == 0)))) {
              local_10 = 0;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (puVar5 = thunk_FUN_0065e360((int)this,uVar8,0x53), puVar5 != (uint *)0x0)) {
                if (((puVar5[3] != 0) && (DAT_007fa174 != (STAllPlayersC *)0x0)) &&
                   (uVar6 = STAllPlayersC::GetObjPtr
                                      (DAT_007fa174,
                                       CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                *(undefined1 *)((int)this + 0x24)),
                                       CONCAT22((short)(puVar5[7] >> 0x10),*(undefined2 *)puVar5[7])
                                       ,1), uVar6 != 0)) {
                  local_10 = uVar6;
                }
                FUN_006ae110((byte *)puVar5);
              }
              local_14 = (int)*(short *)((int)param_1 + 0xe);
              iVar4 = *(int *)((int)this + 0x284);
              local_18 = (int)(short)param_1[4];
              local_1c = (int)*(short *)((int)param_1 + 0x12);
              iVar4 = thunk_FUN_004b0d10(*(uint *)((int)this + 0x24),*local_8,&local_14,&local_18,
                                         &local_1c,(int)*(short *)(iVar4 + 0x82),
                                         (int)*(short *)(iVar4 + 0x84),(int)*(short *)(iVar4 + 0x86)
                                         ,local_10);
              if (iVar4 == 0) {
                return;
              }
              *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              *(undefined2 *)((int)param_1 + 0x12) = (undefined2)local_1c;
            }
            iVar4 = thunk_FUN_006763f0(*(uint *)((int)this + 0x24),*local_8,
                                       (uint)*(ushort *)((int)this + 0x7d));
            if (0 < iVar4) {
              return;
            }
          }
          puVar5 = local_8;
          puVar9 = &local_6c;
          for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          uVar6 = param_1[3];
          *(undefined2 *)puVar9 = 0;
          local_6c = *puVar5;
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
          local_66 = (short)uVar6;
          Library::MSVCRT::_strncpy(local_4f,(char *)((int)param_1 + 0x15),0xe);
          iVar4 = AiTactClassTy::PrepareToSave
                            (*(AiTactClassTy **)((int)this + 0x284),&local_6c,
                             *(short *)((int)this + 0x7f));
          pSVar3 = DAT_007fa174;
          if (iVar4 == 0) {
            param_1[9] = local_64;
            return;
          }
        }
LAB_0066137e:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar7 = *(short *)((int)this + 0x7b);
        if ((int)((-(uint)(sVar7 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

