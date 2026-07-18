
void FUN_00557c90(void)

{
  undefined4 uVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  LPSTR pCVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_ESI;
  int iVar10;
  uint uVar11;
  void *unaff_EDI;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  undefined4 local_54;
  undefined4 local_50 [16];
  void *local_10;
  int local_c;
  short *local_8;
  
  iVar10 = 0;
  local_8 = (short *)0x0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar10 = FUN_006ad4d0(s_E____titans_grig_visible_cpp_007c92cc,0xaa,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_0070b600((int *)&local_8);
      FUN_006a5e40(iVar4,0,0x7c92cc,0xac);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DAT_00802a50 = -(uint)(*(int *)((int)local_10 + 0x114) != 0) & 0x403765;
  if (*(int *)((int)local_10 + 0x114) != 0) {
    puVar9 = (undefined4 *)((int)local_10 + 0x1d8);
    do {
      iVar4 = 1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aec8,1,iVar10);
      local_8 = FUN_0070b430(DAT_00806770,pCVar5,bVar13,bVar14,iVar4);
      (&DAT_007c9290)[iVar10] = (int)*(short *)((int)local_8 + 9);
      puVar7 = puVar9 + -0x30;
      (&DAT_007c929c)[iVar10] = (int)*(short *)((int)local_8 + 0xb);
      puVar6 = (undefined4 *)((int)local_8 + 0x11);
      local_c = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      FUN_0070b600((int *)&local_8);
      iVar4 = 1;
      bVar14 = 0;
      bVar13 = 0x1c;
      pCVar5 = FUN_006f2c00(PTR_DAT_0079aecc,1,iVar10);
      local_8 = FUN_0070b430(DAT_00806770,pCVar5,bVar13,bVar14,iVar4);
      puVar7 = (undefined4 *)((int)local_8 + 0x11);
      iVar4 = 0x10;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_0070b600((int *)&local_8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    FUN_007176f0(DAT_00807598,(undefined4 *)((int)local_10 + 0x3c),*(int *)((int)local_10 + 0x28),
                 *(int *)((int)local_10 + 0x2c),(int)local_10 + 0x118,*(int *)((int)local_10 + 0x4c)
                 ,*(undefined4 *)((int)local_10 + 0x30),*(undefined4 *)((int)local_10 + 0x34),
                 (int)local_10 + 0x1d8,3,0x10,&DAT_007c9290,&DAT_007c929c);
    iVar4 = *(int *)((int)local_10 + 0x110);
    uVar11 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar12 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar12) {
          puVar8 = (undefined1 *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar8 = (undefined1 *)0x0;
        }
        switch(*puVar8) {
        case 0:
          thunk_FUN_00558dc0(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             (undefined *)(int)(char)puVar8[6],(uint)(byte)puVar8[1],
                             (undefined *)(uint)(byte)puVar8[7],*(int *)(puVar8 + 8),0x4001);
          break;
        case 1:
          thunk_FUN_005594a0(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(undefined *)(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),2);
          break;
        case 2:
          thunk_FUN_005597a0(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),4);
          break;
        case 3:
          thunk_FUN_00559b30(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),8);
          break;
        case 4:
          thunk_FUN_00559ec0(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),0x10);
          break;
        case 5:
          thunk_FUN_0055a270(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),0x20);
          break;
        case 6:
          thunk_FUN_0055a620(local_10,(int)*(short *)(puVar8 + 2),(int)*(short *)(puVar8 + 4),
                             puVar8[6],(uint)(byte)puVar8[1],(uint)(byte)puVar8[7],
                             *(undefined4 *)(puVar8 + 8),0x40);
        }
        iVar4 = *(int *)((int)local_10 + 0x110);
        uVar11 = uVar11 + 1;
        bVar12 = uVar11 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
    }
    pvVar3 = DAT_00807598;
    if (*(int *)((int)local_10 + 0x114) != 0) {
      if (*(int *)((int)local_10 + 0xf8) != 0) {
        *(undefined4 *)((int)DAT_00807598 + 0x466) = 1;
        *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
        DAT_00858df8 = (undefined4 *)local_54;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  *(undefined4 *)((int)local_10 + 0xf8) = 0;
LAB_00557fbb:
  pvVar3 = DAT_00807598;
  *(undefined4 *)((int)DAT_00807598 + 0x466) = 0;
  *(undefined4 *)((int)pvVar3 + 0x2d8) = 1;
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

