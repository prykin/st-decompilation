
void __fastcall FUN_0059b2c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  tm *ptVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  uint *puVar8;
  undefined4 *local_8c;
  undefined4 local_88 [16];
  uint local_48 [13];
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_14 = *(int *)(param_1 + 0x1edb);
  if (((*(int *)(param_1 + 0x1e8e) != 0) && (*(int *)(param_1 + 0x1e92) != 0)) && (local_14 != 0)) {
    local_8c = DAT_00858df8;
    DAT_00858df8 = &local_8c;
    local_10 = param_1;
    iVar2 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      iVar2 = local_10;
      thunk_FUN_00540620(0x18a,0x90,0x168,0x32,100,(byte *)0x19,'\x01',
                         *(BITMAPINFO **)(local_10 + 0x1e92));
      wsprintfA((LPSTR)local_48,s__6d____6d_007cc2a4,*(int *)(iVar2 + 0x1edf),
                *(int *)(iVar2 + 0x1ee3) + -1 + *(int *)(iVar2 + 0x1edf));
      thunk_FUN_00540890(0,0x18b,0x91,0x62,0x17,local_48,0xffffffff,0xffffffff,
                         *(void **)(iVar2 + 0x1a7f),0);
      thunk_FUN_00540620(0x22,0xd6,0,0x78,0x2e1,(byte *)0xfd,'\x01',*(BITMAPINFO **)(iVar2 + 0x1e92)
                        );
      if (*(int *)(iVar2 + 0x1ee3) != 0) {
        local_8 = 0xdb;
        piVar7 = (int *)(local_14 + 0xc);
        local_c = 0;
        do {
          wsprintfA((LPSTR)local_48,&DAT_007c28fc,*(int *)(iVar2 + 0x1edf) + local_c);
          thunk_FUN_00540890(0,0x23,local_8,0x2b,0x10,local_48,0xffffffff,0xffffffff,
                             *(void **)(iVar2 + 0x1a7f),0);
          thunk_FUN_00540890(0,0x50,local_8,0xe9,0x10,(uint *)(piVar7 + 2),0,0xffffffff,
                             *(void **)(iVar2 + 0x1a73),2);
          iVar5 = -1;
          puVar8 = (uint *)(piVar7 + 2);
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            uVar3 = *puVar8;
            puVar8 = (uint *)((int)puVar8 + 1);
          } while ((char)uVar3 != '\0');
          if (iVar5 != -2) {
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,piVar7[1]);
            iVar5 = local_8;
            thunk_FUN_00540890(0,0x13b,local_8,0x44,0x10,local_48,0xffffffff,0xffffffff,
                               *(void **)(iVar2 + 0x1a7f),0);
            wsprintfA((LPSTR)local_48,s__6d____6d____6d_007cc290,piVar7[-2],piVar7[-1],*piVar7);
            thunk_FUN_00540890(0,0x181,iVar5,0x8f,0x10,local_48,0xffffffff,0xffffffff,
                               *(void **)(iVar2 + 0x1a7f),0);
            wsprintfA((LPSTR)local_48,&DAT_007c28fc,*piVar7 + piVar7[-1] + piVar7[-2]);
            thunk_FUN_00540890(0,0x212,iVar5,0x44,0x10,local_48,0xffffffff,0xffffffff,
                               *(void **)(iVar2 + 0x1a7f),0);
            uVar6 = *piVar7 + piVar7[-2] + piVar7[-1];
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = (uint)(piVar7[-2] * 100) / uVar6;
            }
            wsprintfA((LPSTR)local_48,&DAT_007c1aa4,uVar3);
            thunk_FUN_00540890(0,600,iVar5,0x30,0x10,local_48,0xffffffff,0xffffffff,
                               *(void **)(iVar2 + 0x1a7f),0);
            ptVar4 = _gmtime((time_t *)(piVar7 + -3));
            wsprintfA((LPSTR)local_48,s__2d____2d____4d_007cc27c,ptVar4->tm_mday,ptVar4->tm_mon + 1,
                      ptVar4->tm_year + 0x76c);
            thunk_FUN_00540890(0,0x28a,iVar5,0x76,0x10,local_48,0xffffffff,0xffffffff,
                               *(void **)(iVar2 + 0x1a7f),0);
            local_8 = iVar5;
          }
          local_c = local_c + 1;
          piVar7 = piVar7 + 9;
          local_8 = local_8 + 0x10;
        } while (local_c < *(uint *)(iVar2 + 0x1ee3));
      }
      DAT_00858df8 = local_8c;
      return;
    }
    DAT_00858df8 = local_8c;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x49b,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbf70,0x49b);
  }
  return;
}

