
int FUN_006b3120(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int local_24 [3];
  uint local_18;
  undefined4 local_14;
  AnonShape_006B5B10_E0D06CF1 *local_10;
  uint *local_c;
  int local_8;

  puVar4 = param_2;
  puVar3 = param_1;
  iVar7 = 0;
  local_c = (uint *)0x0;
  local_10 = (AnonShape_006B5B10_E0D06CF1 *)0x0;
  local_8 = 0;
  if (param_2[0x33] != 0) {
    param_1[0x6d] = 1;
    uVar1 = *param_2;
    if ((uVar1 & 0x60004000) == 0) {
      param_2[8] = 0xffffffff;
      param_2[9] = 0xffffffff;
      *param_2 = uVar1 | 0x24;
    }
    else {
      *param_2 = uVar1 | 0x20;
      if ((((uVar1 & 0x40000001) != 0x40000001) || (param_2[10] != param_2[6])) ||
         (param_2[0xb] != param_2[7])) {
        *param_2 = CONCAT31((int3)(uVar1 >> 8),(char)(uVar1 | 0x20)) | 4;
      }
      param_2[10] = param_2[6];
      param_2[0xb] = param_2[7];
    }
    if (((*param_2 & 0x4000000) != 0) && (param_2[0x34] != 0)) {
      uVar1 = param_2[0x30];
      psVar5 = (short *)(param_2[0x33] + param_2[0x31] * uVar1 * 10);
      if (0 < (int)uVar1) {
        do {
          uVar2 = *(uint *)(param_2[0x34] + iVar7 * 4);
          if (-1 < (int)uVar2) {
            local_8 = Library::DKW::DDX::FUN_006b3640
                                ((int *)param_1,uVar2,param_2[0x31],param_2[6] + (int)*psVar5,
                                 (int)psVar5[1] + param_2[7]);
            if (local_8 != 0) {
              return local_8;
            }
            iVar6 = FUN_006b33f0((AnonShape_006B1B10_121F236C *)param_1,
                                 *(uint *)(param_2[0x34] + iVar7 * 4));
            if ((iVar6 == 0) &&
               (local_8 = Library::DKW::DDX::FUN_006b3430
                                    ((int *)param_1,*(uint *)(param_2[0x34] + iVar7 * 4)),
               local_8 != 0)) {
              return local_8;
            }
          }
          psVar5 = psVar5 + 5;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar1);
      }
    }
    if (((param_2[0xc] != 0) && (param_2[0xd] != 0)) &&
       (uVar1 = *param_2, *param_2 = uVar1 | 2, (uVar1 & 0x4200) == 0)) {
      FUN_006cf950(param_2);
      uVar1 = *param_1;
      if ((*(uint *)(uVar1 + 0xc) & 0x1100) != 0x100) {
        local_24[2] = param_2[0xc];
        local_24[1] = 0;
        local_24[0] = 0;
        param_2 = (uint *)0x0;
        local_18 = puVar4[0xd];
        if ((*puVar4 & 0x60000000) == 0) {
          param_1 = *(uint **)puVar4[0x33];
          if ((*puVar4 & 0xc0000000) != 0) {
            param_2 = (uint *)((undefined4 *)puVar4[0x33])[1];
          }
        }
        else {
          param_1 = (uint *)puVar4[0x33];
        }
        if ((*(uint *)(uVar1 + 8) & 0x4000000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0x4f0));
        }
        uVar1 = *puVar3;
        iVar7 = 0;
        local_14 = *(undefined4 *)(uVar1 + 0x40);
        *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)(uVar1 + 0x44);
        *(undefined4 *)(*puVar3 + 0x44) = local_14;
        local_c = (uint *)0x0;
        if ((*puVar4 & 0xa0001000) == 0) {
          do {
            local_8 = FUN_006bbe40(*(int **)(*puVar3 + 0x44),(uint *)&local_c,(int *)&local_10,0);
            if (local_8 == 0) goto LAB_006b3351;
            if (local_8 != -0x7789fe3e) goto LAB_006b334d;
            FUN_006cec40((AnonShape_006CEC40_BB23E716 *)*puVar3);
            FUN_006cee60((int)puVar3);
            iVar7 = iVar7 + 1;
          } while (iVar7 < 2);
        }
        else {
LAB_006b334d:
          if (local_8 == 0) {
LAB_006b3351:
            iVar7 = FUN_006cee10((int)puVar3,(int)puVar4);
            local_8 = FUN_006cef60((int *)puVar3,local_c,local_10,(int)puVar4,param_1,
                                   (char *)param_2,puVar4[10],puVar4[0xb],local_24,0,iVar7,
                                   *puVar4 & 0xff000000,(undefined1 *)0x0);
            if (local_c != (uint *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(**(int **)(*puVar3 + 0x44) + 0x80))(*(int **)(*puVar3 + 0x44),0);
            }
          }
          if ((local_8 == -0x7789ff60) || (local_8 == -0x7789fe52)) {
            local_8 = 0;
          }
        }
        *(undefined4 *)(*puVar3 + 0x44) = *(undefined4 *)(*puVar3 + 0x40);
        *(undefined4 *)(*puVar3 + 0x40) = local_14;
        if ((*(uint *)(*puVar3 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(*puVar3 + 0x4f0));
        }
      }
    }
  }
  return local_8;
}

