
void FUN_005cce10(void)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *local_14c;
  undefined4 local_148 [16];
  undefined4 *local_108;
  undefined4 local_104 [16];
  undefined4 *local_c4;
  undefined4 local_c0 [16];
  undefined4 local_80;
  undefined4 local_7c [16];
  undefined4 local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_1c = 0;
  local_80 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_80;
  iVar4 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 **)local_80;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x164,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7cd258,0x164);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar10 = local_3c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_2c = 0x26;
  local_c4 = DAT_00858df8;
  DAT_00858df8 = &local_c4;
  iVar4 = __setjmp3(local_c0,0,unaff_EDI,unaff_ESI);
  pvVar3 = local_14;
  if (iVar4 == 0) {
    FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + 0x211d),local_3c);
    local_1c = local_28;
  }
  if ((*(char *)((int)pvVar3 + 0x1e26) == '\x05') || (*(char *)((int)pvVar3 + 0x1e26) == '\x0f')) {
    local_c = *(int *)((int)pvVar3 + 7999);
  }
  else {
    local_c = *(int *)((int)pvVar3 + 0x1f43);
  }
  DAT_00858df8 = (undefined4 **)local_c4;
  *(undefined4 *)((int)pvVar3 + 0x29) = 2;
  *(undefined4 *)((int)pvVar3 + 0x2d) = 0x20;
  local_10 = 0;
  local_8 = 0x7e3;
  do {
    local_18 = 0;
    uVar8 = local_8;
    do {
      if (*(int *)((int)pvVar3 + (uVar8 + local_18) * 4) != 0) {
        iVar4 = *(int *)((int)pvVar3 + 0x1f84);
        if ((iVar4 == 0) ||
           (uVar7 = *(int *)((int)pvVar3 + 0x1f88) + local_10, *(uint *)(iVar4 + 0xc) <= uVar7)) {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
        }
        cVar1 = *(char *)((int)pvVar3 + 0x1e26);
        *(undefined4 *)((int)pvVar3 + 0x25) = *(undefined4 *)((int)pvVar3 + (uVar8 + local_18) * 4);
        *(undefined4 *)((int)pvVar3 + 0x31) = 0;
        if (((cVar1 != '\f') && (cVar1 != '\x10')) && (pcVar9 != (char *)0x0)) {
          switch(local_18) {
          case 0:
            if (*(byte **)(pcVar9 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar9 + 0x50));
            }
            pcVar9[0x50] = '\0';
            pcVar9[0x51] = '\0';
            pcVar9[0x52] = '\0';
            pcVar9[0x53] = '\0';
            switch(*(undefined1 *)((int)pvVar3 + 0x1e26)) {
            case 5:
            case 0xf:
              puVar5 = thunk_FUN_0067e0e0(local_c,(uint)(byte)pcVar9[2],0xffffffff);
              break;
            default:
              puVar5 = thunk_FUN_0067dfd0(local_c,(uint)(byte)pcVar9[3],DAT_0080995c);
              break;
            case 0xc:
            case 0x10:
              puVar5 = thunk_FUN_0067e200(local_c,(uint)(byte)pcVar9[2],0xffffffff);
            }
            *(uint **)(pcVar9 + 0x50) = puVar5;
            if (puVar5[3] <= (uint)(byte)pcVar9[5]) {
              pcVar9[5] = (char)puVar5[3];
            }
            if ((*(int *)(*(int *)(pcVar9 + 0x50) + 0xc) == 0) && (pcVar9[4] == '\x04')) {
              pcVar9[4] = '\x01';
            }
            if (((*pcVar9 != '\0') && (*(char *)((int)pvVar3 + 0x1e26) != '\x05')) &&
               ((*(char *)((int)pvVar3 + 0x1e26) != '\x0f' && (pcVar9[4] == '\x02')))) {
              bVar11 = *(int *)(pcVar9 + 6) == DAT_0080877f;
LAB_005cd119:
              if (bVar11) goto LAB_005cd142;
            }
            break;
          case 1:
          case 2:
            if (((cVar1 != '\x05') && (cVar1 != '\x0f')) && (*pcVar9 != '\0')) {
              if (DAT_0080877e != '\0') {
                if (pcVar9[4] == '\x02') {
LAB_005cd10f:
                  bVar11 = *(int *)(pcVar9 + 6) == DAT_0080877f;
                  goto LAB_005cd119;
                }
                goto LAB_005cd142;
              }
              if (pcVar9[4] == '\x02') {
                iVar4 = *(int *)(pcVar9 + 6);
                goto joined_r0x005cd0bb;
              }
            }
            break;
          case 3:
            if (((DAT_0080877e != '\0') || (cVar1 = pcVar9[4], cVar1 == '\x01')) ||
               ((cVar1 == '\x02' && (*(int *)(pcVar9 + 6) == DAT_0080877f)))) goto LAB_005cd142;
            if (cVar1 == '\x03') {
              iVar4 = *(int *)(pcVar9 + 6);
              goto joined_r0x005cd0bb;
            }
            break;
          case 5:
            if (((((DAT_0080874d != -1) && (cVar1 != '\x05')) &&
                 ((cVar1 != '\x0f' && ((*pcVar9 != '\0' && (cVar1 = pcVar9[4], cVar1 != '\0'))))))
                && (cVar1 != '\x01')) && (pcVar9[2] != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((cVar1 != '\x02') || (*(int *)(pcVar9 + 6) != DAT_0080877f)) goto LAB_005cd142;
              }
              else if (DAT_0080877e == '\0') {
                if (cVar1 == '\x02') goto LAB_005cd10f;
              }
              else {
                if (cVar1 == '\x02') {
                  iVar4 = *(int *)(pcVar9 + 6);
                  goto joined_r0x005cd0bb;
                }
LAB_005cd142:
                *(undefined4 *)((int)pvVar3 + 0x31) = 1;
              }
            }
            break;
          case 7:
            if (pcVar9[4] == '\x02') {
              iVar4 = *(int *)(pcVar9 + 6);
joined_r0x005cd0bb:
              if (iVar4 == DAT_0080877f) goto LAB_005cd142;
            }
          }
        }
        (**(code **)(**(int **)((int)pvVar3 + 0xc) + 0x18))((int)pvVar3 + 0x1d);
        uVar8 = local_8;
      }
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    local_8 = uVar8 + 8;
    local_10 = local_10 + 1;
    if (0x832 < (int)local_8) {
      local_8 = *(uint *)(*(int *)((int)pvVar3 + 0x1f84) + 0xc);
      local_2c = 0x28;
      if ((*(int *)((int)pvVar3 + 0x1f84) == 0) || (local_8 < 0xb)) {
        local_28 = 1;
      }
      else {
        local_28 = local_8 - 9;
      }
      local_108 = DAT_00858df8;
      DAT_00858df8 = &local_108;
      iVar4 = __setjmp3(local_104,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + 0x211d),local_3c);
      }
      local_2c = 0x22;
      if (local_8 < 0xb) {
        local_28 = 0;
      }
      else {
        local_28 = local_1c & 0xffff;
        if (local_8 < local_28 + 10) {
          local_28 = local_8 - 10;
        }
      }
      DAT_00858df8 = &local_14c;
      local_14c = local_108;
      iVar4 = __setjmp3(local_148,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + 0x211d),local_3c);
      }
      DAT_00858df8 = (undefined4 **)local_80;
      return;
    }
  } while( true );
}

