
void FUN_005206f0(void)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int local_188 [75];
  undefined4 *local_5c;
  undefined4 local_58 [16];
  byte local_18;
  undefined3 uStack_17;
  void *local_14;
  int local_10;
  byte *local_c;
  byte local_5;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar5 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = local_5c;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x99,0,iVar5,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c3eb0,0x99);
    return;
  }
  piVar9 = (int *)((int)local_14 + 0x1ab);
  piVar10 = local_188;
  for (iVar5 = 0x4a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  *(char *)piVar10 = (char)*piVar9;
  thunk_FUN_0043beb0(DAT_007fa174,9,(int *)((int)local_14 + 0x1ab));
  if (*(byte *)((int)local_14 + 0x1ab) == 0) {
    *(undefined1 *)((int)local_14 + 0x3d4) = 0xff;
  }
  else if (*(byte *)((int)local_14 + 0x3d4) == 0xff) {
    *(undefined1 *)((int)local_14 + 0x3d4) = 0;
  }
  else if (*(byte *)((int)local_14 + 0x1ab) <= *(byte *)((int)local_14 + 0x3d4)) {
    *(undefined1 *)((int)local_14 + 0x3d4) = 0;
  }
  puVar11 = (undefined4 *)((int)local_14 + 0x18);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  pbVar12 = (byte *)((int)local_14 + 0x1ac);
  *(undefined4 *)((int)local_14 + 0x28) = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    iVar5 = local_10;
    *(ushort *)((int)local_14 + 0x2c) = local_5 + 1;
    if (local_5 < *(byte *)((int)local_14 + 0x1ab)) {
      if (local_5 == *(byte *)((int)local_14 + 0x3d4)) {
        *(undefined2 *)((int)local_14 + 0x2e) = 1;
      }
      else {
        *(undefined2 *)((int)local_14 + 0x2e) = 0;
      }
    }
    else {
      *(undefined2 *)((int)local_14 + 0x2e) = 2;
    }
    local_c = pbVar12;
    FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + 0x3d0),
                 (undefined4 *)((int)local_14 + 0x18));
    if (*pbVar12 != 0xff) {
      if (DAT_0080874e == '\x03') {
        cVar4 = 's';
      }
      else {
        cVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(*(int *)((int)local_14 + 0x68),0,0x30,iVar5,0x22,0xc,cVar4);
      if (local_5 < *(byte *)((int)local_14 + 0x1ab)) {
        FUN_00710a90(*(int *)((int)local_14 + 0x68),0,0x31,iVar5,0x10,0xc);
        cVar4 = (&DAT_008087e8)[(uint)*pbVar12 * 0x51];
        if (cVar4 == '\x01') {
          UVar6 = 0x2742;
        }
        else if (cVar4 == '\x02') {
          UVar6 = 0x2743;
        }
        else if (cVar4 == '\x03') {
          UVar6 = 0x2745;
        }
        else {
          UVar6 = 10000;
        }
        uVar15 = 0;
        iVar14 = -1;
        iVar13 = -1;
        puVar7 = (uint *)FUN_006b0140(UVar6,DAT_00807618);
        FUN_007119c0(puVar7,iVar13,iVar14,uVar15);
      }
      if (DAT_00808a8f == '\0') {
        iVar13 = -1;
        bVar1 = *local_c;
        _local_18 = CONCAT31(uStack_17,bVar1);
        if (DAT_0080874d == bVar1) {
LAB_00520987:
          uVar15 = 0;
        }
        else {
          uVar8 = (uint)DAT_0080874d;
          uVar3 = (uint)bVar1;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8) == '\0')) {
            uVar15 = 0xfffffffe;
          }
          else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8) == '\0'))
          {
            uVar15 = 0xffffffff;
          }
          else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8) == '\x01'))
          {
            uVar15 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8) != '\x01'))
            goto LAB_00520987;
            uVar15 = 2;
          }
        }
        switch(uVar15) {
        case 1:
          iVar13 = 1;
          break;
        case 2:
          iVar13 = 3;
          break;
        case 0xfffffffe:
          iVar13 = 0;
          break;
        case 0xffffffff:
          iVar13 = 2;
        }
        iVar5 = local_10;
        if (-1 < iVar13 + -1) {
          pbVar12 = (byte *)FUN_0070b3a0(*(int *)((int)local_14 + 0x3c8),iVar13 + -1);
          thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),0x41,local_10,'\x06',pbVar12);
          iVar5 = local_10;
        }
      }
      else {
        wsprintfA((LPSTR)((int)local_14 + 0x18d),&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)*local_c * 0x51] + 0x41);
        FUN_00710a90(*(int *)((int)local_14 + 0x68),0,0x41,iVar5,0x12,0xc);
        FUN_007119c0((uint *)((int)local_14 + 0x18d),-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar12 = local_c + 1;
    local_10 = iVar5 + 0xd;
    if (6 < local_5) {
      local_c = pbVar12;
      thunk_FUN_00520d10();
      DAT_00858df8 = local_5c;
      return;
    }
  } while( true );
}

