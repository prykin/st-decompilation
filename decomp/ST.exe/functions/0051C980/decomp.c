
void __thiscall FUN_0051c980(void *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  code *pcVar2;
  void *this_00;
  int iVar3;
  UINT UVar4;
  uint *puVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  HINSTANCE pHVar14;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  int local_1f;
  int local_1b;
  void *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = this;
  local_10 = (byte *)FUN_0070b3a0(*(int *)((int)this + 0x248),4);
  if (DAT_007fa174 != 0) {
    local_74 = DAT_00858df8;
    DAT_00858df8 = &local_74;
    iVar3 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar3 == 0) {
      if (param_3 == '\0') {
        cVar1 = *(char *)((int)local_14 + 0x1a1);
        if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
          *(char *)((int)local_14 + 0x1a2) = cVar1;
          *(undefined4 *)((int)local_14 + 0x1ab) = *(undefined4 *)((int)local_14 + 0x1a3);
        }
        else {
          *(undefined1 *)((int)local_14 + 0x1a2) = 0;
          *(undefined4 *)((int)local_14 + 0x1ab) = 0;
        }
        *(undefined1 *)((int)local_14 + 0x1a1) = 0xb;
        *(int *)((int)local_14 + 0x1a3) = param_1;
        *(int *)((int)local_14 + 0x1a7) = param_2;
        *(undefined2 *)((int)local_14 + 0x1af) = 0x32;
        *(undefined2 *)((int)local_14 + 0x1b1) = 5;
        if (*(int *)((int)local_14 + 0x178) != 0) {
          *(undefined4 *)((int)local_14 + 0x28) = 0x4202;
          *(undefined2 *)((int)local_14 + 0x2c) = 0;
          *(undefined2 *)((int)local_14 + 0x2e) = 2;
          *(int *)((int)local_14 + 0x30) = *(int *)((int)local_14 + 0x178);
          if (DAT_00802a30 != (undefined4 *)0x0) {
            (**(code **)*DAT_00802a30)((int)local_14 + 0x18);
          }
        }
      }
      bVar11 = (byte)param_2;
      UVar4 = thunk_FUN_00523410(param_1,bVar11,0);
      thunk_FUN_00515310(0x55ff,param_2,UVar4);
      thunk_FUN_00515650(&local_8,param_1,bVar11,*(int *)((int)this_00 + 0x23c));
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x19c,0xf);
      uVar13 = 3;
      iVar12 = -1;
      iVar3 = -1;
      puVar5 = (uint *)FUN_006b0140(0x564a,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x91,0xf);
        uVar13 = 3;
        iVar12 = -1;
        iVar3 = -3;
        puVar5 = (uint *)FUN_006b0140(0x5661,DAT_00807618);
        FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
        FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + 0x5f;
        pHVar14 = DAT_00807618;
        UVar4 = thunk_FUN_00523410(local_c,bVar11,0);
        pcVar6 = (char *)FUN_006b0140(UVar4,pHVar14);
        uVar8 = 0xffffffff;
        do {
          pcVar10 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar10 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar10;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar6 = pcVar10 + -uVar8;
        pcVar10 = (char *)&DAT_0080f33a;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar10 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar10 = pcVar10 + 1;
        }
        for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
            puVar5 = FUN_0072e560(puVar5,'\n')) {
          *(undefined1 *)puVar5 = 0x20;
        }
        FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        iVar3 = local_c;
        local_8 = local_8 + 0xf;
        uVar8 = thunk_FUN_00526ba0(local_c,bVar11);
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x240),uVar8);
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,local_8,'\x01',pbVar7);
        pbVar7 = local_10;
        thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,local_8 + -2,'\x06',local_10)
        ;
        local_30 = 0x94;
        local_28 = *(undefined4 *)(pbVar7 + 4);
        local_2c = local_8 + -2;
        local_24 = *(undefined4 *)(pbVar7 + 8);
        local_20 = 2;
        local_1f = iVar3;
        local_1b = param_2;
        FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_30);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x91,0xf);
      uVar13 = 3;
      iVar12 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5655,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
      pHVar14 = DAT_00807618;
      UVar4 = thunk_FUN_00523410(param_1,bVar11,1);
      pcVar6 = (char *)FUN_006b0140(UVar4,pHVar14);
      uVar8 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar6 = pcVar10 + -uVar8;
      pcVar10 = (char *)&DAT_0080f33a;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00712c10((char *)&DAT_0080f33a,&DAT_0080f33a,(uint *)s________________007c21d8,0x106,1);
      uVar8 = FUN_007113e0(*(void **)((int)this_00 + 0x1e0),&DAT_0080f33a);
      thunk_FUN_00511ab0(this_00,local_8,uVar8);
      uVar9 = uVar8 & 0xffff;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,local_8,0x106,uVar9 + 2);
      FUN_00711b70(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar8 < 0x10) {
        uVar9 = 0xf;
      }
      local_8 = local_8 + uVar9;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x91,0xf);
      uVar13 = 3;
      iVar12 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x562a,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        local_c = 7;
      }
      else if (param_2 == 2) {
        local_c = 0x13;
      }
      else {
        local_c = 0x1b;
      }
      pHVar14 = DAT_00807618;
      UVar4 = thunk_FUN_00523410(local_c,bVar11,0);
      pcVar6 = (char *)FUN_006b0140(UVar4,pHVar14);
      uVar8 = 0xffffffff;
      do {
        pcVar10 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar10 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar10;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar6 = pcVar10 + -uVar8;
      pcVar10 = (char *)&DAT_0080f33a;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar10 = pcVar10 + 1;
      }
      for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
          puVar5 = FUN_0072e560(puVar5,'\n')) {
        *(undefined1 *)puVar5 = 0x20;
      }
      FUN_007119c0(&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar8 = thunk_FUN_00526ba0(local_c,bVar11);
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)((int)this_00 + 0x23c),uVar8);
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x96,local_8,'\x01',pbVar7);
      pbVar7 = local_10;
      thunk_FUN_00540760(*(undefined4 **)((int)this_00 + 0x218),0x94,local_8 + -2,'\x06',local_10);
      local_30 = 0x94;
      local_28 = *(undefined4 *)(pbVar7 + 4);
      local_2c = local_8 + -2;
      local_24 = *(undefined4 *)(pbVar7 + 8);
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;
      FUN_006ae1c0(*(uint **)((int)this_00 + 0x1d7),&local_30);
      local_8 = local_8 + *(int *)(pbVar7 + 8);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x91,0xf);
      uVar13 = 3;
      iVar12 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5662,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar8);
      local_8 = local_8 + 0xf;
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0,local_8,0x91,0xf);
      uVar13 = 3;
      iVar12 = -1;
      iVar3 = -3;
      puVar5 = (uint *)FUN_006b0140(0x5625,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar13);
      FUN_00710a90(*(int *)((int)this_00 + 0x218),0,0x96,local_8,0x106,0xf);
      uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar3 = 1;
      puVar5 = (uint *)FUN_006b0140(0x5d5a,DAT_00807618);
      FUN_007119c0(puVar5,iVar3,iVar12,uVar8);
      local_8 = local_8 + 0xf;
      UVar4 = thunk_FUN_00523410(param_1,bVar11,2);
      thunk_FUN_00515c00(&local_8,UVar4);
      thunk_FUN_00515e30(this_00,&local_8,'\v',param_1,param_2);
      DAT_00858df8 = (undefined4 *)local_74;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_74;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x929,0,iVar3,&DAT_007a4ccc);
    if (iVar12 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x929);
  }
  return;
}

