
ushort * __cdecl
FUN_00709af0(int *param_1,byte param_2,byte *param_3,uint param_4,byte param_5,int param_6,
            int param_7,undefined4 *param_8)

{
  byte bVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  byte *pbVar9;
  void *unaff_EDI;
  byte *pbVar10;
  undefined4 local_88;
  undefined4 local_84 [16];
  byte local_44;
  byte local_43 [32];
  uint local_23;
  undefined4 local_1f;
  ushort *local_1b;
  byte *local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_c = 0;
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar4 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_88;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_mfrload_cpp_007eff5c,0xc4,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      puVar6 = (ushort *)(*pcVar3)();
      return puVar6;
    }
    if (local_8 != (ushort *)0x0) {
      FUN_00709a10(param_1,param_2,(uint *)&local_8);
    }
    FUN_006a5e40(iVar4,0,0x7eff5c,200);
    return (ushort *)0x0;
  }
  if (param_1 == (int *)0x0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0x9f);
    return (ushort *)0x0;
  }
  if (param_1[1] == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0xa0);
    return (ushort *)0x0;
  }
  local_8 = (ushort *)FUN_007098a0((int)param_1,param_2,param_3,param_4,&local_c,&local_10);
  if (local_8 == (ushort *)0x0) {
    switch(param_2) {
    case 0:
      puVar6 = FUN_0071ad00(*param_1,(char *)param_3,param_5,param_6);
      break;
    case 1:
    case 4:
    case 5:
    case 6:
    case 0xe:
    case 0x12:
    case 0x16:
    case 0x1c:
      puVar6 = FUN_0070a5a0(*param_1,param_2,(char *)param_3,param_5,param_6);
      break;
    case 2:
      puVar6 = FUN_00719d00(*param_1,(char *)param_3,param_5,param_6);
      break;
    default:
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0xb2);
      return (ushort *)0x0;
    case 7:
      puVar6 = (ushort *)FUN_00725c60(*param_1,(char *)param_3,param_5,param_6);
      break;
    case 8:
      puVar6 = (ushort *)FUN_00725f50(*param_1,(char *)param_3,param_4,param_5,param_6);
      break;
    case 0xb:
      puVar6 = (ushort *)FUN_0070ae60(*param_1,(char *)param_3,param_5,param_7,param_8,param_6);
      break;
    case 0x13:
    case 0x1d:
      puVar6 = (ushort *)FUN_00716850(*param_1,(char *)param_3,param_2,param_5,param_6);
      break;
    case 0x15:
      puVar6 = (ushort *)FUN_00726630(*param_1,(char *)param_3,param_5,param_6);
      break;
    case 0x1e:
      puVar6 = (ushort *)FUN_00726a80(*param_1,(char *)param_3,param_5,param_6);
      break;
    case 0x1f:
      puVar6 = (ushort *)FUN_0070b430(*param_1,(char *)param_3,(byte)param_4,param_5,param_6);
    }
    local_8 = (ushort *)0x0;
    if (puVar6 != (ushort *)0x0) {
      local_44 = param_2;
      uVar7 = 0xffffffff;
      do {
        pbVar9 = param_3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar9 = param_3 + 1;
        bVar1 = *param_3;
        param_3 = pbVar9;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      pbVar9 = pbVar9 + -uVar7;
      pbVar10 = local_43;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar10 = pbVar10 + 4;
      }
      puVar2 = (uint *)param_1[1];
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar10 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      }
      local_23 = param_4;
      local_1f = 1;
      local_1b = puVar6;
      local_14 = local_43;
      local_8 = puVar6;
      FUN_006ae1c0(puVar2,(undefined4 *)&local_44);
      DAT_00858df8 = (undefined4 *)local_88;
      return local_8;
    }
  }
  else {
    *(int *)(local_c + 0x25) = *(int *)(local_c + 0x25) + 1;
  }
  DAT_00858df8 = (undefined4 *)local_88;
  return local_8;
}

