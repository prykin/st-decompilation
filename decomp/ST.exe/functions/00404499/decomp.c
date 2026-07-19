
uint thunk_FUN_0044c130(int param_1,int param_2)

{
  code *pcVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte abStack_154 [256];
  int aiStack_54 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  iVar3 = param_2;
  piVar6 = aiStack_54;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_0044e980(param_1,iVar3,0xe,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    if (abStack_154[0] != 0) {
      puVar2 = FUN_00709af0(piStack_c,(byte)uStack_8,abStack_154,0xffffffff,0,1,0,(undefined4 *)0x0)
      ;
      uStack_1c = *(undefined4 *)(*(int *)((int)puVar2 + 0x21) + param_2 * 4);
    }
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_0044e980(param_1,iVar3,0xd,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    if (abStack_154[0] != 0) {
      puVar2 = FUN_00709af0(piStack_c,(byte)uStack_8,abStack_154,0xffffffff,0,1,0,(undefined4 *)0x0)
      ;
      uStack_20 = *(undefined4 *)(*(int *)((int)puVar2 + 0x21) + param_2 * 4);
    }
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_0044e980(param_1,iVar3,0xc,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    if (abStack_154[0] != 0) {
      puVar2 = FUN_00709af0(piStack_c,(byte)uStack_8,abStack_154,0xffffffff,0,1,0,(undefined4 *)0x0)
      ;
      uStack_24 = *(undefined4 *)(*(int *)((int)puVar2 + 0x21) + param_2 * 4);
    }
    uVar4 = FUN_00709470(DAT_00807598,aiStack_54,0x11,1,10,0xff);
    return uVar4;
  default:
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x324e,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetTOBJImage_unkn_007a8a8c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x78:
    piStack_10 = aiStack_54;
    iVar5 = 0;
    do {
      piStack_c = (int *)0x0;
      abStack_154[0] = 0;
      uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
      param_2 = 0;
      thunk_FUN_004c2950(param_1,iVar3,iVar5,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                         &param_2);
      if (abStack_154[0] != 0) {
        puVar2 = FUN_00709af0(piStack_c,(byte)uStack_8,abStack_154,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
        if (*(int *)puVar2 + -1 < param_2) {
          param_2 = *(int *)puVar2 + -1;
        }
        *piStack_10 = *(int *)(*(int *)((int)puVar2 + 0x21) + param_2 * 4);
      }
      iVar5 = iVar5 + 1;
      piStack_10 = piStack_10 + 1;
    } while (iVar5 < 0x11);
    goto LAB_0044c477;
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe2:
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_00580910(param_1,iVar3,0xe,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    break;
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_0057a140(param_1,iVar3,0xe,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    goto joined_r0x0044c40d;
  case 0xfd:
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_005ec740(param_1,iVar3,0xe,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
    break;
  case 0xfe:
    piStack_c = (int *)0x0;
    abStack_154[0] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,0x1d);
    param_2 = 0;
    thunk_FUN_005fcf50(param_1,iVar3,0xe,&piStack_c,(char *)abStack_154,(undefined1 *)&uStack_8,
                       &param_2);
joined_r0x0044c40d:
    if (abStack_154[0] == 0) goto LAB_0044c477;
    goto LAB_0044c44d;
  }
  if (abStack_154[0] != 0) {
LAB_0044c44d:
    puVar2 = FUN_00709af0(piStack_c,(byte)uStack_8,abStack_154,0xffffffff,0,1,0,(undefined4 *)0x0);
    uStack_1c = *(undefined4 *)(*(int *)((int)puVar2 + 0x21) + param_2 * 4);
  }
LAB_0044c477:
  uVar4 = FUN_00709470(DAT_00807598,aiStack_54,0x11,1,10,0xff);
  return uVar4;
}

