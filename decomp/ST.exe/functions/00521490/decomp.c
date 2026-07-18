
undefined4 FUN_00521490(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar7 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x11e,0,iVar7,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    FUN_006a5e40(iVar7,0,0x7c3eb0,0x11e);
    return 0xffff;
  }
  thunk_FUN_0053eb70(param_1);
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 0x61) {
    if (uVar11 == 0x60) {
      iVar7 = 0;
      local_14 = (uint)*(ushort *)(param_1 + 0x1a);
      local_c = 0;
      if (*(short *)(local_10 + 0x172) == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          iVar9 = *(int *)(local_10 + 0x2d4 + (local_8 & 0xff) * 0x14);
          iVar7 = local_10 + 0x2d4 + (local_8 & 0xff) * 0x14;
          if (((((int)(uint)*(ushort *)(param_1 + 0x18) < iVar9) ||
               (*(int *)(iVar7 + 8) + iVar9 <= (int)(uint)*(ushort *)(param_1 + 0x18))) ||
              ((int)local_14 < *(int *)(iVar7 + 4))) ||
             (*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 4) <= (int)local_14)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar7 = 0;
          if (bVar4) {
            iVar7 = *(int *)(local_10 + ((local_8 & 0xff) + 0x25) * 0x14);
            break;
          }
          bVar6 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < 0xc);
      }
      iVar9 = *(int *)(local_10 + 0x178);
      if (iVar9 != iVar7) {
        if (iVar9 != 0) {
          *(undefined4 *)(local_10 + 0x28) = 0x4202;
          *(undefined2 *)(local_10 + 0x2c) = 0;
          *(undefined2 *)(local_10 + 0x2e) = 2;
          *(int *)(local_10 + 0x30) = iVar9;
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)(local_10 + 0x18);
          }
        }
        *(int *)(local_10 + 0x178) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(local_10 + 0x28) = 0x4201;
          *(undefined2 *)(local_10 + 0x2c) = 0;
          *(undefined2 *)(local_10 + 0x2e) = 2;
          *(int *)(local_10 + 0x30) = iVar7;
          (**(code **)*DAT_00802a30)(local_10 + 0x18);
          DAT_00858df8 = (undefined4 *)local_58;
          return 0;
        }
      }
    }
    else {
      if (uVar11 == 2) {
        thunk_FUN_0051ff50();
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
      if (uVar11 == 3) {
        thunk_FUN_005204d0();
        DAT_00858df8 = (undefined4 *)local_58;
        return 0;
      }
    }
  }
  else if (uVar11 == 0xb208) {
    *(char *)(local_10 + 0x3d4) = **(char **)(param_1 + 0x14) + -1;
    thunk_FUN_00520d10();
  }
  else if (uVar11 == 0xb209) {
    piVar1 = *(int **)(param_1 + 0x14);
    iVar7 = piVar1[3];
    iVar9 = *(int *)(local_10 + 0x3c);
    bVar6 = *(byte *)(*piVar1 + 0x1ab + local_10);
    uVar11 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = CONCAT31(local_c._1_3_,bVar6);
    iVar2 = piVar1[4];
    iVar5 = DAT_00806734;
    if (*(int *)(local_10 + 0x5c) != 0) {
      iVar5 = *(int *)(local_10 + 0x44);
    }
    if (piVar1[1] == 0) {
      if (bVar6 != 0xff) {
        uVar11 = bVar6 + 1;
      }
    }
    else if ((piVar1[1] == 1) && (bVar6 != 0xff)) {
      uVar11 = bVar6 + 9;
    }
    pbVar8 = (byte *)FUN_0070b3a0(*(int *)(local_10 + 0x3c4),uVar11);
    thunk_FUN_00540760(*(undefined4 **)(local_10 + 0x68),iVar7 - iVar9,iVar2 - iVar5,'\x01',pbVar8);
    FUN_006b3640(DAT_008075a8,*(uint *)(local_10 + 0x60),0xffffffff,*(uint *)(local_10 + 0x3c),
                 *(uint *)(local_10 + 0x44));
    DAT_00858df8 = (undefined4 *)local_58;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  return 0;
}

