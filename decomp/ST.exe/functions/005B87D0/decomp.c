
undefined4 __thiscall FUN_005b87d0(void *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  int *piVar1;
  code *pcVar2;
  void *this_00;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  UINT *pUVar11;
  void *unaff_EDI;
  UINT *pUVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint local_478 [256];
  undefined4 *local_78;
  undefined4 local_74 [16];
  int local_34 [8];
  void *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;
  
  local_c = local_c & 0xffffff00;
  if ((*(char *)((int)this + 0x65) == '\x02') && (*(char *)((int)this + 0x1ca9) == '\0')) {
    local_78 = DAT_00858df8;
    DAT_00858df8 = &local_78;
    local_14 = this;
    iVar4 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar4 == 0) {
      thunk_FUN_005b6480();
      thunk_FUN_005b8c70(this_00,0,0,1);
      if (param_1 == 0) {
        *(undefined4 *)((int)this_00 + 0x1cd0) = 0;
      }
      else {
        *(UINT *)((int)this_00 + 0x1cd0) = param_1;
        if (param_3 == 0) {
          uVar6 = 0xffffffff;
          local_8 = *(uint *)((int)this_00 + 0x1d88);
          uVar5 = 7;
          iVar18 = -1;
          iVar15 = -1;
          iVar14 = 1;
          uVar16 = 0xffffffff;
          uVar10 = 0xfffffffe;
          iVar9 = 0x39;
          iVar4 = 0x158;
          puVar8 = (uint *)FUN_006b0140(param_1,DAT_00807618);
          puVar7 = FUN_00713480(puVar8,iVar4,iVar9,uVar10,uVar16,iVar14,iVar15,iVar18);
          (**(code **)(local_8 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)((int)this_00 + 0x1d90) = 0;
        }
        else {
          uVar5 = FUN_006b0140(param_4,DAT_00807618);
          uVar6 = FUN_006b0140(param_1,DAT_00807618);
          wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,uVar6,uVar5,param_3);
          iVar4 = *(int *)((int)this_00 + 0x1d88);
          uVar6 = 0xffffffff;
          uVar5 = 7;
          puVar7 = FUN_00713480(local_478,0x158,0x39,0xfffffffe,0xffffffff,1,-1,-1);
          (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)((int)this_00 + 0x1d90) = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (*(char *)((int)this_00 + 0x9a) != '\0') {
        do {
          uVar10 = local_8 & 0xff;
          local_10 = (UINT *)(uVar10 * 0x27 + param_2);
          if (*local_10 == 0) {
            puVar7 = (undefined4 *)(uVar10 * 0x1fb + 0xbc + (int)this_00);
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            *(undefined2 *)puVar7 = 0;
            *(undefined1 *)((int)puVar7 + 2) = 0;
          }
          else {
            uVar6 = 0xffffffff;
            uVar5 = 7;
            iVar20 = -1;
            iVar19 = -1;
            iVar18 = 1;
            uVar17 = 0xffffffff;
            uVar16 = 0xfffffffe;
            iVar15 = 0x1e;
            iVar14 = 0x7d;
            iVar4 = *(int *)((int)this_00 + uVar10 * 0x1fb + 0x174);
            iVar9 = uVar10 * 0x1fb;
            puVar8 = (uint *)FUN_006b0140(*local_10,DAT_00807618);
            puVar7 = FUN_00713480(puVar8,iVar14,iVar15,uVar16,uVar17,iVar18,iVar19,iVar20);
            (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
            pUVar12 = (UINT *)((int)this_00 + iVar9 + 0xbc);
            if ((*local_10 == *(UINT *)((int)this_00 + iVar9 + 0xbc)) && ((char)local_10[1] == '\0')
               ) {
              *(int *)((int)this_00 + iVar9 + 0x17c) = *(int *)((int)this_00 + iVar9 + 0x180) + -3;
              pUVar11 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pUVar12 = pUVar12 + 1;
              }
              *(short *)pUVar12 = (short)*pUVar11;
              *(undefined1 *)((int)pUVar12 + 2) = *(undefined1 *)((int)pUVar11 + 2);
            }
            else {
              *(undefined4 *)((int)this_00 + iVar9 + 0x17c) = 0;
              pUVar11 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pUVar12 = pUVar12 + 1;
              }
              *(short *)pUVar12 = (short)*pUVar11;
              *(undefined1 *)((int)pUVar12 + 2) = *(undefined1 *)((int)pUVar11 + 2);
            }
          }
          bVar3 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < *(byte *)((int)this_00 + 0x9a));
      }
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (*(char *)((int)this_00 + 0x9a) != '\0') {
        do {
          uVar10 = local_8 & 0xff;
          *(undefined4 *)((int)this_00 + uVar10 * 0x1fb + 0x127) =
               *(undefined4 *)((int)this_00 + 0x61);
          *(uint *)((int)this_00 + uVar10 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)((int)this_00 + uVar10 * 0x1fb + 0xbc) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar3 = bVar3 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < *(byte *)((int)this_00 + 0x9a));
      }
      puVar7 = (undefined4 *)((int)this_00 + 0x1c82);
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined4 *)((int)this_00 + 0x1c9c) = 0x1010101;
      *(undefined4 *)((int)this_00 + 0x1ca0) = 0x1010101;
      *(undefined4 *)((int)this_00 + 0x1ca4) = 0x1010101;
      *(undefined1 *)((int)this_00 + 0x1ca8) = 1;
      *(undefined1 *)((int)this_00 + 0x65) = 3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar4 = *(int *)((int)this_00 + 0x1cab);
      if (iVar4 != 0) {
        piVar1 = *(int **)((int)this_00 + 0xc);
        piVar13 = local_34;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar4;
        (**(code **)(*piVar1 + 0x18))(local_34);
      }
      DAT_00858df8 = local_78;
      return 1;
    }
    DAT_00858df8 = local_78;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x181,0,iVar4,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    FUN_006a5e40(iVar4,0,0x7ccb74,0x181);
  }
  return 0;
}

