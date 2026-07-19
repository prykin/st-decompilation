
undefined4 __cdecl FUN_0057b350(int *param_1,int param_2,int *param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  int *piVar10;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar5 = param_1;
  if ((param_2 < 0x1a) || (0x23 < param_2)) {
    iVar7 = ReportDebugMessage(s_E____titans_Igor_to_etorp_cpp_007caf5c,0x156,0,0,&DAT_007a4ccc,
                               s_ConusExplosion_Wrong_number_of_t_007caf80);
    if (iVar7 != 0) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  else {
    iVar7 = FUN_006aac70(param_2 << 3);
    *param_3 = iVar7;
    if (iVar7 != 0) {
      local_8 = 0;
      local_c = -0xc9;
      local_18 = 3;
      do {
        local_14 = 3;
        param_1 = (int *)0xffffff37;
        do {
          iVar7 = -200;
          local_10 = 3;
          piVar10 = param_3 + local_8;
          do {
            if ((int)param_1 + iVar7 + local_c != 0) {
              psVar1 = (short *)*piVar10;
              *psVar1 = *(short *)((int)piVar5 + 0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar10 + 2) = *(short *)((int)piVar5 + 0x43) + (short)param_1;
              *(short *)(*piVar10 + 4) = (short)iVar7 + *(short *)((int)piVar5 + 0x45);
              puVar2 = (undefined2 *)*piVar10;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,*(undefined2 *)((int)piVar5 + 0x41)),
                                 CONCAT22(uVar6,*(undefined2 *)((int)piVar5 + 0x43)),
                                 CONCAT22(uVar9,*(undefined2 *)((int)piVar5 + 0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar10;
              local_8 = local_8 + 1;
              piVar10 = piVar10 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar7 = iVar7 + 200;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      if (param_2 == 0x1a) {
        return 1;
      }
      local_c = -100;
      local_10 = 2;
      do {
        local_14 = 2;
        param_1 = (int *)0xffffff9c;
        do {
          iVar7 = -100;
          local_18 = 1;
          piVar10 = param_3 + local_8;
          do {
            if (param_2 <= local_8) break;
            if ((int)param_1 + local_c + iVar7 != 0) {
              psVar1 = (short *)*piVar10;
              *psVar1 = *(short *)((int)piVar5 + 0x41) + (short)local_c;
              uVar9 = (undefined2)((uint)psVar1 >> 0x10);
              *(short *)(*piVar10 + 2) = *(short *)((int)piVar5 + 0x43) + (short)param_1;
              *(short *)(*piVar10 + 4) = (short)iVar7 + *(short *)((int)piVar5 + 0x45);
              puVar2 = (undefined2 *)*piVar10;
              uVar6 = (undefined2)((uint)puVar2 >> 0x10);
              uVar6 = (**(code **)(*piVar5 + 0x10))
                                (CONCAT22(uVar9,*(undefined2 *)((int)piVar5 + 0x41)),
                                 CONCAT22(uVar6,*(undefined2 *)((int)piVar5 + 0x43)),
                                 CONCAT22(uVar9,*(undefined2 *)((int)piVar5 + 0x45)),
                                 CONCAT22(uVar6,*puVar2),CONCAT22(uVar9,puVar2[1]),
                                 CONCAT22(uVar9,puVar2[2]));
              iVar3 = *piVar10;
              local_8 = local_8 + 1;
              piVar10 = piVar10 + 1;
              *(undefined2 *)(iVar3 + 6) = uVar6;
            }
            iVar7 = iVar7 + 200;
            local_18 = local_18 + -1;
          } while (-1 < local_18);
          param_1 = (int *)((int)param_1 + 0xc9);
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_c = local_c + 0xc9;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          return 1;
        }
      } while( true );
    }
    iVar7 = ReportDebugMessage(s_E____titans_Igor_to_etorp_cpp_007caf5c,0x15d,0,0,&DAT_007a4ccc,
                               s_SphereExplosion_Bad_parameters_007cafc8);
    if (iVar7 != 0) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  return 0;
}

