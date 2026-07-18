
void FUN_005d4e90(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_settsobj_cpp_007cd544,0x3b,0,iVar5,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar5,0,0x7cd544,0x3b);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(local_14 + 0x1e26) == '\x02') {
    local_8 = *(int *)(local_14 + 7999);
  }
  else {
    local_8 = *(int *)(local_14 + 0x1f43);
  }
  *(undefined4 *)(local_14 + 0x29) = 2;
  *(undefined4 *)(local_14 + 0x2d) = 0x20;
  local_c = 0;
  local_10 = 0x7e3;
  do {
    iVar8 = 0;
    iVar5 = local_10;
    do {
      if (*(int *)(local_14 + (iVar5 + iVar8) * 4) != 0) {
        iVar1 = *(int *)(local_14 + 0x1f84);
        if ((iVar1 == 0) ||
           (uVar7 = *(int *)(local_14 + 0x1f88) + local_c, *(uint *)(iVar1 + 0xc) <= uVar7)) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)(*(int *)(iVar1 + 8) * uVar7 + *(int *)(iVar1 + 0x1c));
        }
        uVar2 = *(undefined4 *)(local_14 + (iVar5 + iVar8) * 4);
        *(undefined4 *)(local_14 + 0x31) = 0;
        *(undefined4 *)(local_14 + 0x25) = uVar2;
        if (pcVar9 != (char *)0x0) {
          switch(iVar8) {
          case 0:
            if (*(byte **)(pcVar9 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar9 + 0x50));
            }
            if (*(char *)(local_14 + 0x1e26) == '\x02') {
              puVar6 = thunk_FUN_0067e0e0(local_8,(uint)(byte)pcVar9[2],0xffffffff);
            }
            else {
              puVar6 = thunk_FUN_0067dfd0(local_8,(uint)(byte)pcVar9[3],DAT_0080995c);
            }
            *(uint **)(pcVar9 + 0x50) = puVar6;
            if (puVar6[3] <= (uint)(byte)pcVar9[5]) {
              pcVar9[5] = (char)puVar6[3];
            }
            if ((puVar6[3] == 0) && (pcVar9[4] == '\x04')) {
              pcVar9[4] = '\x01';
            }
            break;
          case 1:
          case 2:
            if ((*(char *)(local_14 + 0x1e26) != '\x02') && (*pcVar9 != '\0')) {
              cVar4 = pcVar9[4];
joined_r0x005d502e:
              if (cVar4 != '\0') goto LAB_005d5030;
            }
            break;
          case 3:
            if (((*(char *)(local_14 + 0x1e26) != '\x02') || (pcVar9[4] != '\x02')) &&
               (*(int *)(*(int *)(pcVar9 + 0x50) + 0xc) != 0)) {
LAB_005d5030:
              *(undefined4 *)(local_14 + 0x31) = 1;
            }
            break;
          case 5:
            if ((((DAT_0080874d != -1) && (*pcVar9 != '\0')) && (pcVar9[4] != '\0')) &&
               (*(char *)(local_14 + 0x1e26) != '\x02')) {
              if ((pcVar9[4] == '\x02') &&
                 (cVar4 = DAT_00808a8f, *(int *)(pcVar9 + 6) == DAT_0080877f))
              goto joined_r0x005d502e;
              goto LAB_005d5030;
            }
          }
        }
        (**(code **)(**(int **)(local_14 + 0xc) + 0x18))(local_14 + 0x1d);
        iVar5 = local_10;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 8);
    local_10 = iVar5 + 8;
    local_c = local_c + 1;
    if (0x832 < local_10) {
      DAT_00858df8 = (undefined4 *)local_58;
      return;
    }
  } while( true );
}

