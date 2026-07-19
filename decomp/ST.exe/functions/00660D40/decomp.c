
void __fastcall FUN_00660d40(int param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  int local_54;
  undefined2 local_50;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  char local_40;
  char local_3f [47];
  int local_10;
  uint local_c;
  int local_8;
  
  if (((*(int *)(param_1 + 0x284) != 0) && (*(int *)(param_1 + 0x20b) != 0)) && (DAT_007fa174 != 0))
  {
    local_8 = param_1;
    local_10 = thunk_FUN_004357f0(*(char *)(param_1 + 0x24));
    iVar6 = *(int *)(param_1 + 0x20b);
    local_c = 0;
    if (0 < *(int *)(iVar6 + 0xc)) {
      bVar8 = *(int *)(iVar6 + 0xc) != 0;
      do {
        if (bVar8) {
          iVar6 = *(int *)(iVar6 + 8) * local_c + *(int *)(iVar6 + 0x1c);
        }
        else {
          iVar6 = 0;
        }
        sVar2 = *(short *)(param_1 + 0x7b);
        iVar5 = 0;
        uVar4 = local_c;
        if ((-(uint)(sVar2 != 1) & 2) != 0xffffffff) {
          do {
            uVar1 = *(uint *)(iVar6 + iVar5 * 4);
            if ((((uVar1 != 0) && (*(int *)(iVar6 + 0x28) == 0)) && (*(int *)(iVar6 + 0x24) == 0))
               && (((uVar1 != 0 && (uVar1 < 0x29)) || (sVar2 == 1)))) {
              puVar7 = &local_5c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              *(undefined2 *)puVar7 = 0;
              iVar3 = local_8;
              local_5c = *(undefined4 *)(iVar6 + iVar5 * 4);
              local_54 = 0;
              if (iVar5 == 0) {
                local_56 = *(undefined2 *)(iVar6 + 0xc);
              }
              else {
                local_56 = 0;
              }
              local_58 = (undefined2)uVar4;
              if (local_10 != 0) {
                local_54 = *(int *)(local_10 + 0x65c);
                *(int *)(local_10 + 0x65c) = local_54 + 1;
              }
              local_50 = *(undefined2 *)(local_8 + 0x7d);
              local_46 = *(undefined2 *)(iVar6 + 0xe);
              local_44 = *(undefined2 *)(iVar6 + 0x10);
              local_42 = *(undefined2 *)(iVar6 + 0x12);
              local_40 = *(char *)(iVar6 + 0x14);
              if (((local_40 < '\0') || ('\a' < local_40)) &&
                 ((local_40 = *(char *)(local_8 + 0x81), local_40 < '\0' || ('\a' < local_40)))) {
                local_40 = *(char *)(local_8 + 0x24);
              }
              Library::MSVCRT::_strncpy(local_3f,(char *)(iVar6 + 0x15),0xe);
              if (iVar5 == 0) {
                sVar2 = *(short *)(iVar3 + 0x7f);
              }
              else {
                sVar2 = 0;
              }
              AiTactClassTy::PrepareToSave(*(AiTactClassTy **)(iVar3 + 0x284),&local_5c,sVar2);
              uVar4 = local_c;
              param_1 = local_8;
            }
            sVar2 = *(short *)(param_1 + 0x7b);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)((-(uint)(sVar2 != 1) & 2) + 1));
        }
        iVar6 = *(int *)(param_1 + 0x20b);
        local_c = uVar4 + 1;
        bVar8 = local_c < *(uint *)(iVar6 + 0xc);
      } while ((int)local_c < (int)*(uint *)(iVar6 + 0xc));
    }
  }
  return;
}

