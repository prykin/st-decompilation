
undefined4 FUN_0042c5f0(char param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xffffffff;
  cVar5 = (char)param_3;
  if (param_2 < 0x1a5) {
    if (param_2 == 0x1a4) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62);
        if (((*(int *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62) == 0x1a4) &&
            (puVar1[1] == (int)cVar5)) && (*(short *)(puVar1 + 2) == (short)param_4)) {
          piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,5);
          (**(code **)(*piVar6 + 0xe8))(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(4,0);
            uVar10 = 5;
          }
          else {
            uVar10 = 0xf;
          }
          thunk_FUN_0043fc50(uVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x14) {
      param_2 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4f83 + param_2 * 0x10 + param_1 * 0xa62);
        if ((*(int *)((int)&DAT_007f4f83 + param_2 * 0x10 + param_1 * 0xa62) == 0x3c) &&
           (puVar1[1] == (int)cVar5)) {
          puVar2 = *(uint **)((int)puVar1 + 10);
          uVar9 = 0;
          uVar3 = puVar2[3];
          if (0 < (int)uVar3) {
            do {
              FUN_006acc70((int)puVar2,uVar9,&local_8);
              if ((short)local_8 == (short)param_4) {
                piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,1);
                (**(code **)(*piVar6 + 0xe8))(0);
                local_8 = 0xffff;
                FUN_006ae140(puVar2,uVar9,&local_8);
                *(short *)((int)puVar1 + 0xe) = *(short *)((int)puVar1 + 0xe) + -1;
                if (*(short *)((int)puVar1 + 0xe) == 0) {
                  FUN_006ae110(*(byte **)((int)puVar1 + 10));
                  *(undefined4 *)((int)puVar1 + 10) = 0;
                  *puVar1 = 0;
                }
                if (param_2 == 0) {
                  thunk_FUN_0043fc50(1,0);
                  uVar10 = 2;
                }
                else {
                  uVar10 = 0xe;
                }
                thunk_FUN_0043fc50(uVar10,0);
                local_c = 0;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar3);
          }
        }
        param_2 = param_2 + 1;
        if (4 < param_2) {
          return local_c;
        }
      } while( true );
    }
    if (param_2 == 0x5a) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62);
        if (((*(int *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62) == 0x5a) &&
            (puVar1[1] == (int)cVar5)) && (*(short *)(puVar1 + 2) == (short)param_4)) {
          piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,4);
          (**(code **)(*piVar6 + 0xe8))(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(4,0);
            uVar10 = 5;
          }
          else {
            uVar10 = 0xf;
          }
          thunk_FUN_0043fc50(uVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x172) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62);
        if (((*(int *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62) == 0x172) &&
            (puVar1[1] == (int)cVar5)) && (*(short *)(puVar1 + 2) == (short)param_4)) {
          piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,2);
          (**(code **)(*piVar6 + 0xe8))(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(4,0);
            uVar10 = 5;
          }
          else {
            uVar10 = 0xf;
          }
          thunk_FUN_0043fc50(uVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if (param_2 < 0x1b9) {
    if (param_2 == 0x1b8) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62);
        if (((*(int *)((int)&DAT_007f4fd3 + iVar8 * 0x10 + param_1 * 0xa62) == 0x1b8) &&
            (puVar1[1] == (int)cVar5)) && (*(short *)(puVar1 + 2) == (short)param_4)) {
          piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,6);
          (**(code **)(*piVar6 + 0xe8))(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(4,0);
            uVar10 = 5;
          }
          else {
            uVar10 = 0xf;
          }
          thunk_FUN_0043fc50(uVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x1ae) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)((int)&DAT_007f4f83 + iVar8 * 0x10 + param_1 * 0xa62);
        if (((*(int *)((int)&DAT_007f4f83 + iVar8 * 0x10 + param_1 * 0xa62) == 0x1ae) &&
            (puVar1[1] == (int)cVar5)) && (*(short *)(puVar1 + 2) == (short)param_4)) {
          piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,3);
          (**(code **)(*piVar6 + 0xe8))(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(1,0);
            uVar10 = 2;
          }
          else {
            uVar10 = 0xe;
          }
          thunk_FUN_0043fc50(uVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if ((999 < param_2) && (param_2 < 0x3ea)) {
    param_2 = 0;
    do {
      puVar1 = (undefined4 *)((int)&DAT_007f4fd3 + param_2 * 0x10 + param_1 * 0xa62);
      if ((*(int *)((int)&DAT_007f4fd3 + param_2 * 0x10 + param_1 * 0xa62) == 0x19a) &&
         (puVar1[1] == (int)cVar5)) {
        puVar2 = *(uint **)((int)puVar1 + 10);
        uVar9 = 0;
        uVar3 = puVar2[3];
        if (0 < (int)uVar3) {
          do {
            FUN_006acc70((int)puVar2,uVar9,&local_8);
            if ((short)local_8 == (short)param_4) {
              piVar6 = (int *)thunk_FUN_0042b620(param_3,param_4,1);
              (**(code **)(*piVar6 + 0xe8))(0);
              local_8 = 0xffff;
              FUN_006ae140(puVar2,uVar9,&local_8);
              *(short *)((int)puVar1 + 0xe) = *(short *)((int)puVar1 + 0xe) + -1;
              if (*(short *)((int)puVar1 + 0xe) == 0) {
                FUN_006ae110(*(byte **)((int)puVar1 + 10));
                *(undefined4 *)((int)puVar1 + 10) = 0;
                *puVar1 = 0;
              }
              if (param_2 == 0) {
                thunk_FUN_0043fc50(4,0);
                uVar10 = 5;
              }
              else {
                uVar10 = 0xf;
              }
              thunk_FUN_0043fc50(uVar10,0);
              local_c = 0;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar3);
        }
      }
      param_2 = param_2 + 1;
      if (4 < param_2) {
        return local_c;
      }
    } while( true );
  }
  iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x352,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__DelObjFromTmps_in_007a62d0);
  if (iVar8 == 0) {
    return 0xffffffff;
  }
  pcVar4 = (code *)swi(3);
  uVar7 = (*pcVar4)();
  return uVar7;
}

