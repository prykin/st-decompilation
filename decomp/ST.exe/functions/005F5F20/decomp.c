
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::GetMessage */

undefined4 __thiscall STColl3C::GetMessage(STColl3C *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  STColl3C *this_00;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  STColl3C *pSVar10;
  undefined4 local_60;
  undefined4 local_5c [16];
  byte *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  STColl3C *local_8;
  
  local_8 = this;
  iVar6 = STSprGameObjC::GetMessage((STSprGameObjC *)this,param_1);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar6 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar7 = FUN_006ad4d0(s_E____titans_nick_to_coll3_cpp_007ce868,0xe8,0,iVar6,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar6,0,0x7ce868,0xea);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar1) {
    switch(uVar1) {
    case 0x110:
      goto switchD_005f6301_caseD_110;
    default:
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x112:
      thunk_FUN_004ad5e0((int)(local_8 + 0x1d5));
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x113:
      (*(code *)**(undefined4 **)(local_8 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    case 0x128:
      thunk_FUN_004ad430((int)(local_8 + 0x1d5));
      this_00[699] = (STColl3C)0x0;
      thunk_FUN_0041c5a0((int *)this_00);
      thunk_FUN_005f66b0(this_00);
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
  }
  if (uVar1 == 0x10f) {
    local_1c = (byte *)thunk_FUN_005f66f0(local_8,&local_18);
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_1c,local_18);
    FUN_006ab060(&local_1c);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (3 < uVar1) {
    if (uVar1 != 0x108) {
      DAT_00858df8 = (undefined4 *)local_60;
      return 0;
    }
    thunk_FUN_005fa0b0((int)local_8);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 == 3) {
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_005f9450((int)local_8);
      thunk_FUN_0062e610(DAT_008117a4,*(int *)(this_00 + 0x235),*(int *)(this_00 + 0x18));
    }
    thunk_FUN_005fa070((int *)this_00);
    thunk_FUN_004ad310((int)(this_00 + 0x1d5));
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 == 0) {
    thunk_FUN_005f6f60((int *)local_8);
    (**(code **)(*(int *)this_00 + 0xd8))();
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  if (uVar1 != 2) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x14);
  if (puVar9[3] != 2) {
    pSVar10 = local_8 + 0x231;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    iVar6 = *(int *)(local_8 + 0x245);
    sVar4 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                          (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)(local_8 + 0x249);
    *(int *)(local_8 + 0x25d) = iVar6;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar6 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)(local_8 + 0x24d);
    *(int *)(local_8 + 0x261) = iVar6;
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar6 = (short)(((short)(iVar7 / 200) + sVar4) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)
                     ) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(iVar7 / 200) + sVar4) -
                          (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    *(int *)(local_8 + 0x265) = iVar6;
    thunk_FUN_005fa8b0(local_8,(int *)(local_8 + 0x27d),(int *)(local_8 + 0x281),
                       (int *)(local_8 + 0x285));
    *(undefined4 *)(this_00 + 0x269) = 600;
    *(undefined4 *)(this_00 + 0x2dd) = 1;
    *(int *)(this_00 + 0x2e1) = *(int *)(DAT_00802a38 + 0xe4) + *(int *)(this_00 + 0x259);
    if (DAT_008117a4 != (void *)0x0) {
      thunk_FUN_0062e550(DAT_008117a4,*(int *)(this_00 + 0x235),*(int *)(this_00 + 0x18),
                         *(int *)(this_00 + 0x255));
    }
    this_00[0x2e5] = (STColl3C)0x1;
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  iVar6 = thunk_FUN_005f68b0(local_8,puVar9);
  if (iVar6 == 0) {
    thunk_FUN_005f66b0(this_00);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_004162b0(this_00,local_14,local_10,local_c);
  bVar5 = thunk_FUN_004961b0(local_14[0],local_10[0],local_c[0]);
  if (CONCAT31(extraout_var,bVar5) != 0) {
    if (((((local_14[0] < 0) || (DAT_007fb240 <= local_14[0])) || (local_10[0] < 0)) ||
        ((DAT_007fb242 <= local_10[0] || (local_c[0] < 0)))) || (DAT_007fb244 <= local_c[0])) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)local_c[0] + (int)DAT_007fb240 * (int)local_10[0] +
                      (int)local_14[0]) * 8);
    }
    if ((iVar6 == 0) &&
       ((*(int *)(this_00 + 0x2dd) == 1 ||
        (iVar6 = DumpClassC::WritePtr(local_14[0],local_10[0],local_c[0],0,(int)this_00), iVar6 == 0
        )))) goto LAB_005f61e2;
  }
  thunk_FUN_005f66b0(this_00);
LAB_005f61e2:
  if (this_00[0x2b6] == (STColl3C)0x0) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  thunk_FUN_005f6ab0();
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
switchD_005f6301_caseD_110:
  piVar2 = *(int **)(param_1 + 0x14);
  iVar6 = (**(code **)(*(int *)local_8 + 0x78))();
  if (iVar6 < 1) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  bVar5 = thunk_FUN_005f6f20(this_00,*piVar2);
  if (CONCAT31(extraout_var_00,bVar5) == 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  LoadImagSpr(this_00,0);
  *(uint *)(this_00 + 0x275) = (uint)*(byte *)(piVar2 + 2);
  *(uint *)(this_00 + 0x279) = (uint)*(ushort *)((int)piVar2 + 0xe);
  thunk_FUN_005fa070((int *)this_00);
  *(undefined4 *)(this_00 + 0x2dd) = 0xd;
  DAT_00858df8 = (undefined4 *)local_60;
  return 0;
}

