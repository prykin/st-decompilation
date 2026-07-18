
void __thiscall thunk_FUN_005a3ab0(void *this,byte *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  uint auStack_88 [8];
  undefined4 *puStack_68;
  undefined4 auStack_64 [16];
  _SYSTEMTIME _Stack_24;
  void *pvStack_14;
  uint *puStack_10;
  FILETIME FStack_c;
  
  pvVar3 = DAT_00802a30;
  pvStack_14 = this;
  if (DAT_00802a30 != (void *)0x0) {
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
    *(undefined2 *)((int)pvVar3 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar3 + 0xc5),*(undefined4 *)((int)pvVar3 + 0xc9));
    thunk_FUN_00543c90(pvVar3,*(int *)((int)pvVar3 + 0xc5),*(int *)((int)pvVar3 + 0xc9));
    *(undefined1 *)((int)pvVar3 + 0xd2) = 0;
    *(undefined4 *)((int)pvVar3 + 0x4df) = 0xffffffff;
  }
  if ((*(char *)((int)this + 0x1a5f) == '\n') &&
     (pbVar4 = *(byte **)((int)this + 0x1b0c), pbVar4 != (byte *)0x0)) {
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *param_1;
      if (bVar1 != *param_1) {
LAB_005a3b5e:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005a3b63;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < param_1[1];
      if (bVar1 != param_1[1]) goto LAB_005a3b5e;
      pbVar4 = pbVar4 + 2;
      param_1 = param_1 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_005a3b63:
    if (iVar5 == 0) {
      puStack_68 = DAT_00858df8;
      DAT_00858df8 = &puStack_68;
      iVar5 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
      if (iVar5 == 0) {
        pbVar4 = thunk_FUN_0055d590((byte *)s_Profile_Age_007cc1a8,param_2,param_3);
        pvVar3 = pvStack_14;
        if (pbVar4 != (byte *)0x0) {
          FUN_006b6020(*(int *)((int)pvStack_14 + 0x1af8),0,(char *)pbVar4);
          *(undefined4 *)((int)pvVar3 + 0x31) = *(undefined4 *)((int)pvVar3 + 0x1af8);
          *(undefined4 *)((int)pvVar3 + 0x2d) = 0x33;
          FUN_006e6080(pvVar3,2,*(undefined4 *)((int)pvVar3 + 0x1ad8),
                       (undefined4 *)((int)pvVar3 + 0x1d));
        }
        pbVar4 = thunk_FUN_0055d590((byte *)s_Profile_Sex_007cc198,param_2,param_3);
        if (pbVar4 != (byte *)0x0) {
          FUN_006b6020(*(int *)((int)pvVar3 + 0x1afc),0,(char *)pbVar4);
          *(undefined4 *)((int)pvVar3 + 0x2d) = 0x33;
          *(undefined4 *)((int)pvVar3 + 0x31) = *(undefined4 *)((int)pvVar3 + 0x1afc);
          FUN_006e6080(pvVar3,2,*(undefined4 *)((int)pvVar3 + 0x1adc),
                       (undefined4 *)((int)pvVar3 + 0x1d));
        }
        pbVar4 = thunk_FUN_0055d590((byte *)s_Profile_Location_007cc184,param_2,param_3);
        if (pbVar4 != (byte *)0x0) {
          FUN_006b6020(*(int *)((int)pvVar3 + 0x1b00),0,(char *)pbVar4);
          *(undefined4 *)((int)pvVar3 + 0x2d) = 0x33;
          *(undefined4 *)((int)pvVar3 + 0x31) = *(undefined4 *)((int)pvVar3 + 0x1b00);
          FUN_006e6080(pvVar3,2,*(undefined4 *)((int)pvVar3 + 0x1ae0),
                       (undefined4 *)((int)pvVar3 + 0x1d));
        }
        puStack_10 = (uint *)thunk_FUN_0055d590((byte *)s_Profile_Description_007cc16c,param_2,
                                                param_3);
        if (puStack_10 != (uint *)0x0) {
          if (*(byte **)((int)pvVar3 + 0x1b04) != (byte *)0x0) {
            FUN_006b5570(*(byte **)((int)pvVar3 + 0x1b04));
          }
          puVar6 = FUN_00712f80(puStack_10);
          *(uint **)((int)pvVar3 + 0x1b04) = puVar6;
          if (puVar6 == (uint *)0x0) {
            puVar6 = FUN_006b54f0((uint *)0x0,1,1);
            *(uint **)((int)pvVar3 + 0x1b04) = puVar6;
            FUN_006b5aa0((int)puVar6,&DAT_008016a0);
          }
          *(undefined4 *)((int)pvVar3 + 0x2d) = 0x33;
          *(undefined4 *)((int)pvVar3 + 0x31) = *(undefined4 *)((int)pvVar3 + 0x1b04);
          FUN_006e6080(pvVar3,2,*(undefined4 *)((int)pvVar3 + 0x1ae4),
                       (undefined4 *)((int)pvVar3 + 0x1d));
        }
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_1_Wins_007cc134,
                           param_2,param_3,0x1a,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_1_Losses_007cc128,
                           param_2,param_3,0x7e,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_1_Draws_007cc11c,
                           param_2,param_3,0xe2,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),
                           (byte *)s_1_Disconnects_007cc10c,param_2,param_3,0x146,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7b),(byte *)s_1_Rating_007cc0f8,
                           param_2,param_3,0x1a,0x11b,0x4e,0x17);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7b),(byte *)s_1_Rank_007cc104,
                           param_2,param_3,0x7e,0x11b,0x4e,0x17);
        pbVar4 = thunk_FUN_0055d590((byte *)s_1_Last_Game_007cc0e8,param_2,param_3);
        if (pbVar4 != (byte *)0x0) {
          iVar5 = -1;
          pbVar9 = pbVar4;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar1 != 0);
          if (iVar5 != -2) {
            iVar5 = FUN_0072ee80((char *)pbVar4,(byte *)s__d__d_007cc5b8);
            if (iVar5 != 2) {
              FStack_c.dwHighDateTime = 0;
              FStack_c.dwLowDateTime = 0;
            }
            BVar7 = FileTimeToSystemTime(&FStack_c,&_Stack_24);
            if (BVar7 != 0) {
              wsprintfA((LPSTR)auStack_88,s__2d__2d__4d_007cc5a8,_Stack_24._6_4_ & 0xffff,
                        _Stack_24.wMonth,_Stack_24.wYear);
              FUN_006b4170(*(int *)((int)pvVar3 + 0x1ac0),0,0xe2,0x11b,0xb2,0x17,0xff);
              FUN_00710a90(*(int *)((int)pvVar3 + 0x1ac0),0,0xe2,0x11b,0xb2,0x17);
              FUN_007119c0(auStack_88,-1,-1,0);
            }
          }
        }
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_0_Wins_007cc164,
                           param_2,param_3,0x1a,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_0_Losses_007cc158,
                           param_2,param_3,0x7e,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),(byte *)s_0_Draws_007cc14c,
                           param_2,param_3,0xe2,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(pvVar3,*(undefined4 *)((int)pvVar3 + 0x1a7f),
                           (byte *)s_0_Disconnects_007cc13c,param_2,param_3,0x146,0x161,0x4e,0x12);
        FUN_006b35d0(DAT_008075a8,*(uint *)((int)pvVar3 + 0x1abc));
        DAT_00858df8 = puStack_68;
        return;
      }
      DAT_00858df8 = puStack_68;
      iVar8 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb4e,0,iVar5,&DAT_007a4ccc);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar5,0,0x7cbf70,0xb4e);
    }
  }
  return;
}

