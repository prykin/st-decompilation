
void FUN_004f05c0(void)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  int *piVar12;
  int local_358 [11];
  undefined4 auStack_32c [3];
  undefined4 auStack_320 [4];
  undefined4 auStack_310 [4];
  undefined4 auStack_300 [3];
  undefined4 auStack_2f4 [143];
  undefined4 *local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  puVar10 = local_74;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar12 = local_358;
  for (iVar7 = 0xa8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  iVar7 = __setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = local_b8;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_bldobj_cpp_007c1984,0x3d,0,iVar7,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar7,0,0x7c1984,0x3d);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar7 = 5;
  DAT_00801684 = local_1c;
  puVar10 = (undefined4 *)(local_1c + 0x27e);
  do {
    puVar3 = FUN_006ae290((uint *)0x0,10,0x30,5);
    *puVar10 = puVar3;
    puVar10 = puVar10 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 1;
  *(int *)(local_1c + 0x3c) = *(int *)(local_1c + 0x3c) + (DAT_00806730 + -800) / 2;
  piVar12 = (int *)0x0;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJW_007c19e0,0);
  puVar5 = FUN_006f1ce0(1,pCVar4,piVar12,iVar7);
  *(ushort **)(local_1c + 0x184) = puVar5;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJBUT_007c19d0,0);
  wsprintfA((LPSTR)(local_1c + 0x6c),&DAT_007c181c,pCVar4);
  puVar5 = FUN_006f1ce0(1,(LPSTR)(local_1c + 0x6c),(int *)0x0,1);
  *(ushort **)(local_1c + 0x27a) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(local_1c + 0x188) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_OBJSD_007c1908,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
  *(ushort **)(local_1c + 0x18c) = puVar5;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJBUT_007c19d0,0);
  thunk_FUN_0053ef20(0x2724,0x36,2,0xc1,0xc,0x79,99,0x5b,0xb7,99,0x1c,
                     (DAT_0080874e == '\x03') + 0x13,0x31,pCVar4);
  local_8 = local_8 & 0xffffff00;
  local_10 = (DAT_0080874e != '\x03') + 4;
  if (local_10 != 0) {
    local_18 = *(int *)(local_1c + 0x3c);
    local_c = *(int *)(local_1c + 0x5c);
    local_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffeb) + 0x3d;
    uVar8 = 0;
    do {
      iVar7 = local_14;
      local_358[uVar8 * 0x1c] = uVar8 + 1;
      local_358[uVar8 * 0x1c + 1] = 0;
      local_358[uVar8 * 0x1c + 3] = iVar7 + uVar8 * 0x2c + local_18;
      bVar11 = local_c != 0;
      local_358[uVar8 * 0x1c + 5] = 0x2b;
      iVar7 = DAT_00806734;
      if (bVar11) {
        iVar7 = *(int *)(local_1c + 0x44);
      }
      local_358[uVar8 * 0x1c + 4] = iVar7 + 0x3d;
      local_358[uVar8 * 0x1c + 6] = 0x1b;
      auStack_310[uVar8 * 0x1c] = 0;
      auStack_300[uVar8 * 0x1c] = 0x101;
      auStack_32c[uVar8 * 0x1c] = 0x101;
      auStack_300[uVar8 * 0x1c + 1] = 3;
      auStack_32c[uVar8 * 0x1c + 1] = 3;
      auStack_32c[uVar8 * 0x1c + 2] = 0x4201;
      auStack_300[uVar8 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_2f4 + uVar8 * 0x1c) = 0;
      *(undefined2 *)(auStack_320 + uVar8 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_2f4 + (uVar8 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_320 + (uVar8 * 0x38 + 1) * 2) = 2;
      switch(uVar8) {
      case 0:
        uVar9 = 0x3a9b;
        break;
      case 1:
        uVar9 = 0x3a9c;
        break;
      case 2:
        uVar9 = 0x3a9d;
        break;
      case 3:
        uVar9 = 0x3aa8;
        break;
      case 4:
        uVar9 = 0x3a9e;
        break;
      default:
        goto switchD_004f0850_default;
      }
      auStack_2f4[uVar8 * 0x1c + 1] = uVar9;
      auStack_320[uVar8 * 0x1c + 1] = uVar9;
switchD_004f0850_default:
      bVar2 = (char)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      uVar8 = (uint)bVar2;
    } while ((int)uVar8 < local_10);
  }
  local_2c = local_358;
  local_28 = *(byte *)(local_1c + 0x278) + 1;
  local_64 = *(undefined4 *)(local_1c + 8);
  local_74[0] = 1;
  local_74[1] = 1;
  local_60 = 2;
  local_5c = 0xb205;
  local_40 = 2;
  local_3c = 0xb206;
  local_24 = 1;
  local_20 = 1;
  local_44 = local_64;
  (**(code **)(**(int **)(local_1c + 0xc) + 8))(5,local_1c + 0x292,0,local_74,0);
  DAT_00858df8 = local_b8;
  return;
}

