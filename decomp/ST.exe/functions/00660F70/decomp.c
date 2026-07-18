
/* WARNING: Removing unreachable block (ram,0x006611f2) */

void __thiscall FUN_00660f70(void *this,uint *param_1,undefined2 param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint *puVar8;
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
     (DAT_007fa174 != 0)) {
    local_20 = thunk_FUN_004357f0(*(char *)((int)this + 0x24));
    sVar6 = *(short *)((int)this + 0x7b);
    local_c = 0;
    if ((-(uint)(sVar6 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      iVar2 = DAT_007fa174;
      do {
        uVar4 = *local_8;
        if ((uVar4 == 0) || (((uVar4 == 0 || (0x28 < uVar4)) && (sVar6 != 1)))) goto LAB_0066137e;
        if ((((int)uVar4 < 1) || (0x28 < (int)uVar4)) || (iVar2 == 0)) {
          if ((((int)uVar4 < 0x32) || (0x73 < (int)uVar4)) || (iVar2 == 0)) {
            if ((((uVar4 == 0xa3) || (uVar4 == 0xa8)) || ((uVar4 == 0xb2 || (uVar4 == 0xbe)))) &&
               (iVar2 != 0)) {
              iVar2 = thunk_FUN_004e80f0(*(int *)((int)this + 0x24),uVar4);
              iVar5 = DAT_007fa174;
            }
            else {
              iVar5 = iVar2;
              if (((uVar4 != 0xdd) && (uVar4 != 0xde)) && ((uVar4 != 0xe2 && (uVar4 != 0xdc))))
              goto LAB_0066137e;
            }
          }
          else {
            iVar2 = thunk_FUN_004e6c20(*(int *)((int)this + 0x24),uVar4);
            iVar5 = DAT_007fa174;
          }
        }
        else {
          iVar2 = thunk_FUN_004e6a80(*(int *)((int)this + 0x24),uVar4);
          iVar5 = DAT_007fa174;
        }
        bVar1 = iVar2 == 0;
        iVar2 = iVar5;
        if (bVar1) goto LAB_0066137e;
        if (*(char *)((int)this + 0xff) == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          if (*(short *)((int)this + 0x39) != 3) {
            if (iVar5 != 0) goto switchD_0066104e_caseD_9;
            iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          }
          if (iVar5 == 0) goto LAB_0066137e;
        default:
          goto switchD_0066104e_caseD_9;
        case 0x39:
        case 0x5e:
          iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x138);
          break;
        case 0x3a:
          iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x13c);
          break;
        case 0x4f:
        case 0x61:
          iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x134);
          break;
        case 100:
          iVar5 = *(int *)(*(int *)((int)this + 0x284) + 0x140);
        }
        if (iVar5 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar6 = *(short *)((int)param_1 + 0xe);
            uVar7 = CONCAT22((short)((uint)local_8 >> 0x10),sVar6);
            if ((sVar6 < 0) ||
               ((((short)param_1[4] < 0 || (*(short *)((int)param_1 + 0x12) < 0)) ||
                (iVar2 = thunk_FUN_004ae0b0((int)sVar6,(int)(short)param_1[4],
                                            (int)*(short *)((int)param_1 + 0x12),*local_8,
                                            *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                            (int *)0x0,0,(int *)0x0), uVar7 = extraout_EDX,
                iVar2 == 0)))) {
              local_10 = 0;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (puVar3 = thunk_FUN_0065e360((int)this,uVar7,0x53), puVar3 != (uint *)0x0)) {
                if (((puVar3[3] != 0) && (DAT_007fa174 != 0)) &&
                   (uVar4 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                                        *(undefined1 *)((int)this + 0x24)),
                                               CONCAT22((short)(puVar3[7] >> 0x10),
                                                        *(undefined2 *)puVar3[7]),1), uVar4 != 0)) {
                  local_10 = uVar4;
                }
                FUN_006ae110((byte *)puVar3);
              }
              local_14 = (int)*(short *)((int)param_1 + 0xe);
              iVar2 = *(int *)((int)this + 0x284);
              local_18 = (int)(short)param_1[4];
              local_1c = (int)*(short *)((int)param_1 + 0x12);
              iVar2 = thunk_FUN_004b0d10(*(uint *)((int)this + 0x24),*local_8,&local_14,&local_18,
                                         &local_1c,(int)*(short *)(iVar2 + 0x82),
                                         (int)*(short *)(iVar2 + 0x84),(int)*(short *)(iVar2 + 0x86)
                                         ,local_10);
              if (iVar2 == 0) {
                return;
              }
              *(undefined2 *)((int)param_1 + 0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              *(undefined2 *)((int)param_1 + 0x12) = (undefined2)local_1c;
            }
            iVar2 = thunk_FUN_006763f0(*(uint *)((int)this + 0x24),*local_8,
                                       (uint)*(ushort *)((int)this + 0x7d));
            if (0 < iVar2) {
              return;
            }
          }
          puVar3 = local_8;
          puVar8 = &local_6c;
          for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          uVar4 = param_1[3];
          *(undefined2 *)puVar8 = 0;
          local_6c = *puVar3;
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
          local_66 = (short)uVar4;
          _strncpy(local_4f,(char *)((int)param_1 + 0x15),0xe);
          iVar5 = AiTactClassTy::PrepareToSave
                            (*(AiTactClassTy **)((int)this + 0x284),&local_6c,
                             *(short *)((int)this + 0x7f));
          iVar2 = DAT_007fa174;
          if (iVar5 == 0) {
            param_1[9] = local_64;
            return;
          }
        }
LAB_0066137e:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar6 = *(short *)((int)this + 0x7b);
        if ((int)((-(uint)(sVar6 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

