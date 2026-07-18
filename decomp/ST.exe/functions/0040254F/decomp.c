
void thunk_FUN_005b2970(char param_1)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  iVar8 = 0;
  puStack_4c = DAT_00858df8;
  DAT_00858df8 = &puStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_4c;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_main_obj_cpp_007cc8e8,0x48,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7cc8e8,0x48);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_005daf20(DAT_0081176c);
  DAT_0080877e = 1;
  DAT_0080877f = 0;
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
    CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
    DAT_00802a99 = 0;
    DAT_008067a0 = '\0';
  }
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  if (*(int *)(DAT_0081176c + 0x28) != 0) {
    puVar6 = (undefined4 *)((int)pvStack_8 + 0x1a7f);
    do {
      iVar3 = 0;
      bVar9 = 0;
      pCVar4 = FUN_006f2c00(s_MM_FLC_007cc938,2,iVar8);
      puVar5 = FUN_0071ad00(DAT_00806780,pCVar4,bVar9,iVar3);
      *puVar6 = puVar5;
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar8 < 10);
  }
  iVar3 = 0;
  do {
    iVar8 = *(int *)((int)pvStack_8 + iVar3 * 4 + 0x1a7f);
    if (iVar8 != 0) {
      puVar6 = FUN_006c4a20(iVar8);
      *(undefined4 **)((int)pvStack_8 + iVar3 * 4 + 0x1aa7) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        switch(iVar3) {
        case 0:
          uVar10 = 0x5d;
          uVar7 = 0;
          break;
        case 1:
          uVar10 = 0x5d;
          uVar7 = 0x20f;
          break;
        case 2:
          uVar10 = 0x65;
          uVar7 = 0x104;
          break;
        case 3:
          uVar10 = 0xab;
          uVar7 = 0x104;
          break;
        case 4:
          uVar10 = 0x23;
          uVar7 = 0x2f5;
          break;
        case 5:
          uVar10 = 0x134;
          uVar7 = 0;
          break;
        case 6:
          uVar10 = 0x131;
          uVar7 = 0x275;
          break;
        case 7:
          uVar10 = 0x32;
          uVar7 = 0x5a;
          break;
        case 8:
          uVar10 = 0x39;
          uVar7 = 0x22c;
          break;
        case 9:
          uVar10 = 0x39;
          uVar7 = 0x2f5;
          break;
        default:
          goto switchD_005b2a8d_default;
        }
        FUN_006c4a00(puVar6,DAT_0080759c,uVar7,uVar10);
      }
    }
switchD_005b2a8d_default:
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      thunk_FUN_005b5240((undefined4 *)((int)pvStack_8 + 0x9b),s_MM_MBUT00_007cbd98,0xf2,0x13a,7,8,0
                         ,0,0x9d,0x38,0x33,0x7cbda4,6,8,9,6,0x28,0,0,0,0,0,-1,-1);
      thunk_FUN_005b5240((undefined4 *)((int)pvStack_8 + 0x296),s_MM_MBUT01_007cbd7c,0x191,0x13a,9,8
                         ,0,0,0x9d,0x38,0x33,0x7cbd88,8,8,8,6,0x32,0,0,0,0,0,-1,-1);
      thunk_FUN_005b5240((undefined4 *)((int)pvStack_8 + 0x491),s_MM_MBUT02_007cbd60,0xf2,0x173,8,6,
                         0,0,0x9d,0x38,0x33,0x7cbd6c,8,7,10,5,0x28,0,0,0,0,0,-1,-1);
      thunk_FUN_005b5240((undefined4 *)((int)pvStack_8 + 0x68c),s_MM_MBUT03_007cbd44,0x191,0x173,8,6
                         ,0,0,0x9d,0x38,0x33,0x7cbd50,8,7,8,5,0x32,0,0,0,0,0,-1,-1);
      thunk_FUN_005b5240((undefined4 *)((int)pvStack_8 + 0x887),s_MM_MBUT04_007cbd28,0x143,0x1ac,7,8
                         ,0,0,0x9d,0x38,0x33,0x7cbd34,8,9,9,6,0x32,0,0,0,0,0,-1,-1);
      uVar7 = FUN_0070a9f0(DAT_00806780,s_MM_BKG_007cc930,0,1);
      *(undefined4 *)(DAT_0081176c + 0x2c) = uVar7;
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
      pvVar1 = *(void **)(*(int *)((int)pvStack_8 + 0x1a5b) + 0x2e6);
      if (pvVar1 != (void *)0x0) {
        thunk_FUN_005b8c70(pvVar1,0,0,1);
        thunk_FUN_005b7210();
        *(undefined4 *)(*(int *)(*(int *)((int)pvStack_8 + 0x1a5b) + 0x2e6) + 0x1cab) =
             *(undefined4 *)((int)pvStack_8 + 8);
      }
      FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),(undefined4 *)((int)pvStack_8 + 0x1adf),(int *)0x0)
      ;
      pvVar1 = DAT_00802a30;
      if (DAT_00802a30 != (void *)0x0) {
        uVar7 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar10 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar1 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar10,uVar7);
        thunk_FUN_00543c90(pvVar1,*(int *)((int)pvVar1 + 0xc5),*(int *)((int)pvVar1 + 0xc9));
        *(undefined1 *)((int)pvVar1 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar1 + 0x4df) = 0xffffffff;
      }
      thunk_FUN_005b3d60(pvStack_8,param_1,1);
      thunk_FUN_00568bc0(&DAT_00807658,0);
      if ((DAT_00807300._1_1_ & 8) != 0) {
        thunk_FUN_0056a130(&DAT_00807658,0x10,'\x02',0,(uint *)0x0);
      }
      if (DAT_00808446 == '\0') {
        *(undefined4 *)((int)pvStack_8 + 0x1a6b) = 2;
        *(undefined4 *)((int)pvStack_8 + 0x1a67) = *(undefined4 *)((int)pvStack_8 + 8);
        *(undefined4 *)((int)pvStack_8 + 0x1a6f) = 0x6902;
      }
      DAT_00858df8 = puStack_4c;
      return;
    }
  } while( true );
}

