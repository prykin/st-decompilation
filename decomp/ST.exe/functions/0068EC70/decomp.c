
void __fastcall FUN_0068ec70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar10;
  bool bVar11;
  undefined4 local_88;
  undefined4 local_84 [16];
  uint local_44 [2];
  char local_3c;
  char cStack_3b;
  undefined2 uStack_3a;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 local_36;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)(param_1 + 0x91) == 0) ||
     ((uint)(*(int *)(param_1 + 0x95) + *(int *)(param_1 + 0x91)) <= *(uint *)(param_1 + 300))) {
    *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(param_1 + 300);
    local_88 = DAT_00858df8;
    DAT_00858df8 = &local_88;
    local_10 = param_1;
    iVar7 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
    iVar8 = local_10;
    if (iVar7 == 0) {
      local_8 = 0;
      iVar7 = *(int *)(local_10 + 0xbd);
      if (0 < *(int *)(iVar7 + 0xc)) {
        bVar11 = *(int *)(iVar7 + 0xc) != 0;
        do {
          uVar4 = uStack_37;
          cVar6 = cStack_3b;
          if (bVar11) {
            iVar7 = *(int *)(iVar7 + 8) * local_8 + *(int *)(iVar7 + 0x1c);
          }
          else {
            iVar7 = 0;
          }
          cStack_3b = (char)iVar7;
          cVar3 = cStack_3b;
          uStack_37 = (undefined1)((uint)iVar7 >> 0x18);
          uVar5 = uStack_37;
          uStack_37 = uVar4;
          switch(*(undefined4 *)(iVar7 + 0x2c)) {
          case 0:
            if ((*(int *)(iVar7 + 0x12) == 0) ||
               ((uint)(*(int *)(iVar7 + 0x3a) + *(int *)(iVar7 + 0x12)) <= *(uint *)(iVar8 + 300)))
            {
              iVar9 = *(int *)(iVar8 + 0xa5);
              local_c = 0;
              if (0 < *(int *)(iVar9 + 0xc)) {
                bVar11 = *(int *)(iVar9 + 0xc) != 0;
                cStack_3b = cVar6;
                do {
                  if (bVar11) {
                    iVar9 = *(int *)(iVar9 + 8) * local_c + *(int *)(iVar9 + 0x1c);
                  }
                  else {
                    iVar9 = 0;
                  }
                  if (*(int *)(iVar9 + 4) != 0) {
                    puVar10 = local_44;
                    for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + 1;
                    }
                    local_44[1] = *(undefined4 *)(iVar8 + 300);
                    local_44[0] = 0x68;
                    uStack_3a = (undefined2)iVar7;
                    uStack_38 = (undefined1)((uint)iVar7 >> 0x10);
                    cStack_3b = '\x01';
                    uStack_37 = uVar5;
                    thunk_FUN_00662240(local_44);
                    if ('\0' < local_3c) {
                      *(undefined4 *)(iVar7 + 0x2c) = 1;
                      *(uint *)(iVar7 + 0x34) = local_c;
                      *(undefined2 *)(iVar7 + 0x38) = local_36;
                      *(undefined4 *)(iVar7 + 0x3a) = *(undefined4 *)(iVar8 + 300);
                      cVar6 = cStack_3b;
                      break;
                    }
                  }
                  iVar9 = *(int *)(iVar8 + 0xa5);
                  local_c = local_c + 1;
                  bVar11 = local_c < *(uint *)(iVar9 + 0xc);
                  cVar6 = cStack_3b;
                } while ((int)local_c < (int)*(uint *)(iVar9 + 0xc));
              }
            }
            else {
              *(undefined4 *)(iVar7 + 0x2c) = 3;
            }
            break;
          case 1:
            if ((*(int *)(iVar7 + 0xe) == 0) ||
               ((uint)(*(int *)(iVar7 + 0x3a) + *(int *)(iVar7 + 0xe)) <= *(uint *)(iVar8 + 300))) {
              iVar9 = *(int *)(iVar8 + 0xa5);
              if (*(uint *)(iVar7 + 0x34) < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * *(uint *)(iVar7 + 0x34) + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar10 = local_44;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                local_44[1] = *(undefined4 *)(iVar8 + 300);
                local_44[0] = 0x69;
                uStack_3a = (undefined2)((uint)iVar7 >> 8);
                uStack_38 = uVar5;
                thunk_FUN_00662240(local_44);
                if ('\0' < local_3c) {
                  *(undefined4 *)(iVar7 + 0x2c) = 2;
                }
                cVar6 = cStack_3b;
                if (local_3c < '\0') {
                  *(undefined4 *)(iVar7 + 0x2c) = 3;
                }
                break;
              }
            }
            *(undefined4 *)(iVar7 + 0x2c) = 3;
            break;
          case 2:
          case 3:
            uVar1 = *(uint *)(iVar7 + 0x30);
            cStack_3b = cVar6;
            if (-1 < (int)uVar1) {
              iVar9 = *(int *)(iVar8 + 0xa5);
              if (uVar1 < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * uVar1 + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
                puVar10 = local_44;
                for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                local_44[1] = *(undefined4 *)(iVar8 + 300);
                local_44[0] = 0x6b;
                cStack_3b = (char)((uint)iVar7 >> 8);
                uStack_3a = (undefined2)((uint)iVar7 >> 0x10);
                local_3c = cVar3;
                thunk_FUN_00662240(local_44);
              }
            }
            FUN_006b0c70(*(int *)(iVar8 + 0xbd),local_8);
            local_8 = local_8 - 1;
            cVar6 = cStack_3b;
          }
          cStack_3b = cVar6;
          iVar7 = *(int *)(iVar8 + 0xbd);
          local_8 = local_8 + 1;
          bVar11 = local_8 < *(uint *)(iVar7 + 0xc);
        } while ((int)local_8 < (int)*(uint *)(iVar7 + 0xc));
      }
      DAT_00858df8 = (undefined4 *)local_88;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_88;
    iVar8 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x1ff,0,iVar7,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7d56e0,0x200);
  }
  return;
}

