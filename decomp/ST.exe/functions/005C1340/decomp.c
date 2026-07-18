
void __thiscall FUN_005c1340(void *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 local_470 [256];
  undefined4 *local_70;
  undefined4 local_6c [16];
  undefined4 local_2c [8];
  void *local_c;
  char local_5;
  
  if (*(char *)((int)this + 0x66) == '\x01') {
    local_5 = *(char *)((int)this + 0x6a) + '\x01';
  }
  else {
    local_5 = DAT_0080874e;
  }
  local_70 = DAT_00858df8;
  DAT_00858df8 = &local_70;
  local_c = this;
  iVar4 = __setjmp3(local_6c,0,unaff_EDI,unaff_ESI);
  pvVar3 = local_c;
  if (iVar4 == 0) {
    puVar1 = (uint *)((int)local_c + 0x5d);
    FUN_006f20e0(puVar1);
    if (local_5 == '\x01') {
      puVar5 = &DAT_007ca250;
    }
    else {
      puVar5 = &DAT_007ca248;
      if (local_5 != '\x02') {
        puVar5 = &DAT_007ca24c;
      }
    }
    wsprintfA((LPSTR)&DAT_0080f33a,s_REPORT__s__c_007ccf6c,puVar5,
              (int)(char)((-(DAT_0080c522 != 0) & 0xfbU) + 0x46));
    uVar6 = FUN_0070a9f0(DAT_00806780,(char *)&DAT_0080f33a,0,1);
    *puVar1 = uVar6;
    FUN_006bc360(uVar6,local_470,(int *)0x0);
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)(DAT_0081176c + 0x144));
    FUN_00718780((int)local_470,0,0x100,0x1a,0x10,(undefined4 *)((int)pvVar3 + 0xa3));
    FUN_00718780((int)local_470,0,0x100,0x2e,0x10,(undefined4 *)((int)pvVar3 + 0x1a3));
    thunk_FUN_005403c0(0,0,'\x01',(BITMAPINFO *)*puVar1);
    if (*(uint **)((int)pvVar3 + 0x83) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvVar3 + 0x83));
    }
    iVar4 = thunk_FUN_005defe0(*puVar1,(undefined *)0x0,DAT_00807dd9);
    *(int *)((int)pvVar3 + 0x83) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    if (*(uint **)((int)pvVar3 + 0x87) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvVar3 + 0x87));
    }
    uVar7 = thunk_FUN_005df290(*puVar1,(undefined *)0x0,DAT_00807dd9);
    *(undefined4 *)((int)pvVar3 + 0x87) = uVar7;
    *(undefined4 *)(DAT_0081176c + 0x38) = uVar7;
    if (param_1 != 0) {
      local_2c[2] = *(undefined4 *)((int)pvVar3 + 8);
      puVar9 = local_2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_2c[3] = 2;
      local_2c[4] = 0x70ff;
      FUN_006e3b50(local_2c);
    }
    DAT_00858df8 = local_70;
    return;
  }
  DAT_00858df8 = local_70;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x32c,0,iVar4,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7ccec8,0x32c);
  return;
}

