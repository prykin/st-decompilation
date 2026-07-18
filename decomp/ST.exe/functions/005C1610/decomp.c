
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintTab */

void __thiscall MReportTy::PaintTab(MReportTy *this,int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar10;
  byte bVar11;
  undefined4 local_8c;
  undefined4 local_88 [16];
  int local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  MReportTy *local_8;
  
  local_44 = *(uint **)(param_1 + 0x14);
  local_40 = local_44[4] - 0x46;
  local_48 = local_44[3] - 0x1a;
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  local_8 = this;
  iVar5 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  puVar4 = local_44;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x369,0,iVar5,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar5,0,0x7ccec8,0x369);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006b5f80(DAT_008075a8,local_44[3],local_44[4],local_44[5],local_44[6]);
  iVar7 = local_40;
  iVar5 = local_48;
  FUN_006b4170(*(int *)(local_8 + 0x73),0,local_48,local_40,puVar4[5],puVar4[6],0xff);
  uVar2 = puVar4[1];
  if (uVar2 == 0) {
    local_3c = iVar5 + 5;
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 7;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -3 + puVar4[5];
    local_24 = iVar5 + -3 + puVar4[5];
    local_20 = (puVar4[6] - 1) + iVar7;
    local_18 = (puVar4[6] - 1) + iVar7;
    local_10 = (puVar4[6] - 3) + iVar7;
    local_1c = local_34;
    local_14 = local_3c;
    FUN_006c7ea0(*(undefined4 *)(local_8 + 0x73),0,&local_3c,6,0x4c);
    FUN_006c7f10(*(int *)(local_8 + 0x73),0,&local_3c,6,0x18);
    iVar6 = iVar5 + -1 + puVar4[5];
LAB_005c17e9:
    bVar11 = 0x18;
    iVar1 = puVar4[6] - 1;
    iVar10 = iVar7;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 != 2) goto LAB_005c1806;
      iVar6 = iVar5 + -1 + puVar4[5];
      goto LAB_005c17e9;
    }
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 2;
    local_3c = iVar5;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -1 + puVar4[5];
    local_24 = iVar5 + -1 + puVar4[5];
    local_20 = (puVar4[6] - 1) + iVar7;
    local_14 = iVar5;
    local_18 = (puVar4[6] - 1) + iVar7;
    local_10 = (puVar4[6] - 3) + iVar7;
    local_1c = local_34;
    FUN_006c7ea0(*(undefined4 *)(local_8 + 0x73),0,&local_3c,6,0x4c);
    FUN_006c7f10(*(int *)(local_8 + 0x73),0,&local_3c,6,0x18);
    bVar11 = 0x4c;
    iVar6 = iVar5 + -1 + puVar4[5];
    iVar1 = puVar4[6] - 2;
    iVar10 = iVar7 + 1;
  }
  FUN_006b5b10(*(int *)(local_8 + 0x73),0,iVar6,iVar10,iVar6,iVar1 + iVar7,bVar11,0xd);
LAB_005c1806:
  if (puVar4[1] < 2) {
    uVar2 = *puVar4;
    cVar9 = -1;
    local_c = CONCAT31(local_c._1_3_,0xff);
    if (1 < uVar2) {
      cVar9 = DAT_0080c846;
      if (uVar2 != 2) {
        cVar9 = *(char *)((int)&DAT_0080c83a + uVar2 + 2);
      }
      local_c = CONCAT31(local_c._1_3_,cVar9);
    }
    if (cVar9 != -1) {
      switch(local_c & 0xff) {
      case 0:
        uVar8 = 0xfc;
        break;
      case 1:
        uVar8 = 0xfa;
        break;
      case 2:
        uVar8 = 0xfb;
        break;
      case 3:
        uVar8 = 0xf9;
        break;
      case 4:
        uVar8 = 0xfd;
        break;
      case 5:
        uVar8 = 0xfe;
        break;
      case 6:
        uVar8 = 0xf3;
        break;
      case 7:
        uVar8 = 7;
        break;
      default:
        uVar8 = 0xff;
      }
      FUN_006b4170(*(int *)(local_8 + 0x73),0,(-(uint)(puVar4[1] != 0) & 0xfffffffb) + 0xc + iVar5,
                   iVar7 + 0xb,0x1a,0xd,uVar8);
      FUN_006b5ee0(*(int *)(local_8 + 0x73),0,(-(uint)(puVar4[1] != 0) & 0xfffffffb) + 0xc + iVar5,
                   iVar7 + 0xb,0x1a,0xd,0,0xd);
    }
  }
  FUN_006b48e0(DAT_0080759c,puVar4[3],puVar4[4],*(int *)(local_8 + 0x73),0,iVar5,iVar7,puVar4[5],
               puVar4[6],(int)(local_8 + 0xa3),0x4c,0x10000ff);
  DAT_00858df8 = (undefined4 *)local_8c;
  return;
}

