
void FUN_005e0ac0(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  void *unaff_EDI;
  uint uVar9;
  undefined4 local_50;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x19c,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7cd994,0x19c);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(char *)((int)local_c + 0x6d) == '\x03') || (*(char *)((int)local_c + 0x6d) == '\x05')) {
    thunk_FUN_005e1330();
  }
  iVar3 = *(int *)((int)local_c + 0x647);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar8 = (uint *)0x0;
        goto LAB_005e0b38;
      }
      do {
        puVar8 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e0b38:
        if (((-1 < (int)*puVar8) && (*(int *)((int)puVar8 + 0x3a) != 0)) &&
           (*(int *)((int)puVar8 + 0x31) != 0)) {
          if ((puVar8[7] - 3 < puVar8[4]) &&
             (puVar8[10] < *(int *)((int)local_c + 0x69) - puVar8[9])) {
            if (puVar8[4] < puVar8[7]) {
              thunk_FUN_005e11d0(puVar8[1],*(char *)((int)puVar8 + 0x35),(char)puVar8[0xe]);
              FUN_00714b30(*(void **)((int)puVar8 + 0x31),puVar8[4] - 1);
              iVar3 = FUN_007140e0(*(void **)((int)puVar8 + 0x31),1,'\0');
              if (iVar3 != 0) {
                FUN_006b5440(puVar8[1],0,puVar8[5],puVar8[6],iVar3,0,0xff);
              }
              FUN_006b35d0(DAT_008075a8,*puVar8);
              puVar8[4] = puVar8[4] + 1;
              puVar8[9] = *(uint *)((int)local_c + 0x69);
            }
            else {
              thunk_FUN_005e10a0(puVar8);
            }
          }
          if (puVar8[4] < puVar8[7] - 3) {
            thunk_FUN_005e11d0(puVar8[1],*(char *)((int)puVar8 + 0x35),(char)puVar8[0xe]);
            iVar3 = FUN_007140e0(*(void **)((int)puVar8 + 0x31),1,'\0');
            if (iVar3 != 0) {
              FUN_006b5440(puVar8[1],0,puVar8[5],puVar8[6],iVar3,0,0xff);
            }
            FUN_006b35d0(DAT_008075a8,*puVar8);
            uVar6 = puVar8[4];
            puVar8[4] = uVar6 + 1;
            if (((char)puVar8[0xc] != '\0') && ((uVar6 + 1) % 3 != 0)) {
              thunk_FUN_005b6730(local_c,0x1e,'\x01',-1);
            }
          }
        }
        iVar3 = *(int *)((int)local_c + 0x647);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
  }
  iVar3 = *(int *)((int)local_c + 0x64f);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar8 = (uint *)0x0;
        goto LAB_005e0ca3;
      }
      do {
        puVar8 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e0ca3:
        if (((-1 < (int)*puVar8) && (puVar8[4] != 0)) &&
           (puVar8[10] < *(int *)((int)local_c + 0x69) - puVar8[9])) {
          uVar6 = puVar8[4] + 1;
          puVar8[4] = uVar6;
          puVar8[9] = *(uint *)((int)local_c + 0x69);
          if (uVar6 < 3) {
            FUN_006b35d0(DAT_008075a8,*puVar8);
          }
          else {
            thunk_FUN_005e10a0(puVar8);
          }
        }
        iVar3 = *(int *)((int)local_c + 0x64f);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
  }
  iVar3 = *(int *)((int)local_c + 0x64b);
  if (iVar3 != 0) {
    local_8 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar3 = 0;
        goto LAB_005e0d20;
      }
      do {
        iVar3 = *(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c);
LAB_005e0d20:
        uVar6 = local_8;
        uVar7 = *(uint *)(iVar3 + 4);
        if (uVar7 != 0xffffffff) {
          switch(*(undefined1 *)(iVar3 + 0x91)) {
          case 1:
            if (*(uint *)(iVar3 + 0x40) <=
                (uint)(*(int *)((int)local_c + 0x69) - *(int *)(iVar3 + 0x44))) {
              uVar4 = *(int *)(iVar3 + 8) + 1;
              *(uint *)(iVar3 + 8) = uVar4;
              *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)((int)local_c + 0x69);
              if (uVar4 == *(uint *)(iVar3 + 0xc)) {
                FUN_00715ab0();
              }
              else {
                FUN_006b3730(*(uint **)(iVar3 + 0x48),uVar7,uVar4,*(uint *)(iVar3 + 0x1c),
                             *(uint *)(iVar3 + 0x20));
              }
            }
            break;
          case 2:
            if (*(uint *)(iVar3 + 0x40) <=
                (uint)(*(int *)((int)local_c + 0x69) - *(int *)(iVar3 + 0x44))) {
              iVar5 = *(int *)(iVar3 + 8) + 1;
              *(int *)(iVar3 + 8) = iVar5;
              if (iVar5 == *(int *)(iVar3 + 0xc)) {
                *(undefined4 *)(iVar3 + 8) = 0;
              }
              *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)((int)local_c + 0x69);
              FUN_006b3730(*(uint **)(iVar3 + 0x48),uVar7,*(uint *)(iVar3 + 8),
                           *(uint *)(iVar3 + 0x1c),*(uint *)(iVar3 + 0x20));
            }
            break;
          case 3:
            iVar5 = *(int *)(iVar3 + 0x92);
            if (iVar5 != *(int *)(iVar3 + 0x96)) {
              *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(*(int *)(iVar3 + 0x9a) + iVar5 * 8);
              *(undefined4 *)(iVar3 + 0x20) =
                   *(undefined4 *)(*(int *)(iVar3 + 0x9a) + iVar5 * 8 + 4);
              *(int *)(iVar3 + 0x92) = iVar5 + 1;
              if (*(uint *)(iVar3 + 0x40) <=
                  (uint)(*(int *)((int)local_c + 0x69) - *(int *)(iVar3 + 0x44))) {
                iVar5 = *(int *)(iVar3 + 8) + 1;
                *(int *)(iVar3 + 8) = iVar5;
                if (iVar5 == *(int *)(iVar3 + 0xc)) {
                  *(undefined4 *)(iVar3 + 8) = 0;
                }
                *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)((int)local_c + 0x69);
              }
              uVar6 = *(uint *)(iVar3 + 0x20);
              uVar4 = *(uint *)(iVar3 + 0x1c);
              uVar9 = *(uint *)(iVar3 + 8);
              puVar8 = *(uint **)(iVar3 + 0x48);
              goto LAB_005e0edd;
            }
            FUN_00715ab0();
            if (*(int *)(iVar3 + 0x9a) != 0) {
              FUN_006ab060((undefined4 *)(iVar3 + 0x9a));
            }
            break;
          case 4:
            iVar5 = *(int *)(iVar3 + 0x92);
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(*(int *)(iVar3 + 0x9a) + iVar5 * 8);
            uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x9a) + iVar5 * 8 + 4);
            *(int *)(iVar3 + 0x92) = iVar5 + 1;
            *(undefined4 *)(iVar3 + 0x20) = uVar1;
            if (iVar5 + 1 == *(int *)(iVar3 + 0x96)) {
              *(undefined4 *)(iVar3 + 0x92) = 0;
            }
            if (*(uint *)(iVar3 + 0x40) <=
                (uint)(*(int *)((int)local_c + 0x69) - *(int *)(iVar3 + 0x44))) {
              iVar5 = *(int *)(iVar3 + 8) + 1;
              *(int *)(iVar3 + 8) = iVar5;
              if (iVar5 == *(int *)(iVar3 + 0xc)) {
                *(undefined4 *)(iVar3 + 8) = 0;
              }
              *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)((int)local_c + 0x69);
            }
            uVar6 = *(uint *)(iVar3 + 0x20);
            uVar4 = *(uint *)(iVar3 + 0x1c);
            uVar9 = *(uint *)(iVar3 + 8);
            puVar8 = *(uint **)(iVar3 + 0x48);
LAB_005e0edd:
            FUN_006b3730(puVar8,uVar7,uVar9,uVar4,uVar6);
            uVar6 = local_8;
          }
        }
        iVar3 = *(int *)((int)local_c + 0x64b);
        local_8 = uVar6 + 1;
      } while (local_8 < *(uint *)(iVar3 + 0xc));
    }
  }
  *(int *)((int)local_c + 0x69) = *(int *)((int)local_c + 0x69) + 1;
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

