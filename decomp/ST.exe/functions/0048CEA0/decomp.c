
void __thiscall FUN_0048cea0(void *this,int param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar7;
  undefined4 local_68;
  undefined4 local_64 [16];
  uint local_24;
  uint local_20;
  int local_1a;
  uint local_14;
  void *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_14 = (int)*(short *)((int)this + 0x816) * (int)*(short *)((int)this + 0x816) * 0x9dd1;
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  local_10 = this;
  iVar3 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  pvVar2 = local_10;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bb4,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7a9d3c,0x4bb5);
    return;
  }
  iVar3 = *(int *)((int)local_10 + 0x47b);
  if ((iVar3 != 0) && (uVar6 = 0, 0 < *(int *)(iVar3 + 0xc))) {
    do {
      FUN_006acc70(iVar3,uVar6,&local_24);
      if ((short)local_20 != -1) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          puVar7 = *(uint **)((int)pvVar2 + 0x47b);
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
        else {
          this_00 = (int *)thunk_FUN_0042b620(local_24,local_20,1);
          if (this_00 != (int *)0x0) {
            iVar3 = (**(code **)(*this_00 + 0xf8))();
            if (iVar3 == 1) {
              iVar3 = (**(code **)(*this_00 + 0xf0))();
              if (iVar3 == 1) {
                iVar3 = (**(code **)(*this_00 + 0xf4))(*(undefined4 *)((int)pvVar2 + 0x24));
                if (iVar3 == 1) {
                  thunk_FUN_00416270(this_00,&local_a,&local_8,&local_6);
                  iVar3 = (int)*(short *)((int)pvVar2 + 0x41) - (int)local_a;
                  iVar4 = (int)*(short *)((int)pvVar2 + 0x43) - (int)local_8;
                  iVar5 = (int)*(short *)((int)pvVar2 + 0x45) - (int)local_6;
                  if (local_14 < (uint)(iVar4 * iVar4 + iVar3 * iVar3 + iVar5 * iVar5)) {
                    local_20 = CONCAT22(local_20._2_2_,0xffff);
                  }
                  puVar7 = *(uint **)((int)pvVar2 + 0x47b);
                  goto LAB_0048d016;
                }
              }
            }
          }
          puVar7 = *(uint **)((int)pvVar2 + 0x47b);
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
LAB_0048d016:
        FUN_006ae140(puVar7,uVar6,&local_24);
      }
      iVar3 = *(int *)((int)pvVar2 + 0x47b);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(iVar3 + 0xc));
  }
  DAT_00858df8 = (undefined4 *)local_68;
  return;
}

